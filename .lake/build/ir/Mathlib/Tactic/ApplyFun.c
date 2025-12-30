// Lean compiler output
// Module: Mathlib.Tactic.ApplyFun
// Imports: Init Mathlib.Lean.Expr.Basic Mathlib.Order.Monotone.Basic Mathlib.Order.Hom.Basic
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
static lean_object* l_Mathlib_Tactic_applyFun___closed__6;
lean_object* l_Lean_MVarId_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__9;
static lean_object* l_Mathlib_Tactic_applyFun___closed__7;
static lean_object* l_Mathlib_Tactic_maybeProveInjective___closed__2;
static lean_object* l_Mathlib_Tactic_applyFunTargetFailure___closed__3;
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__14;
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__11;
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__8;
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__14;
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__2;
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__5;
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__11;
static lean_object* l_Mathlib_Tactic_applyFun___closed__19;
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__1;
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__4;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_location;
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__6;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__8;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__8;
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__9;
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__12;
static lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__1;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__2;
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__3;
lean_object* l_Lean_MVarId_assign___at_Lean_MVarId_renameInaccessibleFVars___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__4;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__6;
static lean_object* l_Mathlib_Tactic_applyFun___closed__5;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__3;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__16;
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__4;
static lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__4;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__12;
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__15;
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__12;
static lean_object* l_Mathlib_Tactic_applyFun___closed__12;
static lean_object* l_Mathlib_Tactic_applyFun___closed__15;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13;
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__11;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__PermuteGoals______elabRules__Batteries__Tactic__tacticPick__goal_x2d____1___spec__1___rarg(lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__17;
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__4;
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__1;
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__1;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__1;
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5;
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__17;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__9;
static lean_object* l_Mathlib_Tactic_applyFun___closed__3;
static lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__2;
lean_object* l_Lean_FVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__1;
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__7;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__3;
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__4;
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_Ext_applyExtTheoremAt___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__6;
lean_object* l_Lean_MVarId_note(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__6;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__11;
static lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__3;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__2;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_maybeProveInjective___closed__1;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__9;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkOptionalNode(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__3;
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__18;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__3;
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__10;
lean_object* l_Lean_MVarId_assign___at_Lean_Elab_Term_exprToSyntax___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTargetFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__20;
lean_object* l_Lean_MVarId_congrN_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__16;
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1;
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Elab_Tactic_runTermElab___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__7;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__15;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5_(lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__10;
static lean_object* l_Mathlib_Tactic_applyFun___closed__13;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__10;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__13;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__12;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__2;
lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__17;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__1;
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__2;
static lean_object* l_Mathlib_Tactic_applyFun___closed__11;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__9;
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at_Mathlib_Tactic_maybeProveInjective___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__10;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__10;
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__16;
static lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__2;
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__8;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFun___closed__18;
static lean_object* l_Mathlib_Tactic_applyFun___closed__8;
lean_object* lean_array_mk(lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__2;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__2;
lean_object* l_Lean_Meta_mkFreshTypeMVar(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___closed__5;
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTargetFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5;
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__7;
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__7;
static lean_object* l_Mathlib_Tactic_applyFunTargetFailure___closed__1;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__5;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTargetFailure___closed__2;
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__3;
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTargetFailure___closed__4;
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
static lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFun;
static lean_object* l_Mathlib_Tactic_applyFun___closed__1;
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunHyp___closed__2;
lean_object* l_String_toSubstring_x27(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__1;
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__4;
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13;
static lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3;
static lean_object* l_Mathlib_Tactic_applyFun___closed__14;
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("apply_fun", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__4;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("initFn", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__6;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__8;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__10;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__11;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ApplyFun", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__12;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__14;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__16;
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
x_3 = 0;
x_4 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__17;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_16 = l_Lean_MVarId_clear(x_1, x_2, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_LocalDecl_userName(x_3);
x_20 = lean_box(0);
x_21 = l_Lean_MVarId_note(x_17, x_19, x_14, x_20, x_9, x_10, x_11, x_12, x_18);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 1);
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 0, x_25);
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_15);
lean_ctor_set(x_21, 0, x_28);
return x_21;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_21, 0);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_21);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(1, 2, 0);
} else {
 x_33 = x_32;
 lean_ctor_set_tag(x_33, 1);
}
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_15);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_15);
x_35 = !lean_is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_21, 0);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_21);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_39 = !lean_is_exclusive(x_16);
if (x_39 == 0)
{
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_16, 0);
x_41 = lean_ctor_get(x_16, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_16);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Function", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Injective", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ne", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__1;
x_2 = l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__2;
x_3 = l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_array_mk(x_17);
x_19 = l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__4;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_20 = l_Lean_Meta_mkAppM(x_19, x_18, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_LocalDecl_toExpr(x_1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_16);
x_25 = lean_array_mk(x_24);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_26 = l_Lean_Meta_mkAppM_x27(x_21, x_25, x_8, x_9, x_10, x_11, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_ctor_set(x_3, 0, x_27);
x_29 = lean_apply_10(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_28);
return x_29;
}
else
{
uint8_t x_30; 
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_26);
if (x_30 == 0)
{
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_26, 0);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_26);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_3);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_array_mk(x_41);
x_43 = l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__4;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_44 = l_Lean_Meta_mkAppM(x_43, x_42, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_LocalDecl_toExpr(x_1);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_40);
x_49 = lean_array_mk(x_48);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_50 = l_Lean_Meta_mkAppM_x27(x_45, x_49, x_8, x_9, x_10, x_11, x_46);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_39);
x_54 = lean_apply_10(x_2, x_53, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_52);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_55 = lean_ctor_get(x_50, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_57 = x_50;
} else {
 lean_dec_ref(x_50);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_39);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_59 = lean_ctor_get(x_44, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_44, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_61 = x_44;
} else {
 lean_dec_ref(x_44);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_headBeta(x_1);
x_12 = l_Lean_Expr_headBeta(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Meta_mkEq(x_11, x_12, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
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
uint8_t x_19; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("In generated equality, right-hand side ", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_13 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_12, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_3);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_array_mk(x_18);
x_20 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1;
x_21 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_14);
x_22 = l_Lean_Elab_Term_elabAppArgs(x_14, x_20, x_19, x_2, x_21, x_21, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_4);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_16);
x_27 = lean_array_mk(x_26);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_28 = l_Lean_Elab_Term_elabAppArgs(x_14, x_20, x_27, x_2, x_21, x_21, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_23);
x_31 = lean_infer_type(x_23, x_7, x_8, x_9, x_10, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_29);
x_34 = lean_infer_type(x_29, x_7, x_8, x_9, x_10, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_37 = l_Lean_Meta_isExprDefEq(x_32, x_35, x_7, x_8, x_9, x_10, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_41 = lean_infer_type(x_29, x_7, x_8, x_9, x_10, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_44 = lean_infer_type(x_23, x_7, x_8, x_9, x_10, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_47 = l_Lean_Meta_mkHasTypeButIsExpectedMsg(x_42, x_45, x_7, x_8, x_9, x_10, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__3;
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
x_52 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__5;
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_49);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
return x_54;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_54);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
uint8_t x_59; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_59 = !lean_is_exclusive(x_47);
if (x_59 == 0)
{
return x_47;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_47, 0);
x_61 = lean_ctor_get(x_47, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_47);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_42);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_63 = !lean_is_exclusive(x_44);
if (x_63 == 0)
{
return x_44;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_44, 0);
x_65 = lean_ctor_get(x_44, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_44);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_67 = !lean_is_exclusive(x_41);
if (x_67 == 0)
{
return x_41;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_41, 0);
x_69 = lean_ctor_get(x_41, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_41);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_37, 1);
lean_inc(x_71);
lean_dec(x_37);
x_72 = lean_box(0);
x_73 = l_Mathlib_Tactic_applyFunHyp___lambda__3(x_23, x_29, x_72, x_5, x_6, x_7, x_8, x_9, x_10, x_71);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_74 = !lean_is_exclusive(x_37);
if (x_74 == 0)
{
return x_37;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_37, 0);
x_76 = lean_ctor_get(x_37, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_37);
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
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_78 = !lean_is_exclusive(x_34);
if (x_78 == 0)
{
return x_34;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_34, 0);
x_80 = lean_ctor_get(x_34, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_34);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_82 = !lean_is_exclusive(x_31);
if (x_82 == 0)
{
return x_31;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_31, 0);
x_84 = lean_ctor_get(x_31, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_31);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_86 = !lean_is_exclusive(x_28);
if (x_86 == 0)
{
return x_28;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_28, 0);
x_88 = lean_ctor_get(x_28, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_28);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
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
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_94 = !lean_is_exclusive(x_13);
if (x_94 == 0)
{
return x_13;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_13, 0);
x_96 = lean_ctor_get(x_13, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_13);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = l_Lean_LocalDecl_toExpr(x_1);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_array_mk(x_18);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_20 = l_Lean_Meta_mkAppM_x27(x_14, x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_ctor_set(x_3, 0, x_21);
x_23 = lean_apply_10(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_22);
return x_23;
}
else
{
uint8_t x_24; 
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 0);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_20);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_3, 0);
x_29 = lean_ctor_get(x_3, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_3);
x_30 = l_Lean_LocalDecl_toExpr(x_1);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_array_mk(x_32);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_34 = l_Lean_Meta_mkAppM_x27(x_28, x_33, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_29);
x_38 = lean_apply_10(x_2, x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_36);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_29);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_39 = lean_ctor_get(x_34, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_41 = x_34;
} else {
 lean_dec_ref(x_34);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(1, 2, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("apply_fun can only handle hypotheses of the form `a = b`, `a ≠ b`, `a ≤ b`, `a < b`.", 88, 84);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunHyp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Eq", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Not", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("apply_fun can only handle negations of equality.", 48, 48);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunHyp___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__1;
x_2 = l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__8() {
_start:
{
lean_object* x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = 2;
x_4 = 0;
x_5 = lean_alloc_ctor(0, 1, 11);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 1, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 3, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 4, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 5, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 6, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 7, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 8, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 9, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 10, x_2);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`apply_fun` could not construct congruence", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunHyp___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Monotone", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFunHyp___closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("StrictMono", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunHyp___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFunHyp___closed__17;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_773; 
x_773 = lean_box(0);
x_14 = x_773;
x_15 = x_13;
goto block_772;
}
else
{
uint8_t x_774; 
x_774 = !lean_is_exclusive(x_2);
if (x_774 == 0)
{
lean_object* x_775; lean_object* x_776; uint8_t x_777; lean_object* x_778; 
x_775 = lean_ctor_get(x_2, 0);
x_776 = lean_box(0);
x_777 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_778 = l_Lean_Elab_Tactic_elabTerm(x_775, x_776, x_777, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_778) == 0)
{
lean_object* x_779; lean_object* x_780; 
x_779 = lean_ctor_get(x_778, 0);
lean_inc(x_779);
x_780 = lean_ctor_get(x_778, 1);
lean_inc(x_780);
lean_dec(x_778);
lean_ctor_set(x_2, 0, x_779);
x_14 = x_2;
x_15 = x_780;
goto block_772;
}
else
{
uint8_t x_781; 
lean_free_object(x_2);
lean_dec(x_12);
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
x_781 = !lean_is_exclusive(x_778);
if (x_781 == 0)
{
return x_778;
}
else
{
lean_object* x_782; lean_object* x_783; lean_object* x_784; 
x_782 = lean_ctor_get(x_778, 0);
x_783 = lean_ctor_get(x_778, 1);
lean_inc(x_783);
lean_inc(x_782);
lean_dec(x_778);
x_784 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_784, 0, x_782);
lean_ctor_set(x_784, 1, x_783);
return x_784;
}
}
}
else
{
lean_object* x_785; lean_object* x_786; uint8_t x_787; lean_object* x_788; 
x_785 = lean_ctor_get(x_2, 0);
lean_inc(x_785);
lean_dec(x_2);
x_786 = lean_box(0);
x_787 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_788 = l_Lean_Elab_Tactic_elabTerm(x_785, x_786, x_787, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_788) == 0)
{
lean_object* x_789; lean_object* x_790; lean_object* x_791; 
x_789 = lean_ctor_get(x_788, 0);
lean_inc(x_789);
x_790 = lean_ctor_get(x_788, 1);
lean_inc(x_790);
lean_dec(x_788);
x_791 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_791, 0, x_789);
x_14 = x_791;
x_15 = x_790;
goto block_772;
}
else
{
lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; 
lean_dec(x_12);
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
x_792 = lean_ctor_get(x_788, 0);
lean_inc(x_792);
x_793 = lean_ctor_get(x_788, 1);
lean_inc(x_793);
if (lean_is_exclusive(x_788)) {
 lean_ctor_release(x_788, 0);
 lean_ctor_release(x_788, 1);
 x_794 = x_788;
} else {
 lean_dec_ref(x_788);
 x_794 = lean_box(0);
}
if (lean_is_scalar(x_794)) {
 x_795 = lean_alloc_ctor(1, 2, 0);
} else {
 x_795 = x_794;
}
lean_ctor_set(x_795, 0, x_792);
lean_ctor_set(x_795, 1, x_793);
return x_795;
}
}
}
block_772:
{
lean_object* x_16; 
lean_inc(x_9);
lean_inc(x_3);
x_16 = l_Lean_FVarId_getDecl(x_3, x_9, x_10, x_11, x_12, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_LocalDecl_type(x_17);
x_20 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_18);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_24 = l_Lean_Meta_whnfR(x_22, x_9, x_10, x_11, x_12, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_17);
lean_inc(x_3);
lean_inc(x_4);
x_27 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunHyp___lambda__1___boxed), 13, 3);
lean_closure_set(x_27, 0, x_4);
lean_closure_set(x_27, 1, x_3);
lean_closure_set(x_27, 2, x_17);
x_28 = l_Lean_Expr_getAppFnArgs(x_25);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 1)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
switch (lean_obj_tag(x_30)) {
case 0:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Mathlib_Tactic_applyFunHyp___closed__3;
x_34 = lean_string_dec_eq(x_32, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
lean_dec(x_4);
lean_dec(x_3);
x_35 = l_Mathlib_Tactic_applyFunHyp___closed__4;
x_36 = lean_string_dec_eq(x_32, x_35);
lean_dec(x_32);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_31);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_37 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_38 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_array_get_size(x_31);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_dec_eq(x_43, x_44);
lean_dec(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_dec(x_31);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_46 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_47 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_46, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
return x_47;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_unsigned_to_nat(0u);
x_53 = lean_array_fget(x_31, x_52);
lean_dec(x_31);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_54 = l_Lean_Meta_whnfR(x_53, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Expr_getAppFnArgs(x_55);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_57, 0);
x_60 = lean_ctor_get(x_57, 1);
lean_dec(x_60);
if (lean_obj_tag(x_59) == 1)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_string_dec_eq(x_62, x_33);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; 
lean_free_object(x_57);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_64 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_65 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_64, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
return x_65;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_65);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_70; lean_object* x_71; 
x_70 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_71 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_70, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_box(0);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_74);
lean_ctor_set(x_20, 0, x_72);
x_75 = lean_array_mk(x_20);
x_76 = l_Mathlib_Tactic_applyFunHyp___closed__7;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_77 = l_Lean_Meta_mkAppM(x_76, x_75, x_9, x_10, x_11, x_12, x_73);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_78);
x_81 = 0;
x_82 = lean_box(0);
lean_inc(x_9);
x_83 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_80, x_81, x_82, x_9, x_10, x_11, x_12, x_79);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_85 = lean_ctor_get(x_83, 0);
x_86 = lean_ctor_get(x_83, 1);
x_87 = l_Lean_Expr_mvarId_x21(x_85);
lean_ctor_set_tag(x_83, 1);
lean_ctor_set(x_83, 1, x_74);
lean_ctor_set(x_83, 0, x_87);
lean_ctor_set(x_57, 1, x_83);
lean_ctor_set(x_57, 0, x_85);
x_88 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_17, x_27, x_57, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_86);
lean_dec(x_17);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_89 = lean_ctor_get(x_83, 0);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_83);
x_91 = l_Lean_Expr_mvarId_x21(x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_74);
lean_ctor_set(x_57, 1, x_92);
lean_ctor_set(x_57, 0, x_89);
x_93 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_17, x_27, x_57, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_90);
lean_dec(x_17);
return x_93;
}
}
else
{
uint8_t x_94; 
lean_free_object(x_57);
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_94 = !lean_is_exclusive(x_77);
if (x_94 == 0)
{
return x_77;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_77, 0);
x_96 = lean_ctor_get(x_77, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_77);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
uint8_t x_98; 
lean_free_object(x_57);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_98 = !lean_is_exclusive(x_71);
if (x_98 == 0)
{
return x_71;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_71, 0);
x_100 = lean_ctor_get(x_71, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_71);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_free_object(x_20);
lean_dec(x_1);
x_102 = lean_ctor_get(x_14, 0);
lean_inc(x_102);
lean_dec(x_14);
x_103 = lean_box(0);
lean_ctor_set(x_57, 1, x_103);
lean_ctor_set(x_57, 0, x_102);
x_104 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_17, x_27, x_57, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_17);
return x_104;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; uint8_t x_107; 
lean_dec(x_61);
lean_free_object(x_57);
lean_dec(x_59);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_105 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_106 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_105, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
return x_106;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_106, 0);
x_109 = lean_ctor_get(x_106, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_106);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; 
lean_free_object(x_57);
lean_dec(x_59);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_111 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_112 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_111, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_113 = !lean_is_exclusive(x_112);
if (x_113 == 0)
{
return x_112;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_112, 0);
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_112);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; 
x_117 = lean_ctor_get(x_57, 0);
lean_inc(x_117);
lean_dec(x_57);
if (lean_obj_tag(x_117) == 1)
{
lean_object* x_118; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; uint8_t x_120; 
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = lean_string_dec_eq(x_119, x_33);
lean_dec(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_121 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_122 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_121, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_125 = x_122;
} else {
 lean_dec_ref(x_122);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_127; lean_object* x_128; 
x_127 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_128 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_127, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_box(0);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_131);
lean_ctor_set(x_20, 0, x_129);
x_132 = lean_array_mk(x_20);
x_133 = l_Mathlib_Tactic_applyFunHyp___closed__7;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_134 = l_Lean_Meta_mkAppM(x_133, x_132, x_9, x_10, x_11, x_12, x_130);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_135);
x_138 = 0;
x_139 = lean_box(0);
lean_inc(x_9);
x_140 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_137, x_138, x_139, x_9, x_10, x_11, x_12, x_136);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_143 = x_140;
} else {
 lean_dec_ref(x_140);
 x_143 = lean_box(0);
}
x_144 = l_Lean_Expr_mvarId_x21(x_141);
if (lean_is_scalar(x_143)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_143;
 lean_ctor_set_tag(x_145, 1);
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_131);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_141);
lean_ctor_set(x_146, 1, x_145);
x_147 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_17, x_27, x_146, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_142);
lean_dec(x_17);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_148 = lean_ctor_get(x_134, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_134, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_150 = x_134;
} else {
 lean_dec_ref(x_134);
 x_150 = lean_box(0);
}
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_148);
lean_ctor_set(x_151, 1, x_149);
return x_151;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_152 = lean_ctor_get(x_128, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_128, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_154 = x_128;
} else {
 lean_dec_ref(x_128);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_free_object(x_20);
lean_dec(x_1);
x_156 = lean_ctor_get(x_14, 0);
lean_inc(x_156);
lean_dec(x_14);
x_157 = lean_box(0);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
x_159 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_17, x_27, x_158, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_17);
return x_159;
}
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_160 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_161 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_160, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_117);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_166 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_167 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_166, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_170 = x_167;
} else {
 lean_dec_ref(x_167);
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
}
else
{
uint8_t x_172; 
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_172 = !lean_is_exclusive(x_54);
if (x_172 == 0)
{
return x_54;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_54, 0);
x_174 = lean_ctor_get(x_54, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_54);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
return x_175;
}
}
}
}
}
else
{
lean_object* x_176; lean_object* x_177; uint8_t x_178; 
lean_dec(x_32);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_14);
x_176 = lean_array_get_size(x_31);
x_177 = lean_unsigned_to_nat(3u);
x_178 = lean_nat_dec_eq(x_176, x_177);
lean_dec(x_176);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; uint8_t x_181; 
lean_dec(x_31);
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_179 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_180 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_179, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_181 = !lean_is_exclusive(x_180);
if (x_181 == 0)
{
return x_180;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_180, 0);
x_183 = lean_ctor_get(x_180, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_180);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_185 = lean_unsigned_to_nat(1u);
x_186 = lean_array_fget(x_31, x_185);
x_187 = lean_unsigned_to_nat(2u);
x_188 = lean_array_fget(x_31, x_187);
lean_dec(x_31);
lean_inc(x_4);
x_189 = l_Lean_MVarId_getTag(x_4, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_box(0);
x_193 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunHyp___lambda__4), 11, 4);
lean_closure_set(x_193, 0, x_1);
lean_closure_set(x_193, 1, x_192);
lean_closure_set(x_193, 2, x_186);
lean_closure_set(x_193, 3, x_188);
x_194 = 0;
x_195 = lean_box(x_194);
x_196 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_196, 0, x_193);
lean_closure_set(x_196, 1, x_195);
x_197 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_197, 0, x_196);
x_198 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_199 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_197, x_190, x_198, x_194, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_191);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
x_202 = !lean_is_exclusive(x_200);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_203 = lean_ctor_get(x_200, 0);
x_204 = lean_ctor_get(x_200, 1);
x_205 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_205, 0, x_203);
x_206 = 0;
x_207 = lean_box(0);
lean_inc(x_9);
x_208 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_205, x_206, x_207, x_9, x_10, x_11, x_12, x_201);
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
lean_dec(x_208);
x_211 = l_Lean_Expr_mvarId_x21(x_209);
x_212 = lean_box(0);
x_213 = l_Mathlib_Tactic_applyFunHyp___closed__8;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_214 = l_Lean_MVarId_congrN_x21(x_211, x_192, x_213, x_212, x_9, x_10, x_11, x_12, x_210);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; lean_object* x_217; 
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
lean_ctor_set(x_200, 0, x_209);
x_217 = l_Mathlib_Tactic_applyFunHyp___lambda__1(x_4, x_3, x_17, x_200, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_216);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_17);
return x_217;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; 
lean_dec(x_215);
lean_dec(x_209);
lean_free_object(x_200);
lean_dec(x_204);
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_3);
x_218 = lean_ctor_get(x_214, 1);
lean_inc(x_218);
lean_dec(x_214);
x_219 = l_Mathlib_Tactic_applyFunHyp___closed__10;
x_220 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_219, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_218);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_221 = !lean_is_exclusive(x_220);
if (x_221 == 0)
{
return x_220;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_220, 0);
x_223 = lean_ctor_get(x_220, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_220);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
return x_224;
}
}
}
else
{
uint8_t x_225; 
lean_dec(x_209);
lean_free_object(x_200);
lean_dec(x_204);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_225 = !lean_is_exclusive(x_214);
if (x_225 == 0)
{
return x_214;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_214, 0);
x_227 = lean_ctor_get(x_214, 1);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_214);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set(x_228, 1, x_227);
return x_228;
}
}
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_229 = lean_ctor_get(x_200, 0);
x_230 = lean_ctor_get(x_200, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_200);
x_231 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_231, 0, x_229);
x_232 = 0;
x_233 = lean_box(0);
lean_inc(x_9);
x_234 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_231, x_232, x_233, x_9, x_10, x_11, x_12, x_201);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
lean_dec(x_234);
x_237 = l_Lean_Expr_mvarId_x21(x_235);
x_238 = lean_box(0);
x_239 = l_Mathlib_Tactic_applyFunHyp___closed__8;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_240 = l_Lean_MVarId_congrN_x21(x_237, x_192, x_239, x_238, x_9, x_10, x_11, x_12, x_236);
if (lean_obj_tag(x_240) == 0)
{
lean_object* x_241; 
x_241 = lean_ctor_get(x_240, 0);
lean_inc(x_241);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_240, 1);
lean_inc(x_242);
lean_dec(x_240);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_235);
lean_ctor_set(x_243, 1, x_230);
x_244 = l_Mathlib_Tactic_applyFunHyp___lambda__1(x_4, x_3, x_17, x_243, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_242);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_17);
return x_244;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
lean_dec(x_241);
lean_dec(x_235);
lean_dec(x_230);
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_3);
x_245 = lean_ctor_get(x_240, 1);
lean_inc(x_245);
lean_dec(x_240);
x_246 = l_Mathlib_Tactic_applyFunHyp___closed__10;
x_247 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_246, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_245);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_247, 1);
lean_inc(x_249);
if (lean_is_exclusive(x_247)) {
 lean_ctor_release(x_247, 0);
 lean_ctor_release(x_247, 1);
 x_250 = x_247;
} else {
 lean_dec_ref(x_247);
 x_250 = lean_box(0);
}
if (lean_is_scalar(x_250)) {
 x_251 = lean_alloc_ctor(1, 2, 0);
} else {
 x_251 = x_250;
}
lean_ctor_set(x_251, 0, x_248);
lean_ctor_set(x_251, 1, x_249);
return x_251;
}
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_235);
lean_dec(x_230);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_252 = lean_ctor_get(x_240, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_240, 1);
lean_inc(x_253);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_254 = x_240;
} else {
 lean_dec_ref(x_240);
 x_254 = lean_box(0);
}
if (lean_is_scalar(x_254)) {
 x_255 = lean_alloc_ctor(1, 2, 0);
} else {
 x_255 = x_254;
}
lean_ctor_set(x_255, 0, x_252);
lean_ctor_set(x_255, 1, x_253);
return x_255;
}
}
}
else
{
uint8_t x_256; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_256 = !lean_is_exclusive(x_199);
if (x_256 == 0)
{
return x_199;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = lean_ctor_get(x_199, 0);
x_258 = lean_ctor_get(x_199, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_199);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_257);
lean_ctor_set(x_259, 1, x_258);
return x_259;
}
}
}
else
{
uint8_t x_260; 
lean_dec(x_188);
lean_dec(x_186);
lean_dec(x_17);
lean_dec(x_12);
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
x_260 = !lean_is_exclusive(x_189);
if (x_260 == 0)
{
return x_189;
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_261 = lean_ctor_get(x_189, 0);
x_262 = lean_ctor_get(x_189, 1);
lean_inc(x_262);
lean_inc(x_261);
lean_dec(x_189);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_261);
lean_ctor_set(x_263, 1, x_262);
return x_263;
}
}
}
}
}
case 1:
{
uint8_t x_264; 
lean_dec(x_4);
lean_dec(x_3);
x_264 = !lean_is_exclusive(x_28);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_265 = lean_ctor_get(x_28, 1);
lean_dec(x_265);
x_266 = lean_ctor_get(x_28, 0);
lean_dec(x_266);
x_267 = lean_ctor_get(x_30, 0);
lean_inc(x_267);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; uint8_t x_271; 
x_268 = lean_ctor_get(x_29, 1);
lean_inc(x_268);
lean_dec(x_29);
x_269 = lean_ctor_get(x_30, 1);
lean_inc(x_269);
lean_dec(x_30);
x_270 = l_Mathlib_Tactic_applyFunHyp___closed__11;
x_271 = lean_string_dec_eq(x_269, x_270);
if (x_271 == 0)
{
lean_object* x_272; uint8_t x_273; 
x_272 = l_Mathlib_Tactic_applyFunHyp___closed__12;
x_273 = lean_string_dec_eq(x_269, x_272);
lean_dec(x_269);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; uint8_t x_276; 
lean_dec(x_268);
lean_free_object(x_28);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_274 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_275 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_274, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_276 = !lean_is_exclusive(x_275);
if (x_276 == 0)
{
return x_275;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_275, 0);
x_278 = lean_ctor_get(x_275, 1);
lean_inc(x_278);
lean_inc(x_277);
lean_dec(x_275);
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_277);
lean_ctor_set(x_279, 1, x_278);
return x_279;
}
}
else
{
lean_object* x_280; uint8_t x_281; 
x_280 = l_Mathlib_Tactic_applyFunHyp___closed__13;
x_281 = lean_string_dec_eq(x_268, x_280);
lean_dec(x_268);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; uint8_t x_284; 
lean_free_object(x_28);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_282 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_283 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_282, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_284 = !lean_is_exclusive(x_283);
if (x_284 == 0)
{
return x_283;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_285 = lean_ctor_get(x_283, 0);
x_286 = lean_ctor_get(x_283, 1);
lean_inc(x_286);
lean_inc(x_285);
lean_dec(x_283);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_285);
lean_ctor_set(x_287, 1, x_286);
return x_287;
}
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_288; lean_object* x_289; 
x_288 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_289 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_288, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_289) == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
lean_dec(x_289);
x_292 = lean_box(0);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_292);
lean_ctor_set(x_20, 0, x_290);
x_293 = lean_array_mk(x_20);
x_294 = l_Mathlib_Tactic_applyFunHyp___closed__15;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_295 = l_Lean_Meta_mkAppM(x_294, x_293, x_9, x_10, x_11, x_12, x_291);
if (lean_obj_tag(x_295) == 0)
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; uint8_t x_299; lean_object* x_300; lean_object* x_301; uint8_t x_302; 
x_296 = lean_ctor_get(x_295, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_295, 1);
lean_inc(x_297);
lean_dec(x_295);
x_298 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_298, 0, x_296);
x_299 = 0;
x_300 = lean_box(0);
lean_inc(x_9);
x_301 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_298, x_299, x_300, x_9, x_10, x_11, x_12, x_297);
x_302 = !lean_is_exclusive(x_301);
if (x_302 == 0)
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_303 = lean_ctor_get(x_301, 0);
x_304 = lean_ctor_get(x_301, 1);
x_305 = l_Lean_Expr_mvarId_x21(x_303);
lean_ctor_set_tag(x_301, 1);
lean_ctor_set(x_301, 1, x_292);
lean_ctor_set(x_301, 0, x_305);
lean_ctor_set(x_28, 1, x_301);
lean_ctor_set(x_28, 0, x_303);
x_306 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_304);
lean_dec(x_17);
return x_306;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_307 = lean_ctor_get(x_301, 0);
x_308 = lean_ctor_get(x_301, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_301);
x_309 = l_Lean_Expr_mvarId_x21(x_307);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_309);
lean_ctor_set(x_310, 1, x_292);
lean_ctor_set(x_28, 1, x_310);
lean_ctor_set(x_28, 0, x_307);
x_311 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_308);
lean_dec(x_17);
return x_311;
}
}
else
{
uint8_t x_312; 
lean_free_object(x_28);
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_312 = !lean_is_exclusive(x_295);
if (x_312 == 0)
{
return x_295;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = lean_ctor_get(x_295, 0);
x_314 = lean_ctor_get(x_295, 1);
lean_inc(x_314);
lean_inc(x_313);
lean_dec(x_295);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
return x_315;
}
}
}
else
{
uint8_t x_316; 
lean_free_object(x_28);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_316 = !lean_is_exclusive(x_289);
if (x_316 == 0)
{
return x_289;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_317 = lean_ctor_get(x_289, 0);
x_318 = lean_ctor_get(x_289, 1);
lean_inc(x_318);
lean_inc(x_317);
lean_dec(x_289);
x_319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_319, 0, x_317);
lean_ctor_set(x_319, 1, x_318);
return x_319;
}
}
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; 
lean_free_object(x_20);
lean_dec(x_1);
x_320 = lean_ctor_get(x_14, 0);
lean_inc(x_320);
lean_dec(x_14);
x_321 = lean_box(0);
lean_ctor_set(x_28, 1, x_321);
lean_ctor_set(x_28, 0, x_320);
x_322 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_17);
return x_322;
}
}
}
}
else
{
lean_object* x_323; uint8_t x_324; 
lean_dec(x_269);
x_323 = l_Mathlib_Tactic_applyFunHyp___closed__16;
x_324 = lean_string_dec_eq(x_268, x_323);
lean_dec(x_268);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; uint8_t x_327; 
lean_free_object(x_28);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_325 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_326 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_325, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_327 = !lean_is_exclusive(x_326);
if (x_327 == 0)
{
return x_326;
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_328 = lean_ctor_get(x_326, 0);
x_329 = lean_ctor_get(x_326, 1);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_326);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_328);
lean_ctor_set(x_330, 1, x_329);
return x_330;
}
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_331; lean_object* x_332; 
x_331 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_332 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_331, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_332) == 0)
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
x_333 = lean_ctor_get(x_332, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_332, 1);
lean_inc(x_334);
lean_dec(x_332);
x_335 = lean_box(0);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_335);
lean_ctor_set(x_20, 0, x_333);
x_336 = lean_array_mk(x_20);
x_337 = l_Mathlib_Tactic_applyFunHyp___closed__18;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_338 = l_Lean_Meta_mkAppM(x_337, x_336, x_9, x_10, x_11, x_12, x_334);
if (lean_obj_tag(x_338) == 0)
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; uint8_t x_342; lean_object* x_343; lean_object* x_344; uint8_t x_345; 
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
lean_dec(x_338);
x_341 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_341, 0, x_339);
x_342 = 0;
x_343 = lean_box(0);
lean_inc(x_9);
x_344 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_341, x_342, x_343, x_9, x_10, x_11, x_12, x_340);
x_345 = !lean_is_exclusive(x_344);
if (x_345 == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; 
x_346 = lean_ctor_get(x_344, 0);
x_347 = lean_ctor_get(x_344, 1);
x_348 = l_Lean_Expr_mvarId_x21(x_346);
lean_ctor_set_tag(x_344, 1);
lean_ctor_set(x_344, 1, x_335);
lean_ctor_set(x_344, 0, x_348);
lean_ctor_set(x_28, 1, x_344);
lean_ctor_set(x_28, 0, x_346);
x_349 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_347);
lean_dec(x_17);
return x_349;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
x_350 = lean_ctor_get(x_344, 0);
x_351 = lean_ctor_get(x_344, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_344);
x_352 = l_Lean_Expr_mvarId_x21(x_350);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_335);
lean_ctor_set(x_28, 1, x_353);
lean_ctor_set(x_28, 0, x_350);
x_354 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_351);
lean_dec(x_17);
return x_354;
}
}
else
{
uint8_t x_355; 
lean_free_object(x_28);
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_355 = !lean_is_exclusive(x_338);
if (x_355 == 0)
{
return x_338;
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; 
x_356 = lean_ctor_get(x_338, 0);
x_357 = lean_ctor_get(x_338, 1);
lean_inc(x_357);
lean_inc(x_356);
lean_dec(x_338);
x_358 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_358, 0, x_356);
lean_ctor_set(x_358, 1, x_357);
return x_358;
}
}
}
else
{
uint8_t x_359; 
lean_free_object(x_28);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_359 = !lean_is_exclusive(x_332);
if (x_359 == 0)
{
return x_332;
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_360 = lean_ctor_get(x_332, 0);
x_361 = lean_ctor_get(x_332, 1);
lean_inc(x_361);
lean_inc(x_360);
lean_dec(x_332);
x_362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_362, 0, x_360);
lean_ctor_set(x_362, 1, x_361);
return x_362;
}
}
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; 
lean_free_object(x_20);
lean_dec(x_1);
x_363 = lean_ctor_get(x_14, 0);
lean_inc(x_363);
lean_dec(x_14);
x_364 = lean_box(0);
lean_ctor_set(x_28, 1, x_364);
lean_ctor_set(x_28, 0, x_363);
x_365 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_17);
return x_365;
}
}
}
}
else
{
lean_object* x_366; lean_object* x_367; uint8_t x_368; 
lean_dec(x_267);
lean_free_object(x_28);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_366 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_367 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_366, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_368 = !lean_is_exclusive(x_367);
if (x_368 == 0)
{
return x_367;
}
else
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_369 = lean_ctor_get(x_367, 0);
x_370 = lean_ctor_get(x_367, 1);
lean_inc(x_370);
lean_inc(x_369);
lean_dec(x_367);
x_371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_371, 0, x_369);
lean_ctor_set(x_371, 1, x_370);
return x_371;
}
}
}
else
{
lean_object* x_372; 
lean_dec(x_28);
x_372 = lean_ctor_get(x_30, 0);
lean_inc(x_372);
if (lean_obj_tag(x_372) == 0)
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; uint8_t x_376; 
x_373 = lean_ctor_get(x_29, 1);
lean_inc(x_373);
lean_dec(x_29);
x_374 = lean_ctor_get(x_30, 1);
lean_inc(x_374);
lean_dec(x_30);
x_375 = l_Mathlib_Tactic_applyFunHyp___closed__11;
x_376 = lean_string_dec_eq(x_374, x_375);
if (x_376 == 0)
{
lean_object* x_377; uint8_t x_378; 
x_377 = l_Mathlib_Tactic_applyFunHyp___closed__12;
x_378 = lean_string_dec_eq(x_374, x_377);
lean_dec(x_374);
if (x_378 == 0)
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
lean_dec(x_373);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_379 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_380 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_379, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_381 = lean_ctor_get(x_380, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_380, 1);
lean_inc(x_382);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_383 = x_380;
} else {
 lean_dec_ref(x_380);
 x_383 = lean_box(0);
}
if (lean_is_scalar(x_383)) {
 x_384 = lean_alloc_ctor(1, 2, 0);
} else {
 x_384 = x_383;
}
lean_ctor_set(x_384, 0, x_381);
lean_ctor_set(x_384, 1, x_382);
return x_384;
}
else
{
lean_object* x_385; uint8_t x_386; 
x_385 = l_Mathlib_Tactic_applyFunHyp___closed__13;
x_386 = lean_string_dec_eq(x_373, x_385);
lean_dec(x_373);
if (x_386 == 0)
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_387 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_388 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_387, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
if (lean_is_exclusive(x_388)) {
 lean_ctor_release(x_388, 0);
 lean_ctor_release(x_388, 1);
 x_391 = x_388;
} else {
 lean_dec_ref(x_388);
 x_391 = lean_box(0);
}
if (lean_is_scalar(x_391)) {
 x_392 = lean_alloc_ctor(1, 2, 0);
} else {
 x_392 = x_391;
}
lean_ctor_set(x_392, 0, x_389);
lean_ctor_set(x_392, 1, x_390);
return x_392;
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_393; lean_object* x_394; 
x_393 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_394 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_393, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_394) == 0)
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
x_395 = lean_ctor_get(x_394, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_394, 1);
lean_inc(x_396);
lean_dec(x_394);
x_397 = lean_box(0);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_397);
lean_ctor_set(x_20, 0, x_395);
x_398 = lean_array_mk(x_20);
x_399 = l_Mathlib_Tactic_applyFunHyp___closed__15;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_400 = l_Lean_Meta_mkAppM(x_399, x_398, x_9, x_10, x_11, x_12, x_396);
if (lean_obj_tag(x_400) == 0)
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_401 = lean_ctor_get(x_400, 0);
lean_inc(x_401);
x_402 = lean_ctor_get(x_400, 1);
lean_inc(x_402);
lean_dec(x_400);
x_403 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_403, 0, x_401);
x_404 = 0;
x_405 = lean_box(0);
lean_inc(x_9);
x_406 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_403, x_404, x_405, x_9, x_10, x_11, x_12, x_402);
x_407 = lean_ctor_get(x_406, 0);
lean_inc(x_407);
x_408 = lean_ctor_get(x_406, 1);
lean_inc(x_408);
if (lean_is_exclusive(x_406)) {
 lean_ctor_release(x_406, 0);
 lean_ctor_release(x_406, 1);
 x_409 = x_406;
} else {
 lean_dec_ref(x_406);
 x_409 = lean_box(0);
}
x_410 = l_Lean_Expr_mvarId_x21(x_407);
if (lean_is_scalar(x_409)) {
 x_411 = lean_alloc_ctor(1, 2, 0);
} else {
 x_411 = x_409;
 lean_ctor_set_tag(x_411, 1);
}
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_397);
x_412 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_412, 0, x_407);
lean_ctor_set(x_412, 1, x_411);
x_413 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_412, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_408);
lean_dec(x_17);
return x_413;
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_414 = lean_ctor_get(x_400, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_400, 1);
lean_inc(x_415);
if (lean_is_exclusive(x_400)) {
 lean_ctor_release(x_400, 0);
 lean_ctor_release(x_400, 1);
 x_416 = x_400;
} else {
 lean_dec_ref(x_400);
 x_416 = lean_box(0);
}
if (lean_is_scalar(x_416)) {
 x_417 = lean_alloc_ctor(1, 2, 0);
} else {
 x_417 = x_416;
}
lean_ctor_set(x_417, 0, x_414);
lean_ctor_set(x_417, 1, x_415);
return x_417;
}
}
else
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_418 = lean_ctor_get(x_394, 0);
lean_inc(x_418);
x_419 = lean_ctor_get(x_394, 1);
lean_inc(x_419);
if (lean_is_exclusive(x_394)) {
 lean_ctor_release(x_394, 0);
 lean_ctor_release(x_394, 1);
 x_420 = x_394;
} else {
 lean_dec_ref(x_394);
 x_420 = lean_box(0);
}
if (lean_is_scalar(x_420)) {
 x_421 = lean_alloc_ctor(1, 2, 0);
} else {
 x_421 = x_420;
}
lean_ctor_set(x_421, 0, x_418);
lean_ctor_set(x_421, 1, x_419);
return x_421;
}
}
else
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
lean_free_object(x_20);
lean_dec(x_1);
x_422 = lean_ctor_get(x_14, 0);
lean_inc(x_422);
lean_dec(x_14);
x_423 = lean_box(0);
x_424 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_424, 0, x_422);
lean_ctor_set(x_424, 1, x_423);
x_425 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_424, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_17);
return x_425;
}
}
}
}
else
{
lean_object* x_426; uint8_t x_427; 
lean_dec(x_374);
x_426 = l_Mathlib_Tactic_applyFunHyp___closed__16;
x_427 = lean_string_dec_eq(x_373, x_426);
lean_dec(x_373);
if (x_427 == 0)
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_428 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_429 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_428, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_430 = lean_ctor_get(x_429, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_429, 1);
lean_inc(x_431);
if (lean_is_exclusive(x_429)) {
 lean_ctor_release(x_429, 0);
 lean_ctor_release(x_429, 1);
 x_432 = x_429;
} else {
 lean_dec_ref(x_429);
 x_432 = lean_box(0);
}
if (lean_is_scalar(x_432)) {
 x_433 = lean_alloc_ctor(1, 2, 0);
} else {
 x_433 = x_432;
}
lean_ctor_set(x_433, 0, x_430);
lean_ctor_set(x_433, 1, x_431);
return x_433;
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_434; lean_object* x_435; 
x_434 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_435 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_434, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_435) == 0)
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_box(0);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_438);
lean_ctor_set(x_20, 0, x_436);
x_439 = lean_array_mk(x_20);
x_440 = l_Mathlib_Tactic_applyFunHyp___closed__18;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_441 = l_Lean_Meta_mkAppM(x_440, x_439, x_9, x_10, x_11, x_12, x_437);
if (lean_obj_tag(x_441) == 0)
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; uint8_t x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_442 = lean_ctor_get(x_441, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_441, 1);
lean_inc(x_443);
lean_dec(x_441);
x_444 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_444, 0, x_442);
x_445 = 0;
x_446 = lean_box(0);
lean_inc(x_9);
x_447 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_444, x_445, x_446, x_9, x_10, x_11, x_12, x_443);
x_448 = lean_ctor_get(x_447, 0);
lean_inc(x_448);
x_449 = lean_ctor_get(x_447, 1);
lean_inc(x_449);
if (lean_is_exclusive(x_447)) {
 lean_ctor_release(x_447, 0);
 lean_ctor_release(x_447, 1);
 x_450 = x_447;
} else {
 lean_dec_ref(x_447);
 x_450 = lean_box(0);
}
x_451 = l_Lean_Expr_mvarId_x21(x_448);
if (lean_is_scalar(x_450)) {
 x_452 = lean_alloc_ctor(1, 2, 0);
} else {
 x_452 = x_450;
 lean_ctor_set_tag(x_452, 1);
}
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_438);
x_453 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_453, 0, x_448);
lean_ctor_set(x_453, 1, x_452);
x_454 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_453, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_449);
lean_dec(x_17);
return x_454;
}
else
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; 
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_455 = lean_ctor_get(x_441, 0);
lean_inc(x_455);
x_456 = lean_ctor_get(x_441, 1);
lean_inc(x_456);
if (lean_is_exclusive(x_441)) {
 lean_ctor_release(x_441, 0);
 lean_ctor_release(x_441, 1);
 x_457 = x_441;
} else {
 lean_dec_ref(x_441);
 x_457 = lean_box(0);
}
if (lean_is_scalar(x_457)) {
 x_458 = lean_alloc_ctor(1, 2, 0);
} else {
 x_458 = x_457;
}
lean_ctor_set(x_458, 0, x_455);
lean_ctor_set(x_458, 1, x_456);
return x_458;
}
}
else
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; 
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_459 = lean_ctor_get(x_435, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_435, 1);
lean_inc(x_460);
if (lean_is_exclusive(x_435)) {
 lean_ctor_release(x_435, 0);
 lean_ctor_release(x_435, 1);
 x_461 = x_435;
} else {
 lean_dec_ref(x_435);
 x_461 = lean_box(0);
}
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(1, 2, 0);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_459);
lean_ctor_set(x_462, 1, x_460);
return x_462;
}
}
else
{
lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; 
lean_free_object(x_20);
lean_dec(x_1);
x_463 = lean_ctor_get(x_14, 0);
lean_inc(x_463);
lean_dec(x_14);
x_464 = lean_box(0);
x_465 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_465, 0, x_463);
lean_ctor_set(x_465, 1, x_464);
x_466 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_27, x_465, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_17);
return x_466;
}
}
}
}
else
{
lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
lean_dec(x_372);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_467 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_468 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_467, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_469 = lean_ctor_get(x_468, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_468, 1);
lean_inc(x_470);
if (lean_is_exclusive(x_468)) {
 lean_ctor_release(x_468, 0);
 lean_ctor_release(x_468, 1);
 x_471 = x_468;
} else {
 lean_dec_ref(x_468);
 x_471 = lean_box(0);
}
if (lean_is_scalar(x_471)) {
 x_472 = lean_alloc_ctor(1, 2, 0);
} else {
 x_472 = x_471;
}
lean_ctor_set(x_472, 0, x_469);
lean_ctor_set(x_472, 1, x_470);
return x_472;
}
}
}
default: 
{
lean_object* x_473; lean_object* x_474; uint8_t x_475; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_473 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_474 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_473, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_475 = !lean_is_exclusive(x_474);
if (x_475 == 0)
{
return x_474;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_476 = lean_ctor_get(x_474, 0);
x_477 = lean_ctor_get(x_474, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_474);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
}
}
else
{
lean_object* x_479; lean_object* x_480; uint8_t x_481; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_479 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_480 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_479, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_481 = !lean_is_exclusive(x_480);
if (x_481 == 0)
{
return x_480;
}
else
{
lean_object* x_482; lean_object* x_483; lean_object* x_484; 
x_482 = lean_ctor_get(x_480, 0);
x_483 = lean_ctor_get(x_480, 1);
lean_inc(x_483);
lean_inc(x_482);
lean_dec(x_480);
x_484 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_484, 0, x_482);
lean_ctor_set(x_484, 1, x_483);
return x_484;
}
}
}
else
{
uint8_t x_485; 
lean_free_object(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_12);
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
x_485 = !lean_is_exclusive(x_24);
if (x_485 == 0)
{
return x_24;
}
else
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; 
x_486 = lean_ctor_get(x_24, 0);
x_487 = lean_ctor_get(x_24, 1);
lean_inc(x_487);
lean_inc(x_486);
lean_dec(x_24);
x_488 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_488, 0, x_486);
lean_ctor_set(x_488, 1, x_487);
return x_488;
}
}
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; 
x_489 = lean_ctor_get(x_20, 0);
x_490 = lean_ctor_get(x_20, 1);
lean_inc(x_490);
lean_inc(x_489);
lean_dec(x_20);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_491 = l_Lean_Meta_whnfR(x_489, x_9, x_10, x_11, x_12, x_490);
if (lean_obj_tag(x_491) == 0)
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; 
x_492 = lean_ctor_get(x_491, 0);
lean_inc(x_492);
x_493 = lean_ctor_get(x_491, 1);
lean_inc(x_493);
lean_dec(x_491);
lean_inc(x_17);
lean_inc(x_3);
lean_inc(x_4);
x_494 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunHyp___lambda__1___boxed), 13, 3);
lean_closure_set(x_494, 0, x_4);
lean_closure_set(x_494, 1, x_3);
lean_closure_set(x_494, 2, x_17);
x_495 = l_Lean_Expr_getAppFnArgs(x_492);
x_496 = lean_ctor_get(x_495, 0);
lean_inc(x_496);
if (lean_obj_tag(x_496) == 1)
{
lean_object* x_497; 
x_497 = lean_ctor_get(x_496, 0);
lean_inc(x_497);
switch (lean_obj_tag(x_497)) {
case 0:
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; uint8_t x_501; 
x_498 = lean_ctor_get(x_495, 1);
lean_inc(x_498);
lean_dec(x_495);
x_499 = lean_ctor_get(x_496, 1);
lean_inc(x_499);
lean_dec(x_496);
x_500 = l_Mathlib_Tactic_applyFunHyp___closed__3;
x_501 = lean_string_dec_eq(x_499, x_500);
if (x_501 == 0)
{
lean_object* x_502; uint8_t x_503; 
lean_dec(x_4);
lean_dec(x_3);
x_502 = l_Mathlib_Tactic_applyFunHyp___closed__4;
x_503 = lean_string_dec_eq(x_499, x_502);
lean_dec(x_499);
if (x_503 == 0)
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; 
lean_dec(x_498);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_504 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_505 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_504, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_506 = lean_ctor_get(x_505, 0);
lean_inc(x_506);
x_507 = lean_ctor_get(x_505, 1);
lean_inc(x_507);
if (lean_is_exclusive(x_505)) {
 lean_ctor_release(x_505, 0);
 lean_ctor_release(x_505, 1);
 x_508 = x_505;
} else {
 lean_dec_ref(x_505);
 x_508 = lean_box(0);
}
if (lean_is_scalar(x_508)) {
 x_509 = lean_alloc_ctor(1, 2, 0);
} else {
 x_509 = x_508;
}
lean_ctor_set(x_509, 0, x_506);
lean_ctor_set(x_509, 1, x_507);
return x_509;
}
else
{
lean_object* x_510; lean_object* x_511; uint8_t x_512; 
x_510 = lean_array_get_size(x_498);
x_511 = lean_unsigned_to_nat(1u);
x_512 = lean_nat_dec_eq(x_510, x_511);
lean_dec(x_510);
if (x_512 == 0)
{
lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; 
lean_dec(x_498);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_513 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_514 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_513, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_515 = lean_ctor_get(x_514, 0);
lean_inc(x_515);
x_516 = lean_ctor_get(x_514, 1);
lean_inc(x_516);
if (lean_is_exclusive(x_514)) {
 lean_ctor_release(x_514, 0);
 lean_ctor_release(x_514, 1);
 x_517 = x_514;
} else {
 lean_dec_ref(x_514);
 x_517 = lean_box(0);
}
if (lean_is_scalar(x_517)) {
 x_518 = lean_alloc_ctor(1, 2, 0);
} else {
 x_518 = x_517;
}
lean_ctor_set(x_518, 0, x_515);
lean_ctor_set(x_518, 1, x_516);
return x_518;
}
else
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; 
x_519 = lean_unsigned_to_nat(0u);
x_520 = lean_array_fget(x_498, x_519);
lean_dec(x_498);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_521 = l_Lean_Meta_whnfR(x_520, x_9, x_10, x_11, x_12, x_493);
if (lean_obj_tag(x_521) == 0)
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; 
x_522 = lean_ctor_get(x_521, 0);
lean_inc(x_522);
x_523 = lean_ctor_get(x_521, 1);
lean_inc(x_523);
lean_dec(x_521);
x_524 = l_Lean_Expr_getAppFnArgs(x_522);
x_525 = lean_ctor_get(x_524, 0);
lean_inc(x_525);
if (lean_is_exclusive(x_524)) {
 lean_ctor_release(x_524, 0);
 lean_ctor_release(x_524, 1);
 x_526 = x_524;
} else {
 lean_dec_ref(x_524);
 x_526 = lean_box(0);
}
if (lean_obj_tag(x_525) == 1)
{
lean_object* x_527; 
x_527 = lean_ctor_get(x_525, 0);
lean_inc(x_527);
if (lean_obj_tag(x_527) == 0)
{
lean_object* x_528; uint8_t x_529; 
x_528 = lean_ctor_get(x_525, 1);
lean_inc(x_528);
lean_dec(x_525);
x_529 = lean_string_dec_eq(x_528, x_500);
lean_dec(x_528);
if (x_529 == 0)
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; 
lean_dec(x_526);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_530 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_531 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_530, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_523);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_532 = lean_ctor_get(x_531, 0);
lean_inc(x_532);
x_533 = lean_ctor_get(x_531, 1);
lean_inc(x_533);
if (lean_is_exclusive(x_531)) {
 lean_ctor_release(x_531, 0);
 lean_ctor_release(x_531, 1);
 x_534 = x_531;
} else {
 lean_dec_ref(x_531);
 x_534 = lean_box(0);
}
if (lean_is_scalar(x_534)) {
 x_535 = lean_alloc_ctor(1, 2, 0);
} else {
 x_535 = x_534;
}
lean_ctor_set(x_535, 0, x_532);
lean_ctor_set(x_535, 1, x_533);
return x_535;
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_536; lean_object* x_537; 
x_536 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_537 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_536, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_523);
if (lean_obj_tag(x_537) == 0)
{
lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_538 = lean_ctor_get(x_537, 0);
lean_inc(x_538);
x_539 = lean_ctor_get(x_537, 1);
lean_inc(x_539);
lean_dec(x_537);
x_540 = lean_box(0);
x_541 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_541, 0, x_538);
lean_ctor_set(x_541, 1, x_540);
x_542 = lean_array_mk(x_541);
x_543 = l_Mathlib_Tactic_applyFunHyp___closed__7;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_544 = l_Lean_Meta_mkAppM(x_543, x_542, x_9, x_10, x_11, x_12, x_539);
if (lean_obj_tag(x_544) == 0)
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; uint8_t x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; 
x_545 = lean_ctor_get(x_544, 0);
lean_inc(x_545);
x_546 = lean_ctor_get(x_544, 1);
lean_inc(x_546);
lean_dec(x_544);
x_547 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_547, 0, x_545);
x_548 = 0;
x_549 = lean_box(0);
lean_inc(x_9);
x_550 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_547, x_548, x_549, x_9, x_10, x_11, x_12, x_546);
x_551 = lean_ctor_get(x_550, 0);
lean_inc(x_551);
x_552 = lean_ctor_get(x_550, 1);
lean_inc(x_552);
if (lean_is_exclusive(x_550)) {
 lean_ctor_release(x_550, 0);
 lean_ctor_release(x_550, 1);
 x_553 = x_550;
} else {
 lean_dec_ref(x_550);
 x_553 = lean_box(0);
}
x_554 = l_Lean_Expr_mvarId_x21(x_551);
if (lean_is_scalar(x_553)) {
 x_555 = lean_alloc_ctor(1, 2, 0);
} else {
 x_555 = x_553;
 lean_ctor_set_tag(x_555, 1);
}
lean_ctor_set(x_555, 0, x_554);
lean_ctor_set(x_555, 1, x_540);
if (lean_is_scalar(x_526)) {
 x_556 = lean_alloc_ctor(0, 2, 0);
} else {
 x_556 = x_526;
}
lean_ctor_set(x_556, 0, x_551);
lean_ctor_set(x_556, 1, x_555);
x_557 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_17, x_494, x_556, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_552);
lean_dec(x_17);
return x_557;
}
else
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; 
lean_dec(x_526);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_558 = lean_ctor_get(x_544, 0);
lean_inc(x_558);
x_559 = lean_ctor_get(x_544, 1);
lean_inc(x_559);
if (lean_is_exclusive(x_544)) {
 lean_ctor_release(x_544, 0);
 lean_ctor_release(x_544, 1);
 x_560 = x_544;
} else {
 lean_dec_ref(x_544);
 x_560 = lean_box(0);
}
if (lean_is_scalar(x_560)) {
 x_561 = lean_alloc_ctor(1, 2, 0);
} else {
 x_561 = x_560;
}
lean_ctor_set(x_561, 0, x_558);
lean_ctor_set(x_561, 1, x_559);
return x_561;
}
}
else
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; 
lean_dec(x_526);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_562 = lean_ctor_get(x_537, 0);
lean_inc(x_562);
x_563 = lean_ctor_get(x_537, 1);
lean_inc(x_563);
if (lean_is_exclusive(x_537)) {
 lean_ctor_release(x_537, 0);
 lean_ctor_release(x_537, 1);
 x_564 = x_537;
} else {
 lean_dec_ref(x_537);
 x_564 = lean_box(0);
}
if (lean_is_scalar(x_564)) {
 x_565 = lean_alloc_ctor(1, 2, 0);
} else {
 x_565 = x_564;
}
lean_ctor_set(x_565, 0, x_562);
lean_ctor_set(x_565, 1, x_563);
return x_565;
}
}
else
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; 
lean_dec(x_1);
x_566 = lean_ctor_get(x_14, 0);
lean_inc(x_566);
lean_dec(x_14);
x_567 = lean_box(0);
if (lean_is_scalar(x_526)) {
 x_568 = lean_alloc_ctor(0, 2, 0);
} else {
 x_568 = x_526;
}
lean_ctor_set(x_568, 0, x_566);
lean_ctor_set(x_568, 1, x_567);
x_569 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_17, x_494, x_568, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_523);
lean_dec(x_17);
return x_569;
}
}
}
else
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; 
lean_dec(x_527);
lean_dec(x_526);
lean_dec(x_525);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_570 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_571 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_570, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_523);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_572 = lean_ctor_get(x_571, 0);
lean_inc(x_572);
x_573 = lean_ctor_get(x_571, 1);
lean_inc(x_573);
if (lean_is_exclusive(x_571)) {
 lean_ctor_release(x_571, 0);
 lean_ctor_release(x_571, 1);
 x_574 = x_571;
} else {
 lean_dec_ref(x_571);
 x_574 = lean_box(0);
}
if (lean_is_scalar(x_574)) {
 x_575 = lean_alloc_ctor(1, 2, 0);
} else {
 x_575 = x_574;
}
lean_ctor_set(x_575, 0, x_572);
lean_ctor_set(x_575, 1, x_573);
return x_575;
}
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; 
lean_dec(x_526);
lean_dec(x_525);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_576 = l_Mathlib_Tactic_applyFunHyp___closed__6;
x_577 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_576, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_523);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_578 = lean_ctor_get(x_577, 0);
lean_inc(x_578);
x_579 = lean_ctor_get(x_577, 1);
lean_inc(x_579);
if (lean_is_exclusive(x_577)) {
 lean_ctor_release(x_577, 0);
 lean_ctor_release(x_577, 1);
 x_580 = x_577;
} else {
 lean_dec_ref(x_577);
 x_580 = lean_box(0);
}
if (lean_is_scalar(x_580)) {
 x_581 = lean_alloc_ctor(1, 2, 0);
} else {
 x_581 = x_580;
}
lean_ctor_set(x_581, 0, x_578);
lean_ctor_set(x_581, 1, x_579);
return x_581;
}
}
else
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; 
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_582 = lean_ctor_get(x_521, 0);
lean_inc(x_582);
x_583 = lean_ctor_get(x_521, 1);
lean_inc(x_583);
if (lean_is_exclusive(x_521)) {
 lean_ctor_release(x_521, 0);
 lean_ctor_release(x_521, 1);
 x_584 = x_521;
} else {
 lean_dec_ref(x_521);
 x_584 = lean_box(0);
}
if (lean_is_scalar(x_584)) {
 x_585 = lean_alloc_ctor(1, 2, 0);
} else {
 x_585 = x_584;
}
lean_ctor_set(x_585, 0, x_582);
lean_ctor_set(x_585, 1, x_583);
return x_585;
}
}
}
}
else
{
lean_object* x_586; lean_object* x_587; uint8_t x_588; 
lean_dec(x_499);
lean_dec(x_494);
lean_dec(x_14);
x_586 = lean_array_get_size(x_498);
x_587 = lean_unsigned_to_nat(3u);
x_588 = lean_nat_dec_eq(x_586, x_587);
lean_dec(x_586);
if (x_588 == 0)
{
lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; 
lean_dec(x_498);
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_589 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_590 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_589, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_591 = lean_ctor_get(x_590, 0);
lean_inc(x_591);
x_592 = lean_ctor_get(x_590, 1);
lean_inc(x_592);
if (lean_is_exclusive(x_590)) {
 lean_ctor_release(x_590, 0);
 lean_ctor_release(x_590, 1);
 x_593 = x_590;
} else {
 lean_dec_ref(x_590);
 x_593 = lean_box(0);
}
if (lean_is_scalar(x_593)) {
 x_594 = lean_alloc_ctor(1, 2, 0);
} else {
 x_594 = x_593;
}
lean_ctor_set(x_594, 0, x_591);
lean_ctor_set(x_594, 1, x_592);
return x_594;
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; 
x_595 = lean_unsigned_to_nat(1u);
x_596 = lean_array_fget(x_498, x_595);
x_597 = lean_unsigned_to_nat(2u);
x_598 = lean_array_fget(x_498, x_597);
lean_dec(x_498);
lean_inc(x_4);
x_599 = l_Lean_MVarId_getTag(x_4, x_9, x_10, x_11, x_12, x_493);
if (lean_obj_tag(x_599) == 0)
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; uint8_t x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; 
x_600 = lean_ctor_get(x_599, 0);
lean_inc(x_600);
x_601 = lean_ctor_get(x_599, 1);
lean_inc(x_601);
lean_dec(x_599);
x_602 = lean_box(0);
x_603 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunHyp___lambda__4), 11, 4);
lean_closure_set(x_603, 0, x_1);
lean_closure_set(x_603, 1, x_602);
lean_closure_set(x_603, 2, x_596);
lean_closure_set(x_603, 3, x_598);
x_604 = 0;
x_605 = lean_box(x_604);
x_606 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_606, 0, x_603);
lean_closure_set(x_606, 1, x_605);
x_607 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_607, 0, x_606);
x_608 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_609 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_607, x_600, x_608, x_604, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_601);
if (lean_obj_tag(x_609) == 0)
{
lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; uint8_t x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; 
x_610 = lean_ctor_get(x_609, 0);
lean_inc(x_610);
x_611 = lean_ctor_get(x_609, 1);
lean_inc(x_611);
lean_dec(x_609);
x_612 = lean_ctor_get(x_610, 0);
lean_inc(x_612);
x_613 = lean_ctor_get(x_610, 1);
lean_inc(x_613);
if (lean_is_exclusive(x_610)) {
 lean_ctor_release(x_610, 0);
 lean_ctor_release(x_610, 1);
 x_614 = x_610;
} else {
 lean_dec_ref(x_610);
 x_614 = lean_box(0);
}
x_615 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_615, 0, x_612);
x_616 = 0;
x_617 = lean_box(0);
lean_inc(x_9);
x_618 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_615, x_616, x_617, x_9, x_10, x_11, x_12, x_611);
x_619 = lean_ctor_get(x_618, 0);
lean_inc(x_619);
x_620 = lean_ctor_get(x_618, 1);
lean_inc(x_620);
lean_dec(x_618);
x_621 = l_Lean_Expr_mvarId_x21(x_619);
x_622 = lean_box(0);
x_623 = l_Mathlib_Tactic_applyFunHyp___closed__8;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_624 = l_Lean_MVarId_congrN_x21(x_621, x_602, x_623, x_622, x_9, x_10, x_11, x_12, x_620);
if (lean_obj_tag(x_624) == 0)
{
lean_object* x_625; 
x_625 = lean_ctor_get(x_624, 0);
lean_inc(x_625);
if (lean_obj_tag(x_625) == 0)
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; 
x_626 = lean_ctor_get(x_624, 1);
lean_inc(x_626);
lean_dec(x_624);
if (lean_is_scalar(x_614)) {
 x_627 = lean_alloc_ctor(0, 2, 0);
} else {
 x_627 = x_614;
}
lean_ctor_set(x_627, 0, x_619);
lean_ctor_set(x_627, 1, x_613);
x_628 = l_Mathlib_Tactic_applyFunHyp___lambda__1(x_4, x_3, x_17, x_627, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_626);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_17);
return x_628;
}
else
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; 
lean_dec(x_625);
lean_dec(x_619);
lean_dec(x_614);
lean_dec(x_613);
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_3);
x_629 = lean_ctor_get(x_624, 1);
lean_inc(x_629);
lean_dec(x_624);
x_630 = l_Mathlib_Tactic_applyFunHyp___closed__10;
x_631 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_630, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_629);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_632 = lean_ctor_get(x_631, 0);
lean_inc(x_632);
x_633 = lean_ctor_get(x_631, 1);
lean_inc(x_633);
if (lean_is_exclusive(x_631)) {
 lean_ctor_release(x_631, 0);
 lean_ctor_release(x_631, 1);
 x_634 = x_631;
} else {
 lean_dec_ref(x_631);
 x_634 = lean_box(0);
}
if (lean_is_scalar(x_634)) {
 x_635 = lean_alloc_ctor(1, 2, 0);
} else {
 x_635 = x_634;
}
lean_ctor_set(x_635, 0, x_632);
lean_ctor_set(x_635, 1, x_633);
return x_635;
}
}
else
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; 
lean_dec(x_619);
lean_dec(x_614);
lean_dec(x_613);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_636 = lean_ctor_get(x_624, 0);
lean_inc(x_636);
x_637 = lean_ctor_get(x_624, 1);
lean_inc(x_637);
if (lean_is_exclusive(x_624)) {
 lean_ctor_release(x_624, 0);
 lean_ctor_release(x_624, 1);
 x_638 = x_624;
} else {
 lean_dec_ref(x_624);
 x_638 = lean_box(0);
}
if (lean_is_scalar(x_638)) {
 x_639 = lean_alloc_ctor(1, 2, 0);
} else {
 x_639 = x_638;
}
lean_ctor_set(x_639, 0, x_636);
lean_ctor_set(x_639, 1, x_637);
return x_639;
}
}
else
{
lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_640 = lean_ctor_get(x_609, 0);
lean_inc(x_640);
x_641 = lean_ctor_get(x_609, 1);
lean_inc(x_641);
if (lean_is_exclusive(x_609)) {
 lean_ctor_release(x_609, 0);
 lean_ctor_release(x_609, 1);
 x_642 = x_609;
} else {
 lean_dec_ref(x_609);
 x_642 = lean_box(0);
}
if (lean_is_scalar(x_642)) {
 x_643 = lean_alloc_ctor(1, 2, 0);
} else {
 x_643 = x_642;
}
lean_ctor_set(x_643, 0, x_640);
lean_ctor_set(x_643, 1, x_641);
return x_643;
}
}
else
{
lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; 
lean_dec(x_598);
lean_dec(x_596);
lean_dec(x_17);
lean_dec(x_12);
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
x_644 = lean_ctor_get(x_599, 0);
lean_inc(x_644);
x_645 = lean_ctor_get(x_599, 1);
lean_inc(x_645);
if (lean_is_exclusive(x_599)) {
 lean_ctor_release(x_599, 0);
 lean_ctor_release(x_599, 1);
 x_646 = x_599;
} else {
 lean_dec_ref(x_599);
 x_646 = lean_box(0);
}
if (lean_is_scalar(x_646)) {
 x_647 = lean_alloc_ctor(1, 2, 0);
} else {
 x_647 = x_646;
}
lean_ctor_set(x_647, 0, x_644);
lean_ctor_set(x_647, 1, x_645);
return x_647;
}
}
}
}
case 1:
{
lean_object* x_648; lean_object* x_649; 
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_exclusive(x_495)) {
 lean_ctor_release(x_495, 0);
 lean_ctor_release(x_495, 1);
 x_648 = x_495;
} else {
 lean_dec_ref(x_495);
 x_648 = lean_box(0);
}
x_649 = lean_ctor_get(x_497, 0);
lean_inc(x_649);
if (lean_obj_tag(x_649) == 0)
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; uint8_t x_653; 
x_650 = lean_ctor_get(x_496, 1);
lean_inc(x_650);
lean_dec(x_496);
x_651 = lean_ctor_get(x_497, 1);
lean_inc(x_651);
lean_dec(x_497);
x_652 = l_Mathlib_Tactic_applyFunHyp___closed__11;
x_653 = lean_string_dec_eq(x_651, x_652);
if (x_653 == 0)
{
lean_object* x_654; uint8_t x_655; 
x_654 = l_Mathlib_Tactic_applyFunHyp___closed__12;
x_655 = lean_string_dec_eq(x_651, x_654);
lean_dec(x_651);
if (x_655 == 0)
{
lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; 
lean_dec(x_650);
lean_dec(x_648);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_656 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_657 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_656, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_658 = lean_ctor_get(x_657, 0);
lean_inc(x_658);
x_659 = lean_ctor_get(x_657, 1);
lean_inc(x_659);
if (lean_is_exclusive(x_657)) {
 lean_ctor_release(x_657, 0);
 lean_ctor_release(x_657, 1);
 x_660 = x_657;
} else {
 lean_dec_ref(x_657);
 x_660 = lean_box(0);
}
if (lean_is_scalar(x_660)) {
 x_661 = lean_alloc_ctor(1, 2, 0);
} else {
 x_661 = x_660;
}
lean_ctor_set(x_661, 0, x_658);
lean_ctor_set(x_661, 1, x_659);
return x_661;
}
else
{
lean_object* x_662; uint8_t x_663; 
x_662 = l_Mathlib_Tactic_applyFunHyp___closed__13;
x_663 = lean_string_dec_eq(x_650, x_662);
lean_dec(x_650);
if (x_663 == 0)
{
lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; 
lean_dec(x_648);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_664 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_665 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_664, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_666 = lean_ctor_get(x_665, 0);
lean_inc(x_666);
x_667 = lean_ctor_get(x_665, 1);
lean_inc(x_667);
if (lean_is_exclusive(x_665)) {
 lean_ctor_release(x_665, 0);
 lean_ctor_release(x_665, 1);
 x_668 = x_665;
} else {
 lean_dec_ref(x_665);
 x_668 = lean_box(0);
}
if (lean_is_scalar(x_668)) {
 x_669 = lean_alloc_ctor(1, 2, 0);
} else {
 x_669 = x_668;
}
lean_ctor_set(x_669, 0, x_666);
lean_ctor_set(x_669, 1, x_667);
return x_669;
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_670; lean_object* x_671; 
x_670 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_671 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_670, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
if (lean_obj_tag(x_671) == 0)
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; 
x_672 = lean_ctor_get(x_671, 0);
lean_inc(x_672);
x_673 = lean_ctor_get(x_671, 1);
lean_inc(x_673);
lean_dec(x_671);
x_674 = lean_box(0);
x_675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_675, 0, x_672);
lean_ctor_set(x_675, 1, x_674);
x_676 = lean_array_mk(x_675);
x_677 = l_Mathlib_Tactic_applyFunHyp___closed__15;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_678 = l_Lean_Meta_mkAppM(x_677, x_676, x_9, x_10, x_11, x_12, x_673);
if (lean_obj_tag(x_678) == 0)
{
lean_object* x_679; lean_object* x_680; lean_object* x_681; uint8_t x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; 
x_679 = lean_ctor_get(x_678, 0);
lean_inc(x_679);
x_680 = lean_ctor_get(x_678, 1);
lean_inc(x_680);
lean_dec(x_678);
x_681 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_681, 0, x_679);
x_682 = 0;
x_683 = lean_box(0);
lean_inc(x_9);
x_684 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_681, x_682, x_683, x_9, x_10, x_11, x_12, x_680);
x_685 = lean_ctor_get(x_684, 0);
lean_inc(x_685);
x_686 = lean_ctor_get(x_684, 1);
lean_inc(x_686);
if (lean_is_exclusive(x_684)) {
 lean_ctor_release(x_684, 0);
 lean_ctor_release(x_684, 1);
 x_687 = x_684;
} else {
 lean_dec_ref(x_684);
 x_687 = lean_box(0);
}
x_688 = l_Lean_Expr_mvarId_x21(x_685);
if (lean_is_scalar(x_687)) {
 x_689 = lean_alloc_ctor(1, 2, 0);
} else {
 x_689 = x_687;
 lean_ctor_set_tag(x_689, 1);
}
lean_ctor_set(x_689, 0, x_688);
lean_ctor_set(x_689, 1, x_674);
if (lean_is_scalar(x_648)) {
 x_690 = lean_alloc_ctor(0, 2, 0);
} else {
 x_690 = x_648;
}
lean_ctor_set(x_690, 0, x_685);
lean_ctor_set(x_690, 1, x_689);
x_691 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_494, x_690, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_686);
lean_dec(x_17);
return x_691;
}
else
{
lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; 
lean_dec(x_648);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_692 = lean_ctor_get(x_678, 0);
lean_inc(x_692);
x_693 = lean_ctor_get(x_678, 1);
lean_inc(x_693);
if (lean_is_exclusive(x_678)) {
 lean_ctor_release(x_678, 0);
 lean_ctor_release(x_678, 1);
 x_694 = x_678;
} else {
 lean_dec_ref(x_678);
 x_694 = lean_box(0);
}
if (lean_is_scalar(x_694)) {
 x_695 = lean_alloc_ctor(1, 2, 0);
} else {
 x_695 = x_694;
}
lean_ctor_set(x_695, 0, x_692);
lean_ctor_set(x_695, 1, x_693);
return x_695;
}
}
else
{
lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; 
lean_dec(x_648);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_696 = lean_ctor_get(x_671, 0);
lean_inc(x_696);
x_697 = lean_ctor_get(x_671, 1);
lean_inc(x_697);
if (lean_is_exclusive(x_671)) {
 lean_ctor_release(x_671, 0);
 lean_ctor_release(x_671, 1);
 x_698 = x_671;
} else {
 lean_dec_ref(x_671);
 x_698 = lean_box(0);
}
if (lean_is_scalar(x_698)) {
 x_699 = lean_alloc_ctor(1, 2, 0);
} else {
 x_699 = x_698;
}
lean_ctor_set(x_699, 0, x_696);
lean_ctor_set(x_699, 1, x_697);
return x_699;
}
}
else
{
lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; 
lean_dec(x_1);
x_700 = lean_ctor_get(x_14, 0);
lean_inc(x_700);
lean_dec(x_14);
x_701 = lean_box(0);
if (lean_is_scalar(x_648)) {
 x_702 = lean_alloc_ctor(0, 2, 0);
} else {
 x_702 = x_648;
}
lean_ctor_set(x_702, 0, x_700);
lean_ctor_set(x_702, 1, x_701);
x_703 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_494, x_702, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_17);
return x_703;
}
}
}
}
else
{
lean_object* x_704; uint8_t x_705; 
lean_dec(x_651);
x_704 = l_Mathlib_Tactic_applyFunHyp___closed__16;
x_705 = lean_string_dec_eq(x_650, x_704);
lean_dec(x_650);
if (x_705 == 0)
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
lean_dec(x_648);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_706 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_707 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_706, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_708 = lean_ctor_get(x_707, 0);
lean_inc(x_708);
x_709 = lean_ctor_get(x_707, 1);
lean_inc(x_709);
if (lean_is_exclusive(x_707)) {
 lean_ctor_release(x_707, 0);
 lean_ctor_release(x_707, 1);
 x_710 = x_707;
} else {
 lean_dec_ref(x_707);
 x_710 = lean_box(0);
}
if (lean_is_scalar(x_710)) {
 x_711 = lean_alloc_ctor(1, 2, 0);
} else {
 x_711 = x_710;
}
lean_ctor_set(x_711, 0, x_708);
lean_ctor_set(x_711, 1, x_709);
return x_711;
}
else
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_712; lean_object* x_713; 
x_712 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_713 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_712, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
if (lean_obj_tag(x_713) == 0)
{
lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; 
x_714 = lean_ctor_get(x_713, 0);
lean_inc(x_714);
x_715 = lean_ctor_get(x_713, 1);
lean_inc(x_715);
lean_dec(x_713);
x_716 = lean_box(0);
x_717 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_717, 0, x_714);
lean_ctor_set(x_717, 1, x_716);
x_718 = lean_array_mk(x_717);
x_719 = l_Mathlib_Tactic_applyFunHyp___closed__18;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_720 = l_Lean_Meta_mkAppM(x_719, x_718, x_9, x_10, x_11, x_12, x_715);
if (lean_obj_tag(x_720) == 0)
{
lean_object* x_721; lean_object* x_722; lean_object* x_723; uint8_t x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; 
x_721 = lean_ctor_get(x_720, 0);
lean_inc(x_721);
x_722 = lean_ctor_get(x_720, 1);
lean_inc(x_722);
lean_dec(x_720);
x_723 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_723, 0, x_721);
x_724 = 0;
x_725 = lean_box(0);
lean_inc(x_9);
x_726 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_723, x_724, x_725, x_9, x_10, x_11, x_12, x_722);
x_727 = lean_ctor_get(x_726, 0);
lean_inc(x_727);
x_728 = lean_ctor_get(x_726, 1);
lean_inc(x_728);
if (lean_is_exclusive(x_726)) {
 lean_ctor_release(x_726, 0);
 lean_ctor_release(x_726, 1);
 x_729 = x_726;
} else {
 lean_dec_ref(x_726);
 x_729 = lean_box(0);
}
x_730 = l_Lean_Expr_mvarId_x21(x_727);
if (lean_is_scalar(x_729)) {
 x_731 = lean_alloc_ctor(1, 2, 0);
} else {
 x_731 = x_729;
 lean_ctor_set_tag(x_731, 1);
}
lean_ctor_set(x_731, 0, x_730);
lean_ctor_set(x_731, 1, x_716);
if (lean_is_scalar(x_648)) {
 x_732 = lean_alloc_ctor(0, 2, 0);
} else {
 x_732 = x_648;
}
lean_ctor_set(x_732, 0, x_727);
lean_ctor_set(x_732, 1, x_731);
x_733 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_494, x_732, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_728);
lean_dec(x_17);
return x_733;
}
else
{
lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; 
lean_dec(x_648);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_734 = lean_ctor_get(x_720, 0);
lean_inc(x_734);
x_735 = lean_ctor_get(x_720, 1);
lean_inc(x_735);
if (lean_is_exclusive(x_720)) {
 lean_ctor_release(x_720, 0);
 lean_ctor_release(x_720, 1);
 x_736 = x_720;
} else {
 lean_dec_ref(x_720);
 x_736 = lean_box(0);
}
if (lean_is_scalar(x_736)) {
 x_737 = lean_alloc_ctor(1, 2, 0);
} else {
 x_737 = x_736;
}
lean_ctor_set(x_737, 0, x_734);
lean_ctor_set(x_737, 1, x_735);
return x_737;
}
}
else
{
lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; 
lean_dec(x_648);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_738 = lean_ctor_get(x_713, 0);
lean_inc(x_738);
x_739 = lean_ctor_get(x_713, 1);
lean_inc(x_739);
if (lean_is_exclusive(x_713)) {
 lean_ctor_release(x_713, 0);
 lean_ctor_release(x_713, 1);
 x_740 = x_713;
} else {
 lean_dec_ref(x_713);
 x_740 = lean_box(0);
}
if (lean_is_scalar(x_740)) {
 x_741 = lean_alloc_ctor(1, 2, 0);
} else {
 x_741 = x_740;
}
lean_ctor_set(x_741, 0, x_738);
lean_ctor_set(x_741, 1, x_739);
return x_741;
}
}
else
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; 
lean_dec(x_1);
x_742 = lean_ctor_get(x_14, 0);
lean_inc(x_742);
lean_dec(x_14);
x_743 = lean_box(0);
if (lean_is_scalar(x_648)) {
 x_744 = lean_alloc_ctor(0, 2, 0);
} else {
 x_744 = x_648;
}
lean_ctor_set(x_744, 0, x_742);
lean_ctor_set(x_744, 1, x_743);
x_745 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_17, x_494, x_744, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_17);
return x_745;
}
}
}
}
else
{
lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; 
lean_dec(x_649);
lean_dec(x_648);
lean_dec(x_497);
lean_dec(x_496);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_746 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_747 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_746, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_748 = lean_ctor_get(x_747, 0);
lean_inc(x_748);
x_749 = lean_ctor_get(x_747, 1);
lean_inc(x_749);
if (lean_is_exclusive(x_747)) {
 lean_ctor_release(x_747, 0);
 lean_ctor_release(x_747, 1);
 x_750 = x_747;
} else {
 lean_dec_ref(x_747);
 x_750 = lean_box(0);
}
if (lean_is_scalar(x_750)) {
 x_751 = lean_alloc_ctor(1, 2, 0);
} else {
 x_751 = x_750;
}
lean_ctor_set(x_751, 0, x_748);
lean_ctor_set(x_751, 1, x_749);
return x_751;
}
}
default: 
{
lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; 
lean_dec(x_497);
lean_dec(x_496);
lean_dec(x_495);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_752 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_753 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_752, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_754 = lean_ctor_get(x_753, 0);
lean_inc(x_754);
x_755 = lean_ctor_get(x_753, 1);
lean_inc(x_755);
if (lean_is_exclusive(x_753)) {
 lean_ctor_release(x_753, 0);
 lean_ctor_release(x_753, 1);
 x_756 = x_753;
} else {
 lean_dec_ref(x_753);
 x_756 = lean_box(0);
}
if (lean_is_scalar(x_756)) {
 x_757 = lean_alloc_ctor(1, 2, 0);
} else {
 x_757 = x_756;
}
lean_ctor_set(x_757, 0, x_754);
lean_ctor_set(x_757, 1, x_755);
return x_757;
}
}
}
else
{
lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; 
lean_dec(x_496);
lean_dec(x_495);
lean_dec(x_494);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_758 = l_Mathlib_Tactic_applyFunHyp___closed__2;
x_759 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_758, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_493);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_760 = lean_ctor_get(x_759, 0);
lean_inc(x_760);
x_761 = lean_ctor_get(x_759, 1);
lean_inc(x_761);
if (lean_is_exclusive(x_759)) {
 lean_ctor_release(x_759, 0);
 lean_ctor_release(x_759, 1);
 x_762 = x_759;
} else {
 lean_dec_ref(x_759);
 x_762 = lean_box(0);
}
if (lean_is_scalar(x_762)) {
 x_763 = lean_alloc_ctor(1, 2, 0);
} else {
 x_763 = x_762;
}
lean_ctor_set(x_763, 0, x_760);
lean_ctor_set(x_763, 1, x_761);
return x_763;
}
}
else
{
lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_12);
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
x_764 = lean_ctor_get(x_491, 0);
lean_inc(x_764);
x_765 = lean_ctor_get(x_491, 1);
lean_inc(x_765);
if (lean_is_exclusive(x_491)) {
 lean_ctor_release(x_491, 0);
 lean_ctor_release(x_491, 1);
 x_766 = x_491;
} else {
 lean_dec_ref(x_491);
 x_766 = lean_box(0);
}
if (lean_is_scalar(x_766)) {
 x_767 = lean_alloc_ctor(1, 2, 0);
} else {
 x_767 = x_766;
}
lean_ctor_set(x_767, 0, x_764);
lean_ctor_set(x_767, 1, x_765);
return x_767;
}
}
}
else
{
uint8_t x_768; 
lean_dec(x_14);
lean_dec(x_12);
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
x_768 = !lean_is_exclusive(x_16);
if (x_768 == 0)
{
return x_16;
}
else
{
lean_object* x_769; lean_object* x_770; lean_object* x_771; 
x_769 = lean_ctor_get(x_16, 0);
x_770 = lean_ctor_get(x_16, 1);
lean_inc(x_770);
lean_inc(x_769);
lean_dec(x_16);
x_771 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_771, 0, x_769);
lean_ctor_set(x_771, 1, x_770);
return x_771;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Mathlib_Tactic_applyFunHyp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Mathlib_Tactic_applyFunHyp___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Mathlib_Tactic_applyFunHyp___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic_applyFunHyp___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunHyp___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Mathlib_Tactic_applyFunHyp___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`apply_fun` could not apply `", 29, 29);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunTargetFailure___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` to the main goal.", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunTargetFailure___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTargetFailure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Lean_MessageData_ofSyntax(x_1);
x_8 = l_Mathlib_Tactic_applyFunTargetFailure___closed__2;
x_9 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Mathlib_Tactic_applyFunTargetFailure___closed__4;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_throwError___at_Lean_Elab_Tactic_Ext_applyExtTheoremAt___spec__2(x_11, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTargetFailure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at_Mathlib_Tactic_maybeProveInjective___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
x_21 = l_Lean_Exception_isInterrupt(x_19);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Exception_isRuntime(x_19);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_free_object(x_10);
lean_dec(x_19);
x_23 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(0);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = l_Lean_Exception_isInterrupt(x_30);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = l_Lean_Exception_isRuntime(x_30);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_30);
x_34 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_31);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_36 = x_34;
} else {
 lean_dec_ref(x_34);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
else
{
lean_object* x_39; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_31);
return x_39;
}
}
else
{
lean_object* x_40; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_30);
lean_ctor_set(x_40, 1, x_31);
return x_40;
}
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_1 = 0;
x_2 = 1;
x_3 = 0;
x_4 = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(x_4, 0, x_1);
lean_ctor_set_uint8(x_4, 1, x_2);
lean_ctor_set_uint8(x_4, 2, x_3);
lean_ctor_set_uint8(x_4, 3, x_2);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_mkConstWithFreshMVarLevels(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_MVarId_apply(x_2, x_9, x_11, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_13);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__3;
x_22 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_21, x_3, x_4, x_5, x_6, x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_8);
if (x_27 == 0)
{
return x_8;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_8, 0);
x_29 = lean_ctor_get(x_8, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_8);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Equiv", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("injective", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__1;
x_2 = l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Mathlib_Tactic_maybeProveInjective___lambda__2___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__3;
x_9 = lean_alloc_closure((void*)(l_Mathlib_Tactic_maybeProveInjective___lambda__1), 7, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l_Lean_observing_x3f___at_Mathlib_Tactic_maybeProveInjective___spec__1(x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__4;
x_14 = lean_box(0);
x_15 = lean_apply_6(x_13, x_14, x_3, x_4, x_5, x_6, x_12);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
lean_dec(x_17);
x_18 = 1;
x_19 = lean_box(x_18);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = 1;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_10);
if (x_24 == 0)
{
return x_10;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_10);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Expr_mvarId_x21(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_8);
x_9 = l_Lean_MVarId_assumptionCore(x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_box(0);
x_14 = l_Mathlib_Tactic_maybeProveInjective___lambda__3(x_8, x_13, x_3, x_4, x_5, x_6, x_12);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_dec(x_16);
x_17 = 1;
x_18 = lean_box(x_17);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
else
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_dec(x_9);
x_20 = 1;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_9);
if (x_23 == 0)
{
return x_9;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_9, 0);
x_25 = lean_ctor_get(x_9, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_9);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Using clause ", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_maybeProveInjective___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_maybeProveInjective___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = l_Mathlib_Tactic_maybeProveInjective___lambda__4(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_10);
lean_inc(x_1);
x_11 = l_Lean_Meta_isExprDefEq(x_1, x_10, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = lean_infer_type(x_10, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_21 = l_Lean_Meta_mkHasTypeButIsExpectedMsg(x_16, x_19, x_3, x_4, x_5, x_6, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Mathlib_Tactic_maybeProveInjective___closed__2;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
x_26 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__5;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_27, x_3, x_4, x_5, x_6, x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
return x_28;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_21);
if (x_33 == 0)
{
return x_21;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_21, 0);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_21);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_18);
if (x_37 == 0)
{
return x_18;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_18, 0);
x_39 = lean_ctor_get(x_18, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_18);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_15);
if (x_41 == 0)
{
return x_15;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_15, 0);
x_43 = lean_ctor_get(x_15, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_15);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_11, 1);
lean_inc(x_45);
lean_dec(x_11);
x_46 = l_Lean_Expr_mvarId_x21(x_1);
lean_dec(x_1);
x_47 = l_Lean_MVarId_assign___at_Lean_MVarId_renameInaccessibleFVars___spec__2(x_46, x_10, x_3, x_4, x_5, x_6, x_45);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
x_50 = 1;
x_51 = lean_box(x_50);
lean_ctor_set(x_47, 0, x_51);
return x_47;
}
else
{
lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_47, 1);
lean_inc(x_52);
lean_dec(x_47);
x_53 = 1;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Mathlib_Tactic_maybeProveInjective___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Tactic_maybeProveInjective___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_maybeProveInjective___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Tactic_maybeProveInjective___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__1;
x_2 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__2;
x_3 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__3;
x_4 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Function.Injective", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFunHyp___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFunHyp___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__8;
x_2 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_11, 5);
lean_inc(x_14);
x_15 = 0;
x_16 = l_Lean_SourceInfo_fromRef(x_14, x_15);
lean_dec(x_14);
x_17 = lean_ctor_get(x_11, 10);
lean_inc(x_17);
x_18 = lean_st_ref_get(x_12, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Environment_mainModule(x_22);
lean_dec(x_22);
x_24 = l_Mathlib_Tactic_applyFunHyp___closed__7;
x_25 = l_Lean_addMacroScope(x_23, x_24, x_17);
x_26 = lean_box(0);
x_27 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__7;
x_28 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__11;
lean_inc(x_16);
x_29 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_25);
lean_ctor_set(x_29, 3, x_28);
x_30 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13;
lean_inc(x_16);
x_31 = l_Lean_Syntax_node1(x_16, x_30, x_1);
x_32 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5;
x_33 = l_Lean_Syntax_node2(x_16, x_32, x_29, x_31);
x_34 = lean_box(0);
x_35 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_36 = l_Lean_Elab_Term_elabTerm(x_33, x_34, x_35, x_35, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
x_39 = lean_infer_type(x_2, x_9, x_10, x_11, x_12, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_37);
x_42 = l_Lean_Meta_isExprDefEq(x_40, x_37, x_9, x_10, x_11, x_12, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_3);
x_44 = l_Lean_MVarId_getType(x_3, x_9, x_10, x_11, x_12, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set_tag(x_18, 1);
lean_ctor_set(x_18, 1, x_26);
lean_ctor_set(x_18, 0, x_47);
x_48 = lean_array_mk(x_18);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_45);
x_50 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_51 = l_Lean_Elab_Term_elabAppArgs(x_2, x_50, x_48, x_49, x_15, x_15, x_35, x_7, x_8, x_9, x_10, x_11, x_12, x_46);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_MVarId_getType(x_3, x_9, x_10, x_11, x_12, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_55);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_58 = l_Lean_Elab_Term_ensureHasType(x_57, x_52, x_34, x_34, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
if (lean_obj_tag(x_6) == 0)
{
x_61 = x_34;
x_62 = x_60;
goto block_111;
}
else
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_6);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_6, 0);
lean_inc(x_37);
lean_ctor_set(x_6, 0, x_37);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_114 = l_Lean_Elab_Term_elabTerm(x_113, x_6, x_35, x_35, x_7, x_8, x_9, x_10, x_11, x_12, x_60);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_117, 0, x_115);
x_61 = x_117;
x_62 = x_116;
goto block_111;
}
else
{
uint8_t x_118; 
lean_dec(x_59);
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_118 = !lean_is_exclusive(x_114);
if (x_118 == 0)
{
return x_114;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_114, 0);
x_120 = lean_ctor_get(x_114, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_114);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_6, 0);
lean_inc(x_122);
lean_dec(x_6);
lean_inc(x_37);
x_123 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_123, 0, x_37);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_124 = l_Lean_Elab_Term_elabTerm(x_122, x_123, x_35, x_35, x_7, x_8, x_9, x_10, x_11, x_12, x_60);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_127, 0, x_125);
x_61 = x_127;
x_62 = x_126;
goto block_111;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_59);
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_128 = lean_ctor_get(x_124, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_124, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_130 = x_124;
} else {
 lean_dec_ref(x_124);
 x_130 = lean_box(0);
}
if (lean_is_scalar(x_130)) {
 x_131 = lean_alloc_ctor(1, 2, 0);
} else {
 x_131 = x_130;
}
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
}
block_111:
{
lean_object* x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; uint8_t x_73; uint8_t x_74; uint8_t x_75; uint8_t x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; lean_object* x_81; uint64_t x_82; uint8_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; uint8_t x_91; lean_object* x_92; lean_object* x_93; 
x_63 = lean_ctor_get(x_9, 0);
lean_inc(x_63);
x_64 = lean_ctor_get_uint8(x_63, 0);
x_65 = lean_ctor_get_uint8(x_63, 1);
x_66 = lean_ctor_get_uint8(x_63, 2);
x_67 = lean_ctor_get_uint8(x_63, 3);
x_68 = lean_ctor_get_uint8(x_63, 4);
x_69 = lean_ctor_get_uint8(x_63, 5);
x_70 = lean_ctor_get_uint8(x_63, 6);
x_71 = lean_ctor_get_uint8(x_63, 8);
x_72 = lean_ctor_get_uint8(x_63, 9);
x_73 = lean_ctor_get_uint8(x_63, 10);
x_74 = lean_ctor_get_uint8(x_63, 11);
x_75 = lean_ctor_get_uint8(x_63, 12);
x_76 = lean_ctor_get_uint8(x_63, 13);
x_77 = lean_ctor_get_uint8(x_63, 14);
x_78 = lean_ctor_get_uint8(x_63, 15);
x_79 = lean_ctor_get_uint8(x_63, 16);
x_80 = lean_ctor_get_uint8(x_63, 17);
lean_dec(x_63);
x_81 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_81, 0, x_64);
lean_ctor_set_uint8(x_81, 1, x_65);
lean_ctor_set_uint8(x_81, 2, x_66);
lean_ctor_set_uint8(x_81, 3, x_67);
lean_ctor_set_uint8(x_81, 4, x_68);
lean_ctor_set_uint8(x_81, 5, x_69);
lean_ctor_set_uint8(x_81, 6, x_70);
lean_ctor_set_uint8(x_81, 7, x_35);
lean_ctor_set_uint8(x_81, 8, x_71);
lean_ctor_set_uint8(x_81, 9, x_72);
lean_ctor_set_uint8(x_81, 10, x_73);
lean_ctor_set_uint8(x_81, 11, x_74);
lean_ctor_set_uint8(x_81, 12, x_75);
lean_ctor_set_uint8(x_81, 13, x_76);
lean_ctor_set_uint8(x_81, 14, x_77);
lean_ctor_set_uint8(x_81, 15, x_78);
lean_ctor_set_uint8(x_81, 16, x_79);
lean_ctor_set_uint8(x_81, 17, x_80);
x_82 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_81);
x_83 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 8);
x_84 = lean_ctor_get(x_9, 1);
lean_inc(x_84);
x_85 = lean_ctor_get(x_9, 2);
lean_inc(x_85);
x_86 = lean_ctor_get(x_9, 3);
lean_inc(x_86);
x_87 = lean_ctor_get(x_9, 4);
lean_inc(x_87);
x_88 = lean_ctor_get(x_9, 5);
lean_inc(x_88);
x_89 = lean_ctor_get(x_9, 6);
lean_inc(x_89);
x_90 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_91 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_92 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_92, 0, x_81);
lean_ctor_set(x_92, 1, x_84);
lean_ctor_set(x_92, 2, x_85);
lean_ctor_set(x_92, 3, x_86);
lean_ctor_set(x_92, 4, x_87);
lean_ctor_set(x_92, 5, x_88);
lean_ctor_set(x_92, 6, x_89);
lean_ctor_set_uint64(x_92, sizeof(void*)*7, x_82);
lean_ctor_set_uint8(x_92, sizeof(void*)*7 + 8, x_83);
lean_ctor_set_uint8(x_92, sizeof(void*)*7 + 9, x_90);
lean_ctor_set_uint8(x_92, sizeof(void*)*7 + 10, x_91);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_93 = l_Mathlib_Tactic_maybeProveInjective(x_2, x_61, x_92, x_10, x_11, x_12, x_62);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_95 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_7, x_8, x_9, x_10, x_11, x_12, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = l_Lean_Expr_mvarId_x21(x_5);
x_98 = l_Lean_MVarId_assign___at_Lean_Elab_Term_exprToSyntax___spec__1(x_97, x_59, x_7, x_8, x_9, x_10, x_11, x_12, x_96);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_99 = !lean_is_exclusive(x_98);
if (x_99 == 0)
{
lean_object* x_100; 
x_100 = lean_ctor_get(x_98, 0);
lean_dec(x_100);
lean_ctor_set(x_98, 0, x_37);
return x_98;
}
else
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
lean_dec(x_98);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_37);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
else
{
uint8_t x_103; 
lean_dec(x_59);
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_103 = !lean_is_exclusive(x_95);
if (x_103 == 0)
{
return x_95;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_95, 0);
x_105 = lean_ctor_get(x_95, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_95);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_59);
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_107 = !lean_is_exclusive(x_93);
if (x_107 == 0)
{
return x_93;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_93, 0);
x_109 = lean_ctor_get(x_93, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_93);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_132 = !lean_is_exclusive(x_58);
if (x_132 == 0)
{
return x_58;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_58, 0);
x_134 = lean_ctor_get(x_58, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_58);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
else
{
uint8_t x_136; 
lean_dec(x_52);
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_136 = !lean_is_exclusive(x_54);
if (x_136 == 0)
{
return x_54;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_54, 0);
x_138 = lean_ctor_get(x_54, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_54);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
else
{
uint8_t x_140; 
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_140 = !lean_is_exclusive(x_51);
if (x_140 == 0)
{
return x_51;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_51, 0);
x_142 = lean_ctor_get(x_51, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_51);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
else
{
uint8_t x_144; 
lean_dec(x_37);
lean_free_object(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_44);
if (x_144 == 0)
{
return x_44;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_44, 0);
x_146 = lean_ctor_get(x_44, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_44);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
}
else
{
uint8_t x_148; 
lean_dec(x_37);
lean_free_object(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_148 = !lean_is_exclusive(x_42);
if (x_148 == 0)
{
return x_42;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_42, 0);
x_150 = lean_ctor_get(x_42, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_42);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
else
{
uint8_t x_152; 
lean_dec(x_37);
lean_free_object(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_152 = !lean_is_exclusive(x_39);
if (x_152 == 0)
{
return x_39;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_39, 0);
x_154 = lean_ctor_get(x_39, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_39);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
else
{
uint8_t x_156; 
lean_free_object(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_156 = !lean_is_exclusive(x_36);
if (x_156 == 0)
{
return x_36;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_36, 0);
x_158 = lean_ctor_get(x_36, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_36);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; lean_object* x_176; 
x_160 = lean_ctor_get(x_18, 0);
x_161 = lean_ctor_get(x_18, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_18);
x_162 = lean_ctor_get(x_160, 0);
lean_inc(x_162);
lean_dec(x_160);
x_163 = l_Lean_Environment_mainModule(x_162);
lean_dec(x_162);
x_164 = l_Mathlib_Tactic_applyFunHyp___closed__7;
x_165 = l_Lean_addMacroScope(x_163, x_164, x_17);
x_166 = lean_box(0);
x_167 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__7;
x_168 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__11;
lean_inc(x_16);
x_169 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_169, 0, x_16);
lean_ctor_set(x_169, 1, x_167);
lean_ctor_set(x_169, 2, x_165);
lean_ctor_set(x_169, 3, x_168);
x_170 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13;
lean_inc(x_16);
x_171 = l_Lean_Syntax_node1(x_16, x_170, x_1);
x_172 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5;
x_173 = l_Lean_Syntax_node2(x_16, x_172, x_169, x_171);
x_174 = lean_box(0);
x_175 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_176 = l_Lean_Elab_Term_elabTerm(x_173, x_174, x_175, x_175, x_7, x_8, x_9, x_10, x_11, x_12, x_161);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
x_179 = lean_infer_type(x_2, x_9, x_10, x_11, x_12, x_178);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_177);
x_182 = l_Lean_Meta_isExprDefEq(x_180, x_177, x_9, x_10, x_11, x_12, x_181);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; 
x_183 = lean_ctor_get(x_182, 1);
lean_inc(x_183);
lean_dec(x_182);
lean_inc(x_3);
x_184 = l_Lean_MVarId_getType(x_3, x_9, x_10, x_11, x_12, x_183);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_187, 0, x_4);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_166);
x_189 = lean_array_mk(x_188);
x_190 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_190, 0, x_185);
x_191 = l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_192 = l_Lean_Elab_Term_elabAppArgs(x_2, x_191, x_189, x_190, x_15, x_15, x_175, x_7, x_8, x_9, x_10, x_11, x_12, x_186);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec(x_192);
x_195 = l_Lean_MVarId_getType(x_3, x_9, x_10, x_11, x_12, x_194);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
x_198 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_198, 0, x_196);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_199 = l_Lean_Elab_Term_ensureHasType(x_198, x_193, x_174, x_174, x_7, x_8, x_9, x_10, x_11, x_12, x_197);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
if (lean_obj_tag(x_6) == 0)
{
x_202 = x_174;
x_203 = x_201;
goto block_251;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_252 = lean_ctor_get(x_6, 0);
lean_inc(x_252);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_253 = x_6;
} else {
 lean_dec_ref(x_6);
 x_253 = lean_box(0);
}
lean_inc(x_177);
if (lean_is_scalar(x_253)) {
 x_254 = lean_alloc_ctor(1, 1, 0);
} else {
 x_254 = x_253;
}
lean_ctor_set(x_254, 0, x_177);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_255 = l_Lean_Elab_Term_elabTerm(x_252, x_254, x_175, x_175, x_7, x_8, x_9, x_10, x_11, x_12, x_201);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_258, 0, x_256);
x_202 = x_258;
x_203 = x_257;
goto block_251;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_200);
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_259 = lean_ctor_get(x_255, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_255, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 x_261 = x_255;
} else {
 lean_dec_ref(x_255);
 x_261 = lean_box(0);
}
if (lean_is_scalar(x_261)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_261;
}
lean_ctor_set(x_262, 0, x_259);
lean_ctor_set(x_262, 1, x_260);
return x_262;
}
}
block_251:
{
lean_object* x_204; uint8_t x_205; uint8_t x_206; uint8_t x_207; uint8_t x_208; uint8_t x_209; uint8_t x_210; uint8_t x_211; uint8_t x_212; uint8_t x_213; uint8_t x_214; uint8_t x_215; uint8_t x_216; uint8_t x_217; uint8_t x_218; uint8_t x_219; uint8_t x_220; uint8_t x_221; lean_object* x_222; uint64_t x_223; uint8_t x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; 
x_204 = lean_ctor_get(x_9, 0);
lean_inc(x_204);
x_205 = lean_ctor_get_uint8(x_204, 0);
x_206 = lean_ctor_get_uint8(x_204, 1);
x_207 = lean_ctor_get_uint8(x_204, 2);
x_208 = lean_ctor_get_uint8(x_204, 3);
x_209 = lean_ctor_get_uint8(x_204, 4);
x_210 = lean_ctor_get_uint8(x_204, 5);
x_211 = lean_ctor_get_uint8(x_204, 6);
x_212 = lean_ctor_get_uint8(x_204, 8);
x_213 = lean_ctor_get_uint8(x_204, 9);
x_214 = lean_ctor_get_uint8(x_204, 10);
x_215 = lean_ctor_get_uint8(x_204, 11);
x_216 = lean_ctor_get_uint8(x_204, 12);
x_217 = lean_ctor_get_uint8(x_204, 13);
x_218 = lean_ctor_get_uint8(x_204, 14);
x_219 = lean_ctor_get_uint8(x_204, 15);
x_220 = lean_ctor_get_uint8(x_204, 16);
x_221 = lean_ctor_get_uint8(x_204, 17);
lean_dec(x_204);
x_222 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_222, 0, x_205);
lean_ctor_set_uint8(x_222, 1, x_206);
lean_ctor_set_uint8(x_222, 2, x_207);
lean_ctor_set_uint8(x_222, 3, x_208);
lean_ctor_set_uint8(x_222, 4, x_209);
lean_ctor_set_uint8(x_222, 5, x_210);
lean_ctor_set_uint8(x_222, 6, x_211);
lean_ctor_set_uint8(x_222, 7, x_175);
lean_ctor_set_uint8(x_222, 8, x_212);
lean_ctor_set_uint8(x_222, 9, x_213);
lean_ctor_set_uint8(x_222, 10, x_214);
lean_ctor_set_uint8(x_222, 11, x_215);
lean_ctor_set_uint8(x_222, 12, x_216);
lean_ctor_set_uint8(x_222, 13, x_217);
lean_ctor_set_uint8(x_222, 14, x_218);
lean_ctor_set_uint8(x_222, 15, x_219);
lean_ctor_set_uint8(x_222, 16, x_220);
lean_ctor_set_uint8(x_222, 17, x_221);
x_223 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_222);
x_224 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 8);
x_225 = lean_ctor_get(x_9, 1);
lean_inc(x_225);
x_226 = lean_ctor_get(x_9, 2);
lean_inc(x_226);
x_227 = lean_ctor_get(x_9, 3);
lean_inc(x_227);
x_228 = lean_ctor_get(x_9, 4);
lean_inc(x_228);
x_229 = lean_ctor_get(x_9, 5);
lean_inc(x_229);
x_230 = lean_ctor_get(x_9, 6);
lean_inc(x_230);
x_231 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_232 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_233 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_233, 0, x_222);
lean_ctor_set(x_233, 1, x_225);
lean_ctor_set(x_233, 2, x_226);
lean_ctor_set(x_233, 3, x_227);
lean_ctor_set(x_233, 4, x_228);
lean_ctor_set(x_233, 5, x_229);
lean_ctor_set(x_233, 6, x_230);
lean_ctor_set_uint64(x_233, sizeof(void*)*7, x_223);
lean_ctor_set_uint8(x_233, sizeof(void*)*7 + 8, x_224);
lean_ctor_set_uint8(x_233, sizeof(void*)*7 + 9, x_231);
lean_ctor_set_uint8(x_233, sizeof(void*)*7 + 10, x_232);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_234 = l_Mathlib_Tactic_maybeProveInjective(x_2, x_202, x_233, x_10, x_11, x_12, x_203);
if (lean_obj_tag(x_234) == 0)
{
lean_object* x_235; lean_object* x_236; 
x_235 = lean_ctor_get(x_234, 1);
lean_inc(x_235);
lean_dec(x_234);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_236 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_7, x_8, x_9, x_10, x_11, x_12, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_237 = lean_ctor_get(x_236, 1);
lean_inc(x_237);
lean_dec(x_236);
x_238 = l_Lean_Expr_mvarId_x21(x_5);
x_239 = l_Lean_MVarId_assign___at_Lean_Elab_Term_exprToSyntax___spec__1(x_238, x_200, x_7, x_8, x_9, x_10, x_11, x_12, x_237);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_241 = x_239;
} else {
 lean_dec_ref(x_239);
 x_241 = lean_box(0);
}
if (lean_is_scalar(x_241)) {
 x_242 = lean_alloc_ctor(0, 2, 0);
} else {
 x_242 = x_241;
}
lean_ctor_set(x_242, 0, x_177);
lean_ctor_set(x_242, 1, x_240);
return x_242;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_dec(x_200);
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_243 = lean_ctor_get(x_236, 0);
lean_inc(x_243);
x_244 = lean_ctor_get(x_236, 1);
lean_inc(x_244);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_245 = x_236;
} else {
 lean_dec_ref(x_236);
 x_245 = lean_box(0);
}
if (lean_is_scalar(x_245)) {
 x_246 = lean_alloc_ctor(1, 2, 0);
} else {
 x_246 = x_245;
}
lean_ctor_set(x_246, 0, x_243);
lean_ctor_set(x_246, 1, x_244);
return x_246;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_200);
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_247 = lean_ctor_get(x_234, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_234, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_234)) {
 lean_ctor_release(x_234, 0);
 lean_ctor_release(x_234, 1);
 x_249 = x_234;
} else {
 lean_dec_ref(x_234);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(1, 2, 0);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_247);
