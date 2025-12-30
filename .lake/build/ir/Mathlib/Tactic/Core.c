// Lean compiler output
// Module: Mathlib.Tactic.Core
// Imports: Init Lean.Elab.PreDefinition.Basic Lean.Elab.Tactic.ElabTerm Lean.Util.Paths Lean.Meta.Tactic.Intro Mathlib.Lean.Expr.Basic Batteries.Tactic.OpenPrivate
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__5;
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_andThenOnSubgoals___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initSrcSearchPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__1;
static lean_object* l_Mathlib_Tactic_withArgs___closed__22;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount(lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__11;
lean_object* l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__6;
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Meta_getIntrosSize(lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__2;
static lean_object* l_Mathlib_Tactic_usingArg___closed__8;
static lean_object* l_Mathlib_Tactic_usingArg___closed__5;
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__4;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__4;
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Elab_Tactic_allGoals___spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_withArgs;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange(lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__14;
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toPreDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__10;
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1;
lean_object* l_Lean_Syntax_TSepArray_getElems___rarg(lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__1;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__10;
LEAN_EXPORT lean_object* l_Lean_toPreDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__9;
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__9;
lean_object* l_Lean_Elab_Tactic_SavedState_restore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_MVarId_introsWithBinderIdents___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__6;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_usingArg;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getSimpArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toModifiers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setProtected(lean_object*);
static lean_object* l_Mathlib_Tactic_getDSimpArgs___closed__1;
static lean_object* l_Mathlib_Tactic_withArgs___closed__4;
static lean_object* l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getUsingArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOutImplementationDetails(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setProtected___rarg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTermForApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_getFVarId___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getGoals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__16;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__13;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__9;
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__13;
static lean_object* l_Mathlib_Tactic_usingArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_isValidMacroInline___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_toModifiers___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_getFVarIdsAt___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_isDir(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_LocalContext_find_x3f___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOutImplementationDetails___boxed(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__5;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__7;
static lean_object* l_Lean_Elab_Tactic_getFVarIdAt___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getSimpArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_tail___rarg(lean_object*);
static lean_object* l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___closed__1;
lean_object* l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__19;
static lean_object* l_Mathlib_Tactic_withArgs___closed__6;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__12;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__1;
static lean_object* l_Mathlib_getPackageDir___lambda__1___closed__1;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__8;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1;
static lean_object* l_Mathlib_Tactic_usingArg___closed__3;
static lean_object* l_Lean_toModifiers___closed__2;
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__7;
static lean_object* l_Mathlib_Tactic_getSimpArgs___closed__2;
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_andThenOnSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__9;
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_getFVarIdsAt___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__7;
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__18;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_getDSimpArgs___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_toModifiers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_usingArg___closed__2;
static lean_object* l_Lean_Elab_Tactic_getFVarIdAt___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getWithArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getUsingArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_usingArg___closed__6;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__7;
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__2;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__1;
extern lean_object* l_Lean_Elab_TerminationHints_none;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure(lean_object*);
static lean_object* l_Lean_toModifiers___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg(lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__1;
static lean_object* l_Mathlib_Tactic_usingArg___closed__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_MVarId_introsWithBinderIdents___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at_Lean_LocalDecl_setBinderInfo___spec__1(lean_object*);
static lean_object* l_Lean_Elab_Tactic_getFVarIdAt___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_getMathlibDir(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_getSimpArgs___closed__1;
static lean_object* l_Mathlib_getPackageDir___lambda__1___closed__2;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_headD___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getDSimpArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir(lean_object*, lean_object*);
uint8_t l_Lean_ConstantInfo_isDef(lean_object*);
lean_object* l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__10;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Elab_Tactic_allGoals___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setProtected___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__2;
lean_object* l_Lean_Elab_Tactic_focus___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_getFVarIdAt___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__8;
static lean_object* l_Mathlib_Tactic_withArgs___closed__15;
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_usingArg___closed__4;
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir___boxed(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__3;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_tacticRepeat1__;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
static lean_object* l_Mathlib_Tactic_withArgs___closed__17;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getDSimpArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_allGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__3___boxed(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_withArgs___closed__21;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getWithArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__2;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_usingArg___closed__7;
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__5;
uint8_t l_Lean_Exception_isRuntime(lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__3;
static lean_object* l_Mathlib_Tactic_withArgs___closed__20;
static lean_object* l_Mathlib_Tactic_tacticRepeat1_____closed__8;
static lean_object* l_Mathlib_Tactic_withArgs___closed__2;
static lean_object* l_Mathlib_Tactic_withArgs___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost(lean_object*);
static lean_object* _init_l_Lean_toModifiers___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_cstage1", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_toModifiers___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_toModifiers___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_protectedExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_toModifiers(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Lean_getConstInfo___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_isValidMacroInline___spec__1(x_1, x_3, x_4, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_isPrivateName(x_1);
x_14 = l_Lean_toModifiers___closed__1;
lean_inc(x_1);
x_15 = l_Lean_Name_str___override(x_1, x_14);
lean_inc(x_9);
x_16 = l_Lean_Environment_find_x3f(x_9, x_15);
x_17 = l_Lean_ConstantInfo_isUnsafe(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_toModifiers___closed__3;
x_19 = l_Lean_TagDeclarationExtension_isTagged(x_18, x_9, x_1);
lean_dec(x_1);
if (x_19 == 0)
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_box(0);
x_21 = 1;
x_22 = 1;
x_23 = 2;
x_24 = l_Lean_toModifiers___closed__2;
x_25 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_2);
lean_ctor_set(x_25, 2, x_24);
lean_ctor_set_uint8(x_25, sizeof(void*)*3, x_21);
lean_ctor_set_uint8(x_25, sizeof(void*)*3 + 1, x_22);
lean_ctor_set_uint8(x_25, sizeof(void*)*3 + 2, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*3 + 3, x_17);
lean_ctor_set(x_10, 0, x_25);
return x_10;
}
else
{
lean_object* x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_16);
x_26 = lean_box(0);
x_27 = 1;
x_28 = 0;
x_29 = 2;
x_30 = l_Lean_toModifiers___closed__2;
x_31 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_2);
lean_ctor_set(x_31, 2, x_30);
lean_ctor_set_uint8(x_31, sizeof(void*)*3, x_27);
lean_ctor_set_uint8(x_31, sizeof(void*)*3 + 1, x_28);
lean_ctor_set_uint8(x_31, sizeof(void*)*3 + 2, x_29);
lean_ctor_set_uint8(x_31, sizeof(void*)*3 + 3, x_17);
lean_ctor_set(x_10, 0, x_31);
return x_10;
}
}
else
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_box(0);
x_33 = 0;
x_34 = 1;
x_35 = 2;
x_36 = l_Lean_toModifiers___closed__2;
x_37 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_2);
lean_ctor_set(x_37, 2, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_33);
lean_ctor_set_uint8(x_37, sizeof(void*)*3 + 1, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*3 + 2, x_35);
lean_ctor_set_uint8(x_37, sizeof(void*)*3 + 3, x_17);
lean_ctor_set(x_10, 0, x_37);
return x_10;
}
else
{
lean_object* x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_16);
x_38 = lean_box(0);
x_39 = 0;
x_40 = 0;
x_41 = 2;
x_42 = l_Lean_toModifiers___closed__2;
x_43 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_43, 0, x_38);
lean_ctor_set(x_43, 1, x_2);
lean_ctor_set(x_43, 2, x_42);
lean_ctor_set_uint8(x_43, sizeof(void*)*3, x_39);
lean_ctor_set_uint8(x_43, sizeof(void*)*3 + 1, x_40);
lean_ctor_set_uint8(x_43, sizeof(void*)*3 + 2, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*3 + 3, x_17);
lean_ctor_set(x_10, 0, x_43);
return x_10;
}
}
}
else
{
lean_dec(x_9);
lean_dec(x_1);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_box(0);
x_45 = 2;
x_46 = 1;
x_47 = 2;
x_48 = l_Lean_toModifiers___closed__2;
x_49 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_49, 0, x_44);
lean_ctor_set(x_49, 1, x_2);
lean_ctor_set(x_49, 2, x_48);
lean_ctor_set_uint8(x_49, sizeof(void*)*3, x_45);
lean_ctor_set_uint8(x_49, sizeof(void*)*3 + 1, x_46);
lean_ctor_set_uint8(x_49, sizeof(void*)*3 + 2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*3 + 3, x_17);
lean_ctor_set(x_10, 0, x_49);
return x_10;
}
else
{
lean_object* x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_16);
x_50 = lean_box(0);
x_51 = 2;
x_52 = 0;
x_53 = 2;
x_54 = l_Lean_toModifiers___closed__2;
x_55 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_2);
lean_ctor_set(x_55, 2, x_54);
lean_ctor_set_uint8(x_55, sizeof(void*)*3, x_51);
lean_ctor_set_uint8(x_55, sizeof(void*)*3 + 1, x_52);
lean_ctor_set_uint8(x_55, sizeof(void*)*3 + 2, x_53);
lean_ctor_set_uint8(x_55, sizeof(void*)*3 + 3, x_17);
lean_ctor_set(x_10, 0, x_55);
return x_10;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_56 = lean_ctor_get(x_10, 0);
x_57 = lean_ctor_get(x_10, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_10);
x_58 = l_Lean_isPrivateName(x_1);
x_59 = l_Lean_toModifiers___closed__1;
lean_inc(x_1);
x_60 = l_Lean_Name_str___override(x_1, x_59);
lean_inc(x_9);
x_61 = l_Lean_Environment_find_x3f(x_9, x_60);
x_62 = l_Lean_ConstantInfo_isUnsafe(x_56);
lean_dec(x_56);
if (x_58 == 0)
{
lean_object* x_63; uint8_t x_64; 
x_63 = l_Lean_toModifiers___closed__3;
x_64 = l_Lean_TagDeclarationExtension_isTagged(x_63, x_9, x_1);
lean_dec(x_1);
if (x_64 == 0)
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_65 = lean_box(0);
x_66 = 1;
x_67 = 1;
x_68 = 2;
x_69 = l_Lean_toModifiers___closed__2;
x_70 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_2);
lean_ctor_set(x_70, 2, x_69);
lean_ctor_set_uint8(x_70, sizeof(void*)*3, x_66);
lean_ctor_set_uint8(x_70, sizeof(void*)*3 + 1, x_67);
lean_ctor_set_uint8(x_70, sizeof(void*)*3 + 2, x_68);
lean_ctor_set_uint8(x_70, sizeof(void*)*3 + 3, x_62);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_57);
return x_71;
}
else
{
lean_object* x_72; uint8_t x_73; uint8_t x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_61);
x_72 = lean_box(0);
x_73 = 1;
x_74 = 0;
x_75 = 2;
x_76 = l_Lean_toModifiers___closed__2;
x_77 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_77, 0, x_72);
lean_ctor_set(x_77, 1, x_2);
lean_ctor_set(x_77, 2, x_76);
lean_ctor_set_uint8(x_77, sizeof(void*)*3, x_73);
lean_ctor_set_uint8(x_77, sizeof(void*)*3 + 1, x_74);
lean_ctor_set_uint8(x_77, sizeof(void*)*3 + 2, x_75);
lean_ctor_set_uint8(x_77, sizeof(void*)*3 + 3, x_62);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_57);
return x_78;
}
}
else
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_79; uint8_t x_80; uint8_t x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_79 = lean_box(0);
x_80 = 0;
x_81 = 1;
x_82 = 2;
x_83 = l_Lean_toModifiers___closed__2;
x_84 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_84, 0, x_79);
lean_ctor_set(x_84, 1, x_2);
lean_ctor_set(x_84, 2, x_83);
lean_ctor_set_uint8(x_84, sizeof(void*)*3, x_80);
lean_ctor_set_uint8(x_84, sizeof(void*)*3 + 1, x_81);
lean_ctor_set_uint8(x_84, sizeof(void*)*3 + 2, x_82);
lean_ctor_set_uint8(x_84, sizeof(void*)*3 + 3, x_62);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_57);
return x_85;
}
else
{
lean_object* x_86; uint8_t x_87; uint8_t x_88; uint8_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_61);
x_86 = lean_box(0);
x_87 = 0;
x_88 = 0;
x_89 = 2;
x_90 = l_Lean_toModifiers___closed__2;
x_91 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_91, 0, x_86);
lean_ctor_set(x_91, 1, x_2);
lean_ctor_set(x_91, 2, x_90);
lean_ctor_set_uint8(x_91, sizeof(void*)*3, x_87);
lean_ctor_set_uint8(x_91, sizeof(void*)*3 + 1, x_88);
lean_ctor_set_uint8(x_91, sizeof(void*)*3 + 2, x_89);
lean_ctor_set_uint8(x_91, sizeof(void*)*3 + 3, x_62);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_57);
return x_92;
}
}
}
else
{
lean_dec(x_9);
lean_dec(x_1);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_93 = lean_box(0);
x_94 = 2;
x_95 = 1;
x_96 = 2;
x_97 = l_Lean_toModifiers___closed__2;
x_98 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_98, 0, x_93);
lean_ctor_set(x_98, 1, x_2);
lean_ctor_set(x_98, 2, x_97);
lean_ctor_set_uint8(x_98, sizeof(void*)*3, x_94);
lean_ctor_set_uint8(x_98, sizeof(void*)*3 + 1, x_95);
lean_ctor_set_uint8(x_98, sizeof(void*)*3 + 2, x_96);
lean_ctor_set_uint8(x_98, sizeof(void*)*3 + 3, x_62);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_57);
return x_99;
}
else
{
lean_object* x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_61);
x_100 = lean_box(0);
x_101 = 2;
x_102 = 0;
x_103 = 2;
x_104 = l_Lean_toModifiers___closed__2;
x_105 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_105, 0, x_100);
lean_ctor_set(x_105, 1, x_2);
lean_ctor_set(x_105, 2, x_104);
lean_ctor_set_uint8(x_105, sizeof(void*)*3, x_101);
lean_ctor_set_uint8(x_105, sizeof(void*)*3 + 1, x_102);
lean_ctor_set_uint8(x_105, sizeof(void*)*3 + 2, x_103);
lean_ctor_set_uint8(x_105, sizeof(void*)*3 + 3, x_62);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_57);
return x_106;
}
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_107 = !lean_is_exclusive(x_10);
if (x_107 == 0)
{
return x_10;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_10, 0);
x_109 = lean_ctor_get(x_10, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_10);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_toModifiers___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_toModifiers(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_toPreDefinition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_getConstInfo___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_isValidMacroInline___spec__1(x_1, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_toModifiers(x_1, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_ConstantInfo_isDef(x_10);
x_16 = l_Lean_ConstantInfo_levelParams(x_10);
lean_dec(x_10);
if (x_15 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_box(0);
x_18 = 2;
x_19 = l_Lean_Elab_TerminationHints_none;
x_20 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_14);
lean_ctor_set(x_20, 3, x_2);
lean_ctor_set(x_20, 4, x_3);
lean_ctor_set(x_20, 5, x_4);
lean_ctor_set(x_20, 6, x_19);
lean_ctor_set_uint8(x_20, sizeof(void*)*7, x_18);
lean_ctor_set(x_12, 0, x_20);
return x_12;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_box(0);
x_22 = 0;
x_23 = l_Lean_Elab_TerminationHints_none;
x_24 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_16);
lean_ctor_set(x_24, 2, x_14);
lean_ctor_set(x_24, 3, x_2);
lean_ctor_set(x_24, 4, x_3);
lean_ctor_set(x_24, 5, x_4);
lean_ctor_set(x_24, 6, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*7, x_22);
lean_ctor_set(x_12, 0, x_24);
return x_12;
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = l_Lean_ConstantInfo_isDef(x_10);
x_28 = l_Lean_ConstantInfo_levelParams(x_10);
lean_dec(x_10);
if (x_27 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_box(0);
x_30 = 2;
x_31 = l_Lean_Elab_TerminationHints_none;
x_32 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_28);
lean_ctor_set(x_32, 2, x_25);
lean_ctor_set(x_32, 3, x_2);
lean_ctor_set(x_32, 4, x_3);
lean_ctor_set(x_32, 5, x_4);
lean_ctor_set(x_32, 6, x_31);
lean_ctor_set_uint8(x_32, sizeof(void*)*7, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_26);
return x_33;
}
else
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_box(0);
x_35 = 0;
x_36 = l_Lean_Elab_TerminationHints_none;
x_37 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_28);
lean_ctor_set(x_37, 2, x_25);
lean_ctor_set(x_37, 3, x_2);
lean_ctor_set(x_37, 4, x_3);
lean_ctor_set(x_37, 5, x_4);
lean_ctor_set(x_37, 6, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*7, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_26);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_12);
if (x_39 == 0)
{
return x_12;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_12, 0);
x_41 = lean_ctor_get(x_12, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_12);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_9);
if (x_43 == 0)
{
return x_9;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_9, 0);
x_45 = lean_ctor_get(x_9, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_9);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_toPreDefinition___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_toPreDefinition(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_setProtected___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_toModifiers___closed__3;
x_4 = l_Lean_TagDeclarationExtension_tag(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_setProtected___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_setProtected___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_setProtected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_setProtected___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = l_Lean_SourceInfo_fromRef(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("binderIdent", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hole", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
x_3 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__6;
x_4 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__9;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__8;
x_3 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__10;
x_4 = l_Lean_Syntax_node1(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4;
x_3 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__11;
x_4 = l_Lean_Syntax_node1(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_nat_dec_lt(x_4, x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_dec(x_3);
x_17 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__12;
x_18 = l_List_headD___rarg(x_15, x_17);
x_19 = lean_array_push(x_16, x_18);
x_20 = l_List_tail___rarg(x_15);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_ctor_get(x_2, 2);
x_23 = lean_nat_add(x_4, x_22);
lean_dec(x_4);
x_3 = x_21;
x_4 = x_23;
x_5 = lean_box(0);
x_6 = lean_box(0);
goto _start;
}
}
}
static lean_object* _init_l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4;
lean_inc(x_5);
x_8 = l_Lean_Syntax_isOfKind(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1;
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_9);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_5, x_11);
lean_dec(x_5);
x_13 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3;
lean_inc(x_12);
x_14 = l_Lean_Syntax_isOfKind(x_12, x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
x_15 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1;
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_15);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_17; 
x_17 = l_Lean_Syntax_getId(x_12);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_17);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4;
lean_inc(x_19);
x_22 = l_Lean_Syntax_isOfKind(x_19, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_19);
x_23 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_2);
x_1 = x_20;
x_2 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Syntax_getArg(x_19, x_26);
lean_dec(x_19);
x_28 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3;
lean_inc(x_27);
x_29 = l_Lean_Syntax_isOfKind(x_27, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
x_30 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
x_1 = x_20;
x_2 = x_31;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Lean_Syntax_getId(x_27);
lean_dec(x_27);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_2);
x_1 = x_20;
x_2 = x_34;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_MVarId_introsWithBinderIdents___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_5, x_4);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_array_uget(x_3, x_5);
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_6, 2);
lean_inc(x_17);
x_18 = lean_nat_dec_lt(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_6);
lean_ctor_set(x_19, 1, x_11);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_6);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_6, 2);
lean_dec(x_21);
x_22 = lean_ctor_get(x_6, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_6, 0);
lean_dec(x_23);
x_24 = lean_array_fget(x_15, x_16);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_16, x_25);
lean_dec(x_16);
lean_ctor_set(x_6, 1, x_26);
x_27 = l_Lean_Expr_fvar___override(x_24);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_28 = l_Lean_Expr_addLocalVarInfoForBinderIdent(x_27, x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; size_t x_30; size_t x_31; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = 1;
x_31 = lean_usize_add(x_5, x_30);
x_5 = x_31;
x_11 = x_29;
goto _start;
}
else
{
uint8_t x_33; 
lean_dec(x_6);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_6);
x_37 = lean_array_fget(x_15, x_16);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_16, x_38);
lean_dec(x_16);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_15);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_17);
x_41 = l_Lean_Expr_fvar___override(x_37);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_42 = l_Lean_Expr_addLocalVarInfoForBinderIdent(x_41, x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; size_t x_44; size_t x_45; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = 1;
x_45 = lean_usize_add(x_5, x_44);
x_5 = x_45;
x_6 = x_40;
x_11 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_40);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_47 = lean_ctor_get(x_42, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_49 = x_42;
} else {
 lean_dec_ref(x_42);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Array_forIn_x27Unsafe_loop___at_Lean_MVarId_introsWithBinderIdents___spec__3(x_1, x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_box(0);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_unsigned_to_nat(1u);
lean_inc(x_1);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_1);
lean_ctor_set(x_13, 2, x_12);
x_14 = l_Lean_toModifiers___closed__2;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1(x_13, x_13, x_15, x_11, lean_box(0), lean_box(0), x_5, x_6, x_7, x_8, x_9);
lean_dec(x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
x_22 = lean_array_to_list(x_21);
x_23 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2(x_22, x_10);
x_24 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_25 = l_Lean_Meta_introNCore(x_3, x_1, x_23, x_24, x_24, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = lean_ctor_get(x_26, 1);
x_31 = lean_array_get_size(x_29);
lean_inc(x_29);
x_32 = l_Array_toSubarray___rarg(x_29, x_11, x_31);
x_33 = lean_box(0);
x_34 = lean_array_size(x_21);
x_35 = lean_box_usize(x_34);
x_36 = l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1;
x_37 = lean_alloc_closure((void*)(l_Lean_MVarId_introsWithBinderIdents___lambda__1___boxed), 10, 5);
lean_closure_set(x_37, 0, x_21);
lean_closure_set(x_37, 1, x_33);
lean_closure_set(x_37, 2, x_35);
lean_closure_set(x_37, 3, x_36);
lean_closure_set(x_37, 4, x_32);
lean_inc(x_30);
x_38 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_30, x_37, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set(x_17, 1, x_26);
lean_ctor_set(x_38, 0, x_17);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
lean_ctor_set(x_17, 1, x_26);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_17);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_free_object(x_26);
lean_dec(x_30);
lean_dec(x_29);
lean_free_object(x_17);
lean_dec(x_20);
x_43 = !lean_is_exclusive(x_38);
if (x_43 == 0)
{
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_38, 0);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_38);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; size_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_47 = lean_ctor_get(x_26, 0);
x_48 = lean_ctor_get(x_26, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_26);
x_49 = lean_array_get_size(x_47);
lean_inc(x_47);
x_50 = l_Array_toSubarray___rarg(x_47, x_11, x_49);
x_51 = lean_box(0);
x_52 = lean_array_size(x_21);
x_53 = lean_box_usize(x_52);
x_54 = l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1;
x_55 = lean_alloc_closure((void*)(l_Lean_MVarId_introsWithBinderIdents___lambda__1___boxed), 10, 5);
lean_closure_set(x_55, 0, x_21);
lean_closure_set(x_55, 1, x_51);
lean_closure_set(x_55, 2, x_53);
lean_closure_set(x_55, 3, x_54);
lean_closure_set(x_55, 4, x_50);
lean_inc(x_48);
x_56 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_48, x_55, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_47);
lean_ctor_set(x_59, 1, x_48);
lean_ctor_set(x_17, 1, x_59);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_17);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_48);
lean_dec(x_47);
lean_free_object(x_17);
lean_dec(x_20);
x_61 = lean_ctor_get(x_56, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_63 = x_56;
} else {
 lean_dec_ref(x_56);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_free_object(x_17);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_65 = !lean_is_exclusive(x_25);
if (x_65 == 0)
{
return x_25;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_25, 0);
x_67 = lean_ctor_get(x_25, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_25);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_17, 0);
x_70 = lean_ctor_get(x_17, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_17);
lean_inc(x_70);
x_71 = lean_array_to_list(x_70);
x_72 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2(x_71, x_10);
x_73 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_74 = l_Lean_Meta_introNCore(x_3, x_1, x_72, x_73, x_73, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; size_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_ctor_get(x_75, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_79 = x_75;
} else {
 lean_dec_ref(x_75);
 x_79 = lean_box(0);
}
x_80 = lean_array_get_size(x_77);
lean_inc(x_77);
x_81 = l_Array_toSubarray___rarg(x_77, x_11, x_80);
x_82 = lean_box(0);
x_83 = lean_array_size(x_70);
x_84 = lean_box_usize(x_83);
x_85 = l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1;
x_86 = lean_alloc_closure((void*)(l_Lean_MVarId_introsWithBinderIdents___lambda__1___boxed), 10, 5);
lean_closure_set(x_86, 0, x_70);
lean_closure_set(x_86, 1, x_82);
lean_closure_set(x_86, 2, x_84);
lean_closure_set(x_86, 3, x_85);
lean_closure_set(x_86, 4, x_81);
lean_inc(x_78);
x_87 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_78, x_86, x_5, x_6, x_7, x_8, x_76);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_89 = x_87;
} else {
 lean_dec_ref(x_87);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_79;
}
lean_ctor_set(x_90, 0, x_77);
lean_ctor_set(x_90, 1, x_78);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_69);
lean_ctor_set(x_91, 1, x_90);
if (lean_is_scalar(x_89)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_89;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_88);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_69);
x_93 = lean_ctor_get(x_87, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_87, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_95 = x_87;
} else {
 lean_dec_ref(x_87);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_97 = lean_ctor_get(x_74, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_74, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_99 = x_74;
} else {
 lean_dec_ref(x_74);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_MVarId_getType(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_9, x_3, x_4, x_5, x_6, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_Meta_getIntrosSize(x_13);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_free_object(x_11);
x_18 = lean_box(0);
x_19 = l_Lean_MVarId_introsWithBinderIdents___lambda__2(x_15, x_2, x_1, x_18, x_3, x_4, x_5, x_6, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = l_Lean_toModifiers___closed__2;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = l_Lean_Meta_getIntrosSize(x_23);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_eq(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_box(0);
x_29 = l_Lean_MVarId_introsWithBinderIdents___lambda__2(x_25, x_2, x_1, x_28, x_3, x_4, x_5, x_6, x_24);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_25);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_30 = l_Lean_toModifiers___closed__2;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_1);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_24);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_8);
if (x_34 == 0)
{
return x_8;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_8, 0);
x_36 = lean_ctor_get(x_8, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_8);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_MVarId_introsWithBinderIdents___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forIn_x27Unsafe_loop___at_Lean_MVarId_introsWithBinderIdents___spec__3(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Lean_MVarId_introsWithBinderIdents___lambda__1(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_MVarId_introsWithBinderIdents___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("withArgs", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__1;
x_2 = l_Mathlib_Tactic_withArgs___closed__2;
x_3 = l_Mathlib_Tactic_withArgs___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_withArgs___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" with", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_withArgs___closed__7;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("many1", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_withArgs___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ppSpace", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_withArgs___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_withArgs___closed__12;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("colGt", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_withArgs___closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_withArgs___closed__15;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__6;
x_2 = l_Mathlib_Tactic_withArgs___closed__13;
x_3 = l_Mathlib_Tactic_withArgs___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__6;
x_2 = l_Mathlib_Tactic_withArgs___closed__17;
x_3 = l_Mathlib_Tactic_withArgs___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_withArgs___closed__10;
x_2 = l_Mathlib_Tactic_withArgs___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__6;
x_2 = l_Mathlib_Tactic_withArgs___closed__8;
x_3 = l_Mathlib_Tactic_withArgs___closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__3;
x_2 = l_Mathlib_Tactic_withArgs___closed__4;
x_3 = l_Mathlib_Tactic_withArgs___closed__21;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_withArgs() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_withArgs___closed__22;
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("usingArg", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__1;
x_2 = l_Mathlib_Tactic_withArgs___closed__2;
x_3 = l_Mathlib_Tactic_usingArg___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" using ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_usingArg___closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_usingArg___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_usingArg___closed__6;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__6;
x_2 = l_Mathlib_Tactic_usingArg___closed__4;
x_3 = l_Mathlib_Tactic_usingArg___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_usingArg___closed__1;
x_2 = l_Mathlib_Tactic_usingArg___closed__2;
x_3 = l_Mathlib_Tactic_usingArg___closed__8;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_usingArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_usingArg___closed__9;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_unsupportedSyntaxExceptionId;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg), 1, 0);
return x_9;
}
}
static lean_object* _init_l_Mathlib_Tactic_getSimpArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simpArgs", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_getSimpArgs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
x_3 = l_Mathlib_Tactic_withArgs___closed__2;
x_4 = l_Mathlib_Tactic_getSimpArgs___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getSimpArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_getSimpArgs___closed__2;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = l_Lean_Syntax_TSepArray_getElems___rarg(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_10);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getSimpArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic_getSimpArgs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Mathlib_Tactic_getDSimpArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("dsimpArgs", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_getDSimpArgs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
x_3 = l_Mathlib_Tactic_withArgs___closed__2;
x_4 = l_Mathlib_Tactic_getDSimpArgs___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getDSimpArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_getDSimpArgs___closed__2;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = l_Lean_Syntax_TSepArray_getElems___rarg(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_10);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getDSimpArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic_getDSimpArgs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getWithArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_withArgs___closed__4;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getWithArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic_getWithArgs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getUsingArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_usingArg___closed__2;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_10);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_getUsingArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic_getUsingArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticRepeat1_", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__1;
x_2 = l_Mathlib_Tactic_withArgs___closed__2;
x_3 = l_Mathlib_Tactic_tacticRepeat1_____closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("repeat1 ", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_tacticRepeat1_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticRepeat1_____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_tacticRepeat1_____closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_withArgs___closed__6;
x_2 = l_Mathlib_Tactic_tacticRepeat1_____closed__4;
x_3 = l_Mathlib_Tactic_tacticRepeat1_____closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticRepeat1_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_tacticRepeat1_____closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticRepeat1__() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_tacticRepeat1_____closed__9;
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
x_3 = l_Mathlib_Tactic_withArgs___closed__2;
x_4 = l_Mathlib_Tactic_tacticRepeat1_____closed__5;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("paren", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
x_3 = l_Mathlib_Tactic_withArgs___closed__2;
x_4 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__2;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
x_3 = l_Mathlib_Tactic_withArgs___closed__2;
x_4 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__5;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(";", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticRepeat_", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5;
x_3 = l_Mathlib_Tactic_withArgs___closed__2;
x_4 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__11;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("repeat", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Mathlib_Tactic_tacticRepeat1_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 5);
x_11 = 0;
x_12 = l_Lean_SourceInfo_fromRef(x_10, x_11);
x_13 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__4;
lean_inc(x_12);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__9;
lean_inc(x_12);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__3;
lean_inc(x_16);
lean_inc(x_9);
lean_inc(x_14);
lean_inc(x_12);
x_18 = l_Lean_Syntax_node3(x_12, x_17, x_14, x_9, x_16);
x_19 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__10;
lean_inc(x_12);
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__13;
lean_inc(x_12);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__12;
lean_inc(x_12);
x_24 = l_Lean_Syntax_node2(x_12, x_23, x_22, x_9);
x_25 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__8;
lean_inc(x_12);
x_26 = l_Lean_Syntax_node3(x_12, x_25, x_18, x_20, x_24);
x_27 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__6;
lean_inc(x_12);
x_28 = l_Lean_Syntax_node1(x_12, x_27, x_26);
x_29 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__1;
lean_inc(x_12);
x_30 = l_Lean_Syntax_node1(x_12, x_29, x_28);
x_31 = l_Lean_Syntax_node3(x_12, x_17, x_14, x_30, x_16);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Data.PersistentHashMap", 27, 27);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PersistentHashMap.find!", 28, 28);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("key is not in the map", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__1;
x_2 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__2;
x_3 = lean_unsigned_to_nat(170u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = l_Lean_PersistentHashMap_find_x3f___at_Lean_LocalContext_find_x3f___spec__1(x_8, x_7);
x_10 = 1;
x_11 = lean_usize_add(x_3, x_10);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__4;
x_13 = l_panic___at_Lean_LocalDecl_setBinderInfo___spec__1(x_12);
x_14 = l_Lean_LocalDecl_isImplementationDetail(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_array_push(x_5, x_7);
x_3 = x_11;
x_5 = x_15;
goto _start;
}
else
{
lean_dec(x_7);
x_3 = x_11;
goto _start;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
lean_dec(x_9);
x_19 = l_Lean_LocalDecl_isImplementationDetail(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_array_push(x_5, x_7);
x_3 = x_11;
x_5 = x_20;
goto _start;
}
else
{
lean_dec(x_7);
x_3 = x_11;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOutImplementationDetails(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = l_Lean_toModifiers___closed__2;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = l_Lean_toModifiers___closed__2;
return x_8;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Lean_toModifiers___closed__2;
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1(x_1, x_2, x_9, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOutImplementationDetails___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Tactic_filterOutImplementationDetails(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected term '", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_getFVarIdAt___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'; expected single reference to variable", 40, 40);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_getFVarIdAt___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdAt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = 0;
x_13 = lean_box(x_12);
lean_inc(x_2);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTermForApply___boxed), 11, 2);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_13);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 5);
x_17 = l_Lean_replaceRef(x_2, x_16);
lean_dec(x_16);
lean_dec(x_2);
lean_ctor_set(x_9, 5, x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 1)
{
uint8_t x_20; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec(x_18);
x_27 = l_Lean_MessageData_ofExpr(x_19);
x_28 = l_Lean_Elab_Tactic_getFVarIdAt___closed__2;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_Elab_Tactic_getFVarIdAt___closed__4;
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at_Lean_Elab_Tactic_getFVarId___spec__1(x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_37 = lean_ctor_get(x_9, 0);
x_38 = lean_ctor_get(x_9, 1);
x_39 = lean_ctor_get(x_9, 2);
x_40 = lean_ctor_get(x_9, 3);
x_41 = lean_ctor_get(x_9, 4);
x_42 = lean_ctor_get(x_9, 5);
x_43 = lean_ctor_get(x_9, 6);
x_44 = lean_ctor_get(x_9, 7);
x_45 = lean_ctor_get(x_9, 8);
x_46 = lean_ctor_get(x_9, 9);
x_47 = lean_ctor_get(x_9, 10);
x_48 = lean_ctor_get_uint8(x_9, sizeof(void*)*12);
x_49 = lean_ctor_get(x_9, 11);
x_50 = lean_ctor_get_uint8(x_9, sizeof(void*)*12 + 1);
lean_inc(x_49);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_9);
x_51 = l_Lean_replaceRef(x_2, x_42);
lean_dec(x_42);
lean_dec(x_2);
x_52 = lean_alloc_ctor(0, 12, 2);
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_38);
lean_ctor_set(x_52, 2, x_39);
lean_ctor_set(x_52, 3, x_40);
lean_ctor_set(x_52, 4, x_41);
lean_ctor_set(x_52, 5, x_51);
lean_ctor_set(x_52, 6, x_43);
lean_ctor_set(x_52, 7, x_44);
lean_ctor_set(x_52, 8, x_45);
lean_ctor_set(x_52, 9, x_46);
lean_ctor_set(x_52, 10, x_47);
lean_ctor_set(x_52, 11, x_49);
lean_ctor_set_uint8(x_52, sizeof(void*)*12, x_48);
lean_ctor_set_uint8(x_52, sizeof(void*)*12 + 1, x_50);
lean_inc(x_10);
lean_inc(x_52);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_53 = l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_52, x_10, x_11);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
if (lean_obj_tag(x_54) == 1)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_52);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_57 = lean_ctor_get(x_54, 0);
lean_inc(x_57);
lean_dec(x_54);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
x_60 = l_Lean_MessageData_ofExpr(x_54);
x_61 = l_Lean_Elab_Tactic_getFVarIdAt___closed__2;
x_62 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = l_Lean_Elab_Tactic_getFVarIdAt___closed__4;
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = l_Lean_throwError___at_Lean_Elab_Tactic_getFVarId___spec__1(x_64, x_3, x_4, x_5, x_6, x_7, x_8, x_52, x_10, x_59);
lean_dec(x_10);
lean_dec(x_52);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_52);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_66 = lean_ctor_get(x_53, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_53, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_68 = x_53;
} else {
 lean_dec_ref(x_53);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_getFVarIdsAt___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_3, x_2);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_array_uget(x_4, x_3);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_4, x_3, x_17);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_19 = l_Lean_Elab_Tactic_getFVarIdAt(x_1, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = lean_usize_add(x_3, x_22);
x_24 = lean_array_uset(x_18, x_3, x_20);
x_3 = x_23;
x_4 = x_24;
x_13 = x_21;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (x_1 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Elab_Tactic_filterOutImplementationDetails(x_2, x_3);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_1);
x_13 = l_Lean_MVarId_getDecl(x_1, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_LocalContext_getFVarIds(x_16);
x_18 = l_Lean_Elab_Tactic_getFVarIdsAt___lambda__1(x_2, x_16, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_3, 0);
lean_inc(x_22);
lean_dec(x_3);
x_23 = lean_array_size(x_22);
x_24 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_getFVarIdsAt___spec__1(x_1, x_23, x_24, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Tactic_getFVarIdsAt___lambda__1(x_2, x_21, x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_27);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_13);
if (x_33 == 0)
{
return x_13;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_13, 0);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_13);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_box(x_3);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_getFVarIdsAt___lambda__2___boxed), 12, 3);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
lean_closure_set(x_14, 2, x_2);
x_15 = l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg(x_1, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_getFVarIdsAt___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_16 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_getFVarIdsAt___spec__1(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = l_Lean_Elab_Tactic_getFVarIdsAt___lambda__1(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_Lean_Elab_Tactic_getFVarIdsAt___lambda__2(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIdsAt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_Elab_Tactic_getFVarIdsAt(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Elab_Tactic_allGoals___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_18; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_6);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_6, 0);
x_21 = lean_ctor_get(x_6, 1);
x_22 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_20, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_55; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
lean_inc(x_3);
lean_inc(x_20);
lean_ctor_set(x_6, 1, x_3);
x_26 = l_Lean_Elab_Tactic_setGoals(x_6, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Elab_Tactic_saveState___rarg(x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
lean_inc(x_1);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_55 = lean_apply_9(x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_30);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_20);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_7, x_58);
x_6 = x_21;
x_7 = x_60;
x_8 = lean_box(0);
x_17 = x_59;
goto _start;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_55, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_55, 1);
lean_inc(x_63);
lean_dec(x_55);
x_32 = x_62;
x_33 = x_63;
goto block_54;
}
block_54:
{
uint8_t x_34; 
x_34 = l_Lean_Exception_isInterrupt(x_32);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = l_Lean_Exception_isRuntime(x_32);
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_31);
x_36 = 0;
x_37 = l_Lean_Elab_Tactic_SavedState_restore(x_29, x_36, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_33);
x_38 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_37, 0);
lean_dec(x_40);
lean_ctor_set_tag(x_37, 1);
lean_ctor_set(x_37, 0, x_32);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_32);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
lean_inc(x_15);
x_44 = l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1(x_32, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_array_push(x_7, x_20);
x_6 = x_21;
x_7 = x_46;
x_8 = lean_box(0);
x_17 = x_45;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_44);
if (x_48 == 0)
{
return x_44;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_44);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
lean_object* x_52; 
lean_dec(x_29);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_scalar(x_31)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_31;
 lean_ctor_set_tag(x_52, 1);
}
lean_ctor_set(x_52, 0, x_32);
lean_ctor_set(x_52, 1, x_33);
return x_52;
}
}
else
{
lean_object* x_53; 
lean_dec(x_29);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_scalar(x_31)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_31;
 lean_ctor_set_tag(x_53, 1);
}
lean_ctor_set(x_53, 0, x_32);
lean_ctor_set(x_53, 1, x_33);
return x_53;
}
}
}
else
{
lean_object* x_64; 
lean_free_object(x_6);
lean_dec(x_20);
x_64 = lean_ctor_get(x_22, 1);
lean_inc(x_64);
lean_dec(x_22);
x_6 = x_21;
x_8 = lean_box(0);
x_17 = x_64;
goto _start;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_6, 0);
x_67 = lean_ctor_get(x_6, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_6);
x_68 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_66, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_101; 
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
lean_inc(x_3);
lean_inc(x_66);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_66);
lean_ctor_set(x_72, 1, x_3);
x_73 = l_Lean_Elab_Tactic_setGoals(x_72, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_71);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = l_Lean_Elab_Tactic_saveState___rarg(x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_78 = x_75;
} else {
 lean_dec_ref(x_75);
 x_78 = lean_box(0);
}
lean_inc(x_1);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_101 = lean_apply_9(x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_77);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_78);
lean_dec(x_76);
lean_dec(x_66);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_103 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_7, x_104);
x_6 = x_67;
x_7 = x_106;
x_8 = lean_box(0);
x_17 = x_105;
goto _start;
}
else
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_101, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_101, 1);
lean_inc(x_109);
lean_dec(x_101);
x_79 = x_108;
x_80 = x_109;
goto block_100;
}
block_100:
{
uint8_t x_81; 
x_81 = l_Lean_Exception_isInterrupt(x_79);
if (x_81 == 0)
{
uint8_t x_82; 
x_82 = l_Lean_Exception_isRuntime(x_79);
if (x_82 == 0)
{
uint8_t x_83; lean_object* x_84; uint8_t x_85; 
lean_dec(x_78);
x_83 = 0;
x_84 = l_Lean_Elab_Tactic_SavedState_restore(x_76, x_83, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_80);
x_85 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_87 = x_84;
} else {
 lean_dec_ref(x_84);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
 lean_ctor_set_tag(x_88, 1);
}
lean_ctor_set(x_88, 0, x_79);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
lean_dec(x_84);
lean_inc(x_15);
x_90 = l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1(x_79, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_array_push(x_7, x_66);
x_6 = x_67;
x_7 = x_92;
x_8 = lean_box(0);
x_17 = x_91;
goto _start;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_94 = lean_ctor_get(x_90, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_90, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_96 = x_90;
} else {
 lean_dec_ref(x_90);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
else
{
lean_object* x_98; 
lean_dec(x_76);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_scalar(x_78)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_78;
 lean_ctor_set_tag(x_98, 1);
}
lean_ctor_set(x_98, 0, x_79);
lean_ctor_set(x_98, 1, x_80);
return x_98;
}
}
else
{
lean_object* x_99; 
lean_dec(x_76);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_scalar(x_78)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_78;
 lean_ctor_set_tag(x_99, 1);
}
lean_ctor_set(x_99, 0, x_79);
lean_ctor_set(x_99, 1, x_80);
return x_99;
}
}
}
else
{
lean_object* x_110; 
lean_dec(x_66);
x_110 = lean_ctor_get(x_68, 1);
lean_inc(x_110);
lean_dec(x_68);
x_6 = x_67;
x_8 = lean_box(0);
x_17 = x_110;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_allGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = l_Lean_Elab_Tactic_getGoals___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = lean_box(0);
x_16 = l_Lean_toModifiers___closed__2;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_12);
x_17 = l_List_forIn_x27_loop___at_Lean_Elab_Tactic_allGoals___spec__1(x_1, x_12, x_14, x_15, x_12, x_12, x_16, lean_box(0), x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_to_list(x_18);
x_21 = l_Lean_Elab_Tactic_setGoals(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Elab_Tactic_allGoals___spec__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_List_forIn_x27_loop___at_Lean_Elab_Tactic_allGoals___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_andThenOnSubgoals___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_Elab_Tactic_allGoals(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_andThenOnSubgoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_andThenOnSubgoals___lambda__1), 11, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
x_13 = l_Lean_Elab_Tactic_focus___rarg(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Tactic_iterateAtMost___rarg(x_1, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_8);
lean_closure_set(x_11, 3, x_4);
x_12 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_4, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = lean_apply_3(x_9, lean_box(0), x_12, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateAtMost___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateAtMost___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Tactic_iterateAtMost___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Tactic_iterateExactly_x27___rarg(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 4);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateExactly_x27___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_3);
x_11 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_3, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = lean_apply_2(x_13, lean_box(0), x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateExactly_x27___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Tactic_iterateExactly_x27___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateExactly_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Tactic_iterateExactly_x27___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = l_Lean_Elab_Tactic_iterateRange___rarg(x_2, x_3, x_4, x_8, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_5);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateRange___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_9);
lean_closure_set(x_11, 4, x_5);
x_12 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_5, x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_eq(x_4, x_6);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Tactic_iterateAtMost___rarg(x_1, x_2, x_4, x_5);
lean_dec(x_4);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateRange___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Tactic_iterateRange___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateRange___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Tactic_iterateRange___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Tactic_iterateUntilFailure___rarg(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailure___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateAtMost___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_apply_3(x_4, lean_box(0), x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailure___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailure___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Tactic_iterateUntilFailure___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg(x_1, x_2, lean_box(0), x_3);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__2), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_6);
x_8 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_4, x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = lean_apply_3(x_5, lean_box(0), x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_lengthTRAux___rarg(x_2, x_5);
x_7 = lean_apply_2(x_4, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lean_Elab_Tactic_iterateUntilFailureWithResults___rarg(x_1, x_2, lean_box(0), x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Tactic_iterateUntilFailureCount___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lean", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
lean_inc(x_6);
x_8 = l_System_FilePath_join(x_6, x_1);
x_9 = l_System_FilePath_isDir(x_8, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___closed__1;
x_14 = l_System_FilePath_withExtension(x_8, x_13);
x_15 = l_System_FilePath_pathExists(x_14, x_12);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_6);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_2 = x_7;
x_3 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_7);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_15, 0);
lean_dec(x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_6);
lean_ctor_set(x_15, 0, x_22);
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_6);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_8);
lean_dec(x_7);
x_26 = !lean_is_exclusive(x_9);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_9, 0);
lean_dec(x_27);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_6);
lean_ctor_set(x_9, 0, x_28);
return x_9;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_9, 1);
lean_inc(x_29);
lean_dec(x_9);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_6);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
}
}
static lean_object* _init_l_Mathlib_getPackageDir___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Could not find ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Mathlib_getPackageDir___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" directory. Make sure the LEAN_SRC_PATH environment variable is set correctly.", 78, 78);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Mathlib_getPackageDir___lambda__1___closed__1;
x_5 = lean_string_append(x_4, x_1);
x_6 = l_Mathlib_getPackageDir___lambda__1___closed__2;
x_7 = lean_string_append(x_5, x_6);
x_8 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_Lean_initSrcSearchPath(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_box(0);
x_11 = l_Mathlib_getPackageDir___lambda__1(x_1, x_10, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
lean_ctor_set(x_7, 0, x_14);
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_4);
if (x_18 == 0)
{
return x_4;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_4, 0);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_4);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Mathlib_getPackageDir___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Mathlib_getPackageDir___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Mathlib_getPackageDir(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_getMathlibDir(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Mathlib_Tactic_withArgs___closed__1;
x_3 = l_Mathlib_getPackageDir(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_Paths(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Lean_Expr_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Tactic_OpenPrivate(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Core(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Paths(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Lean_Expr_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Tactic_OpenPrivate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_toModifiers___closed__1 = _init_l_Lean_toModifiers___closed__1();
lean_mark_persistent(l_Lean_toModifiers___closed__1);
l_Lean_toModifiers___closed__2 = _init_l_Lean_toModifiers___closed__2();
lean_mark_persistent(l_Lean_toModifiers___closed__2);
l_Lean_toModifiers___closed__3 = _init_l_Lean_toModifiers___closed__3();
lean_mark_persistent(l_Lean_toModifiers___closed__3);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__1);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__2);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__3 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__3);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__4);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__5);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__6 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__6();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__6);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__7 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__7();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__7);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__8 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__8();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__8);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__9 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__9();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__9);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__10 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__10();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__10);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__11 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__11();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__11);
l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__12 = _init_l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__12();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_MVarId_introsWithBinderIdents___spec__1___closed__12);
l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1 = _init_l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1();
lean_mark_persistent(l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__1);
l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__2 = _init_l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__2();
lean_mark_persistent(l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__2);
l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3 = _init_l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3();
lean_mark_persistent(l_List_mapTR_loop___at_Lean_MVarId_introsWithBinderIdents___spec__2___closed__3);
l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1 = _init_l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1();
lean_mark_persistent(l_Lean_MVarId_introsWithBinderIdents___lambda__2___boxed__const__1);
l_Mathlib_Tactic_withArgs___closed__1 = _init_l_Mathlib_Tactic_withArgs___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__1);
l_Mathlib_Tactic_withArgs___closed__2 = _init_l_Mathlib_Tactic_withArgs___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__2);
l_Mathlib_Tactic_withArgs___closed__3 = _init_l_Mathlib_Tactic_withArgs___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__3);
l_Mathlib_Tactic_withArgs___closed__4 = _init_l_Mathlib_Tactic_withArgs___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__4);
l_Mathlib_Tactic_withArgs___closed__5 = _init_l_Mathlib_Tactic_withArgs___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__5);
l_Mathlib_Tactic_withArgs___closed__6 = _init_l_Mathlib_Tactic_withArgs___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__6);
l_Mathlib_Tactic_withArgs___closed__7 = _init_l_Mathlib_Tactic_withArgs___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__7);
l_Mathlib_Tactic_withArgs___closed__8 = _init_l_Mathlib_Tactic_withArgs___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__8);
l_Mathlib_Tactic_withArgs___closed__9 = _init_l_Mathlib_Tactic_withArgs___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__9);
l_Mathlib_Tactic_withArgs___closed__10 = _init_l_Mathlib_Tactic_withArgs___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__10);
l_Mathlib_Tactic_withArgs___closed__11 = _init_l_Mathlib_Tactic_withArgs___closed__11();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__11);
l_Mathlib_Tactic_withArgs___closed__12 = _init_l_Mathlib_Tactic_withArgs___closed__12();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__12);
l_Mathlib_Tactic_withArgs___closed__13 = _init_l_Mathlib_Tactic_withArgs___closed__13();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__13);
l_Mathlib_Tactic_withArgs___closed__14 = _init_l_Mathlib_Tactic_withArgs___closed__14();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__14);
l_Mathlib_Tactic_withArgs___closed__15 = _init_l_Mathlib_Tactic_withArgs___closed__15();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__15);
l_Mathlib_Tactic_withArgs___closed__16 = _init_l_Mathlib_Tactic_withArgs___closed__16();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__16);
l_Mathlib_Tactic_withArgs___closed__17 = _init_l_Mathlib_Tactic_withArgs___closed__17();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__17);
l_Mathlib_Tactic_withArgs___closed__18 = _init_l_Mathlib_Tactic_withArgs___closed__18();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__18);
l_Mathlib_Tactic_withArgs___closed__19 = _init_l_Mathlib_Tactic_withArgs___closed__19();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__19);
l_Mathlib_Tactic_withArgs___closed__20 = _init_l_Mathlib_Tactic_withArgs___closed__20();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__20);
l_Mathlib_Tactic_withArgs___closed__21 = _init_l_Mathlib_Tactic_withArgs___closed__21();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__21);
l_Mathlib_Tactic_withArgs___closed__22 = _init_l_Mathlib_Tactic_withArgs___closed__22();
lean_mark_persistent(l_Mathlib_Tactic_withArgs___closed__22);
l_Mathlib_Tactic_withArgs = _init_l_Mathlib_Tactic_withArgs();
lean_mark_persistent(l_Mathlib_Tactic_withArgs);
l_Mathlib_Tactic_usingArg___closed__1 = _init_l_Mathlib_Tactic_usingArg___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__1);
l_Mathlib_Tactic_usingArg___closed__2 = _init_l_Mathlib_Tactic_usingArg___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__2);
l_Mathlib_Tactic_usingArg___closed__3 = _init_l_Mathlib_Tactic_usingArg___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__3);
l_Mathlib_Tactic_usingArg___closed__4 = _init_l_Mathlib_Tactic_usingArg___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__4);
l_Mathlib_Tactic_usingArg___closed__5 = _init_l_Mathlib_Tactic_usingArg___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__5);
l_Mathlib_Tactic_usingArg___closed__6 = _init_l_Mathlib_Tactic_usingArg___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__6);
l_Mathlib_Tactic_usingArg___closed__7 = _init_l_Mathlib_Tactic_usingArg___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__7);
l_Mathlib_Tactic_usingArg___closed__8 = _init_l_Mathlib_Tactic_usingArg___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__8);
l_Mathlib_Tactic_usingArg___closed__9 = _init_l_Mathlib_Tactic_usingArg___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_usingArg___closed__9);
l_Mathlib_Tactic_usingArg = _init_l_Mathlib_Tactic_usingArg();
lean_mark_persistent(l_Mathlib_Tactic_usingArg);
l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__1 = _init_l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__1);
l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__2 = _init_l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Tactic_getSimpArgs___spec__1___rarg___closed__2);
l_Mathlib_Tactic_getSimpArgs___closed__1 = _init_l_Mathlib_Tactic_getSimpArgs___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_getSimpArgs___closed__1);
l_Mathlib_Tactic_getSimpArgs___closed__2 = _init_l_Mathlib_Tactic_getSimpArgs___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_getSimpArgs___closed__2);
l_Mathlib_Tactic_getDSimpArgs___closed__1 = _init_l_Mathlib_Tactic_getDSimpArgs___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_getDSimpArgs___closed__1);
l_Mathlib_Tactic_getDSimpArgs___closed__2 = _init_l_Mathlib_Tactic_getDSimpArgs___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_getDSimpArgs___closed__2);
l_Mathlib_Tactic_tacticRepeat1_____closed__1 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__1();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__1);
l_Mathlib_Tactic_tacticRepeat1_____closed__2 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__2();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__2);
l_Mathlib_Tactic_tacticRepeat1_____closed__3 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__3();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__3);
l_Mathlib_Tactic_tacticRepeat1_____closed__4 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__4();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__4);
l_Mathlib_Tactic_tacticRepeat1_____closed__5 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__5();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__5);
l_Mathlib_Tactic_tacticRepeat1_____closed__6 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__6();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__6);
l_Mathlib_Tactic_tacticRepeat1_____closed__7 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__7();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__7);
l_Mathlib_Tactic_tacticRepeat1_____closed__8 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__8();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__8);
l_Mathlib_Tactic_tacticRepeat1_____closed__9 = _init_l_Mathlib_Tactic_tacticRepeat1_____closed__9();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1_____closed__9);
l_Mathlib_Tactic_tacticRepeat1__ = _init_l_Mathlib_Tactic_tacticRepeat1__();
lean_mark_persistent(l_Mathlib_Tactic_tacticRepeat1__);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__1);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__2 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__2);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__3 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__3);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__4 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__4();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__4);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__5 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__5();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__5);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__6 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__6();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__6);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__7 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__7();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__7);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__8 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__8();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__8);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__9 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__9();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__9);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__10 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__10();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__10);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__11 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__11();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__11);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__12 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__12();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__12);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__13 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__13();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Core______macroRules__Mathlib__Tactic__tacticRepeat1____1___closed__13);
l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__1);
l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__2 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__2);
l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__3 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__3);
l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__4 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__4();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_filterOutImplementationDetails___spec__1___closed__4);
l_Lean_Elab_Tactic_getFVarIdAt___closed__1 = _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_getFVarIdAt___closed__1);
l_Lean_Elab_Tactic_getFVarIdAt___closed__2 = _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_getFVarIdAt___closed__2);
l_Lean_Elab_Tactic_getFVarIdAt___closed__3 = _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_getFVarIdAt___closed__3);
l_Lean_Elab_Tactic_getFVarIdAt___closed__4 = _init_l_Lean_Elab_Tactic_getFVarIdAt___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_getFVarIdAt___closed__4);
l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___closed__1 = _init_l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___closed__1();
lean_mark_persistent(l_List_findM_x3f___at_Mathlib_getPackageDir___spec__1___closed__1);
l_Mathlib_getPackageDir___lambda__1___closed__1 = _init_l_Mathlib_getPackageDir___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_getPackageDir___lambda__1___closed__1);
l_Mathlib_getPackageDir___lambda__1___closed__2 = _init_l_Mathlib_getPackageDir___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_getPackageDir___lambda__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
