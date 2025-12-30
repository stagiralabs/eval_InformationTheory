// Lean compiler output
// Module: Mathlib.Tactic.Explode
// Imports: Init Lean.Elab.Command Lean.PrettyPrinter Mathlib.Tactic.Explode.Datatypes Mathlib.Tactic.Explode.Pretty
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Explode_Entry_line_x21(lean_object*);
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__8;
static lean_object* l_Mathlib_Explode_explode___closed__1;
static lean_object* l_Mathlib_Explode_explodeCore___closed__4;
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__1;
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__8;
lean_object* l_Mathlib_Explode_Entries_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__4;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Command_runLintersAsync___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_runTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explode___closed__2;
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__5;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm___spec__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__3;
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__1;
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__10;
lean_object* l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Linter_UnusedTactic___aux__Mathlib__Tactic__Linter__UnusedTacticExtension______elabRules__Mathlib__Linter__UnusedTactic__command_x23allow__unused__tactic_x21________1___spec__1___rarg(lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__8;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Mathlib_Explode_Entries_addSynonym(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_command_x23explode__;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Explode_entriesToMessageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__1;
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__3;
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__12;
lean_object* l_Lean_ConstantInfo_value_x21(lean_object*, uint8_t);
static lean_object* l_Mathlib_Explode_explodeCore___closed__11;
lean_object* l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__4;
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__6;
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__3;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__10___closed__1;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explode___closed__3;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__9;
lean_object* l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__16;
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__9;
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__9;
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__1;
static lean_object* l_Mathlib_Explode_explodeCore___closed__5;
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__6(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__2;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
static lean_object* l_Mathlib_Explode_explodeCore___closed__9;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
static lean_object* l_Mathlib_Explode_explodeCore___closed__7;
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__6;
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConst(lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__6;
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__5;
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__11;
static lean_object* l_Mathlib_Explode_explodeCore___closed__10;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__2;
static lean_object* l_Mathlib_Explode_explodeCore___lambda__12___closed__1;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__7;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__2(lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__5___closed__3;
lean_object* l_Lean_Expr_ctorName(lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__8;
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore_consDep___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__3___closed__2;
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__10;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__12___closed__2;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__7;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__10___closed__2;
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__2;
static lean_object* l_Mathlib_Explode_explodeCore___lambda__5___closed__2;
static lean_object* l_Mathlib_Explode_explodeCore___lambda__5___closed__1;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Mathlib_Explode_Entries_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__3___closed__3;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore_consDep(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__2;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__3;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__7;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__10;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__15;
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__9___closed__5;
lean_object* l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__1;
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__6;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___lambda__3___closed__1;
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__13;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4;
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
static lean_object* l_Mathlib_Explode_explodeCore___closed__3;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
uint8_t l_Lean_Expr_isSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Explode_explode___closed__4;
static lean_object* l_Mathlib_Explode_explodeCore___closed__14;
static lean_object* l_Mathlib_Explode_explodeCore___closed__12;
static lean_object* l_Mathlib_Explode_command_x23explode_____closed__13;
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore_consDep(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_3;
}
else
{
if (x_1 == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*5 + 1);
if (x_6 == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Mathlib_Explode_Entry_line_x21(x_5);
lean_dec(x_5);
lean_ctor_set(x_2, 0, x_7);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get_uint8(x_9, sizeof(void*)*5 + 1);
if (x_10 == 0)
{
lean_dec(x_9);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Mathlib_Explode_Entry_line_x21(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Mathlib_Explode_Entry_line_x21(x_15);
lean_dec(x_15);
lean_ctor_set(x_2, 0, x_16);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_3);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l_Mathlib_Explode_Entry_line_x21(x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_3);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore_consDep___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Mathlib_Explode_explodeCore_consDep(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = lean_usize_dec_lt(x_8, x_7);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_17 = lean_array_uget(x_6, x_8);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_dec(x_9);
x_20 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_3);
lean_inc(x_1);
x_21 = l_Mathlib_Explode_explodeCore(x_1, x_2, x_17, x_3, x_18, x_20, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_25 = lean_ctor_get(x_22, 0);
x_26 = lean_ctor_get(x_22, 1);
x_27 = l_Mathlib_Explode_explodeCore_consDep(x_2, x_25, x_19);
lean_ctor_set(x_22, 1, x_27);
lean_ctor_set(x_22, 0, x_26);
x_28 = 1;
x_29 = lean_usize_add(x_8, x_28);
x_8 = x_29;
x_9 = x_22;
x_14 = x_23;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; size_t x_35; size_t x_36; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_22);
x_33 = l_Mathlib_Explode_explodeCore_consDep(x_2, x_31, x_19);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = 1;
x_36 = lean_usize_add(x_8, x_35);
x_8 = x_36;
x_9 = x_34;
x_14 = x_23;
goto _start;
}
}
else
{
uint8_t x_38; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_21);
if (x_38 == 0)
{
return x_21;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_21, 0);
x_40 = lean_ctor_get(x_21, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_21);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; 
x_16 = lean_usize_dec_lt(x_9, x_8);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_28; 
x_18 = lean_array_uget(x_7, x_9);
x_28 = !lean_is_exclusive(x_10);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_10, 1);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_29, 0);
x_33 = lean_ctor_get(x_29, 1);
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_31, 2);
lean_inc(x_36);
x_37 = lean_nat_dec_lt(x_34, x_35);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_18);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_10);
x_19 = x_38;
x_20 = x_15;
goto block_27;
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_31);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_31, 2);
lean_dec(x_40);
x_41 = lean_ctor_get(x_31, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_31, 0);
lean_dec(x_42);
x_43 = lean_nat_add(x_34, x_36);
lean_ctor_set(x_31, 0, x_43);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_44 = lean_infer_type(x_18, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_MessageData_ofExpr(x_45);
x_48 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_47, x_11, x_12, x_13, x_14, x_46);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_18);
x_51 = l_Lean_MessageData_ofExpr(x_18);
x_52 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_51, x_11, x_12, x_13, x_14, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_inc(x_1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_55 = lean_apply_6(x_1, x_18, x_11, x_12, x_13, x_14, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_box(0);
if (x_3 == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_nat_dec_eq(x_34, x_59);
lean_dec(x_34);
if (x_60 == 0)
{
uint8_t x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; uint8_t x_65; 
x_61 = 2;
lean_inc(x_5);
lean_inc(x_2);
x_62 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_62, 0, x_49);
lean_ctor_set(x_62, 1, x_58);
lean_ctor_set(x_62, 2, x_2);
lean_ctor_set(x_62, 3, x_53);
lean_ctor_set(x_62, 4, x_5);
lean_ctor_set_uint8(x_62, sizeof(void*)*5, x_61);
x_63 = lean_unbox(x_56);
lean_dec(x_56);
lean_ctor_set_uint8(x_62, sizeof(void*)*5 + 1, x_63);
x_64 = l_Mathlib_Explode_Entries_add(x_32, x_18, x_62);
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_66 = lean_ctor_get(x_64, 0);
x_67 = lean_ctor_get(x_64, 1);
x_68 = l_Mathlib_Explode_Entry_line_x21(x_66);
lean_dec(x_66);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set_tag(x_64, 1);
lean_ctor_set(x_64, 1, x_33);
lean_ctor_set(x_64, 0, x_69);
lean_ctor_set(x_29, 1, x_64);
lean_ctor_set(x_29, 0, x_67);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_10);
x_19 = x_70;
x_20 = x_57;
goto block_27;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_71 = lean_ctor_get(x_64, 0);
x_72 = lean_ctor_get(x_64, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_64);
x_73 = l_Mathlib_Explode_Entry_line_x21(x_71);
lean_dec(x_71);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_33);
lean_ctor_set(x_29, 1, x_75);
lean_ctor_set(x_29, 0, x_72);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_10);
x_19 = x_76;
x_20 = x_57;
goto block_27;
}
}
else
{
uint8_t x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; uint8_t x_81; 
x_77 = 1;
lean_inc(x_5);
lean_inc(x_2);
x_78 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_78, 0, x_49);
lean_ctor_set(x_78, 1, x_58);
lean_ctor_set(x_78, 2, x_2);
lean_ctor_set(x_78, 3, x_53);
lean_ctor_set(x_78, 4, x_5);
lean_ctor_set_uint8(x_78, sizeof(void*)*5, x_77);
x_79 = lean_unbox(x_56);
lean_dec(x_56);
lean_ctor_set_uint8(x_78, sizeof(void*)*5 + 1, x_79);
x_80 = l_Mathlib_Explode_Entries_add(x_32, x_18, x_78);
x_81 = !lean_is_exclusive(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_ctor_get(x_80, 0);
x_83 = lean_ctor_get(x_80, 1);
x_84 = l_Mathlib_Explode_Entry_line_x21(x_82);
lean_dec(x_82);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set_tag(x_80, 1);
lean_ctor_set(x_80, 1, x_33);
lean_ctor_set(x_80, 0, x_85);
lean_ctor_set(x_29, 1, x_80);
lean_ctor_set(x_29, 0, x_83);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_10);
x_19 = x_86;
x_20 = x_57;
goto block_27;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_80, 0);
x_88 = lean_ctor_get(x_80, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_80);
x_89 = l_Mathlib_Explode_Entry_line_x21(x_87);
lean_dec(x_87);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_33);
lean_ctor_set(x_29, 1, x_91);
lean_ctor_set(x_29, 0, x_88);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_10);
x_19 = x_92;
x_20 = x_57;
goto block_27;
}
}
}
else
{
uint8_t x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; uint8_t x_97; 
lean_dec(x_34);
x_93 = 0;
lean_inc(x_5);
lean_inc(x_2);
x_94 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_94, 0, x_49);
lean_ctor_set(x_94, 1, x_58);
lean_ctor_set(x_94, 2, x_2);
lean_ctor_set(x_94, 3, x_53);
lean_ctor_set(x_94, 4, x_5);
lean_ctor_set_uint8(x_94, sizeof(void*)*5, x_93);
x_95 = lean_unbox(x_56);
lean_dec(x_56);
lean_ctor_set_uint8(x_94, sizeof(void*)*5 + 1, x_95);
x_96 = l_Mathlib_Explode_Entries_add(x_32, x_18, x_94);
x_97 = !lean_is_exclusive(x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_98 = lean_ctor_get(x_96, 0);
x_99 = lean_ctor_get(x_96, 1);
x_100 = l_Mathlib_Explode_Entry_line_x21(x_98);
lean_dec(x_98);
x_101 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set_tag(x_96, 1);
lean_ctor_set(x_96, 1, x_33);
lean_ctor_set(x_96, 0, x_101);
lean_ctor_set(x_29, 1, x_96);
lean_ctor_set(x_29, 0, x_99);
x_102 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_102, 0, x_10);
x_19 = x_102;
x_20 = x_57;
goto block_27;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_103 = lean_ctor_get(x_96, 0);
x_104 = lean_ctor_get(x_96, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_96);
x_105 = l_Mathlib_Explode_Entry_line_x21(x_103);
lean_dec(x_103);
x_106 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_106, 0, x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_33);
lean_ctor_set(x_29, 1, x_107);
lean_ctor_set(x_29, 0, x_104);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_10);
x_19 = x_108;
x_20 = x_57;
goto block_27;
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_31);
lean_dec(x_34);
lean_free_object(x_29);
lean_dec(x_33);
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_55);
if (x_109 == 0)
{
return x_55;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_55, 0);
x_111 = lean_ctor_get(x_55, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_55);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_31);
lean_dec(x_34);
lean_free_object(x_29);
lean_dec(x_33);
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_44);
if (x_113 == 0)
{
return x_44;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_44, 0);
x_115 = lean_ctor_get(x_44, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_44);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_31);
x_117 = lean_nat_add(x_34, x_36);
x_118 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_35);
lean_ctor_set(x_118, 2, x_36);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_119 = lean_infer_type(x_18, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = l_Lean_MessageData_ofExpr(x_120);
x_123 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_122, x_11, x_12, x_13, x_14, x_121);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
lean_inc(x_18);
x_126 = l_Lean_MessageData_ofExpr(x_18);
x_127 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_126, x_11, x_12, x_13, x_14, x_125);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
lean_inc(x_1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_130 = lean_apply_6(x_1, x_18, x_11, x_12, x_13, x_14, x_129);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_box(0);
if (x_3 == 0)
{
lean_object* x_134; uint8_t x_135; 
x_134 = lean_unsigned_to_nat(0u);
x_135 = lean_nat_dec_eq(x_34, x_134);
lean_dec(x_34);
if (x_135 == 0)
{
uint8_t x_136; lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_136 = 2;
lean_inc(x_5);
lean_inc(x_2);
x_137 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_137, 0, x_124);
lean_ctor_set(x_137, 1, x_133);
lean_ctor_set(x_137, 2, x_2);
lean_ctor_set(x_137, 3, x_128);
lean_ctor_set(x_137, 4, x_5);
lean_ctor_set_uint8(x_137, sizeof(void*)*5, x_136);
x_138 = lean_unbox(x_131);
lean_dec(x_131);
lean_ctor_set_uint8(x_137, sizeof(void*)*5 + 1, x_138);
x_139 = l_Mathlib_Explode_Entries_add(x_32, x_18, x_137);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_142 = x_139;
} else {
 lean_dec_ref(x_139);
 x_142 = lean_box(0);
}
x_143 = l_Mathlib_Explode_Entry_line_x21(x_140);
lean_dec(x_140);
x_144 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_144, 0, x_143);
if (lean_is_scalar(x_142)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_142;
 lean_ctor_set_tag(x_145, 1);
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_33);
lean_ctor_set(x_29, 1, x_145);
lean_ctor_set(x_29, 0, x_141);
lean_ctor_set(x_10, 0, x_118);
x_146 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_146, 0, x_10);
x_19 = x_146;
x_20 = x_132;
goto block_27;
}
else
{
uint8_t x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_147 = 1;
lean_inc(x_5);
lean_inc(x_2);
x_148 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_148, 0, x_124);
lean_ctor_set(x_148, 1, x_133);
lean_ctor_set(x_148, 2, x_2);
lean_ctor_set(x_148, 3, x_128);
lean_ctor_set(x_148, 4, x_5);
lean_ctor_set_uint8(x_148, sizeof(void*)*5, x_147);
x_149 = lean_unbox(x_131);
lean_dec(x_131);
lean_ctor_set_uint8(x_148, sizeof(void*)*5 + 1, x_149);
x_150 = l_Mathlib_Explode_Entries_add(x_32, x_18, x_148);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_153 = x_150;
} else {
 lean_dec_ref(x_150);
 x_153 = lean_box(0);
}
x_154 = l_Mathlib_Explode_Entry_line_x21(x_151);
lean_dec(x_151);
x_155 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_155, 0, x_154);
if (lean_is_scalar(x_153)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_153;
 lean_ctor_set_tag(x_156, 1);
}
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_33);
lean_ctor_set(x_29, 1, x_156);
lean_ctor_set(x_29, 0, x_152);
lean_ctor_set(x_10, 0, x_118);
x_157 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_157, 0, x_10);
x_19 = x_157;
x_20 = x_132;
goto block_27;
}
}
else
{
uint8_t x_158; lean_object* x_159; uint8_t x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_34);
x_158 = 0;
lean_inc(x_5);
lean_inc(x_2);
x_159 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_159, 0, x_124);
lean_ctor_set(x_159, 1, x_133);
lean_ctor_set(x_159, 2, x_2);
lean_ctor_set(x_159, 3, x_128);
lean_ctor_set(x_159, 4, x_5);
lean_ctor_set_uint8(x_159, sizeof(void*)*5, x_158);
x_160 = lean_unbox(x_131);
lean_dec(x_131);
lean_ctor_set_uint8(x_159, sizeof(void*)*5 + 1, x_160);
x_161 = l_Mathlib_Explode_Entries_add(x_32, x_18, x_159);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_164 = x_161;
} else {
 lean_dec_ref(x_161);
 x_164 = lean_box(0);
}
x_165 = l_Mathlib_Explode_Entry_line_x21(x_162);
lean_dec(x_162);
x_166 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_166, 0, x_165);
if (lean_is_scalar(x_164)) {
 x_167 = lean_alloc_ctor(1, 2, 0);
} else {
 x_167 = x_164;
 lean_ctor_set_tag(x_167, 1);
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_33);
lean_ctor_set(x_29, 1, x_167);
lean_ctor_set(x_29, 0, x_163);
lean_ctor_set(x_10, 0, x_118);
x_168 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_168, 0, x_10);
x_19 = x_168;
x_20 = x_132;
goto block_27;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_128);
lean_dec(x_124);
lean_dec(x_118);
lean_dec(x_34);
lean_free_object(x_29);
lean_dec(x_33);
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_169 = lean_ctor_get(x_130, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_130, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_171 = x_130;
} else {
 lean_dec_ref(x_130);
 x_171 = lean_box(0);
}
if (lean_is_scalar(x_171)) {
 x_172 = lean_alloc_ctor(1, 2, 0);
} else {
 x_172 = x_171;
}
lean_ctor_set(x_172, 0, x_169);
lean_ctor_set(x_172, 1, x_170);
return x_172;
}
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_118);
lean_dec(x_34);
lean_free_object(x_29);
lean_dec(x_33);
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_173 = lean_ctor_get(x_119, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_119, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_175 = x_119;
} else {
 lean_dec_ref(x_119);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 2, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_173);