lean_ctor_set(x_250, 1, x_248);
return x_250;
}
}
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_263 = lean_ctor_get(x_199, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_199, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 x_265 = x_199;
} else {
 lean_dec_ref(x_199);
 x_265 = lean_box(0);
}
if (lean_is_scalar(x_265)) {
 x_266 = lean_alloc_ctor(1, 2, 0);
} else {
 x_266 = x_265;
}
lean_ctor_set(x_266, 0, x_263);
lean_ctor_set(x_266, 1, x_264);
return x_266;
}
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec(x_193);
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_267 = lean_ctor_get(x_195, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_195, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 x_269 = x_195;
} else {
 lean_dec_ref(x_195);
 x_269 = lean_box(0);
}
if (lean_is_scalar(x_269)) {
 x_270 = lean_alloc_ctor(1, 2, 0);
} else {
 x_270 = x_269;
}
lean_ctor_set(x_270, 0, x_267);
lean_ctor_set(x_270, 1, x_268);
return x_270;
}
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_271 = lean_ctor_get(x_192, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_192, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 x_273 = x_192;
} else {
 lean_dec_ref(x_192);
 x_273 = lean_box(0);
}
if (lean_is_scalar(x_273)) {
 x_274 = lean_alloc_ctor(1, 2, 0);
} else {
 x_274 = x_273;
}
lean_ctor_set(x_274, 0, x_271);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_275 = lean_ctor_get(x_184, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_184, 1);
lean_inc(x_276);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_277 = x_184;
} else {
 lean_dec_ref(x_184);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(1, 2, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_275);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_279 = lean_ctor_get(x_182, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_182, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_281 = x_182;
} else {
 lean_dec_ref(x_182);
 x_281 = lean_box(0);
}
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 2, 0);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_280);
return x_282;
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; 
lean_dec(x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_283 = lean_ctor_get(x_179, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_179, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 lean_ctor_release(x_179, 1);
 x_285 = x_179;
} else {
 lean_dec_ref(x_179);
 x_285 = lean_box(0);
}
if (lean_is_scalar(x_285)) {
 x_286 = lean_alloc_ctor(1, 2, 0);
} else {
 x_286 = x_285;
}
lean_ctor_set(x_286, 0, x_283);
lean_ctor_set(x_286, 1, x_284);
return x_286;
}
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_287 = lean_ctor_get(x_176, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_176, 1);
lean_inc(x_288);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_289 = x_176;
} else {
 lean_dec_ref(x_176);
 x_289 = lean_box(0);
}
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 2, 0);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_287);
lean_ctor_set(x_290, 1, x_288);
return x_290;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Elab_Term_exprToSyntax(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_10, 5);
lean_inc(x_16);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_16, x_17);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_11, x_15);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_mk_syntax_ident(x_2);
x_22 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13;
lean_inc(x_18);
x_23 = l_Lean_Syntax_node2(x_18, x_22, x_3, x_14);
x_24 = l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5;
x_25 = l_Lean_Syntax_node2(x_18, x_24, x_21, x_23);
x_26 = l_Lean_MVarId_getType(x_4, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_27);
x_30 = 1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_31 = l_Lean_Elab_Term_elabTermEnsuringType(x_25, x_29, x_30, x_30, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_6, x_7, x_8, x_9, x_10, x_11, x_33);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_32);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_32);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_32);
x_39 = !lean_is_exclusive(x_34);
if (x_39 == 0)
{
return x_34;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_34, 0);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_34);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_43 = !lean_is_exclusive(x_31);
if (x_43 == 0)
{
return x_31;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_31, 0);
x_45 = lean_ctor_get(x_31, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_31);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_25);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_13);
if (x_51 == 0)
{
return x_13;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_13, 0);
x_53 = lean_ctor_get(x_13, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_13);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inj", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFunTarget___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ne_of_apply_ne", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFunTarget___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("gt", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt_of_lt", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5;
x_3 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13;
x_4 = l_Mathlib_Tactic_applyFunTarget___closed__8;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ge", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le_of_le", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFunTarget___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5;
x_3 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13;
x_4 = l_Mathlib_Tactic_applyFunTarget___closed__11;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_3);
x_13 = l_Lean_MVarId_getType(x_3, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_19 = l_Lean_Meta_whnfR(x_17, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Expr_getAppFnArgs(x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 1)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
switch (lean_obj_tag(x_24)) {
case 0:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Mathlib_Tactic_applyFunHyp___closed__4;
x_28 = lean_string_dec_eq(x_26, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Mathlib_Tactic_applyFunHyp___closed__3;
x_30 = lean_string_dec_eq(x_26, x_29);
lean_dec(x_26);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_array_get_size(x_25);
lean_dec(x_25);
x_33 = lean_unsigned_to_nat(3u);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_35;
}
else
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = 0;
x_37 = lean_box(0);
lean_inc(x_8);
x_38 = l_Lean_Meta_mkFreshTypeMVar(x_36, x_37, x_8, x_9, x_10, x_11, x_21);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_3);
x_41 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_8);
x_44 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_39, x_42, x_8, x_9, x_10, x_11, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
lean_inc(x_8);
x_47 = l_Lean_Meta_mkFreshTypeMVar(x_36, x_37, x_8, x_9, x_10, x_11, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_3);
x_50 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Mathlib_Tactic_applyFunTarget___closed__2;
x_54 = l_Lean_Meta_appendTag(x_51, x_53);
lean_inc(x_8);
x_55 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_48, x_54, x_8, x_9, x_10, x_11, x_52);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_3);
x_58 = l_Lean_MVarId_getType(x_3, x_8, x_9, x_10, x_11, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_59);
lean_inc(x_8);
x_62 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_61, x_36, x_37, x_8, x_9, x_10, x_11, x_60);
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_62, 0);
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_3);
x_66 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_64);
lean_inc(x_45);
lean_inc(x_3);
lean_inc(x_56);
x_69 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunTarget___lambda__1___boxed), 13, 6);
lean_closure_set(x_69, 0, x_1);
lean_closure_set(x_69, 1, x_56);
lean_closure_set(x_69, 2, x_3);
lean_closure_set(x_69, 3, x_45);
lean_closure_set(x_69, 4, x_64);
lean_closure_set(x_69, 5, x_2);
x_70 = 0;
x_71 = lean_box(x_70);
x_72 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_72, 0, x_69);
lean_closure_set(x_72, 1, x_71);
x_73 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_73, 0, x_72);
x_74 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_75 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_73, x_67, x_74, x_70, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_68);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = !lean_is_exclusive(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_76, 1);
x_80 = lean_ctor_get(x_76, 0);
lean_dec(x_80);
x_81 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_64, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_77);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_ctor_get(x_81, 0);
lean_dec(x_83);
x_84 = l_Lean_Expr_mvarId_x21(x_45);
lean_dec(x_45);
x_85 = l_Lean_Expr_mvarId_x21(x_56);
lean_dec(x_56);
x_86 = lean_box(0);
lean_ctor_set_tag(x_76, 1);
lean_ctor_set(x_76, 1, x_86);
lean_ctor_set(x_76, 0, x_85);
lean_ctor_set_tag(x_62, 1);
lean_ctor_set(x_62, 1, x_76);
lean_ctor_set(x_62, 0, x_84);
x_87 = l_List_appendTR___rarg(x_62, x_79);
lean_ctor_set(x_81, 0, x_87);
return x_81;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_88 = lean_ctor_get(x_81, 1);
lean_inc(x_88);
lean_dec(x_81);
x_89 = l_Lean_Expr_mvarId_x21(x_45);
lean_dec(x_45);
x_90 = l_Lean_Expr_mvarId_x21(x_56);
lean_dec(x_56);
x_91 = lean_box(0);
lean_ctor_set_tag(x_76, 1);
lean_ctor_set(x_76, 1, x_91);
lean_ctor_set(x_76, 0, x_90);
lean_ctor_set_tag(x_62, 1);
lean_ctor_set(x_62, 1, x_76);
lean_ctor_set(x_62, 0, x_89);
x_92 = l_List_appendTR___rarg(x_62, x_79);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_88);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_94 = lean_ctor_get(x_76, 1);
lean_inc(x_94);
lean_dec(x_76);
x_95 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_64, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_77);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_97 = x_95;
} else {
 lean_dec_ref(x_95);
 x_97 = lean_box(0);
}
x_98 = l_Lean_Expr_mvarId_x21(x_45);
lean_dec(x_45);
x_99 = l_Lean_Expr_mvarId_x21(x_56);
lean_dec(x_56);
x_100 = lean_box(0);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set_tag(x_62, 1);
lean_ctor_set(x_62, 1, x_101);
lean_ctor_set(x_62, 0, x_98);
x_102 = l_List_appendTR___rarg(x_62, x_94);
if (lean_is_scalar(x_97)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_97;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_96);
return x_103;
}
}
else
{
uint8_t x_104; 
lean_free_object(x_62);
lean_dec(x_64);
lean_dec(x_56);
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_104 = !lean_is_exclusive(x_75);
if (x_104 == 0)
{
return x_75;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_75, 0);
x_106 = lean_ctor_get(x_75, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_75);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_free_object(x_62);
lean_dec(x_64);
lean_dec(x_56);
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_66);
if (x_108 == 0)
{
return x_66;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_66, 0);
x_110 = lean_ctor_get(x_66, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_66);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_62, 0);
x_113 = lean_ctor_get(x_62, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_62);
lean_inc(x_3);
x_114 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_113);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
lean_inc(x_112);
lean_inc(x_45);
lean_inc(x_3);
lean_inc(x_56);
x_117 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunTarget___lambda__1___boxed), 13, 6);
lean_closure_set(x_117, 0, x_1);
lean_closure_set(x_117, 1, x_56);
lean_closure_set(x_117, 2, x_3);
lean_closure_set(x_117, 3, x_45);
lean_closure_set(x_117, 4, x_112);
lean_closure_set(x_117, 5, x_2);
x_118 = 0;
x_119 = lean_box(x_118);
x_120 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_120, 0, x_117);
lean_closure_set(x_120, 1, x_119);
x_121 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_121, 0, x_120);
x_122 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_123 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_121, x_115, x_122, x_118, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_116);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_127 = x_124;
} else {
 lean_dec_ref(x_124);
 x_127 = lean_box(0);
}
x_128 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_112, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_125);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_130 = x_128;
} else {
 lean_dec_ref(x_128);
 x_130 = lean_box(0);
}
x_131 = l_Lean_Expr_mvarId_x21(x_45);
lean_dec(x_45);
x_132 = l_Lean_Expr_mvarId_x21(x_56);
lean_dec(x_56);
x_133 = lean_box(0);
if (lean_is_scalar(x_127)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_127;
 lean_ctor_set_tag(x_134, 1);
}
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_131);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_List_appendTR___rarg(x_135, x_126);
if (lean_is_scalar(x_130)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_130;
}
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_129);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_112);
lean_dec(x_56);
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_138 = lean_ctor_get(x_123, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_123, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_140 = x_123;
} else {
 lean_dec_ref(x_123);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_112);
