/-
Copyright (c) 2024. All rights reserved.
A metaprogram to find all theorems/lemmas marked with @[target] and replace their proofs with sorry.
-/

import Lean
import Lean.Elab.Command
import Lean.Meta.Basic
import Std.Data.HashMap

open Lean Elab Command Meta System

namespace TargetSorryReplacer

/-- Structure to hold information about a declaration to modify -/
structure TargetDecl where
  name : Name
  fileName : String
  line : Nat
  column : Nat
  deriving Repr, Inhabited

/-- Check if a declaration has the `target` attribute -/
def hasTargetAttr (env : Environment) (declName : Name) : Bool :=
  match Lean.getAttr? env `target declName with
  | some _ => true
  | none => false

/-- Get all declarations with the `target` attribute from an environment -/
def getTargetDecls (env : Environment) : Array Name := Id.run do
  let mut result := #[]
  for (name, _) in env.constants.fold (init := #[]) (fun acc n ci => acc.push (n, ci)) do
    if hasTargetAttr env name then
      result := result.push name
  return result

/-- Check if a constant is a theorem or lemma (has a proof) -/
def isTheoremOrLemma (ci : ConstantInfo) : Bool :=
  match ci with
  | .thmInfo _ => true
  | .defnInfo di => di.hints.isRegular -- Could be a def with a proof-like body
  | _ => false

/-- Extract position information from a declaration if available -/
def getDeclPosition (env : Environment) (name : Name) : IO (Option (String × Nat × Nat)) := do
  -- Get the declaration's source info from the environment
  match env.getModuleIdxFor? name with
  | some modIdx =>
    let modName := env.header.moduleNames[modIdx.toNat]!
    -- Convert module name to file path
    let filePath := modName.toString.replace "." "/" ++ ".lean"
    -- We don't have exact position without parsing, return placeholder
    return some (filePath, 0, 0)
  | none => return none

/-- Main function to collect all target-decorated theorems/lemmas in a module -/
def collectTargetDeclsFromModule (moduleName : Name) : IO (Array TargetDecl) := do
  -- Import the module to get its environment
  Lean.initSearchPath (← Lean.findSysroot)
  let env ← Lean.importModules #[{ module := moduleName }] {} 0

  let mut result := #[]

  for (name, ci) in env.constants.fold (init := #[]) (fun acc n ci => acc.push (n, ci)) do
    if hasTargetAttr env name && isTheoremOrLemma ci then
      match ← getDeclPosition env name with
      | some (file, line, col) =>
        result := result.push { name := name, fileName := file, line := line, column := col }
      | none => pure ()

  return result

/-- Helper to read file contents -/
def readFileContents (path : FilePath) : IO String := do
  IO.FS.readFile path

/-- Helper to write file contents -/
def writeFileContents (path : FilePath) (content : String) : IO Unit := do
  IO.FS.writeFile path content

/-- Find the end of a proof term, handling nested structures -/
partial def findProofEnd (content : String) (startIdx : Nat) : Nat :=
  -- This is a simplified heuristic - in practice we'd want proper parsing
  let len := content.length
  let rec go (idx : Nat) (depth : Nat) : Nat :=
    if idx >= len then idx
    else
      let c := content.get! ⟨idx⟩
      match c with
      | '(' | '[' | '{' | '⟨' => go (idx + 1) (depth + 1)
      | ')' | ']' | '}' | '⟩' =>
        if depth == 0 then idx else go (idx + 1) (depth - 1)
      | '\n' =>
        -- Check if next non-whitespace is a new declaration
        let nextNonWS := content.drop (idx + 1) |>.trimLeft
        if nextNonWS.startsWith "theorem" ||
           nextNonWS.startsWith "lemma" ||
           nextNonWS.startsWith "def" ||
           nextNonWS.startsWith "@[" ||
           nextNonWS.startsWith "section" ||
           nextNonWS.startsWith "namespace" ||
           nextNonWS.startsWith "end" ||
           nextNonWS.startsWith "variable" ||
           nextNonWS.startsWith "open" then
          idx
        else
          go (idx + 1) depth
      | _ => go (idx + 1) depth
  go startIdx 0

/-- Replace a proof in file content with `sorry` -/
def replaceProofWithSorry (content : String) (declName : Name) : String :=
  -- This is a text-based approach - find the declaration and replace its proof
  -- A more robust approach would use Lean's syntax trees

  let nameStr := declName.toString
  -- Try to find patterns like "theorem <name>" or "lemma <name>"
  let patterns := [
    s!"theorem {nameStr}",
    s!"lemma {nameStr}",
    s!"def {nameStr}"
  ]

  let mut result := content
  for pattern in patterns do
    if let some startIdx := result.findSubstr? pattern then
      -- Find `:=` or `where` after the declaration
      let afterDecl := result.drop startIdx
      if let some colonEqIdx := afterDecl.findSubstr? ":=" then
        let absColonEqIdx := startIdx + colonEqIdx
        -- Find where the proof ends
        let proofStart := absColonEqIdx + 2 -- Skip ":="
        let proofEnd := findProofEnd result proofStart
        -- Replace the proof with "by sorry" or just "sorry"
        let before := result.take proofStart
        let after := result.drop proofEnd
        result := before ++ " sorry" ++ after
      else if let some whereIdx := afterDecl.findSubstr? "where" then
        -- For `where` style definitions, this is more complex
        -- For now, we'll just note this needs handling
        result := result -- No change for now
  result

/-- Process a single file, replacing all target-decorated proofs with sorry -/
def processFile (filePath : FilePath) (targetDecls : Array Name) : IO Unit := do
  let content ← readFileContents filePath
  let mut newContent := content
  for declName in targetDecls do
    newContent := replaceProofWithSorry newContent declName
  writeFileContents filePath newContent

/-- Main entry point: process all files in a module directory -/
def processModule (baseDir : FilePath) (moduleName : Name) : IO Unit := do
  IO.println s!"Processing module: {moduleName}"

  -- Collect target declarations
  let targetDecls ← collectTargetDeclsFromModule moduleName
  IO.println s!"Found {targetDecls.size} target-decorated declarations"

  -- Group by file
  let mut fileDecls : Std.HashMap String (Array Name) := {}
  for decl in targetDecls do
    let current := fileDecls.getD decl.fileName #[]
    fileDecls := fileDecls.insert decl.fileName (current.push decl.name)

  -- Process each file
  for (file, decls) in fileDecls.toList do
    let fullPath := baseDir / file
    if ← fullPath.pathExists then
      IO.println s!"Processing file: {file} ({decls.size} declarations)"
      processFile fullPath decls
    else
      IO.println s!"Warning: File not found: {fullPath}"

  IO.println "Done!"

end TargetSorryReplacer

/-- Command-line interface -/
def main (args : List String) : IO UInt32 := do
  match args with
  | [baseDir, moduleName] =>
    try
      TargetSorryReplacer.processModule baseDir moduleName.toName
      return 0
    catch e =>
      IO.eprintln s!"Error: {e}"
      return 1
  | _ =>
    IO.eprintln "Usage: target_sorry_replacer <base_dir> <module_name>"
    IO.eprintln "Example: target_sorry_replacer /path/to/mathlib4 Mathlib.Logic"
    return 1