lean_ctor_set(x_176, 1, x_174);
return x_176;
}
}
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_177 = lean_ctor_get(x_10, 0);
x_178 = lean_ctor_get(x_29, 0);
x_179 = lean_ctor_get(x_29, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_29);
x_180 = lean_ctor_get(x_177, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_177, 1);
lean_inc(x_181);
x_182 = lean_ctor_get(x_177, 2);
lean_inc(x_182);
x_183 = lean_nat_dec_lt(x_180, x_181);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; 
lean_dec(x_182);
lean_dec(x_181);
lean_dec(x_180);
lean_dec(x_18);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_178);
lean_ctor_set(x_184, 1, x_179);
lean_ctor_set(x_10, 1, x_184);
x_185 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_185, 0, x_10);
x_19 = x_185;
x_20 = x_15;
goto block_27;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 x_186 = x_177;
} else {
 lean_dec_ref(x_177);
 x_186 = lean_box(0);
}
x_187 = lean_nat_add(x_180, x_182);
if (lean_is_scalar(x_186)) {
 x_188 = lean_alloc_ctor(0, 3, 0);
} else {
 x_188 = x_186;
}
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_181);
lean_ctor_set(x_188, 2, x_182);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_189 = lean_infer_type(x_18, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = l_Lean_MessageData_ofExpr(x_190);
x_193 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_192, x_11, x_12, x_13, x_14, x_191);
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
lean_inc(x_18);
x_196 = l_Lean_MessageData_ofExpr(x_18);
x_197 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_196, x_11, x_12, x_13, x_14, x_195);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
lean_inc(x_1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_200 = lean_apply_6(x_1, x_18, x_11, x_12, x_13, x_14, x_199);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = lean_box(0);
if (x_3 == 0)
{
lean_object* x_204; uint8_t x_205; 
x_204 = lean_unsigned_to_nat(0u);
x_205 = lean_nat_dec_eq(x_180, x_204);
lean_dec(x_180);
if (x_205 == 0)
{
uint8_t x_206; lean_object* x_207; uint8_t x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_206 = 2;
lean_inc(x_5);
lean_inc(x_2);
x_207 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_207, 0, x_194);
lean_ctor_set(x_207, 1, x_203);
lean_ctor_set(x_207, 2, x_2);
lean_ctor_set(x_207, 3, x_198);
lean_ctor_set(x_207, 4, x_5);
lean_ctor_set_uint8(x_207, sizeof(void*)*5, x_206);
x_208 = lean_unbox(x_201);
lean_dec(x_201);
lean_ctor_set_uint8(x_207, sizeof(void*)*5 + 1, x_208);
x_209 = l_Mathlib_Explode_Entries_add(x_178, x_18, x_207);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_212 = x_209;
} else {
 lean_dec_ref(x_209);
 x_212 = lean_box(0);
}
x_213 = l_Mathlib_Explode_Entry_line_x21(x_210);
lean_dec(x_210);
x_214 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_214, 0, x_213);
if (lean_is_scalar(x_212)) {
 x_215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_215 = x_212;
 lean_ctor_set_tag(x_215, 1);
}
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_179);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_211);
lean_ctor_set(x_216, 1, x_215);
lean_ctor_set(x_10, 1, x_216);
lean_ctor_set(x_10, 0, x_188);
x_217 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_217, 0, x_10);
x_19 = x_217;
x_20 = x_202;
goto block_27;
}
else
{
uint8_t x_218; lean_object* x_219; uint8_t x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_218 = 1;
lean_inc(x_5);
lean_inc(x_2);
x_219 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_219, 0, x_194);
lean_ctor_set(x_219, 1, x_203);
lean_ctor_set(x_219, 2, x_2);
lean_ctor_set(x_219, 3, x_198);
lean_ctor_set(x_219, 4, x_5);
lean_ctor_set_uint8(x_219, sizeof(void*)*5, x_218);
x_220 = lean_unbox(x_201);
lean_dec(x_201);
lean_ctor_set_uint8(x_219, sizeof(void*)*5 + 1, x_220);
x_221 = l_Mathlib_Explode_Entries_add(x_178, x_18, x_219);
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_224 = x_221;
} else {
 lean_dec_ref(x_221);
 x_224 = lean_box(0);
}
x_225 = l_Mathlib_Explode_Entry_line_x21(x_222);
lean_dec(x_222);
x_226 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_226, 0, x_225);
if (lean_is_scalar(x_224)) {
 x_227 = lean_alloc_ctor(1, 2, 0);
} else {
 x_227 = x_224;
 lean_ctor_set_tag(x_227, 1);
}
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_179);
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_223);
lean_ctor_set(x_228, 1, x_227);
lean_ctor_set(x_10, 1, x_228);
lean_ctor_set(x_10, 0, x_188);
x_229 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_229, 0, x_10);
x_19 = x_229;
x_20 = x_202;
goto block_27;
}
}
else
{
uint8_t x_230; lean_object* x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_180);
x_230 = 0;
lean_inc(x_5);
lean_inc(x_2);
x_231 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_231, 0, x_194);
lean_ctor_set(x_231, 1, x_203);
lean_ctor_set(x_231, 2, x_2);
lean_ctor_set(x_231, 3, x_198);
lean_ctor_set(x_231, 4, x_5);
lean_ctor_set_uint8(x_231, sizeof(void*)*5, x_230);
x_232 = lean_unbox(x_201);
lean_dec(x_201);
lean_ctor_set_uint8(x_231, sizeof(void*)*5 + 1, x_232);
x_233 = l_Mathlib_Explode_Entries_add(x_178, x_18, x_231);
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_236 = x_233;
} else {
 lean_dec_ref(x_233);
 x_236 = lean_box(0);
}
x_237 = l_Mathlib_Explode_Entry_line_x21(x_234);
lean_dec(x_234);
x_238 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_238, 0, x_237);
if (lean_is_scalar(x_236)) {
 x_239 = lean_alloc_ctor(1, 2, 0);
} else {
 x_239 = x_236;
 lean_ctor_set_tag(x_239, 1);
}
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_179);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_235);
lean_ctor_set(x_240, 1, x_239);
lean_ctor_set(x_10, 1, x_240);
lean_ctor_set(x_10, 0, x_188);
x_241 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_241, 0, x_10);
x_19 = x_241;
x_20 = x_202;
goto block_27;
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_198);
lean_dec(x_194);
lean_dec(x_188);
lean_dec(x_180);
lean_dec(x_179);
lean_dec(x_178);
lean_free_object(x_10);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_242 = lean_ctor_get(x_200, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_200, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_244 = x_200;
} else {
 lean_dec_ref(x_200);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_244)) {
 x_245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_245 = x_244;
}
lean_ctor_set(x_245, 0, x_242);
lean_ctor_set(x_245, 1, x_243);
return x_245;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_188);
lean_dec(x_180);
lean_dec(x_179);
lean_dec(x_178);
lean_free_object(x_10);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_246 = lean_ctor_get(x_189, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_189, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 x_248 = x_189;
} else {
 lean_dec_ref(x_189);
 x_248 = lean_box(0);
}
if (lean_is_scalar(x_248)) {
 x_249 = lean_alloc_ctor(1, 2, 0);
} else {
 x_249 = x_248;
}
lean_ctor_set(x_249, 0, x_246);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
}
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; uint8_t x_258; 
x_250 = lean_ctor_get(x_10, 1);
x_251 = lean_ctor_get(x_10, 0);
lean_inc(x_250);
lean_inc(x_251);
lean_dec(x_10);
x_252 = lean_ctor_get(x_250, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_250, 1);
lean_inc(x_253);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 x_254 = x_250;
} else {
 lean_dec_ref(x_250);
 x_254 = lean_box(0);
}
x_255 = lean_ctor_get(x_251, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_251, 1);
lean_inc(x_256);
x_257 = lean_ctor_get(x_251, 2);
lean_inc(x_257);
x_258 = lean_nat_dec_lt(x_255, x_256);
if (x_258 == 0)
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_257);
lean_dec(x_256);
lean_dec(x_255);
lean_dec(x_18);
if (lean_is_scalar(x_254)) {
 x_259 = lean_alloc_ctor(0, 2, 0);
} else {
 x_259 = x_254;
}
lean_ctor_set(x_259, 0, x_252);
lean_ctor_set(x_259, 1, x_253);
x_260 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_260, 0, x_251);
lean_ctor_set(x_260, 1, x_259);
x_261 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_261, 0, x_260);
x_19 = x_261;
x_20 = x_15;
goto block_27;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
if (lean_is_exclusive(x_251)) {
 lean_ctor_release(x_251, 0);
 lean_ctor_release(x_251, 1);
 lean_ctor_release(x_251, 2);
 x_262 = x_251;
} else {
 lean_dec_ref(x_251);
 x_262 = lean_box(0);
}
x_263 = lean_nat_add(x_255, x_257);
if (lean_is_scalar(x_262)) {
 x_264 = lean_alloc_ctor(0, 3, 0);
} else {
 x_264 = x_262;
}
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_256);
lean_ctor_set(x_264, 2, x_257);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_265 = lean_infer_type(x_18, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_265) == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_265, 1);
lean_inc(x_267);
lean_dec(x_265);
x_268 = l_Lean_MessageData_ofExpr(x_266);
x_269 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_268, x_11, x_12, x_13, x_14, x_267);
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
lean_dec(x_269);
lean_inc(x_18);
x_272 = l_Lean_MessageData_ofExpr(x_18);
x_273 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_272, x_11, x_12, x_13, x_14, x_271);
x_274 = lean_ctor_get(x_273, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_273, 1);
lean_inc(x_275);
lean_dec(x_273);
lean_inc(x_1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_276 = lean_apply_6(x_1, x_18, x_11, x_12, x_13, x_14, x_275);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
lean_dec(x_276);
x_279 = lean_box(0);
if (x_3 == 0)
{
lean_object* x_280; uint8_t x_281; 
x_280 = lean_unsigned_to_nat(0u);
x_281 = lean_nat_dec_eq(x_255, x_280);
lean_dec(x_255);
if (x_281 == 0)
{
uint8_t x_282; lean_object* x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_282 = 2;
lean_inc(x_5);
lean_inc(x_2);
x_283 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_283, 0, x_270);
lean_ctor_set(x_283, 1, x_279);
lean_ctor_set(x_283, 2, x_2);
lean_ctor_set(x_283, 3, x_274);
lean_ctor_set(x_283, 4, x_5);
lean_ctor_set_uint8(x_283, sizeof(void*)*5, x_282);
x_284 = lean_unbox(x_277);
lean_dec(x_277);
lean_ctor_set_uint8(x_283, sizeof(void*)*5 + 1, x_284);
x_285 = l_Mathlib_Explode_Entries_add(x_252, x_18, x_283);
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_285, 1);
lean_inc(x_287);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_288 = x_285;
} else {
 lean_dec_ref(x_285);
 x_288 = lean_box(0);
}
x_289 = l_Mathlib_Explode_Entry_line_x21(x_286);
lean_dec(x_286);
x_290 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_290, 0, x_289);
if (lean_is_scalar(x_288)) {
 x_291 = lean_alloc_ctor(1, 2, 0);
} else {
 x_291 = x_288;
 lean_ctor_set_tag(x_291, 1);
}
lean_ctor_set(x_291, 0, x_290);
lean_ctor_set(x_291, 1, x_253);
if (lean_is_scalar(x_254)) {
 x_292 = lean_alloc_ctor(0, 2, 0);
} else {
 x_292 = x_254;
}
lean_ctor_set(x_292, 0, x_287);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_264);
lean_ctor_set(x_293, 1, x_292);
x_294 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_294, 0, x_293);
x_19 = x_294;
x_20 = x_278;
goto block_27;
}
else
{
uint8_t x_295; lean_object* x_296; uint8_t x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_295 = 1;
lean_inc(x_5);
lean_inc(x_2);
x_296 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_296, 0, x_270);
lean_ctor_set(x_296, 1, x_279);
lean_ctor_set(x_296, 2, x_2);
lean_ctor_set(x_296, 3, x_274);
lean_ctor_set(x_296, 4, x_5);
lean_ctor_set_uint8(x_296, sizeof(void*)*5, x_295);
x_297 = lean_unbox(x_277);
lean_dec(x_277);
lean_ctor_set_uint8(x_296, sizeof(void*)*5 + 1, x_297);
x_298 = l_Mathlib_Explode_Entries_add(x_252, x_18, x_296);
x_299 = lean_ctor_get(x_298, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_298, 1);
lean_inc(x_300);
if (lean_is_exclusive(x_298)) {
 lean_ctor_release(x_298, 0);
 lean_ctor_release(x_298, 1);
 x_301 = x_298;
} else {
 lean_dec_ref(x_298);
 x_301 = lean_box(0);
}
x_302 = l_Mathlib_Explode_Entry_line_x21(x_299);
lean_dec(x_299);
x_303 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_303, 0, x_302);
if (lean_is_scalar(x_301)) {
 x_304 = lean_alloc_ctor(1, 2, 0);
} else {
 x_304 = x_301;
 lean_ctor_set_tag(x_304, 1);
}
lean_ctor_set(x_304, 0, x_303);
lean_ctor_set(x_304, 1, x_253);
if (lean_is_scalar(x_254)) {
 x_305 = lean_alloc_ctor(0, 2, 0);
} else {
 x_305 = x_254;
}
lean_ctor_set(x_305, 0, x_300);
lean_ctor_set(x_305, 1, x_304);
x_306 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_306, 0, x_264);
lean_ctor_set(x_306, 1, x_305);
x_307 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_307, 0, x_306);
x_19 = x_307;
x_20 = x_278;
goto block_27;
}
}
else
{
uint8_t x_308; lean_object* x_309; uint8_t x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; 
lean_dec(x_255);
x_308 = 0;
lean_inc(x_5);
lean_inc(x_2);
x_309 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_309, 0, x_270);
lean_ctor_set(x_309, 1, x_279);
lean_ctor_set(x_309, 2, x_2);
lean_ctor_set(x_309, 3, x_274);
lean_ctor_set(x_309, 4, x_5);
lean_ctor_set_uint8(x_309, sizeof(void*)*5, x_308);
x_310 = lean_unbox(x_277);
lean_dec(x_277);
lean_ctor_set_uint8(x_309, sizeof(void*)*5 + 1, x_310);
x_311 = l_Mathlib_Explode_Entries_add(x_252, x_18, x_309);
x_312 = lean_ctor_get(x_311, 0);
lean_inc(x_312);
x_313 = lean_ctor_get(x_311, 1);
lean_inc(x_313);
if (lean_is_exclusive(x_311)) {
 lean_ctor_release(x_311, 0);
 lean_ctor_release(x_311, 1);
 x_314 = x_311;
} else {
 lean_dec_ref(x_311);
 x_314 = lean_box(0);
}
x_315 = l_Mathlib_Explode_Entry_line_x21(x_312);
lean_dec(x_312);
x_316 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_316, 0, x_315);
if (lean_is_scalar(x_314)) {
 x_317 = lean_alloc_ctor(1, 2, 0);
} else {
 x_317 = x_314;
 lean_ctor_set_tag(x_317, 1);
}
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_253);
if (lean_is_scalar(x_254)) {
 x_318 = lean_alloc_ctor(0, 2, 0);
} else {
 x_318 = x_254;
}
lean_ctor_set(x_318, 0, x_313);
lean_ctor_set(x_318, 1, x_317);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_264);
lean_ctor_set(x_319, 1, x_318);
x_320 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_320, 0, x_319);
x_19 = x_320;
x_20 = x_278;
goto block_27;
}
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
lean_dec(x_274);
lean_dec(x_270);
lean_dec(x_264);
lean_dec(x_255);
lean_dec(x_254);
lean_dec(x_253);
lean_dec(x_252);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_321 = lean_ctor_get(x_276, 0);
lean_inc(x_321);
x_322 = lean_ctor_get(x_276, 1);
lean_inc(x_322);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_323 = x_276;
} else {
 lean_dec_ref(x_276);
 x_323 = lean_box(0);
}
if (lean_is_scalar(x_323)) {
 x_324 = lean_alloc_ctor(1, 2, 0);
} else {
 x_324 = x_323;
}
lean_ctor_set(x_324, 0, x_321);
lean_ctor_set(x_324, 1, x_322);
return x_324;
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
lean_dec(x_264);
lean_dec(x_255);
lean_dec(x_254);
lean_dec(x_253);
lean_dec(x_252);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_325 = lean_ctor_get(x_265, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_265, 1);
lean_inc(x_326);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_327 = x_265;
} else {
 lean_dec_ref(x_265);
 x_327 = lean_box(0);
}
if (lean_is_scalar(x_327)) {
 x_328 = lean_alloc_ctor(1, 2, 0);
} else {
 x_328 = x_327;
}
lean_ctor_set(x_328, 0, x_325);
lean_ctor_set(x_328, 1, x_326);
return x_328;
}
}
}
block_27:
{
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
else
{
lean_object* x_23; size_t x_24; size_t x_25; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = 1;
x_25 = lean_usize_add(x_9, x_24);
x_9 = x_25;
x_10 = x_23;
x_15 = x_20;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_11 = lean_infer_type(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_MessageData_ofExpr(x_12);
x_15 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_14, x_6, x_7, x_8, x_9, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_1);
x_18 = l_Lean_MessageData_ofExpr(x_1);
x_19 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_18, x_6, x_7, x_8, x_9, x_17);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_1);
x_22 = lean_apply_6(x_2, x_1, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; uint8_t x_31; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_box(0);
x_26 = lean_box(0);
x_27 = 4;
x_28 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_28, 0, x_16);
lean_ctor_set(x_28, 1, x_25);
lean_ctor_set(x_28, 2, x_3);
lean_ctor_set(x_28, 3, x_20);
lean_ctor_set(x_28, 4, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*5, x_27);
x_29 = lean_unbox(x_24);
lean_dec(x_24);
lean_ctor_set_uint8(x_28, sizeof(void*)*5 + 1, x_29);
x_30 = l_Mathlib_Explode_Entries_add(x_4, x_1, x_28);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_30, 0, x_33);
lean_ctor_set(x_22, 0, x_30);
return x_22;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 0);
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_30);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_22, 0, x_37);
return x_22;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_38 = lean_ctor_get(x_22, 0);
x_39 = lean_ctor_get(x_22, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_22);
x_40 = lean_box(0);
x_41 = lean_box(0);
x_42 = 4;
x_43 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_43, 0, x_16);
lean_ctor_set(x_43, 1, x_40);
lean_ctor_set(x_43, 2, x_3);
lean_ctor_set(x_43, 3, x_20);
lean_ctor_set(x_43, 4, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*5, x_42);
x_44 = lean_unbox(x_38);
lean_dec(x_38);
lean_ctor_set_uint8(x_43, sizeof(void*)*5 + 1, x_44);
x_45 = l_Mathlib_Explode_Entries_add(x_4, x_1, x_43);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_46);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_39);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_22);
if (x_52 == 0)
{
return x_22;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_22, 0);
x_54 = lean_ctor_get(x_22, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_22);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_11);
if (x_56 == 0)
{
return x_11;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_11, 0);
x_58 = lean_ctor_get(x_11, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_11);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("∀E", 4, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__3___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__3___closed__2;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = l_Lean_Expr_isConst(x_1);
x_17 = lean_box(0);
x_18 = lean_box(0);
lean_ctor_set(x_7, 1, x_17);
lean_ctor_set(x_7, 0, x_15);
x_19 = lean_array_size(x_2);
x_20 = 0;
if (x_16 == 0)
{
uint8_t x_108; 
x_108 = 0;
x_21 = x_108;
goto block_107;
}
else
{
uint8_t x_109; 
x_109 = 1;
x_21 = x_109;
goto block_107;
}
block_107:
{
lean_object* x_22; 
if (x_21 == 0)
{
lean_object* x_106; 
x_106 = l_Mathlib_Explode_explodeCore_consDep(x_4, x_14, x_17);
x_22 = x_106;
goto block_105;
}
else
{
lean_dec(x_14);
x_22 = x_17;
goto block_105;
}
block_105:
{
lean_object* x_23; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_5);
x_23 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__1(x_3, x_4, x_5, x_2, x_18, x_2, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = l_List_reverse___rarg(x_27);
x_29 = l_List_appendTR___rarg(x_22, x_28);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
x_30 = lean_infer_type(x_6, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_MessageData_ofExpr(x_31);
x_34 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_33, x_8, x_9, x_10, x_11, x_32);
if (x_21 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Mathlib_Explode_explodeCore___lambda__3___closed__3;
x_38 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_37, x_8, x_9, x_10, x_11, x_36);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_box(0);
x_42 = 4;
x_43 = 1;
x_44 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_5);
lean_ctor_set(x_44, 3, x_40);
lean_ctor_set(x_44, 4, x_29);
lean_ctor_set_uint8(x_44, sizeof(void*)*5, x_42);
lean_ctor_set_uint8(x_44, sizeof(void*)*5 + 1, x_43);
x_45 = l_Mathlib_Explode_Entries_add(x_26, x_6, x_44);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_45, 0, x_48);
lean_ctor_set(x_38, 0, x_45);
return x_38;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_49);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
lean_ctor_set(x_38, 0, x_52);
return x_38;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_53 = lean_ctor_get(x_38, 0);
x_54 = lean_ctor_get(x_38, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_38);
x_55 = lean_box(0);
x_56 = 4;
x_57 = 1;
x_58 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_58, 0, x_35);
lean_ctor_set(x_58, 1, x_55);
lean_ctor_set(x_58, 2, x_5);
lean_ctor_set(x_58, 3, x_53);
lean_ctor_set(x_58, 4, x_29);
lean_ctor_set_uint8(x_58, sizeof(void*)*5, x_56);
lean_ctor_set_uint8(x_58, sizeof(void*)*5 + 1, x_57);
x_59 = l_Mathlib_Explode_Entries_add(x_26, x_6, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_62 = x_59;
} else {
 lean_dec_ref(x_59);
 x_62 = lean_box(0);
}
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_60);
if (lean_is_scalar(x_62)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_62;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_61);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_54);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_34, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_34, 1);
lean_inc(x_67);
lean_dec(x_34);
x_68 = l_Lean_MessageData_ofConst(x_1);
x_69 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_68, x_8, x_9, x_10, x_11, x_67);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_box(0);
x_73 = 4;
x_74 = 1;
x_75 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_75, 0, x_66);
lean_ctor_set(x_75, 1, x_72);
lean_ctor_set(x_75, 2, x_5);
lean_ctor_set(x_75, 3, x_71);
lean_ctor_set(x_75, 4, x_29);
lean_ctor_set_uint8(x_75, sizeof(void*)*5, x_73);
lean_ctor_set_uint8(x_75, sizeof(void*)*5 + 1, x_74);
x_76 = l_Mathlib_Explode_Entries_add(x_26, x_6, x_75);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_76, 0);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_76, 0, x_79);
lean_ctor_set(x_69, 0, x_76);
return x_69;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_76, 0);
x_81 = lean_ctor_get(x_76, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_76);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_80);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
lean_ctor_set(x_69, 0, x_83);
return x_69;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_84 = lean_ctor_get(x_69, 0);
x_85 = lean_ctor_get(x_69, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_69);
x_86 = lean_box(0);
x_87 = 4;
x_88 = 1;
x_89 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_89, 0, x_66);
lean_ctor_set(x_89, 1, x_86);
lean_ctor_set(x_89, 2, x_5);
lean_ctor_set(x_89, 3, x_84);
lean_ctor_set(x_89, 4, x_29);
lean_ctor_set_uint8(x_89, sizeof(void*)*5, x_87);
lean_ctor_set_uint8(x_89, sizeof(void*)*5 + 1, x_88);
x_90 = l_Mathlib_Explode_Entries_add(x_26, x_6, x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_93 = x_90;
} else {
 lean_dec_ref(x_90);
 x_93 = lean_box(0);
}
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_91);
if (lean_is_scalar(x_93)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_93;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_92);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_85);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_30);
if (x_97 == 0)
{
return x_30;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_30, 0);
x_99 = lean_ctor_get(x_30, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_30);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_101 = !lean_is_exclusive(x_23);
if (x_101 == 0)
{
return x_23;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_23, 0);
x_103 = lean_ctor_get(x_23, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_23);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
}
}
else
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; size_t x_116; size_t x_117; uint8_t x_118; 
x_110 = lean_ctor_get(x_7, 0);
x_111 = lean_ctor_get(x_7, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_7);
x_112 = l_Lean_Expr_isConst(x_1);
x_113 = lean_box(0);
x_114 = lean_box(0);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_111);
lean_ctor_set(x_115, 1, x_113);
x_116 = lean_array_size(x_2);
x_117 = 0;
if (x_112 == 0)
{
uint8_t x_179; 
x_179 = 0;
x_118 = x_179;
goto block_178;
}
else
{
uint8_t x_180; 
x_180 = 1;
x_118 = x_180;
goto block_178;
}
block_178:
{
lean_object* x_119; 
if (x_118 == 0)
{
lean_object* x_177; 
x_177 = l_Mathlib_Explode_explodeCore_consDep(x_4, x_110, x_113);
x_119 = x_177;
goto block_176;
}
else
{
lean_dec(x_110);
x_119 = x_113;
goto block_176;
}
block_176:
{
lean_object* x_120; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_5);
x_120 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__1(x_3, x_4, x_5, x_2, x_114, x_2, x_116, x_117, x_115, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_121, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_121, 1);
lean_inc(x_124);
lean_dec(x_121);
x_125 = l_List_reverse___rarg(x_124);
x_126 = l_List_appendTR___rarg(x_119, x_125);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
x_127 = lean_infer_type(x_6, x_8, x_9, x_10, x_11, x_122);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = l_Lean_MessageData_ofExpr(x_128);
x_131 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_130, x_8, x_9, x_10, x_11, x_129);
if (x_118 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; uint8_t x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_1);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
x_134 = l_Mathlib_Explode_explodeCore___lambda__3___closed__3;
x_135 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_134, x_8, x_9, x_10, x_11, x_133);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_138 = x_135;
} else {
 lean_dec_ref(x_135);
 x_138 = lean_box(0);
}
x_139 = lean_box(0);
x_140 = 4;
x_141 = 1;
x_142 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_142, 0, x_132);
lean_ctor_set(x_142, 1, x_139);
lean_ctor_set(x_142, 2, x_5);
lean_ctor_set(x_142, 3, x_136);
lean_ctor_set(x_142, 4, x_126);
lean_ctor_set_uint8(x_142, sizeof(void*)*5, x_140);
lean_ctor_set_uint8(x_142, sizeof(void*)*5 + 1, x_141);
x_143 = l_Mathlib_Explode_Entries_add(x_123, x_6, x_142);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_146 = x_143;
} else {
 lean_dec_ref(x_143);
 x_146 = lean_box(0);
}
x_147 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_147, 0, x_144);
if (lean_is_scalar(x_146)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_146;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_145);
if (lean_is_scalar(x_138)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_138;
}
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_137);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; uint8_t x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_150 = lean_ctor_get(x_131, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_131, 1);
lean_inc(x_151);
lean_dec(x_131);
x_152 = l_Lean_MessageData_ofConst(x_1);
x_153 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_152, x_8, x_9, x_10, x_11, x_151);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_156 = x_153;
} else {
 lean_dec_ref(x_153);
 x_156 = lean_box(0);
}
x_157 = lean_box(0);
x_158 = 4;
x_159 = 1;
x_160 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_160, 0, x_150);
lean_ctor_set(x_160, 1, x_157);
lean_ctor_set(x_160, 2, x_5);
lean_ctor_set(x_160, 3, x_154);
lean_ctor_set(x_160, 4, x_126);
lean_ctor_set_uint8(x_160, sizeof(void*)*5, x_158);
lean_ctor_set_uint8(x_160, sizeof(void*)*5 + 1, x_159);
x_161 = l_Mathlib_Explode_Entries_add(x_123, x_6, x_160);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_164 = x_161;
} else {
 lean_dec_ref(x_161);
 x_164 = lean_box(0);
}
x_165 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_165, 0, x_162);
if (lean_is_scalar(x_164)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_164;
}
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_163);
if (lean_is_scalar(x_156)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_156;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_155);
return x_167;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_126);
lean_dec(x_123);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_168 = lean_ctor_get(x_127, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_127, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_170 = x_127;
} else {
 lean_dec_ref(x_127);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(1, 2, 0);
} else {
 x_171 = x_170;
}
lean_ctor_set(x_171, 0, x_168);
lean_ctor_set(x_171, 1, x_169);
return x_171;
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_119);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_172 = lean_ctor_get(x_120, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_120, 1);
lean_inc(x_173);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_174 = x_120;
} else {
 lean_dec_ref(x_120);
 x_174 = lean_box(0);
}
if (lean_is_scalar(x_174)) {
 x_175 = lean_alloc_ctor(1, 2, 0);
} else {
 x_175 = x_174;
}
lean_ctor_set(x_175, 0, x_172);
lean_ctor_set(x_175, 1, x_173);
return x_175;
}
}
}
}
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_12 = l_Lean_Expr_getAppFn(x_1);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_13);
x_15 = l_Mathlib_Explode_explodeCore___lambda__4___closed__1;
lean_inc(x_14);
x_16 = lean_mk_array(x_14, x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_14, x_17);
lean_dec(x_14);
lean_inc(x_1);
x_19 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_16, x_18);
x_20 = l_Lean_Expr_isConst(x_12);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; 
x_21 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_12);
lean_inc(x_2);
x_22 = l_Mathlib_Explode_explodeCore(x_2, x_3, x_12, x_4, x_5, x_21, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Mathlib_Explode_explodeCore___lambda__3(x_12, x_19, x_2, x_3, x_4, x_1, x_23, x_7, x_8, x_9, x_10, x_24);
lean_dec(x_19);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_22);
if (x_26 == 0)
{
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_22, 0);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_22);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_5);
x_32 = l_Mathlib_Explode_explodeCore___lambda__3(x_12, x_19, x_2, x_3, x_4, x_1, x_31, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_19);
return x_32;
}
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("∀I", 4, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__5___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__5___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__5___closed__2;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_14 = lean_box(0);
x_15 = lean_array_get_size(x_7);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_14);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_array_size(x_7);
x_23 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_2);
x_24 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__2(x_2, x_3, x_4, x_7, x_14, x_19, x_7, x_22, x_23, x_21, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
if (x_4 == 0)
{
lean_object* x_83; 
x_83 = lean_nat_add(x_3, x_17);
x_30 = x_83;
goto block_82;
}
else
{
lean_inc(x_3);
x_30 = x_3;
goto block_82;
}
block_82:
{
uint8_t x_31; lean_object* x_32; 
x_31 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_32 = l_Mathlib_Explode_explodeCore(x_2, x_5, x_8, x_30, x_28, x_31, x_9, x_10, x_11, x_12, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = l_Mathlib_Explode_explodeCore_consDep(x_5, x_35, x_29);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
x_38 = lean_infer_type(x_6, x_9, x_10, x_11, x_12, x_34);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_MessageData_ofExpr(x_39);
x_42 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_41, x_9, x_10, x_11, x_12, x_40);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_box(0);
x_46 = l_List_reverse___rarg(x_37);
x_47 = 3;
x_48 = l_Mathlib_Explode_explodeCore___lambda__5___closed__3;
x_49 = 1;
x_50 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_50, 2, x_3);
lean_ctor_set(x_50, 3, x_48);
lean_ctor_set(x_50, 4, x_46);
lean_ctor_set_uint8(x_50, sizeof(void*)*5, x_47);
lean_ctor_set_uint8(x_50, sizeof(void*)*5 + 1, x_49);
x_51 = l_Mathlib_Explode_Entries_add(x_36, x_6, x_50);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_51, 0, x_54);
lean_ctor_set(x_42, 0, x_51);
return x_42;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_51);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
lean_ctor_set(x_42, 0, x_58);
return x_42;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_59 = lean_ctor_get(x_42, 0);
x_60 = lean_ctor_get(x_42, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_42);
x_61 = lean_box(0);
x_62 = l_List_reverse___rarg(x_37);
x_63 = 3;
x_64 = l_Mathlib_Explode_explodeCore___lambda__5___closed__3;
x_65 = 1;
x_66 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_66, 0, x_59);
lean_ctor_set(x_66, 1, x_61);
lean_ctor_set(x_66, 2, x_3);
lean_ctor_set(x_66, 3, x_64);
lean_ctor_set(x_66, 4, x_62);
lean_ctor_set_uint8(x_66, sizeof(void*)*5, x_63);
lean_ctor_set_uint8(x_66, sizeof(void*)*5 + 1, x_65);
x_67 = l_Mathlib_Explode_Entries_add(x_36, x_6, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_68);
if (lean_is_scalar(x_70)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_70;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_69);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_60);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_74 = !lean_is_exclusive(x_38);
if (x_74 == 0)
{
return x_38;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_38, 0);
x_76 = lean_ctor_get(x_38, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_38);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_29);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_78 = !lean_is_exclusive(x_32);
if (x_78 == 0)
{
return x_32;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_32, 0);
x_80 = lean_ctor_get(x_32, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_32);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_84 = !lean_is_exclusive(x_24);
if (x_84 == 0)
{
return x_24;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_24, 0);
x_86 = lean_ctor_get(x_24, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_24);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_13 = lean_box(x_4);
x_14 = lean_box(x_5);
lean_inc(x_6);
x_15 = lean_alloc_closure((void*)(l_Mathlib_Explode_explodeCore___lambda__5___boxed), 13, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_13);
lean_closure_set(x_15, 4, x_14);
lean_closure_set(x_15, 5, x_6);
x_16 = 0;
x_17 = l_Lean_Meta_lambdaTelescope___at___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm___spec__1___rarg(x_6, x_15, x_16, x_8, x_9, x_10, x_11, x_12);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__7(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_1);
x_14 = l_Mathlib_Explode_explodeCore(x_1, x_2, x_3, x_4, x_5, x_13, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_expr_instantiate1(x_6, x_7);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_20; 
lean_dec(x_7);
x_20 = l_Mathlib_Explode_explodeCore(x_1, x_2, x_19, x_4, x_18, x_13, x_8, x_9, x_10, x_11, x_16);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = l_Mathlib_Explode_Entries_addSynonym(x_18, x_7, x_21);
x_23 = l_Mathlib_Explode_explodeCore(x_1, x_2, x_19, x_4, x_22, x_13, x_8, x_9, x_10, x_11, x_16);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__8(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_15 = l_Lean_Expr_cleanupAnnotations(x_1);
x_16 = lean_box(x_3);
x_17 = lean_alloc_closure((void*)(l_Mathlib_Explode_explodeCore___lambda__7___boxed), 12, 6);
lean_closure_set(x_17, 0, x_2);
lean_closure_set(x_17, 1, x_16);
lean_closure_set(x_17, 2, x_4);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_6);
lean_closure_set(x_17, 5, x_7);
x_18 = 0;
x_19 = 0;
x_20 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(x_8, x_18, x_15, x_17, x_19, x_10, x_11, x_12, x_13, x_14);
return x_20;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__9___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" (default handler)", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__9___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".app", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__9___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".lam", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__9___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".letE", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__9___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 5:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_inc(x_2);
x_14 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_2);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_box(0);
x_19 = l_Mathlib_Explode_explodeCore___lambda__4(x_1, x_3, x_6, x_4, x_5, x_18, x_9, x_10, x_11, x_12, x_17);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_dec(x_14);
x_21 = l_Mathlib_Explode_explodeCore___lambda__9___closed__6;
x_22 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_21, x_9, x_10, x_11, x_12, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Mathlib_Explode_explodeCore___lambda__4(x_1, x_3, x_6, x_4, x_5, x_23, x_9, x_10, x_11, x_12, x_24);
lean_dec(x_23);
return x_25;
}
}
case 6:
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_inc(x_2);
x_26 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_9, x_10, x_11, x_12, x_13);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_2);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_box(0);
x_31 = l_Mathlib_Explode_explodeCore___lambda__6(x_5, x_3, x_4, x_7, x_6, x_1, x_30, x_9, x_10, x_11, x_12, x_29);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = l_Mathlib_Explode_explodeCore___lambda__9___closed__8;
x_34 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_33, x_9, x_10, x_11, x_12, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Mathlib_Explode_explodeCore___lambda__6(x_5, x_3, x_4, x_7, x_6, x_1, x_35, x_9, x_10, x_11, x_12, x_36);
lean_dec(x_35);
return x_37;
}
}
case 8:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 3);
lean_inc(x_41);
lean_dec(x_1);
lean_inc(x_2);
x_42 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_9, x_10, x_11, x_12, x_13);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_2);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_box(0);
x_47 = l_Mathlib_Explode_explodeCore___lambda__8(x_39, x_3, x_6, x_40, x_4, x_5, x_41, x_38, x_46, x_9, x_10, x_11, x_12, x_45);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_dec(x_42);
x_49 = l_Mathlib_Explode_explodeCore___lambda__9___closed__10;
x_50 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_49, x_9, x_10, x_11, x_12, x_48);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Mathlib_Explode_explodeCore___lambda__8(x_39, x_3, x_6, x_40, x_4, x_5, x_41, x_38, x_51, x_9, x_10, x_11, x_12, x_52);
lean_dec(x_51);
return x_53;
}
}
default: 
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_inc(x_2);
x_54 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_9, x_10, x_11, x_12, x_13);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_2);
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
x_58 = lean_box(0);
x_59 = l_Mathlib_Explode_explodeCore___lambda__2(x_1, x_3, x_4, x_5, x_58, x_9, x_10, x_11, x_12, x_57);
return x_59;
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_54);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_61 = lean_ctor_get(x_54, 1);
x_62 = lean_ctor_get(x_54, 0);
lean_dec(x_62);
x_63 = l_Lean_Expr_ctorName(x_1);
x_64 = l_Lean_stringToMessageData(x_63);
lean_dec(x_63);
x_65 = l_Mathlib_Explode_explodeCore___lambda__9___closed__2;
lean_ctor_set_tag(x_54, 7);
lean_ctor_set(x_54, 1, x_64);
lean_ctor_set(x_54, 0, x_65);
x_66 = l_Mathlib_Explode_explodeCore___lambda__9___closed__4;
x_67 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_67, 0, x_54);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_67, x_9, x_10, x_11, x_12, x_61);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Mathlib_Explode_explodeCore___lambda__2(x_1, x_3, x_4, x_5, x_69, x_9, x_10, x_11, x_12, x_70);
lean_dec(x_69);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_72 = lean_ctor_get(x_54, 1);
lean_inc(x_72);
lean_dec(x_54);
x_73 = l_Lean_Expr_ctorName(x_1);
x_74 = l_Lean_stringToMessageData(x_73);
lean_dec(x_73);
x_75 = l_Mathlib_Explode_explodeCore___lambda__9___closed__2;
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = l_Mathlib_Explode_explodeCore___lambda__9___closed__4;
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_78, x_9, x_10, x_11, x_12, x_72);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Mathlib_Explode_explodeCore___lambda__2(x_1, x_3, x_4, x_5, x_80, x_9, x_10, x_11, x_12, x_81);
lean_dec(x_80);
return x_82;
}
}
}
}
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("filtered out", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__10___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
x_14 = lean_apply_6(x_1, x_2, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_3);
x_18 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_3, x_9, x_10, x_11, x_12, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_3);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_box(0);
x_23 = l_Mathlib_Explode_explodeCore___lambda__1(x_4, x_22, x_9, x_10, x_11, x_12, x_21);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = l_Mathlib_Explode_explodeCore___lambda__10___closed__2;
x_26 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_25, x_9, x_10, x_11, x_12, x_24);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Mathlib_Explode_explodeCore___lambda__1(x_4, x_27, x_9, x_10, x_11, x_12, x_28);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_dec(x_14);
x_31 = lean_box(0);
x_32 = l_Mathlib_Explode_explodeCore___lambda__9(x_2, x_3, x_1, x_5, x_4, x_6, x_7, x_31, x_9, x_10, x_11, x_12, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_14);
if (x_33 == 0)
{
return x_14;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_14, 0);
x_35 = lean_ctor_get(x_14, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_14);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__12___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("already seen", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___lambda__12___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___lambda__12___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Expr_cleanupAnnotations(x_1);
x_15 = l_Mathlib_Explode_Entries_find_x3f(x_4, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Mathlib_Explode_explodeCore___lambda__10(x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_16, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_2);
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
lean_inc(x_3);
x_19 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_3, x_9, x_10, x_11, x_12, x_13);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_3);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_box(0);
x_24 = l_Mathlib_Explode_explodeCore___lambda__11(x_18, x_4, x_23, x_9, x_10, x_11, x_12, x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = l_Mathlib_Explode_explodeCore___lambda__12___closed__2;
x_27 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_26, x_9, x_10, x_11, x_12, x_25);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Mathlib_Explode_explodeCore___lambda__11(x_18, x_4, x_28, x_9, x_10, x_11, x_12, x_29);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_28);
return x_30;
}
}
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("explode", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Explode_explodeCore___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("depth = ", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", start = ", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", e = ", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("false", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__11;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__12;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("true", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__14;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_explodeCore___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_explodeCore___closed__15;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Mathlib_Explode_explodeCore___closed__2;
x_13 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_12, x_7, x_8, x_9, x_10, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_box(0);
x_18 = l_Mathlib_Explode_explodeCore___lambda__12(x_3, x_1, x_12, x_5, x_4, x_2, x_6, x_17, x_7, x_8, x_9, x_10, x_16);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_13, 1);
x_21 = lean_ctor_get(x_13, 0);
lean_dec(x_21);
lean_inc(x_4);
x_22 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
x_23 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_Lean_MessageData_ofFormat(x_23);
x_25 = l_Mathlib_Explode_explodeCore___closed__4;
lean_ctor_set_tag(x_13, 7);
lean_ctor_set(x_13, 1, x_24);
lean_ctor_set(x_13, 0, x_25);
x_26 = l_Mathlib_Explode_explodeCore___closed__6;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_13);
lean_ctor_set(x_27, 1, x_26);
lean_inc(x_3);
x_28 = l_Lean_MessageData_ofExpr(x_3);
if (x_6 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_29 = l_Mathlib_Explode_explodeCore___closed__13;
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Mathlib_Explode_explodeCore___closed__8;
x_32 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_28);
x_34 = l_Mathlib_Explode_explodeCore___closed__10;
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_12, x_35, x_7, x_8, x_9, x_10, x_20);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Mathlib_Explode_explodeCore___lambda__12(x_3, x_1, x_12, x_5, x_4, x_2, x_6, x_37, x_7, x_8, x_9, x_10, x_38);
lean_dec(x_37);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_40 = l_Mathlib_Explode_explodeCore___closed__16;
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_27);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Mathlib_Explode_explodeCore___closed__8;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_28);
x_45 = l_Mathlib_Explode_explodeCore___closed__10;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_12, x_46, x_7, x_8, x_9, x_10, x_20);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Mathlib_Explode_explodeCore___lambda__12(x_3, x_1, x_12, x_5, x_4, x_2, x_6, x_48, x_7, x_8, x_9, x_10, x_49);
lean_dec(x_48);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_51 = lean_ctor_get(x_13, 1);
lean_inc(x_51);
lean_dec(x_13);
lean_inc(x_4);
x_52 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
x_53 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = l_Lean_MessageData_ofFormat(x_53);
x_55 = l_Mathlib_Explode_explodeCore___closed__4;
x_56 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = l_Mathlib_Explode_explodeCore___closed__6;
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
lean_inc(x_3);
x_59 = l_Lean_MessageData_ofExpr(x_3);
if (x_6 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_60 = l_Mathlib_Explode_explodeCore___closed__13;
x_61 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Mathlib_Explode_explodeCore___closed__8;
x_63 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_59);
x_65 = l_Mathlib_Explode_explodeCore___closed__10;
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_12, x_66, x_7, x_8, x_9, x_10, x_51);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Mathlib_Explode_explodeCore___lambda__12(x_3, x_1, x_12, x_5, x_4, x_2, x_6, x_68, x_7, x_8, x_9, x_10, x_69);
lean_dec(x_68);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_71 = l_Mathlib_Explode_explodeCore___closed__16;
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_58);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_Mathlib_Explode_explodeCore___closed__8;
x_74 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_59);
x_76 = l_Mathlib_Explode_explodeCore___closed__10;
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_12, x_77, x_7, x_8, x_9, x_10, x_51);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = l_Mathlib_Explode_explodeCore___lambda__12(x_3, x_1, x_12, x_5, x_4, x_2, x_6, x_79, x_7, x_8, x_9, x_10, x_80);
lean_dec(x_79);
return x_81;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_17 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_18 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__1(x_1, x_15, x_3, x_4, x_5, x_6, x_16, x_17, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_18 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_19 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Explode_explodeCore___spec__2(x_1, x_2, x_16, x_4, x_5, x_6, x_7, x_17, x_18, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Explode_explodeCore___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Explode_explodeCore___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Mathlib_Explode_explodeCore___lambda__3(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Mathlib_Explode_explodeCore___lambda__4(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = l_Mathlib_Explode_explodeCore___lambda__5(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_7);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Mathlib_Explode_explodeCore___lambda__6(x_1, x_2, x_3, x_13, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_Mathlib_Explode_explodeCore___lambda__7(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_6);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l_Mathlib_Explode_explodeCore___lambda__8(x_1, x_2, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = lean_unbox(x_7);
lean_dec(x_7);
x_16 = l_Mathlib_Explode_explodeCore___lambda__9(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = lean_unbox(x_7);
lean_dec(x_7);
x_16 = l_Mathlib_Explode_explodeCore___lambda__10(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Mathlib_Explode_explodeCore___lambda__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___lambda__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = lean_unbox(x_7);
lean_dec(x_7);
x_16 = l_Mathlib_Explode_explodeCore___lambda__12(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explodeCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_6);
lean_dec(x_6);
x_14 = l_Mathlib_Explode_explodeCore(x_1, x_12, x_3, x_4, x_5, x_13, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = 1;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Lean_Meta_isProof(x_2, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Mathlib_Explode_explode___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Mathlib_Explode_explode___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Explode_explode___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Explode_explode___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Mathlib_Explode_explode___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Explode_explode___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Explode_explode___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_8 = lean_box(x_2);
x_9 = lean_alloc_closure((void*)(l_Mathlib_Explode_explode___lambda__1___boxed), 7, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = 0;
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Mathlib_Explode_explode___closed__4;
x_13 = 1;
x_14 = l_Mathlib_Explode_explodeCore(x_9, x_10, x_1, x_11, x_12, x_13, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Mathlib_Explode_explode___lambda__1(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode_explode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Mathlib_Explode_explode(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Explode", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("command#explode_", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Explode_command_x23explode_____closed__1;
x_2 = l_Mathlib_Explode_command_x23explode_____closed__2;
x_3 = l_Mathlib_Explode_command_x23explode_____closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Explode_command_x23explode_____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("#explode ", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode_command_x23explode_____closed__7;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Explode_command_x23explode_____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Explode_command_x23explode_____closed__10;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Explode_command_x23explode_____closed__6;
x_2 = l_Mathlib_Explode_command_x23explode_____closed__8;
x_3 = l_Mathlib_Explode_command_x23explode_____closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode_____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Explode_command_x23explode_____closed__4;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Explode_command_x23explode_____closed__12;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Explode_command_x23explode__() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Explode_command_x23explode_____closed__13;
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = l_Lean_Expr_isSyntheticSorry(x_11);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; 
x_13 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = l_Mathlib_Explode_explode(x_11, x_13, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Mathlib_Explode_entriesToMessageData(x_15, x_4, x_5, x_6, x_7, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = l_Mathlib_Explode_explodeCore___closed__10;
lean_ctor_set_tag(x_17, 7);
lean_ctor_set(x_17, 1, x_10);
lean_ctor_set(x_17, 0, x_21);
x_22 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2;
lean_ctor_set_tag(x_1, 7);
lean_ctor_set(x_1, 1, x_22);
lean_ctor_set(x_1, 0, x_17);
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_19);
x_24 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_25, x_4, x_5, x_6, x_7, x_20);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = 0;
x_30 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_27, x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_17, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_17);
x_33 = l_Mathlib_Explode_explodeCore___closed__10;
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_10);
x_35 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2;
lean_ctor_set_tag(x_1, 7);
lean_ctor_set(x_1, 1, x_35);
lean_ctor_set(x_1, 0, x_34);
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_1);
lean_ctor_set(x_36, 1, x_31);
x_37 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_38, x_4, x_5, x_6, x_7, x_32);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = 0;
x_43 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_40, x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_free_object(x_1);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_14);
if (x_44 == 0)
{
return x_14;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_14, 0);
x_46 = lean_ctor_get(x_14, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_14);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_48 = lean_box(0);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_48);
return x_1;
}
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_1, 0);
x_50 = lean_ctor_get(x_1, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_1);
x_51 = l_Lean_Expr_isSyntheticSorry(x_50);
if (x_51 == 0)
{
uint8_t x_52; lean_object* x_53; 
x_52 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_53 = l_Mathlib_Explode_explode(x_50, x_52, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Mathlib_Explode_entriesToMessageData(x_54, x_4, x_5, x_6, x_7, x_55);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
x_60 = l_Mathlib_Explode_explodeCore___closed__10;
if (lean_is_scalar(x_59)) {
 x_61 = lean_alloc_ctor(7, 2, 0);
} else {
 x_61 = x_59;
 lean_ctor_set_tag(x_61, 7);
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_49);
x_62 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2;
x_63 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_57);
x_65 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4;
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_66, x_4, x_5, x_6, x_7, x_58);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = 0;
x_71 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_68, x_70, x_2, x_3, x_4, x_5, x_6, x_7, x_69);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_49);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_72 = lean_ctor_get(x_53, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_53, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_74 = x_53;
} else {
 lean_dec_ref(x_53);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_8);
return x_77;
}
}
}
}
LEAN_EXPORT uint8_t l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__2(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" : ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__9() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__8;
x_3 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__7;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__6;
x_2 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__9;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_101; 
x_10 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__1;
x_11 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_101 = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(x_1, x_11, x_7, x_8, x_9);
if (lean_obj_tag(x_101) == 0)
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_103 = lean_ctor_get(x_101, 0);
x_104 = lean_ctor_get(x_101, 1);
x_105 = 0;
x_106 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__10;
lean_inc(x_103);
lean_inc(x_1);
x_107 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_107, 0, x_1);
lean_ctor_set(x_107, 1, x_103);
lean_ctor_set(x_107, 2, x_106);
lean_ctor_set(x_107, 3, x_11);
lean_ctor_set_uint8(x_107, sizeof(void*)*4, x_105);
x_108 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_107, x_3, x_4, x_5, x_6, x_7, x_8, x_104);
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_108, 1);
x_111 = lean_ctor_get(x_108, 0);
lean_dec(x_111);
lean_inc(x_3);
lean_inc(x_103);
x_112 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_103, x_3, x_4, x_5, x_6, x_7, x_8, x_110);
if (lean_obj_tag(x_112) == 0)
{
uint8_t x_113; 
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_112);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_114 = lean_ctor_get(x_112, 0);
x_115 = lean_ctor_get(x_112, 1);
x_116 = l_Lean_ConstantInfo_levelParams(x_114);
x_117 = lean_box(0);
x_118 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_116, x_117);
x_119 = l_Lean_Expr_const___override(x_103, x_118);
x_120 = l_Lean_MessageData_ofConst(x_119);
x_121 = l_Mathlib_Explode_explodeCore___closed__10;
lean_ctor_set_tag(x_112, 7);
lean_ctor_set(x_112, 1, x_120);
lean_ctor_set(x_112, 0, x_121);
x_122 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
lean_ctor_set_tag(x_108, 7);
lean_ctor_set(x_108, 1, x_122);
lean_ctor_set(x_108, 0, x_112);
x_123 = l_Lean_ConstantInfo_type(x_114);
x_124 = l_Lean_MessageData_ofExpr(x_123);
lean_ctor_set_tag(x_101, 7);
lean_ctor_set(x_101, 1, x_124);
lean_ctor_set(x_101, 0, x_108);
x_125 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_125, 0, x_101);
lean_ctor_set(x_125, 1, x_121);
x_126 = l_Lean_ConstantInfo_value_x21(x_114, x_105);
lean_dec(x_114);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_apply_8(x_10, x_127, x_3, x_4, x_5, x_6, x_7, x_8, x_115);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_129 = lean_ctor_get(x_112, 0);
x_130 = lean_ctor_get(x_112, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_112);
x_131 = l_Lean_ConstantInfo_levelParams(x_129);
x_132 = lean_box(0);
x_133 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_131, x_132);
x_134 = l_Lean_Expr_const___override(x_103, x_133);
x_135 = l_Lean_MessageData_ofConst(x_134);
x_136 = l_Mathlib_Explode_explodeCore___closed__10;
x_137 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
x_138 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
lean_ctor_set_tag(x_108, 7);
lean_ctor_set(x_108, 1, x_138);
lean_ctor_set(x_108, 0, x_137);
x_139 = l_Lean_ConstantInfo_type(x_129);
x_140 = l_Lean_MessageData_ofExpr(x_139);
lean_ctor_set_tag(x_101, 7);
lean_ctor_set(x_101, 1, x_140);
lean_ctor_set(x_101, 0, x_108);
x_141 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_141, 0, x_101);
lean_ctor_set(x_141, 1, x_136);
x_142 = l_Lean_ConstantInfo_value_x21(x_129, x_105);
lean_dec(x_129);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_apply_8(x_10, x_143, x_3, x_4, x_5, x_6, x_7, x_8, x_130);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_free_object(x_108);
lean_free_object(x_101);
lean_dec(x_103);
x_145 = lean_ctor_get(x_112, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_112, 1);
lean_inc(x_146);
lean_dec(x_112);
x_12 = x_145;
x_13 = x_146;
goto block_100;
}
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_108, 1);
lean_inc(x_147);
lean_dec(x_108);
lean_inc(x_3);
lean_inc(x_103);
x_148 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_103, x_3, x_4, x_5, x_6, x_7, x_8, x_147);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_1);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_151 = x_148;
} else {
 lean_dec_ref(x_148);
 x_151 = lean_box(0);
}
x_152 = l_Lean_ConstantInfo_levelParams(x_149);
x_153 = lean_box(0);
x_154 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_152, x_153);
x_155 = l_Lean_Expr_const___override(x_103, x_154);
x_156 = l_Lean_MessageData_ofConst(x_155);
x_157 = l_Mathlib_Explode_explodeCore___closed__10;
if (lean_is_scalar(x_151)) {
 x_158 = lean_alloc_ctor(7, 2, 0);
} else {
 x_158 = x_151;
 lean_ctor_set_tag(x_158, 7);
}
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_156);
x_159 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
x_160 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
x_161 = l_Lean_ConstantInfo_type(x_149);
x_162 = l_Lean_MessageData_ofExpr(x_161);
lean_ctor_set_tag(x_101, 7);
lean_ctor_set(x_101, 1, x_162);
lean_ctor_set(x_101, 0, x_160);
x_163 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_163, 0, x_101);
lean_ctor_set(x_163, 1, x_157);
x_164 = l_Lean_ConstantInfo_value_x21(x_149, x_105);
lean_dec(x_149);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_apply_8(x_10, x_165, x_3, x_4, x_5, x_6, x_7, x_8, x_150);
return x_166;
}
else
{
lean_object* x_167; lean_object* x_168; 
lean_free_object(x_101);
lean_dec(x_103);
x_167 = lean_ctor_get(x_148, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_148, 1);
lean_inc(x_168);
lean_dec(x_148);
x_12 = x_167;
x_13 = x_168;
goto block_100;
}
}
}
else
{
lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_169 = lean_ctor_get(x_101, 0);
x_170 = lean_ctor_get(x_101, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_101);
x_171 = 0;
x_172 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__10;
lean_inc(x_169);
lean_inc(x_1);
x_173 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_173, 0, x_1);
lean_ctor_set(x_173, 1, x_169);
lean_ctor_set(x_173, 2, x_172);
lean_ctor_set(x_173, 3, x_11);
lean_ctor_set_uint8(x_173, sizeof(void*)*4, x_171);
x_174 = l_Lean_Elab_addCompletionInfo___at_Lean_Elab_Term_addDotCompletionInfo___spec__1(x_173, x_3, x_4, x_5, x_6, x_7, x_8, x_170);
x_175 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_176 = x_174;
} else {
 lean_dec_ref(x_174);
 x_176 = lean_box(0);
}
lean_inc(x_3);
lean_inc(x_169);
x_177 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_169, x_3, x_4, x_5, x_6, x_7, x_8, x_175);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_1);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_180 = x_177;
} else {
 lean_dec_ref(x_177);
 x_180 = lean_box(0);
}
x_181 = l_Lean_ConstantInfo_levelParams(x_178);
x_182 = lean_box(0);
x_183 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_181, x_182);
x_184 = l_Lean_Expr_const___override(x_169, x_183);
x_185 = l_Lean_MessageData_ofConst(x_184);
x_186 = l_Mathlib_Explode_explodeCore___closed__10;
if (lean_is_scalar(x_180)) {
 x_187 = lean_alloc_ctor(7, 2, 0);
} else {
 x_187 = x_180;
 lean_ctor_set_tag(x_187, 7);
}
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_185);
x_188 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
if (lean_is_scalar(x_176)) {
 x_189 = lean_alloc_ctor(7, 2, 0);
} else {
 x_189 = x_176;
 lean_ctor_set_tag(x_189, 7);
}
lean_ctor_set(x_189, 0, x_187);
lean_ctor_set(x_189, 1, x_188);
x_190 = l_Lean_ConstantInfo_type(x_178);
x_191 = l_Lean_MessageData_ofExpr(x_190);
x_192 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_192, 0, x_189);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_186);
x_194 = l_Lean_ConstantInfo_value_x21(x_178, x_171);
lean_dec(x_178);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_apply_8(x_10, x_195, x_3, x_4, x_5, x_6, x_7, x_8, x_179);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; 
lean_dec(x_176);
lean_dec(x_169);
x_197 = lean_ctor_get(x_177, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_177, 1);
lean_inc(x_198);
lean_dec(x_177);
x_12 = x_197;
x_13 = x_198;
goto block_100;
}
}
}
else
{
lean_object* x_199; lean_object* x_200; 
x_199 = lean_ctor_get(x_101, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_101, 1);
lean_inc(x_200);
lean_dec(x_101);
x_12 = x_199;
x_13 = x_200;
goto block_100;
}
block_100:
{
uint8_t x_14; 
x_14 = l_Lean_Exception_isInterrupt(x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Exception_isRuntime(x_12);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
lean_dec(x_12);
x_16 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l_Lean_Elab_Term_elabTerm(x_1, x_11, x_16, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = l_Lean_Elab_Term_synthesizeSyntheticMVars(x_20, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
x_28 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__2;
x_29 = l_Lean_Elab_Term_levelMVarToParam(x_26, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_33 = lean_infer_type(x_31, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_31);
x_36 = l_Lean_MessageData_ofExpr(x_31);
x_37 = l_Mathlib_Explode_explodeCore___closed__10;
lean_ctor_set_tag(x_29, 7);
lean_ctor_set(x_29, 1, x_36);
lean_ctor_set(x_29, 0, x_37);
x_38 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
lean_ctor_set_tag(x_24, 7);
lean_ctor_set(x_24, 1, x_38);
lean_ctor_set(x_24, 0, x_29);
x_39 = l_Lean_MessageData_ofExpr(x_34);
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_24);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_31);
x_43 = lean_apply_8(x_10, x_42, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
return x_43;
}
else
{
uint8_t x_44; 
lean_free_object(x_29);
lean_dec(x_31);
lean_free_object(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_33);
if (x_44 == 0)
{
return x_33;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_33, 0);
x_46 = lean_ctor_get(x_33, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_33);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_29, 0);
x_49 = lean_ctor_get(x_29, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_29);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_48);
x_50 = lean_infer_type(x_48, x_5, x_6, x_7, x_8, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
lean_inc(x_48);
x_53 = l_Lean_MessageData_ofExpr(x_48);
x_54 = l_Mathlib_Explode_explodeCore___closed__10;
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
lean_ctor_set_tag(x_24, 7);
lean_ctor_set(x_24, 1, x_56);
lean_ctor_set(x_24, 0, x_55);
x_57 = l_Lean_MessageData_ofExpr(x_51);
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_24);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_54);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_48);
x_61 = lean_apply_8(x_10, x_60, x_3, x_4, x_5, x_6, x_7, x_8, x_52);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_48);
lean_free_object(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_62 = lean_ctor_get(x_50, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_50, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_64 = x_50;
} else {
 lean_dec_ref(x_50);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_66 = lean_ctor_get(x_24, 0);
x_67 = lean_ctor_get(x_24, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_24);
x_68 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__2;
x_69 = l_Lean_Elab_Term_levelMVarToParam(x_66, x_68, x_3, x_4, x_5, x_6, x_7, x_8, x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_72 = x_69;
} else {
 lean_dec_ref(x_69);
 x_72 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_70);
x_73 = lean_infer_type(x_70, x_5, x_6, x_7, x_8, x_71);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
lean_inc(x_70);
x_76 = l_Lean_MessageData_ofExpr(x_70);
x_77 = l_Mathlib_Explode_explodeCore___closed__10;
if (lean_is_scalar(x_72)) {
 x_78 = lean_alloc_ctor(7, 2, 0);
} else {
 x_78 = x_72;
 lean_ctor_set_tag(x_78, 7);
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4;
x_80 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Lean_MessageData_ofExpr(x_74);
x_82 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_77);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_70);
x_85 = lean_apply_8(x_10, x_84, x_3, x_4, x_5, x_6, x_7, x_8, x_75);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_72);
lean_dec(x_70);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_86 = lean_ctor_get(x_73, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_73, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_88 = x_73;
} else {
 lean_dec_ref(x_73);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_90 = !lean_is_exclusive(x_22);
if (x_90 == 0)
{
return x_22;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_22, 0);
x_92 = lean_ctor_get(x_22, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_22);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_94 = !lean_is_exclusive(x_17);
if (x_94 == 0)
{
return x_17;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_17, 0);
x_96 = lean_ctor_get(x_17, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_17);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
lean_object* x_98; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_12);
lean_ctor_set(x_98, 1, x_13);
return x_98;
}
}
else
{
lean_object* x_99; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_12);
lean_ctor_set(x_99, 1, x_13);
return x_99;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Mathlib_Explode_command_x23explode_____closed__4;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Linter_UnusedTactic___aux__Mathlib__Tactic__Linter__UnusedTacticExtension______elabRules__Mathlib__Linter__UnusedTactic__command_x23allow__unused__tactic_x21________1___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = lean_alloc_closure((void*)(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___boxed), 9, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_st_ref_get(x_3, x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Command_runTermElabM___rarg(x_10, x_2, x_3, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_setEnv___at_Lean_Elab_Command_runLintersAsync___spec__1(x_14, x_2, x_3, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_dec(x_15);
x_25 = l_Lean_setEnv___at_Lean_Elab_Command_runLintersAsync___spec__1(x_14, x_2, x_3, x_24);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set_tag(x_25, 1);
lean_ctor_set(x_25, 0, x_23);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__2___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__2(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Explode_Datatypes(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Explode_Pretty(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Explode(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Explode_Datatypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Explode_Pretty(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Explode_explodeCore___lambda__3___closed__1 = _init_l_Mathlib_Explode_explodeCore___lambda__3___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__3___closed__1);
l_Mathlib_Explode_explodeCore___lambda__3___closed__2 = _init_l_Mathlib_Explode_explodeCore___lambda__3___closed__2();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__3___closed__2);
l_Mathlib_Explode_explodeCore___lambda__3___closed__3 = _init_l_Mathlib_Explode_explodeCore___lambda__3___closed__3();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__3___closed__3);
l_Mathlib_Explode_explodeCore___lambda__4___closed__1 = _init_l_Mathlib_Explode_explodeCore___lambda__4___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__4___closed__1);
l_Mathlib_Explode_explodeCore___lambda__5___closed__1 = _init_l_Mathlib_Explode_explodeCore___lambda__5___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__5___closed__1);
l_Mathlib_Explode_explodeCore___lambda__5___closed__2 = _init_l_Mathlib_Explode_explodeCore___lambda__5___closed__2();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__5___closed__2);
l_Mathlib_Explode_explodeCore___lambda__5___closed__3 = _init_l_Mathlib_Explode_explodeCore___lambda__5___closed__3();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__5___closed__3);
l_Mathlib_Explode_explodeCore___lambda__9___closed__1 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__1);
l_Mathlib_Explode_explodeCore___lambda__9___closed__2 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__2();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__2);
l_Mathlib_Explode_explodeCore___lambda__9___closed__3 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__3();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__3);
l_Mathlib_Explode_explodeCore___lambda__9___closed__4 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__4();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__4);
l_Mathlib_Explode_explodeCore___lambda__9___closed__5 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__5();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__5);
l_Mathlib_Explode_explodeCore___lambda__9___closed__6 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__6();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__6);
l_Mathlib_Explode_explodeCore___lambda__9___closed__7 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__7();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__7);
l_Mathlib_Explode_explodeCore___lambda__9___closed__8 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__8();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__8);
l_Mathlib_Explode_explodeCore___lambda__9___closed__9 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__9();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__9);
l_Mathlib_Explode_explodeCore___lambda__9___closed__10 = _init_l_Mathlib_Explode_explodeCore___lambda__9___closed__10();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__9___closed__10);
l_Mathlib_Explode_explodeCore___lambda__10___closed__1 = _init_l_Mathlib_Explode_explodeCore___lambda__10___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__10___closed__1);
l_Mathlib_Explode_explodeCore___lambda__10___closed__2 = _init_l_Mathlib_Explode_explodeCore___lambda__10___closed__2();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__10___closed__2);
l_Mathlib_Explode_explodeCore___lambda__12___closed__1 = _init_l_Mathlib_Explode_explodeCore___lambda__12___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__12___closed__1);
l_Mathlib_Explode_explodeCore___lambda__12___closed__2 = _init_l_Mathlib_Explode_explodeCore___lambda__12___closed__2();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___lambda__12___closed__2);
l_Mathlib_Explode_explodeCore___closed__1 = _init_l_Mathlib_Explode_explodeCore___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__1);
l_Mathlib_Explode_explodeCore___closed__2 = _init_l_Mathlib_Explode_explodeCore___closed__2();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__2);
l_Mathlib_Explode_explodeCore___closed__3 = _init_l_Mathlib_Explode_explodeCore___closed__3();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__3);
l_Mathlib_Explode_explodeCore___closed__4 = _init_l_Mathlib_Explode_explodeCore___closed__4();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__4);
l_Mathlib_Explode_explodeCore___closed__5 = _init_l_Mathlib_Explode_explodeCore___closed__5();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__5);
l_Mathlib_Explode_explodeCore___closed__6 = _init_l_Mathlib_Explode_explodeCore___closed__6();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__6);
l_Mathlib_Explode_explodeCore___closed__7 = _init_l_Mathlib_Explode_explodeCore___closed__7();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__7);
l_Mathlib_Explode_explodeCore___closed__8 = _init_l_Mathlib_Explode_explodeCore___closed__8();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__8);
l_Mathlib_Explode_explodeCore___closed__9 = _init_l_Mathlib_Explode_explodeCore___closed__9();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__9);
l_Mathlib_Explode_explodeCore___closed__10 = _init_l_Mathlib_Explode_explodeCore___closed__10();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__10);
l_Mathlib_Explode_explodeCore___closed__11 = _init_l_Mathlib_Explode_explodeCore___closed__11();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__11);
l_Mathlib_Explode_explodeCore___closed__12 = _init_l_Mathlib_Explode_explodeCore___closed__12();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__12);
l_Mathlib_Explode_explodeCore___closed__13 = _init_l_Mathlib_Explode_explodeCore___closed__13();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__13);
l_Mathlib_Explode_explodeCore___closed__14 = _init_l_Mathlib_Explode_explodeCore___closed__14();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__14);
l_Mathlib_Explode_explodeCore___closed__15 = _init_l_Mathlib_Explode_explodeCore___closed__15();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__15);
l_Mathlib_Explode_explodeCore___closed__16 = _init_l_Mathlib_Explode_explodeCore___closed__16();
lean_mark_persistent(l_Mathlib_Explode_explodeCore___closed__16);
l_Mathlib_Explode_explode___closed__1 = _init_l_Mathlib_Explode_explode___closed__1();
lean_mark_persistent(l_Mathlib_Explode_explode___closed__1);
l_Mathlib_Explode_explode___closed__2 = _init_l_Mathlib_Explode_explode___closed__2();
lean_mark_persistent(l_Mathlib_Explode_explode___closed__2);
l_Mathlib_Explode_explode___closed__3 = _init_l_Mathlib_Explode_explode___closed__3();
lean_mark_persistent(l_Mathlib_Explode_explode___closed__3);
l_Mathlib_Explode_explode___closed__4 = _init_l_Mathlib_Explode_explode___closed__4();
lean_mark_persistent(l_Mathlib_Explode_explode___closed__4);
l_Mathlib_Explode_command_x23explode_____closed__1 = _init_l_Mathlib_Explode_command_x23explode_____closed__1();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__1);
l_Mathlib_Explode_command_x23explode_____closed__2 = _init_l_Mathlib_Explode_command_x23explode_____closed__2();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__2);
l_Mathlib_Explode_command_x23explode_____closed__3 = _init_l_Mathlib_Explode_command_x23explode_____closed__3();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__3);
l_Mathlib_Explode_command_x23explode_____closed__4 = _init_l_Mathlib_Explode_command_x23explode_____closed__4();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__4);
l_Mathlib_Explode_command_x23explode_____closed__5 = _init_l_Mathlib_Explode_command_x23explode_____closed__5();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__5);
l_Mathlib_Explode_command_x23explode_____closed__6 = _init_l_Mathlib_Explode_command_x23explode_____closed__6();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__6);
l_Mathlib_Explode_command_x23explode_____closed__7 = _init_l_Mathlib_Explode_command_x23explode_____closed__7();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__7);
l_Mathlib_Explode_command_x23explode_____closed__8 = _init_l_Mathlib_Explode_command_x23explode_____closed__8();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__8);
l_Mathlib_Explode_command_x23explode_____closed__9 = _init_l_Mathlib_Explode_command_x23explode_____closed__9();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__9);
l_Mathlib_Explode_command_x23explode_____closed__10 = _init_l_Mathlib_Explode_command_x23explode_____closed__10();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__10);
l_Mathlib_Explode_command_x23explode_____closed__11 = _init_l_Mathlib_Explode_command_x23explode_____closed__11();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__11);
l_Mathlib_Explode_command_x23explode_____closed__12 = _init_l_Mathlib_Explode_command_x23explode_____closed__12();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__12);
l_Mathlib_Explode_command_x23explode_____closed__13 = _init_l_Mathlib_Explode_command_x23explode_____closed__13();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode_____closed__13);
l_Mathlib_Explode_command_x23explode__ = _init_l_Mathlib_Explode_command_x23explode__();
lean_mark_persistent(l_Mathlib_Explode_command_x23explode__);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__1 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__1);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__2);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__3 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__3();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__3);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__1___closed__4);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__1 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__1();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__1);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__2 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__2();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__2);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__3 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__3();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__3);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__4);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__5 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__5();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__5);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__6 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__6();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__6);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__7 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__7();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__7);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__8 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__8();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__8);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__9 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__9();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__9);
l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__10 = _init_l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__10();
lean_mark_persistent(l_Mathlib_Explode___aux__Mathlib__Tactic__Explode______elabRules__Mathlib__Explode__command_x23explode____1___lambda__3___closed__10);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