lean_dec(x_56);
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_142 = lean_ctor_get(x_114, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_114, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_144 = x_114;
} else {
 lean_dec_ref(x_114);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
}
else
{
uint8_t x_146; 
lean_dec(x_56);
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_146 = !lean_is_exclusive(x_58);
if (x_146 == 0)
{
return x_58;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_58, 0);
x_148 = lean_ctor_get(x_58, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_58);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
}
else
{
uint8_t x_150; 
lean_dec(x_48);
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_150 = !lean_is_exclusive(x_50);
if (x_150 == 0)
{
return x_50;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_50, 0);
x_152 = lean_ctor_get(x_50, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_50);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_39);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_154 = !lean_is_exclusive(x_41);
if (x_154 == 0)
{
return x_41;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_41, 0);
x_156 = lean_ctor_get(x_41, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_41);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
}
}
else
{
lean_object* x_158; lean_object* x_159; uint8_t x_160; 
lean_dec(x_26);
lean_dec(x_2);
x_158 = lean_array_get_size(x_25);
x_159 = lean_unsigned_to_nat(1u);
x_160 = lean_nat_dec_eq(x_158, x_159);
lean_dec(x_158);
if (x_160 == 0)
{
lean_object* x_161; 
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_161 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_unsigned_to_nat(0u);
x_163 = lean_array_fget(x_25, x_162);
lean_dec(x_25);
x_164 = l_Lean_Expr_getAppFnArgs(x_163);
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
if (lean_obj_tag(x_165) == 1)
{
lean_object* x_166; 
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
if (lean_obj_tag(x_166) == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_167 = lean_ctor_get(x_164, 1);
lean_inc(x_167);
lean_dec(x_164);
x_168 = lean_ctor_get(x_165, 1);
lean_inc(x_168);
lean_dec(x_165);
x_169 = l_Mathlib_Tactic_applyFunHyp___closed__3;
x_170 = lean_string_dec_eq(x_168, x_169);
lean_dec(x_168);
if (x_170 == 0)
{
lean_object* x_171; 
lean_dec(x_167);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_171 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_172 = lean_array_get_size(x_167);
lean_dec(x_167);
x_173 = lean_unsigned_to_nat(3u);
x_174 = lean_nat_dec_eq(x_172, x_173);
lean_dec(x_172);
if (x_174 == 0)
{
lean_object* x_175; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_175 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_175;
}
else
{
lean_object* x_176; uint8_t x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_176 = lean_box(0);
x_177 = 0;
x_178 = lean_box(0);
lean_inc(x_8);
x_179 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_176, x_177, x_178, x_8, x_9, x_10, x_11, x_21);
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
lean_inc(x_3);
x_182 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_181);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = l_Mathlib_Tactic_applyFunTarget___closed__4;
lean_inc(x_3);
lean_inc(x_180);
x_186 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunTarget___lambda__2), 12, 5);
lean_closure_set(x_186, 0, x_180);
lean_closure_set(x_186, 1, x_185);
lean_closure_set(x_186, 2, x_1);
lean_closure_set(x_186, 3, x_3);
lean_closure_set(x_186, 4, x_176);
x_187 = 0;
x_188 = lean_box(x_187);
x_189 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_189, 0, x_186);
lean_closure_set(x_189, 1, x_188);
x_190 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_190, 0, x_189);
x_191 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_192 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_190, x_183, x_191, x_187, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_184);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec(x_192);
x_195 = !lean_is_exclusive(x_193);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; uint8_t x_198; 
x_196 = lean_ctor_get(x_193, 0);
x_197 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_196, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_198 = !lean_is_exclusive(x_197);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; 
x_199 = lean_ctor_get(x_197, 0);
lean_dec(x_199);
x_200 = l_Lean_Expr_mvarId_x21(x_180);
lean_dec(x_180);
lean_ctor_set_tag(x_193, 1);
lean_ctor_set(x_193, 0, x_200);
lean_ctor_set(x_197, 0, x_193);
return x_197;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_201 = lean_ctor_get(x_197, 1);
lean_inc(x_201);
lean_dec(x_197);
x_202 = l_Lean_Expr_mvarId_x21(x_180);
lean_dec(x_180);
lean_ctor_set_tag(x_193, 1);
lean_ctor_set(x_193, 0, x_202);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_193);
lean_ctor_set(x_203, 1, x_201);
return x_203;
}
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_204 = lean_ctor_get(x_193, 0);
x_205 = lean_ctor_get(x_193, 1);
lean_inc(x_205);
lean_inc(x_204);
lean_dec(x_193);
x_206 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_204, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_207 = lean_ctor_get(x_206, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_208 = x_206;
} else {
 lean_dec_ref(x_206);
 x_208 = lean_box(0);
}
x_209 = l_Lean_Expr_mvarId_x21(x_180);
lean_dec(x_180);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_205);
if (lean_is_scalar(x_208)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_208;
}
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_207);
return x_211;
}
}
else
{
uint8_t x_212; 
lean_dec(x_180);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_212 = !lean_is_exclusive(x_192);
if (x_212 == 0)
{
return x_192;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_192, 0);
x_214 = lean_ctor_get(x_192, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_192);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
}
}
else
{
uint8_t x_216; 
lean_dec(x_180);
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
x_216 = !lean_is_exclusive(x_182);
if (x_216 == 0)
{
return x_182;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_182, 0);
x_218 = lean_ctor_get(x_182, 1);
lean_inc(x_218);
lean_inc(x_217);
lean_dec(x_182);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
return x_219;
}
}
}
}
}
else
{
lean_object* x_220; 
lean_dec(x_166);
lean_dec(x_165);
lean_dec(x_164);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_220 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_220;
}
}
else
{
lean_object* x_221; 
lean_dec(x_165);
lean_dec(x_164);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_221 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_221;
}
}
}
}
case 1:
{
lean_object* x_222; 
lean_dec(x_22);
lean_dec(x_2);
x_222 = lean_ctor_get(x_24, 0);
lean_inc(x_222);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
x_223 = lean_ctor_get(x_23, 1);
lean_inc(x_223);
lean_dec(x_23);
x_224 = lean_ctor_get(x_24, 1);
lean_inc(x_224);
lean_dec(x_24);
x_225 = l_Mathlib_Tactic_applyFunHyp___closed__12;
x_226 = lean_string_dec_eq(x_224, x_225);
if (x_226 == 0)
{
lean_object* x_227; uint8_t x_228; 
x_227 = l_Mathlib_Tactic_applyFunTarget___closed__5;
x_228 = lean_string_dec_eq(x_224, x_227);
if (x_228 == 0)
{
lean_object* x_229; uint8_t x_230; 
x_229 = l_Mathlib_Tactic_applyFunHyp___closed__11;
x_230 = lean_string_dec_eq(x_224, x_229);
if (x_230 == 0)
{
lean_object* x_231; uint8_t x_232; 
x_231 = l_Mathlib_Tactic_applyFunTarget___closed__6;
x_232 = lean_string_dec_eq(x_224, x_231);
lean_dec(x_224);
if (x_232 == 0)
{
lean_object* x_233; 
lean_dec(x_223);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_233 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_233;
}
else
{
lean_object* x_234; uint8_t x_235; 
x_234 = l_Mathlib_Tactic_applyFunTarget___closed__7;
x_235 = lean_string_dec_eq(x_223, x_234);
lean_dec(x_223);
if (x_235 == 0)
{
lean_object* x_236; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_236 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_236;
}
else
{
lean_object* x_237; uint8_t x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_237 = lean_box(0);
x_238 = 0;
x_239 = lean_box(0);
lean_inc(x_8);
x_240 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_237, x_238, x_239, x_8, x_9, x_10, x_11, x_21);
x_241 = lean_ctor_get(x_240, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_240, 1);
lean_inc(x_242);
lean_dec(x_240);
lean_inc(x_3);
x_243 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_242);
if (lean_obj_tag(x_243) == 0)
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
lean_dec(x_243);
x_246 = l_Mathlib_Tactic_applyFunTarget___closed__9;
lean_inc(x_3);
lean_inc(x_241);
x_247 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunTarget___lambda__2), 12, 5);
lean_closure_set(x_247, 0, x_241);
lean_closure_set(x_247, 1, x_246);
lean_closure_set(x_247, 2, x_1);
lean_closure_set(x_247, 3, x_3);
lean_closure_set(x_247, 4, x_237);
x_248 = 0;
x_249 = lean_box(x_248);
x_250 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_250, 0, x_247);
lean_closure_set(x_250, 1, x_249);
x_251 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_251, 0, x_250);
x_252 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_253 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_251, x_244, x_252, x_248, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_245);
if (lean_obj_tag(x_253) == 0)
{
lean_object* x_254; lean_object* x_255; uint8_t x_256; 
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_253, 1);
lean_inc(x_255);
lean_dec(x_253);
x_256 = !lean_is_exclusive(x_254);
if (x_256 == 0)
{
lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_257 = lean_ctor_get(x_254, 0);
x_258 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_257, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_259 = !lean_is_exclusive(x_258);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; 
x_260 = lean_ctor_get(x_258, 0);
lean_dec(x_260);
x_261 = l_Lean_Expr_mvarId_x21(x_241);
lean_dec(x_241);
lean_ctor_set_tag(x_254, 1);
lean_ctor_set(x_254, 0, x_261);
lean_ctor_set(x_258, 0, x_254);
return x_258;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_258, 1);
lean_inc(x_262);
lean_dec(x_258);
x_263 = l_Lean_Expr_mvarId_x21(x_241);
lean_dec(x_241);
lean_ctor_set_tag(x_254, 1);
lean_ctor_set(x_254, 0, x_263);
x_264 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_264, 0, x_254);
lean_ctor_set(x_264, 1, x_262);
return x_264;
}
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_265 = lean_ctor_get(x_254, 0);
x_266 = lean_ctor_get(x_254, 1);
lean_inc(x_266);
lean_inc(x_265);
lean_dec(x_254);
x_267 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_265, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_268 = lean_ctor_get(x_267, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_269 = x_267;
} else {
 lean_dec_ref(x_267);
 x_269 = lean_box(0);
}
x_270 = l_Lean_Expr_mvarId_x21(x_241);
lean_dec(x_241);
x_271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_266);
if (lean_is_scalar(x_269)) {
 x_272 = lean_alloc_ctor(0, 2, 0);
} else {
 x_272 = x_269;
}
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_268);
return x_272;
}
}
else
{
uint8_t x_273; 
lean_dec(x_241);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_273 = !lean_is_exclusive(x_253);
if (x_273 == 0)
{
return x_253;
}
else
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_274 = lean_ctor_get(x_253, 0);
x_275 = lean_ctor_get(x_253, 1);
lean_inc(x_275);
lean_inc(x_274);
lean_dec(x_253);
x_276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_276, 0, x_274);
lean_ctor_set(x_276, 1, x_275);
return x_276;
}
}
}
else
{
uint8_t x_277; 
lean_dec(x_241);
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
x_277 = !lean_is_exclusive(x_243);
if (x_277 == 0)
{
return x_243;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_ctor_get(x_243, 0);
x_279 = lean_ctor_get(x_243, 1);
lean_inc(x_279);
lean_inc(x_278);
lean_dec(x_243);
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_278);
lean_ctor_set(x_280, 1, x_279);
return x_280;
}
}
}
}
}
else
{
lean_object* x_281; uint8_t x_282; 
lean_dec(x_224);
x_281 = l_Mathlib_Tactic_applyFunHyp___closed__16;
x_282 = lean_string_dec_eq(x_223, x_281);
lean_dec(x_223);
if (x_282 == 0)
{
lean_object* x_283; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_283 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_283;
}
else
{
lean_object* x_284; uint8_t x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_284 = lean_box(0);
x_285 = 0;
x_286 = lean_box(0);
lean_inc(x_8);
x_287 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_284, x_285, x_286, x_8, x_9, x_10, x_11, x_21);
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_287, 1);
lean_inc(x_289);
lean_dec(x_287);
lean_inc(x_3);
x_290 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_289);
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; uint8_t x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
lean_dec(x_290);
x_293 = l_Mathlib_Tactic_applyFunTarget___closed__9;
lean_inc(x_3);
lean_inc(x_288);
x_294 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunTarget___lambda__2), 12, 5);
lean_closure_set(x_294, 0, x_288);
lean_closure_set(x_294, 1, x_293);
lean_closure_set(x_294, 2, x_1);
lean_closure_set(x_294, 3, x_3);
lean_closure_set(x_294, 4, x_284);
x_295 = 0;
x_296 = lean_box(x_295);
x_297 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_297, 0, x_294);
lean_closure_set(x_297, 1, x_296);
x_298 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_298, 0, x_297);
x_299 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_300 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_298, x_291, x_299, x_295, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_292);
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_301; lean_object* x_302; uint8_t x_303; 
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_300, 1);
lean_inc(x_302);
lean_dec(x_300);
x_303 = !lean_is_exclusive(x_301);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; uint8_t x_306; 
x_304 = lean_ctor_get(x_301, 0);
x_305 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_304, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_302);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_306 = !lean_is_exclusive(x_305);
if (x_306 == 0)
{
lean_object* x_307; lean_object* x_308; 
x_307 = lean_ctor_get(x_305, 0);
lean_dec(x_307);
x_308 = l_Lean_Expr_mvarId_x21(x_288);
lean_dec(x_288);
lean_ctor_set_tag(x_301, 1);
lean_ctor_set(x_301, 0, x_308);
lean_ctor_set(x_305, 0, x_301);
return x_305;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_309 = lean_ctor_get(x_305, 1);
lean_inc(x_309);
lean_dec(x_305);
x_310 = l_Lean_Expr_mvarId_x21(x_288);
lean_dec(x_288);
lean_ctor_set_tag(x_301, 1);
lean_ctor_set(x_301, 0, x_310);
x_311 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_311, 0, x_301);
lean_ctor_set(x_311, 1, x_309);
return x_311;
}
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_312 = lean_ctor_get(x_301, 0);
x_313 = lean_ctor_get(x_301, 1);
lean_inc(x_313);
lean_inc(x_312);
lean_dec(x_301);
x_314 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_312, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_302);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_315 = lean_ctor_get(x_314, 1);
lean_inc(x_315);
if (lean_is_exclusive(x_314)) {
 lean_ctor_release(x_314, 0);
 lean_ctor_release(x_314, 1);
 x_316 = x_314;
} else {
 lean_dec_ref(x_314);
 x_316 = lean_box(0);
}
x_317 = l_Lean_Expr_mvarId_x21(x_288);
lean_dec(x_288);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_317);
lean_ctor_set(x_318, 1, x_313);
if (lean_is_scalar(x_316)) {
 x_319 = lean_alloc_ctor(0, 2, 0);
} else {
 x_319 = x_316;
}
lean_ctor_set(x_319, 0, x_318);
lean_ctor_set(x_319, 1, x_315);
return x_319;
}
}
else
{
uint8_t x_320; 
lean_dec(x_288);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_320 = !lean_is_exclusive(x_300);
if (x_320 == 0)
{
return x_300;
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_321 = lean_ctor_get(x_300, 0);
x_322 = lean_ctor_get(x_300, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_300);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_321);
lean_ctor_set(x_323, 1, x_322);
return x_323;
}
}
}
else
{
uint8_t x_324; 
lean_dec(x_288);
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
x_324 = !lean_is_exclusive(x_290);
if (x_324 == 0)
{
return x_290;
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_325 = lean_ctor_get(x_290, 0);
x_326 = lean_ctor_get(x_290, 1);
lean_inc(x_326);
lean_inc(x_325);
lean_dec(x_290);
x_327 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
return x_327;
}
}
}
}
}
else
{
lean_object* x_328; uint8_t x_329; 
lean_dec(x_224);
x_328 = l_Mathlib_Tactic_applyFunTarget___closed__10;
x_329 = lean_string_dec_eq(x_223, x_328);
lean_dec(x_223);
if (x_329 == 0)
{
lean_object* x_330; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_330 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_330;
}
else
{
lean_object* x_331; uint8_t x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_331 = lean_box(0);
x_332 = 0;
x_333 = lean_box(0);
lean_inc(x_8);
x_334 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_331, x_332, x_333, x_8, x_9, x_10, x_11, x_21);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
lean_dec(x_334);
lean_inc(x_3);
x_337 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_336);
if (lean_obj_tag(x_337) == 0)
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; uint8_t x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_338 = lean_ctor_get(x_337, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_337, 1);
lean_inc(x_339);
lean_dec(x_337);
x_340 = l_Mathlib_Tactic_applyFunTarget___closed__12;
lean_inc(x_3);
lean_inc(x_335);
x_341 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunTarget___lambda__2), 12, 5);
lean_closure_set(x_341, 0, x_335);
lean_closure_set(x_341, 1, x_340);
lean_closure_set(x_341, 2, x_1);
lean_closure_set(x_341, 3, x_3);
lean_closure_set(x_341, 4, x_331);
x_342 = 0;
x_343 = lean_box(x_342);
x_344 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_344, 0, x_341);
lean_closure_set(x_344, 1, x_343);
x_345 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_345, 0, x_344);
x_346 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_347 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_345, x_338, x_346, x_342, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_339);
if (lean_obj_tag(x_347) == 0)
{
lean_object* x_348; lean_object* x_349; uint8_t x_350; 
x_348 = lean_ctor_get(x_347, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_347, 1);
lean_inc(x_349);
lean_dec(x_347);
x_350 = !lean_is_exclusive(x_348);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; uint8_t x_353; 
x_351 = lean_ctor_get(x_348, 0);
x_352 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_351, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_349);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_353 = !lean_is_exclusive(x_352);
if (x_353 == 0)
{
lean_object* x_354; lean_object* x_355; 
x_354 = lean_ctor_get(x_352, 0);
lean_dec(x_354);
x_355 = l_Lean_Expr_mvarId_x21(x_335);
lean_dec(x_335);
lean_ctor_set_tag(x_348, 1);
lean_ctor_set(x_348, 0, x_355);
lean_ctor_set(x_352, 0, x_348);
return x_352;
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; 
x_356 = lean_ctor_get(x_352, 1);
lean_inc(x_356);
lean_dec(x_352);
x_357 = l_Lean_Expr_mvarId_x21(x_335);
lean_dec(x_335);
lean_ctor_set_tag(x_348, 1);
lean_ctor_set(x_348, 0, x_357);
x_358 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_358, 0, x_348);
lean_ctor_set(x_358, 1, x_356);
return x_358;
}
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_359 = lean_ctor_get(x_348, 0);
x_360 = lean_ctor_get(x_348, 1);
lean_inc(x_360);
lean_inc(x_359);
lean_dec(x_348);
x_361 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_359, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_349);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_362 = lean_ctor_get(x_361, 1);
lean_inc(x_362);
if (lean_is_exclusive(x_361)) {
 lean_ctor_release(x_361, 0);
 lean_ctor_release(x_361, 1);
 x_363 = x_361;
} else {
 lean_dec_ref(x_361);
 x_363 = lean_box(0);
}
x_364 = l_Lean_Expr_mvarId_x21(x_335);
lean_dec(x_335);
x_365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_365, 0, x_364);
lean_ctor_set(x_365, 1, x_360);
if (lean_is_scalar(x_363)) {
 x_366 = lean_alloc_ctor(0, 2, 0);
} else {
 x_366 = x_363;
}
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_362);
return x_366;
}
}
else
{
uint8_t x_367; 
lean_dec(x_335);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_367 = !lean_is_exclusive(x_347);
if (x_367 == 0)
{
return x_347;
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_368 = lean_ctor_get(x_347, 0);
x_369 = lean_ctor_get(x_347, 1);
lean_inc(x_369);
lean_inc(x_368);
lean_dec(x_347);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_368);
lean_ctor_set(x_370, 1, x_369);
return x_370;
}
}
}
else
{
uint8_t x_371; 
lean_dec(x_335);
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
x_371 = !lean_is_exclusive(x_337);
if (x_371 == 0)
{
return x_337;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_372 = lean_ctor_get(x_337, 0);
x_373 = lean_ctor_get(x_337, 1);
lean_inc(x_373);
lean_inc(x_372);
lean_dec(x_337);
x_374 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_374, 0, x_372);
lean_ctor_set(x_374, 1, x_373);
return x_374;
}
}
}
}
}
else
{
lean_object* x_375; uint8_t x_376; 
lean_dec(x_224);
x_375 = l_Mathlib_Tactic_applyFunHyp___closed__13;
x_376 = lean_string_dec_eq(x_223, x_375);
lean_dec(x_223);
if (x_376 == 0)
{
lean_object* x_377; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_377 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_377;
}
else
{
lean_object* x_378; uint8_t x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_378 = lean_box(0);
x_379 = 0;
x_380 = lean_box(0);
lean_inc(x_8);
x_381 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_378, x_379, x_380, x_8, x_9, x_10, x_11, x_21);
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
lean_dec(x_381);
lean_inc(x_3);
x_384 = l_Lean_MVarId_getTag(x_3, x_8, x_9, x_10, x_11, x_383);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; uint8_t x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_384, 1);
lean_inc(x_386);
lean_dec(x_384);
x_387 = l_Mathlib_Tactic_applyFunTarget___closed__12;
lean_inc(x_3);
lean_inc(x_382);
x_388 = lean_alloc_closure((void*)(l_Mathlib_Tactic_applyFunTarget___lambda__2), 12, 5);
lean_closure_set(x_388, 0, x_382);
lean_closure_set(x_388, 1, x_387);
lean_closure_set(x_388, 2, x_1);
lean_closure_set(x_388, 3, x_3);
lean_closure_set(x_388, 4, x_378);
x_389 = 0;
x_390 = lean_box(x_389);
x_391 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___rarg___boxed), 11, 2);
lean_closure_set(x_391, 0, x_388);
lean_closure_set(x_391, 1, x_390);
x_392 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 1);
lean_closure_set(x_392, 0, x_391);
x_393 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_394 = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(x_392, x_385, x_393, x_389, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_386);
if (lean_obj_tag(x_394) == 0)
{
lean_object* x_395; lean_object* x_396; uint8_t x_397; 
x_395 = lean_ctor_get(x_394, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_394, 1);
lean_inc(x_396);
lean_dec(x_394);
x_397 = !lean_is_exclusive(x_395);
if (x_397 == 0)
{
lean_object* x_398; lean_object* x_399; uint8_t x_400; 
x_398 = lean_ctor_get(x_395, 0);
x_399 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_398, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_396);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_400 = !lean_is_exclusive(x_399);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = lean_ctor_get(x_399, 0);
lean_dec(x_401);
x_402 = l_Lean_Expr_mvarId_x21(x_382);
lean_dec(x_382);
lean_ctor_set_tag(x_395, 1);
lean_ctor_set(x_395, 0, x_402);
lean_ctor_set(x_399, 0, x_395);
return x_399;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_399, 1);
lean_inc(x_403);
lean_dec(x_399);
x_404 = l_Lean_Expr_mvarId_x21(x_382);
lean_dec(x_382);
lean_ctor_set_tag(x_395, 1);
lean_ctor_set(x_395, 0, x_404);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_395);
lean_ctor_set(x_405, 1, x_403);
return x_405;
}
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_406 = lean_ctor_get(x_395, 0);
x_407 = lean_ctor_get(x_395, 1);
lean_inc(x_407);
lean_inc(x_406);
lean_dec(x_395);
x_408 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_refineCore___spec__1(x_3, x_406, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_396);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_409 = lean_ctor_get(x_408, 1);
lean_inc(x_409);
if (lean_is_exclusive(x_408)) {
 lean_ctor_release(x_408, 0);
 lean_ctor_release(x_408, 1);
 x_410 = x_408;
} else {
 lean_dec_ref(x_408);
 x_410 = lean_box(0);
}
x_411 = l_Lean_Expr_mvarId_x21(x_382);
lean_dec(x_382);
x_412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_412, 0, x_411);
lean_ctor_set(x_412, 1, x_407);
if (lean_is_scalar(x_410)) {
 x_413 = lean_alloc_ctor(0, 2, 0);
} else {
 x_413 = x_410;
}
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_413, 1, x_409);
return x_413;
}
}
else
{
uint8_t x_414; 
lean_dec(x_382);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_414 = !lean_is_exclusive(x_394);
if (x_414 == 0)
{
return x_394;
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; 
x_415 = lean_ctor_get(x_394, 0);
x_416 = lean_ctor_get(x_394, 1);
lean_inc(x_416);
lean_inc(x_415);
lean_dec(x_394);
x_417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_417, 0, x_415);
lean_ctor_set(x_417, 1, x_416);
return x_417;
}
}
}
else
{
uint8_t x_418; 
lean_dec(x_382);
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
x_418 = !lean_is_exclusive(x_384);
if (x_418 == 0)
{
return x_384;
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_419 = lean_ctor_get(x_384, 0);
x_420 = lean_ctor_get(x_384, 1);
lean_inc(x_420);
lean_inc(x_419);
lean_dec(x_384);
x_421 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_421, 0, x_419);
lean_ctor_set(x_421, 1, x_420);
return x_421;
}
}
}
}
}
else
{
lean_object* x_422; 
lean_dec(x_222);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_422 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_422;
}
}
default: 
{
lean_object* x_423; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_423 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_423;
}
}
}
else
{
lean_object* x_424; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_424 = l_Mathlib_Tactic_applyFunTargetFailure(x_1, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_424;
}
}
else
{
uint8_t x_425; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_425 = !lean_is_exclusive(x_19);
if (x_425 == 0)
{
return x_19;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; 
x_426 = lean_ctor_get(x_19, 0);
x_427 = lean_ctor_get(x_19, 1);
lean_inc(x_427);
lean_inc(x_426);
lean_dec(x_19);
x_428 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_428, 0, x_426);
lean_ctor_set(x_428, 1, x_427);
return x_428;
}
}
}
else
{
uint8_t x_429; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_429 = !lean_is_exclusive(x_13);
if (x_429 == 0)
{
return x_13;
}
else
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; 
x_430 = lean_ctor_get(x_13, 0);
x_431 = lean_ctor_get(x_13, 1);
lean_inc(x_431);
lean_inc(x_430);
lean_dec(x_13);
x_432 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_432, 0, x_430);
lean_ctor_set(x_432, 1, x_431);
return x_432;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_applyFunTarget___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Mathlib_Tactic_applyFunTarget___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
return x_14;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("applyFun", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3;
x_2 = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5;
x_3 = l_Mathlib_Tactic_applyFun___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFun___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("apply_fun ", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_applyFun___closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFun___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_applyFun___closed__8;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_applyFun___closed__4;
x_2 = l_Mathlib_Tactic_applyFun___closed__6;
x_3 = l_Mathlib_Tactic_applyFun___closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optional", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_applyFun___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_applyFun___closed__12;
x_2 = l_Lean_Parser_Tactic_location;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_applyFun___closed__4;
x_2 = l_Mathlib_Tactic_applyFun___closed__10;
x_3 = l_Mathlib_Tactic_applyFun___closed__13;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" using ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_applyFun___closed__15;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_applyFun___closed__4;
x_2 = l_Mathlib_Tactic_applyFun___closed__16;
x_3 = l_Mathlib_Tactic_applyFun___closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_applyFun___closed__12;
x_2 = l_Mathlib_Tactic_applyFun___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_applyFun___closed__4;
x_2 = l_Mathlib_Tactic_applyFun___closed__14;
x_3 = l_Mathlib_Tactic_applyFun___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_applyFun___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_applyFun___closed__19;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_applyFun() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_applyFun___closed__20;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_getMainGoal(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Mathlib_Tactic_applyFunHyp(x_1, x_2, x_3, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Tactic_replaceMainGoal(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Tactic_getMainGoal(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_Mathlib_Tactic_applyFunTarget(x_1, x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Tactic_replaceMainGoal(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("apply_fun failed", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__2;
x_12 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_mkOptionalNode(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__1;
x_2 = l_Lean_Elab_Tactic_expandOptLocation(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___boxed), 10, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_4);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__1), 12, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_4);
x_15 = lean_alloc_closure((void*)(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__2), 11, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_4);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMainContext___rarg), 10, 1);
lean_closure_set(x_16, 0, x_15);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__2;
x_18 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3;
x_19 = l_Lean_Elab_Tactic_withLocation(x_17, x_14, x_16, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = l_Lean_mkOptionalNode(x_2);
lean_dec(x_2);
x_22 = l_Lean_Elab_Tactic_expandOptLocation(x_21);
lean_dec(x_21);
x_23 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3;
x_24 = l_Lean_Elab_Tactic_withLocation(x_22, x_14, x_16, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_22);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_mkOptionalNode(x_26);
lean_dec(x_26);
x_28 = l_Lean_Elab_Tactic_expandOptLocation(x_27);
lean_dec(x_27);
x_29 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3;
x_30 = l_Lean_Elab_Tactic_withLocation(x_28, x_14, x_16, x_29, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_28);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(3u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_Lean_Syntax_isNone(x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(2u);
lean_inc(x_15);
x_18 = l_Lean_Syntax_matchesNull(x_15, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__PermuteGoals______elabRules__Batteries__Tactic__tacticPick__goal_x2d____1___spec__1___rarg(x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = l_Lean_Syntax_getArg(x_15, x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_box(0);
x_24 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4(x_2, x_4, x_23, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
x_25 = lean_box(0);
x_26 = lean_box(0);
x_27 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4(x_2, x_4, x_26, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_applyFun___closed__2;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__PermuteGoals______elabRules__Batteries__Tactic__tacticPick__goal_x2d____1___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = l_Lean_Syntax_isNone(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_inc(x_17);
x_19 = l_Lean_Syntax_matchesNull(x_17, x_14);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__PermuteGoals______elabRules__Batteries__Tactic__tacticPick__goal_x2d____1___spec__1___rarg(x_10);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_getArg(x_17, x_21);
lean_dec(x_17);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_box(0);
x_25 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__5(x_1, x_15, x_24, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_17);
x_26 = lean_box(0);
x_27 = lean_box(0);
x_28 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__5(x_1, x_15, x_27, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Lean_Expr_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Monotone_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_ApplyFun(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Lean_Expr_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Monotone_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__1 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__1();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__1);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__2);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__3);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__4 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__4();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__4);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__5);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__6 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__6();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__6);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__7 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__7();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__7);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__8 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__8();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__8);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__9 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__9();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__9);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__10 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__10();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__10);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__11 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__11();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__11);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__12 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__12();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__12);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__13);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__14 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__14();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__14);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__15 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__15();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__15);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__16 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__16();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__16);
l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__17 = _init_l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__17();
lean_mark_persistent(l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5____closed__17);
res = l_Mathlib_Tactic_initFn____x40_Mathlib_Tactic_ApplyFun___hyg_5_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__1 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__1);
l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__2 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__2);
l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__3 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__3);
l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__4 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__2___closed__4);
l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__1);
l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__2 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__2);
l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__3 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__3);
l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__4 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__4);
l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__5 = _init_l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___lambda__4___closed__5);
l_Mathlib_Tactic_applyFunHyp___closed__1 = _init_l_Mathlib_Tactic_applyFunHyp___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__1);
l_Mathlib_Tactic_applyFunHyp___closed__2 = _init_l_Mathlib_Tactic_applyFunHyp___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__2);
l_Mathlib_Tactic_applyFunHyp___closed__3 = _init_l_Mathlib_Tactic_applyFunHyp___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__3);
l_Mathlib_Tactic_applyFunHyp___closed__4 = _init_l_Mathlib_Tactic_applyFunHyp___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__4);
l_Mathlib_Tactic_applyFunHyp___closed__5 = _init_l_Mathlib_Tactic_applyFunHyp___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__5);
l_Mathlib_Tactic_applyFunHyp___closed__6 = _init_l_Mathlib_Tactic_applyFunHyp___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__6);
l_Mathlib_Tactic_applyFunHyp___closed__7 = _init_l_Mathlib_Tactic_applyFunHyp___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__7);
l_Mathlib_Tactic_applyFunHyp___closed__8 = _init_l_Mathlib_Tactic_applyFunHyp___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__8);
l_Mathlib_Tactic_applyFunHyp___closed__9 = _init_l_Mathlib_Tactic_applyFunHyp___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__9);
l_Mathlib_Tactic_applyFunHyp___closed__10 = _init_l_Mathlib_Tactic_applyFunHyp___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__10);
l_Mathlib_Tactic_applyFunHyp___closed__11 = _init_l_Mathlib_Tactic_applyFunHyp___closed__11();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__11);
l_Mathlib_Tactic_applyFunHyp___closed__12 = _init_l_Mathlib_Tactic_applyFunHyp___closed__12();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__12);
l_Mathlib_Tactic_applyFunHyp___closed__13 = _init_l_Mathlib_Tactic_applyFunHyp___closed__13();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__13);
l_Mathlib_Tactic_applyFunHyp___closed__14 = _init_l_Mathlib_Tactic_applyFunHyp___closed__14();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__14);
l_Mathlib_Tactic_applyFunHyp___closed__15 = _init_l_Mathlib_Tactic_applyFunHyp___closed__15();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__15);
l_Mathlib_Tactic_applyFunHyp___closed__16 = _init_l_Mathlib_Tactic_applyFunHyp___closed__16();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__16);
l_Mathlib_Tactic_applyFunHyp___closed__17 = _init_l_Mathlib_Tactic_applyFunHyp___closed__17();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__17);
l_Mathlib_Tactic_applyFunHyp___closed__18 = _init_l_Mathlib_Tactic_applyFunHyp___closed__18();
lean_mark_persistent(l_Mathlib_Tactic_applyFunHyp___closed__18);
l_Mathlib_Tactic_applyFunTargetFailure___closed__1 = _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTargetFailure___closed__1);
l_Mathlib_Tactic_applyFunTargetFailure___closed__2 = _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTargetFailure___closed__2);
l_Mathlib_Tactic_applyFunTargetFailure___closed__3 = _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTargetFailure___closed__3);
l_Mathlib_Tactic_applyFunTargetFailure___closed__4 = _init_l_Mathlib_Tactic_applyFunTargetFailure___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTargetFailure___closed__4);
l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__1 = _init_l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__1);
l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__2 = _init_l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__2);
l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__3 = _init_l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___lambda__1___closed__3);
l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__1 = _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__1);
l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__2 = _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__2);
l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__3 = _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__3);
l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__4 = _init_l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___lambda__3___closed__4);
l_Mathlib_Tactic_maybeProveInjective___closed__1 = _init_l_Mathlib_Tactic_maybeProveInjective___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___closed__1);
l_Mathlib_Tactic_maybeProveInjective___closed__2 = _init_l_Mathlib_Tactic_maybeProveInjective___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_maybeProveInjective___closed__2);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__1 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__1);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__2 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__2);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__3 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__3);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__4 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__4);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__5);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__6 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__6);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__7 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__7);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__8 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__8);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__9 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__9);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__10 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__10);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__11 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__11();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__11);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__12 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__12();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__12);
l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13 = _init_l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___lambda__1___closed__13);
l_Mathlib_Tactic_applyFunTarget___closed__1 = _init_l_Mathlib_Tactic_applyFunTarget___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__1);
l_Mathlib_Tactic_applyFunTarget___closed__2 = _init_l_Mathlib_Tactic_applyFunTarget___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__2);
l_Mathlib_Tactic_applyFunTarget___closed__3 = _init_l_Mathlib_Tactic_applyFunTarget___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__3);
l_Mathlib_Tactic_applyFunTarget___closed__4 = _init_l_Mathlib_Tactic_applyFunTarget___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__4);
l_Mathlib_Tactic_applyFunTarget___closed__5 = _init_l_Mathlib_Tactic_applyFunTarget___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__5);
l_Mathlib_Tactic_applyFunTarget___closed__6 = _init_l_Mathlib_Tactic_applyFunTarget___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__6);
l_Mathlib_Tactic_applyFunTarget___closed__7 = _init_l_Mathlib_Tactic_applyFunTarget___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__7);
l_Mathlib_Tactic_applyFunTarget___closed__8 = _init_l_Mathlib_Tactic_applyFunTarget___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__8);
l_Mathlib_Tactic_applyFunTarget___closed__9 = _init_l_Mathlib_Tactic_applyFunTarget___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__9);
l_Mathlib_Tactic_applyFunTarget___closed__10 = _init_l_Mathlib_Tactic_applyFunTarget___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__10);
l_Mathlib_Tactic_applyFunTarget___closed__11 = _init_l_Mathlib_Tactic_applyFunTarget___closed__11();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__11);
l_Mathlib_Tactic_applyFunTarget___closed__12 = _init_l_Mathlib_Tactic_applyFunTarget___closed__12();
lean_mark_persistent(l_Mathlib_Tactic_applyFunTarget___closed__12);
l_Mathlib_Tactic_applyFun___closed__1 = _init_l_Mathlib_Tactic_applyFun___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__1);
l_Mathlib_Tactic_applyFun___closed__2 = _init_l_Mathlib_Tactic_applyFun___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__2);
l_Mathlib_Tactic_applyFun___closed__3 = _init_l_Mathlib_Tactic_applyFun___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__3);
l_Mathlib_Tactic_applyFun___closed__4 = _init_l_Mathlib_Tactic_applyFun___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__4);
l_Mathlib_Tactic_applyFun___closed__5 = _init_l_Mathlib_Tactic_applyFun___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__5);
l_Mathlib_Tactic_applyFun___closed__6 = _init_l_Mathlib_Tactic_applyFun___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__6);
l_Mathlib_Tactic_applyFun___closed__7 = _init_l_Mathlib_Tactic_applyFun___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__7);
l_Mathlib_Tactic_applyFun___closed__8 = _init_l_Mathlib_Tactic_applyFun___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__8);
l_Mathlib_Tactic_applyFun___closed__9 = _init_l_Mathlib_Tactic_applyFun___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__9);
l_Mathlib_Tactic_applyFun___closed__10 = _init_l_Mathlib_Tactic_applyFun___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__10);
l_Mathlib_Tactic_applyFun___closed__11 = _init_l_Mathlib_Tactic_applyFun___closed__11();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__11);
l_Mathlib_Tactic_applyFun___closed__12 = _init_l_Mathlib_Tactic_applyFun___closed__12();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__12);
l_Mathlib_Tactic_applyFun___closed__13 = _init_l_Mathlib_Tactic_applyFun___closed__13();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__13);
l_Mathlib_Tactic_applyFun___closed__14 = _init_l_Mathlib_Tactic_applyFun___closed__14();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__14);
l_Mathlib_Tactic_applyFun___closed__15 = _init_l_Mathlib_Tactic_applyFun___closed__15();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__15);
l_Mathlib_Tactic_applyFun___closed__16 = _init_l_Mathlib_Tactic_applyFun___closed__16();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__16);
l_Mathlib_Tactic_applyFun___closed__17 = _init_l_Mathlib_Tactic_applyFun___closed__17();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__17);
l_Mathlib_Tactic_applyFun___closed__18 = _init_l_Mathlib_Tactic_applyFun___closed__18();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__18);
l_Mathlib_Tactic_applyFun___closed__19 = _init_l_Mathlib_Tactic_applyFun___closed__19();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__19);
l_Mathlib_Tactic_applyFun___closed__20 = _init_l_Mathlib_Tactic_applyFun___closed__20();
lean_mark_persistent(l_Mathlib_Tactic_applyFun___closed__20);
l_Mathlib_Tactic_applyFun = _init_l_Mathlib_Tactic_applyFun();
lean_mark_persistent(l_Mathlib_Tactic_applyFun);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__1);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__2 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__2();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__3___closed__2);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__1);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__2 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__2();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__2);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyFun______elabRules__Mathlib__Tactic__applyFun__1___lambda__4___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
