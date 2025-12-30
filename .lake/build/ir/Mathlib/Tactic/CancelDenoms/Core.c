// Lean compiler output
// Module: Mathlib.Tactic.CancelDenoms.Core
// Imports: Init Mathlib.Algebra.Field.Basic Mathlib.Algebra.Order.Field.Defs Mathlib.Data.Tree.Basic Mathlib.Logic.Basic Mathlib.Tactic.NormNum.Core Mathlib.Util.SynthesizeUsing Mathlib.Util.Qq
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
lean_object* lean_nat_gcd(lean_object*, lean_object*);
lean_object* l_Nat_lcm(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__21;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__16;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__33;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__21;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
static lean_object* l_CancelDenoms_findCompLemma___closed__14;
static lean_object* l_CancelDenoms_mkProdPrf___closed__1;
static lean_object* l_cancelDenominators___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__9___boxed(lean_object**);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__18;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
static lean_object* l_CancelDenoms_findCompLemma___closed__15;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__6;
static lean_object* l_CancelDenoms_derive___lambda__2___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
LEAN_EXPORT lean_object* l_CancelDenoms_findCompLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__8;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__18;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__12;
LEAN_EXPORT lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4_(lean_object*);
static lean_object* l_cancelDenoms___closed__9;
static lean_object* l_CancelDenoms_derive___lambda__3___closed__7;
static lean_object* l_cancelDenominators___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___closed__14;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__23;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__65;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__7;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__3;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__27;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__5;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__7;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__5;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__29;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_location;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__6;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__13;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__8;
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_derive___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__56;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
uint64_t lean_uint64_lor(uint64_t, uint64_t);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__11;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__22;
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_findCancelFactor(lean_object*);
static lean_object* l_CancelDenoms_deriveThms___closed__2;
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
static lean_object* l_CancelDenoms_findCompLemma___closed__7;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__22;
static lean_object* l_CancelDenoms_findCancelFactor___closed__5;
LEAN_EXPORT lean_object* l_cancelDenominators___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__51;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__67;
lean_object* lean_mk_array(lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__16;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__20;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__1;
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__17;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__5;
lean_object* l_Lean_Expr_bvar___override(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__2;
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCancelFactor___closed__1;
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__7;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__49;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__17;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__8;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__60;
static lean_object* l_CancelDenoms_mkProdPrf___closed__10;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__13;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__12;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__9;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__10;
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCancelFactor___closed__9;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__12;
static lean_object* l_CancelDenoms_mkProdPrf___closed__12;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__25;
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__54;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__4;
lean_object* l_Lean_Exception_toMessageData(lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21;
static lean_object* l_CancelDenoms_findCancelFactor___closed__8;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__28;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__9;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__31;
static lean_object* l_cancelDenoms___closed__8;
static lean_object* l_CancelDenoms_deriveThms___closed__6;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__8;
static lean_object* l_CancelDenoms_findCompLemma___closed__6;
static lean_object* l_CancelDenoms_findCompLemma___closed__1;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__24;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__1;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__1;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__46;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__3;
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__17;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__8___closed__1;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__21;
static lean_object* l_CancelDenoms_deriveThms___closed__5;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__12;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__26;
LEAN_EXPORT lean_object* l_CancelDenoms_deriveThms;
static lean_object* l_CancelDenoms_derive___lambda__3___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__66;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
static lean_object* l_CancelDenoms_mkProdPrf___closed__13;
LEAN_EXPORT lean_object* l_cancelDenominatorsTarget___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__4;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__11;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__PermuteGoals______elabRules__Batteries__Tactic__tacticPick__goal_x2d____1___spec__1___rarg(lean_object*);
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__10;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__16;
static lean_object* l_cancelDenominators___closed__1;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__15;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__61;
static lean_object* l_CancelDenoms_findCancelFactor___closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__8;
static lean_object* l_CancelDenoms_findCompLemma___closed__13;
static lean_object* l_CancelDenoms_deriveThms___closed__1;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__7;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__23;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__6;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__13;
static lean_object* l_CancelDenoms_findCancelFactor___closed__16;
lean_object* l_Lean_throwError___at_Lean_Meta_Grind_mkEMatchEqTheoremCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_derive___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__10;
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__5;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__3___closed__12;
static lean_object* l_CancelDenoms_findCompLemma___closed__12;
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
LEAN_EXPORT lean_object* l_cancelDenominators___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__13;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Qq_inferTypeQ_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCancelFactor___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__7;
static lean_object* l_CancelDenoms_findCompLemma___closed__16;
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__42;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__20;
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__18;
static lean_object* l_CancelDenoms_findCancelFactor___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__9;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__7;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__7;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1;
static lean_object* l_CancelDenoms_derive___lambda__2___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___closed__3;
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_cancelDenominatorsTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticCancel__denoms_____closed__3;
lean_object* l_Lean_FVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__5;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__62;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__12;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__6;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__23;
static lean_object* l_CancelDenoms_derive___lambda__3___closed__1;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__14;
static lean_object* l_CancelDenoms_findCompLemma___closed__20;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__58;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__15;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___closed__2;
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__26;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__6;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCompLemma___closed__5;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__29;
static lean_object* l_cancelDenoms___closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__5;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__9;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__8;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__7;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__19;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__13;
static lean_object* l_CancelDenoms_findCancelFactor___closed__14;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__14;
static lean_object* l_CancelDenoms_findCompLemma___closed__9;
static lean_object* l_CancelDenoms_findCompLemma___closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___closed__11;
static lean_object* l_tacticCancel__denoms_____closed__1;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__24;
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_cancelDenominatorsInType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__2___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__2___closed__2;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__57;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__20;
lean_object* l_Lean_Meta_Simp_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__16;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__27;
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_derive___closed__2;
static lean_object* l_CancelDenoms_findCancelFactor___closed__13;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__2___closed__1;
lean_object* l_Lean_mkOptionalNode(lean_object*);
static lean_object* l_CancelDenoms_derive___lambda__4___closed__8;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCompLemma___closed__21;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__6;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__14;
static lean_object* l_CancelDenoms_findCancelFactor___closed__4;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__18;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCompLemma___closed__10;
static lean_object* l_cancelDenoms___closed__1;
static lean_object* l_cancelDenoms___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
static lean_object* l_cancelDenoms___closed__7;
static lean_object* l_CancelDenoms_derive___lambda__5___closed__1;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__12;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__19;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCompLemma___closed__4;
static lean_object* l_CancelDenoms_derive___lambda__3___closed__6;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__17;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__5;
static lean_object* l_CancelDenoms_findCancelFactor___closed__12;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__34;
static lean_object* l_CancelDenoms_derive___closed__1;
static lean_object* l_CancelDenoms_findCompLemma___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
static lean_object* l_CancelDenoms_findCompLemma___closed__2;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__15;
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___closed__8;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__14;
static lean_object* l_CancelDenoms_mkProdPrf___closed__6;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5;
lean_object* l_Qq_synthInstanceQ___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_cancelDenoms___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__64;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__2;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__7;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__50;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__55;
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__3;
static lean_object* l_cancelDenoms___closed__10;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__4;
LEAN_EXPORT lean_object* l_CancelDenoms_synthesizeUsingNormNum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__14;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__4;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__36;
static lean_object* l_CancelDenoms_findCompLemma___closed__17;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__38;
static lean_object* l_CancelDenoms_deriveThms___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__17;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__5;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__8;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__53;
lean_object* lean_nat_pow(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__18;
static lean_object* l_CancelDenoms_findCompLemma___closed__8;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__4;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__4;
lean_object* l_Lean_Meta_simpOnlyNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__10;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__15;
lean_object* l_Lean_Environment_mainModule(lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__4;
LEAN_EXPORT lean_object* l_cancelDenominatorsAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_findCompLemma___closed__18;
lean_object* l_Lean_mkRawNatLit(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__11;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
static lean_object* l_CancelDenoms_deriveThms___closed__4;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__22;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__15;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__2;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__1;
LEAN_EXPORT lean_object* l_CancelDenoms_derive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__15;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__2___closed__6;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__8;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
static lean_object* l_CancelDenoms_findCompLemma___closed__19;
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__10;
static lean_object* l_CancelDenoms_derive___lambda__2___closed__1;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l_cancelDenoms___closed__6;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__41;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__63;
static lean_object* l_CancelDenoms_derive___lambda__3___closed__3;
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_cancelDenominators___closed__2;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__2;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__4;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__39;
static lean_object* l_CancelDenoms_findCancelFactor___closed__10;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__9;
LEAN_EXPORT lean_object* l_cancelDenominators___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__14;
lean_object* l_Lean_LocalDecl_type(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__6;
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_cancelDenominatorsInType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
lean_object* l_Array_mkArray1___rarg(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__9;
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_cancelDenominatorsAt___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__3;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__16;
static lean_object* l_CancelDenoms_mkProdPrf___closed__4;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__8___closed__2;
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__5;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__1;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__9;
static lean_object* l_CancelDenoms_mkProdPrf___closed__5;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__9;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__1;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_cancelDenoms___closed__4;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__17;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__3;
static lean_object* l_CancelDenoms_findCancelFactor___closed__15;
static lean_object* l_CancelDenoms_mkProdPrf___closed__9;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__14;
static lean_object* l_CancelDenoms_derive___lambda__2___closed__4;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__13;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__15;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___closed__7;
lean_object* lean_array_mk(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__11;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_cancelDenominators___closed__3;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__18;
extern lean_object* l_Lean_Meta_Simp_defaultMaxSteps;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__2;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__47;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__48;
LEAN_EXPORT lean_object* l_cancelDenominators(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__8;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__59;
static lean_object* l_CancelDenoms_findCancelFactor___closed__7;
lean_object* l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__19;
lean_object* l_Mathlib_Meta_NormNum_mkOfNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tacticCancel__denoms__;
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__6;
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__2___closed__4;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__5;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__3;
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__12;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__2___closed__5;
lean_object* l_synthesizeUsingTactic_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_cancelDenoms;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__6;
static lean_object* l_CancelDenoms_derive___lambda__3___closed__5;
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__24;
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__44;
static lean_object* l_CancelDenoms_derive___lambda__4___closed__6;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__12;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__4;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__1;
lean_object* l_Mathlib_Meta_NormNum_deriveSimp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_derive___lambda__5___closed__2;
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
static lean_object* l_CancelDenoms_cancelDenominatorsInType___closed__19;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__25;
static lean_object* l_CancelDenoms_findCancelFactor___closed__6;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__25;
uint8_t l_Lean_Exception_isRuntime(lean_object*);
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__20;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__16;
lean_object* l___private_Lean_Meta_Tactic_Replace_0__Lean_Meta_replaceLocalDeclCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___boxed(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_object* l_String_toSubstring_x27(lean_object*);
lean_object* l_Lean_Elab_Tactic_liftMetaTactic_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__15;
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__14;
static lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__10;
static lean_object* l_CancelDenoms_derive___lambda__3___closed__4;
static lean_object* l_tacticCancel__denoms_____closed__2;
static lean_object* l_CancelDenoms_synthesizeUsingNormNum___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__7___closed__10;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__8;
static lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__9;
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__8___boxed(lean_object**);
static lean_object* l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__52;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__5___closed__11;
static lean_object* l_cancelDenoms___closed__5;
static lean_object* l_CancelDenoms_mkProdPrf___lambda__9___closed__28;
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CancelDenoms", 12, 12);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("initFn", 6, 6);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__4;
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__6;
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__8;
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__10;
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Core", 4, 4);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__11;
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__13;
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__15;
x_2 = lean_unsigned_to_nat(4u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2;
x_3 = 0;
x_4 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__16;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_CancelDenoms_findCancelFactor___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HAdd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HDiv", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HPow", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Inv", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inv", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hPow", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hDiv", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCancelFactor___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hAdd", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_findCancelFactor(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_getAppFnArgs(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = l_CancelDenoms_findCancelFactor___closed__3;
x_12 = lean_string_dec_eq(x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_CancelDenoms_findCancelFactor___closed__4;
x_14 = lean_string_dec_eq(x_10, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_CancelDenoms_findCancelFactor___closed__5;
x_16 = lean_string_dec_eq(x_10, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_CancelDenoms_findCancelFactor___closed__6;
x_18 = lean_string_dec_eq(x_10, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_CancelDenoms_findCancelFactor___closed__7;
x_20 = lean_string_dec_eq(x_10, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_CancelDenoms_findCancelFactor___closed__8;
x_22 = lean_string_dec_eq(x_10, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_CancelDenoms_findCancelFactor___closed__9;
x_24 = lean_string_dec_eq(x_10, x_23);
lean_dec(x_10);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_7);
x_25 = l_CancelDenoms_findCancelFactor___closed__2;
return x_25;
}
else
{
lean_object* x_26; uint8_t x_27; 
x_26 = l_CancelDenoms_findCancelFactor___closed__10;
x_27 = lean_string_dec_eq(x_9, x_26);
lean_dec(x_9);
if (x_27 == 0)
{
lean_object* x_28; 
lean_free_object(x_2);
lean_dec(x_7);
x_28 = l_CancelDenoms_findCancelFactor___closed__2;
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_array_get_size(x_7);
x_30 = lean_unsigned_to_nat(3u);
x_31 = lean_nat_dec_eq(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; 
lean_free_object(x_2);
lean_dec(x_7);
x_32 = l_CancelDenoms_findCancelFactor___closed__2;
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_unsigned_to_nat(2u);
x_34 = lean_array_fget(x_7, x_33);
lean_dec(x_7);
x_35 = l_Lean_Expr_nat_x3f(x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
lean_free_object(x_2);
x_36 = l_CancelDenoms_findCancelFactor___closed__2;
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_box(0);
lean_inc(x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_38);
lean_inc(x_37);
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_39);
lean_ctor_set(x_2, 1, x_40);
lean_ctor_set(x_2, 0, x_37);
return x_2;
}
}
}
}
}
else
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_10);
lean_free_object(x_2);
x_41 = l_CancelDenoms_findCancelFactor___closed__11;
x_42 = lean_string_dec_eq(x_9, x_41);
lean_dec(x_9);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_7);
x_43 = l_CancelDenoms_findCancelFactor___closed__2;
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_array_get_size(x_7);
x_45 = lean_unsigned_to_nat(6u);
x_46 = lean_nat_dec_eq(x_44, x_45);
lean_dec(x_44);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_7);
x_47 = l_CancelDenoms_findCancelFactor___closed__2;
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_unsigned_to_nat(4u);
x_49 = lean_array_fget(x_7, x_48);
x_50 = lean_unsigned_to_nat(5u);
x_51 = lean_array_fget(x_7, x_50);
lean_dec(x_7);
x_52 = l_Lean_Expr_nat_x3f(x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; 
lean_dec(x_49);
x_53 = l_CancelDenoms_findCancelFactor___closed__2;
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_CancelDenoms_findCancelFactor(x_49);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ctor_get(x_55, 1);
x_59 = lean_nat_pow(x_57, x_54);
lean_dec(x_57);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_61, 0, x_54);
lean_ctor_set(x_61, 1, x_60);
lean_ctor_set(x_61, 2, x_60);
lean_inc(x_59);
x_62 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_58);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_55, 1, x_62);
lean_ctor_set(x_55, 0, x_59);
return x_55;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_63 = lean_ctor_get(x_55, 0);
x_64 = lean_ctor_get(x_55, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_55);
x_65 = lean_nat_pow(x_63, x_54);
lean_dec(x_63);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_67, 0, x_54);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set(x_67, 2, x_66);
lean_inc(x_65);
x_68 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_64);
lean_ctor_set(x_68, 2, x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_65);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
}
}
else
{
lean_object* x_70; uint8_t x_71; 
lean_dec(x_10);
lean_free_object(x_2);
x_70 = l_CancelDenoms_findCancelFactor___closed__12;
x_71 = lean_string_dec_eq(x_9, x_70);
lean_dec(x_9);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_7);
x_72 = l_CancelDenoms_findCancelFactor___closed__2;
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_73 = lean_array_get_size(x_7);
x_74 = lean_unsigned_to_nat(3u);
x_75 = lean_nat_dec_eq(x_73, x_74);
lean_dec(x_73);
if (x_75 == 0)
{
lean_object* x_76; 
lean_dec(x_7);
x_76 = l_CancelDenoms_findCancelFactor___closed__2;
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_unsigned_to_nat(2u);
x_78 = lean_array_fget(x_7, x_77);
lean_dec(x_7);
x_1 = x_78;
goto _start;
}
}
}
}
else
{
lean_object* x_80; uint8_t x_81; 
lean_dec(x_10);
lean_free_object(x_2);
x_80 = l_CancelDenoms_findCancelFactor___closed__13;
x_81 = lean_string_dec_eq(x_9, x_80);
lean_dec(x_9);
if (x_81 == 0)
{
lean_object* x_82; 
lean_dec(x_7);
x_82 = l_CancelDenoms_findCancelFactor___closed__2;
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_83 = lean_array_get_size(x_7);
x_84 = lean_unsigned_to_nat(6u);
x_85 = lean_nat_dec_eq(x_83, x_84);
lean_dec(x_83);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_7);
x_86 = l_CancelDenoms_findCancelFactor___closed__2;
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_array_fget(x_7, x_87);
x_89 = lean_unsigned_to_nat(5u);
x_90 = lean_array_fget(x_7, x_89);
lean_dec(x_7);
x_91 = l_Lean_Expr_nat_x3f(x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; 
lean_dec(x_88);
x_92 = l_CancelDenoms_findCancelFactor___closed__2;
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_93 = lean_ctor_get(x_91, 0);
lean_inc(x_93);
lean_dec(x_91);
x_94 = l_CancelDenoms_findCancelFactor(x_88);
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_96 = lean_ctor_get(x_94, 0);
x_97 = lean_ctor_get(x_94, 1);
x_98 = lean_nat_mul(x_96, x_93);
lean_dec(x_96);
x_99 = lean_box(0);
x_100 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_100, 0, x_93);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_100, 2, x_99);
lean_inc(x_98);
x_101 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_97);
lean_ctor_set(x_101, 2, x_100);
lean_ctor_set(x_94, 1, x_101);
lean_ctor_set(x_94, 0, x_98);
return x_94;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_102 = lean_ctor_get(x_94, 0);
x_103 = lean_ctor_get(x_94, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_94);
x_104 = lean_nat_mul(x_102, x_93);
lean_dec(x_102);
x_105 = lean_box(0);
x_106 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_106, 0, x_93);
lean_ctor_set(x_106, 1, x_105);
lean_ctor_set(x_106, 2, x_105);
lean_inc(x_104);
x_107 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_103);
lean_ctor_set(x_107, 2, x_106);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_104);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
}
}
}
else
{
lean_object* x_109; uint8_t x_110; 
lean_dec(x_10);
lean_free_object(x_2);
x_109 = l_CancelDenoms_findCancelFactor___closed__14;
x_110 = lean_string_dec_eq(x_9, x_109);
lean_dec(x_9);
if (x_110 == 0)
{
lean_object* x_111; 
lean_dec(x_7);
x_111 = l_CancelDenoms_findCancelFactor___closed__2;
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_112 = lean_array_get_size(x_7);
x_113 = lean_unsigned_to_nat(6u);
x_114 = lean_nat_dec_eq(x_112, x_113);
lean_dec(x_112);
if (x_114 == 0)
{
lean_object* x_115; 
lean_dec(x_7);
x_115 = l_CancelDenoms_findCancelFactor___closed__2;
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_116 = lean_unsigned_to_nat(4u);
x_117 = lean_array_fget(x_7, x_116);
x_118 = lean_unsigned_to_nat(5u);
x_119 = lean_array_fget(x_7, x_118);
lean_dec(x_7);
x_120 = l_CancelDenoms_findCancelFactor(x_117);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = l_CancelDenoms_findCancelFactor(x_119);
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_125 = lean_ctor_get(x_123, 0);
x_126 = lean_ctor_get(x_123, 1);
x_127 = lean_nat_mul(x_121, x_125);
lean_dec(x_125);
lean_dec(x_121);
lean_inc(x_127);
x_128 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_122);
lean_ctor_set(x_128, 2, x_126);
lean_ctor_set(x_123, 1, x_128);
lean_ctor_set(x_123, 0, x_127);
return x_123;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_129 = lean_ctor_get(x_123, 0);
x_130 = lean_ctor_get(x_123, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_123);
x_131 = lean_nat_mul(x_121, x_129);
lean_dec(x_129);
lean_dec(x_121);
lean_inc(x_131);
x_132 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_122);
lean_ctor_set(x_132, 2, x_130);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
}
}
else
{
lean_object* x_134; uint8_t x_135; 
lean_dec(x_10);
lean_free_object(x_2);
x_134 = l_CancelDenoms_findCancelFactor___closed__15;
x_135 = lean_string_dec_eq(x_9, x_134);
lean_dec(x_9);
if (x_135 == 0)
{
lean_object* x_136; 
lean_dec(x_7);
x_136 = l_CancelDenoms_findCancelFactor___closed__2;
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
x_137 = lean_array_get_size(x_7);
x_138 = lean_unsigned_to_nat(6u);
x_139 = lean_nat_dec_eq(x_137, x_138);
lean_dec(x_137);
if (x_139 == 0)
{
lean_object* x_140; 
lean_dec(x_7);
x_140 = l_CancelDenoms_findCancelFactor___closed__2;
return x_140;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_141 = lean_unsigned_to_nat(4u);
x_142 = lean_array_fget(x_7, x_141);
x_143 = lean_unsigned_to_nat(5u);
x_144 = lean_array_fget(x_7, x_143);
lean_dec(x_7);
x_145 = l_CancelDenoms_findCancelFactor(x_142);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = l_CancelDenoms_findCancelFactor(x_144);
x_149 = !lean_is_exclusive(x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = lean_ctor_get(x_148, 0);
x_151 = lean_ctor_get(x_148, 1);
x_152 = l_Nat_lcm(x_146, x_150);
lean_dec(x_150);
lean_dec(x_146);
lean_inc(x_152);
x_153 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_147);
lean_ctor_set(x_153, 2, x_151);
lean_ctor_set(x_148, 1, x_153);
lean_ctor_set(x_148, 0, x_152);
return x_148;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_154 = lean_ctor_get(x_148, 0);
x_155 = lean_ctor_get(x_148, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_148);
x_156 = l_Nat_lcm(x_146, x_154);
lean_dec(x_154);
lean_dec(x_146);
lean_inc(x_156);
x_157 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_147);
lean_ctor_set(x_157, 2, x_155);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
}
else
{
lean_object* x_159; uint8_t x_160; 
lean_dec(x_10);
lean_free_object(x_2);
x_159 = l_CancelDenoms_findCancelFactor___closed__16;
x_160 = lean_string_dec_eq(x_9, x_159);
lean_dec(x_9);
if (x_160 == 0)
{
lean_object* x_161; 
lean_dec(x_7);
x_161 = l_CancelDenoms_findCancelFactor___closed__2;
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; uint8_t x_164; 
x_162 = lean_array_get_size(x_7);
x_163 = lean_unsigned_to_nat(6u);
x_164 = lean_nat_dec_eq(x_162, x_163);
lean_dec(x_162);
if (x_164 == 0)
{
lean_object* x_165; 
lean_dec(x_7);
x_165 = l_CancelDenoms_findCancelFactor___closed__2;
return x_165;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_166 = lean_unsigned_to_nat(4u);
x_167 = lean_array_fget(x_7, x_166);
x_168 = lean_unsigned_to_nat(5u);
x_169 = lean_array_fget(x_7, x_168);
lean_dec(x_7);
x_170 = l_CancelDenoms_findCancelFactor(x_167);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_173 = l_CancelDenoms_findCancelFactor(x_169);
x_174 = !lean_is_exclusive(x_173);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_175 = lean_ctor_get(x_173, 0);
x_176 = lean_ctor_get(x_173, 1);
x_177 = l_Nat_lcm(x_171, x_175);
lean_dec(x_175);
lean_dec(x_171);
lean_inc(x_177);
x_178 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_172);
lean_ctor_set(x_178, 2, x_176);
lean_ctor_set(x_173, 1, x_178);
lean_ctor_set(x_173, 0, x_177);
return x_173;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_179 = lean_ctor_get(x_173, 0);
x_180 = lean_ctor_get(x_173, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_173);
x_181 = l_Nat_lcm(x_171, x_179);
lean_dec(x_179);
lean_dec(x_171);
lean_inc(x_181);
x_182 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_172);
lean_ctor_set(x_182, 2, x_180);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
}
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; 
x_184 = lean_ctor_get(x_2, 1);
lean_inc(x_184);
lean_dec(x_2);
x_185 = lean_ctor_get(x_3, 1);
lean_inc(x_185);
lean_dec(x_3);
x_186 = lean_ctor_get(x_4, 1);
lean_inc(x_186);
lean_dec(x_4);
x_187 = l_CancelDenoms_findCancelFactor___closed__3;
x_188 = lean_string_dec_eq(x_186, x_187);
if (x_188 == 0)
{
lean_object* x_189; uint8_t x_190; 
x_189 = l_CancelDenoms_findCancelFactor___closed__4;
x_190 = lean_string_dec_eq(x_186, x_189);
if (x_190 == 0)
{
lean_object* x_191; uint8_t x_192; 
x_191 = l_CancelDenoms_findCancelFactor___closed__5;
x_192 = lean_string_dec_eq(x_186, x_191);
if (x_192 == 0)
{
lean_object* x_193; uint8_t x_194; 
x_193 = l_CancelDenoms_findCancelFactor___closed__6;
x_194 = lean_string_dec_eq(x_186, x_193);
if (x_194 == 0)
{
lean_object* x_195; uint8_t x_196; 
x_195 = l_CancelDenoms_findCancelFactor___closed__7;
x_196 = lean_string_dec_eq(x_186, x_195);
if (x_196 == 0)
{
lean_object* x_197; uint8_t x_198; 
x_197 = l_CancelDenoms_findCancelFactor___closed__8;
x_198 = lean_string_dec_eq(x_186, x_197);
if (x_198 == 0)
{
lean_object* x_199; uint8_t x_200; 
x_199 = l_CancelDenoms_findCancelFactor___closed__9;
x_200 = lean_string_dec_eq(x_186, x_199);
lean_dec(x_186);
if (x_200 == 0)
{
lean_object* x_201; 
lean_dec(x_185);
lean_dec(x_184);
x_201 = l_CancelDenoms_findCancelFactor___closed__2;
return x_201;
}
else
{
lean_object* x_202; uint8_t x_203; 
x_202 = l_CancelDenoms_findCancelFactor___closed__10;
x_203 = lean_string_dec_eq(x_185, x_202);
lean_dec(x_185);
if (x_203 == 0)
{
lean_object* x_204; 
lean_dec(x_184);
x_204 = l_CancelDenoms_findCancelFactor___closed__2;
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_205 = lean_array_get_size(x_184);
x_206 = lean_unsigned_to_nat(3u);
x_207 = lean_nat_dec_eq(x_205, x_206);
lean_dec(x_205);
if (x_207 == 0)
{
lean_object* x_208; 
lean_dec(x_184);
x_208 = l_CancelDenoms_findCancelFactor___closed__2;
return x_208;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_unsigned_to_nat(2u);
x_210 = lean_array_fget(x_184, x_209);
lean_dec(x_184);
x_211 = l_Lean_Expr_nat_x3f(x_210);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; 
x_212 = l_CancelDenoms_findCancelFactor___closed__2;
return x_212;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_213 = lean_ctor_get(x_211, 0);
lean_inc(x_213);
lean_dec(x_211);
x_214 = lean_box(0);
lean_inc(x_213);
x_215 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
lean_ctor_set(x_215, 2, x_214);
lean_inc(x_213);
x_216 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_214);
lean_ctor_set(x_216, 2, x_215);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_213);
lean_ctor_set(x_217, 1, x_216);
return x_217;
}
}
}
}
}
else
{
lean_object* x_218; uint8_t x_219; 
lean_dec(x_186);
x_218 = l_CancelDenoms_findCancelFactor___closed__11;
x_219 = lean_string_dec_eq(x_185, x_218);
lean_dec(x_185);
if (x_219 == 0)
{
lean_object* x_220; 
lean_dec(x_184);
x_220 = l_CancelDenoms_findCancelFactor___closed__2;
return x_220;
}
else
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_221 = lean_array_get_size(x_184);
x_222 = lean_unsigned_to_nat(6u);
x_223 = lean_nat_dec_eq(x_221, x_222);
lean_dec(x_221);
if (x_223 == 0)
{
lean_object* x_224; 
lean_dec(x_184);
x_224 = l_CancelDenoms_findCancelFactor___closed__2;
return x_224;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_225 = lean_unsigned_to_nat(4u);
x_226 = lean_array_fget(x_184, x_225);
x_227 = lean_unsigned_to_nat(5u);
x_228 = lean_array_fget(x_184, x_227);
lean_dec(x_184);
x_229 = l_Lean_Expr_nat_x3f(x_228);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; 
lean_dec(x_226);
x_230 = l_CancelDenoms_findCancelFactor___closed__2;
return x_230;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_231 = lean_ctor_get(x_229, 0);
lean_inc(x_231);
lean_dec(x_229);
x_232 = l_CancelDenoms_findCancelFactor(x_226);
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 x_235 = x_232;
} else {
 lean_dec_ref(x_232);
 x_235 = lean_box(0);
}
x_236 = lean_nat_pow(x_233, x_231);
lean_dec(x_233);
x_237 = lean_box(0);
x_238 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_238, 0, x_231);
lean_ctor_set(x_238, 1, x_237);
lean_ctor_set(x_238, 2, x_237);
lean_inc(x_236);
x_239 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_239, 0, x_236);
lean_ctor_set(x_239, 1, x_234);
lean_ctor_set(x_239, 2, x_238);
if (lean_is_scalar(x_235)) {
 x_240 = lean_alloc_ctor(0, 2, 0);
} else {
 x_240 = x_235;
}
lean_ctor_set(x_240, 0, x_236);
lean_ctor_set(x_240, 1, x_239);
return x_240;
}
}
}
}
}
else
{
lean_object* x_241; uint8_t x_242; 
lean_dec(x_186);
x_241 = l_CancelDenoms_findCancelFactor___closed__12;
x_242 = lean_string_dec_eq(x_185, x_241);
lean_dec(x_185);
if (x_242 == 0)
{
lean_object* x_243; 
lean_dec(x_184);
x_243 = l_CancelDenoms_findCancelFactor___closed__2;
return x_243;
}
else
{
lean_object* x_244; lean_object* x_245; uint8_t x_246; 
x_244 = lean_array_get_size(x_184);
x_245 = lean_unsigned_to_nat(3u);
x_246 = lean_nat_dec_eq(x_244, x_245);
lean_dec(x_244);
if (x_246 == 0)
{
lean_object* x_247; 
lean_dec(x_184);
x_247 = l_CancelDenoms_findCancelFactor___closed__2;
return x_247;
}
else
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_unsigned_to_nat(2u);
x_249 = lean_array_fget(x_184, x_248);
lean_dec(x_184);
x_1 = x_249;
goto _start;
}
}
}
}
else
{
lean_object* x_251; uint8_t x_252; 
lean_dec(x_186);
x_251 = l_CancelDenoms_findCancelFactor___closed__13;
x_252 = lean_string_dec_eq(x_185, x_251);
lean_dec(x_185);
if (x_252 == 0)
{
lean_object* x_253; 
lean_dec(x_184);
x_253 = l_CancelDenoms_findCancelFactor___closed__2;
return x_253;
}
else
{
lean_object* x_254; lean_object* x_255; uint8_t x_256; 
x_254 = lean_array_get_size(x_184);
x_255 = lean_unsigned_to_nat(6u);
x_256 = lean_nat_dec_eq(x_254, x_255);
lean_dec(x_254);
if (x_256 == 0)
{
lean_object* x_257; 
lean_dec(x_184);
x_257 = l_CancelDenoms_findCancelFactor___closed__2;
return x_257;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_258 = lean_unsigned_to_nat(4u);
x_259 = lean_array_fget(x_184, x_258);
x_260 = lean_unsigned_to_nat(5u);
x_261 = lean_array_fget(x_184, x_260);
lean_dec(x_184);
x_262 = l_Lean_Expr_nat_x3f(x_261);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; 
lean_dec(x_259);
x_263 = l_CancelDenoms_findCancelFactor___closed__2;
return x_263;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_264 = lean_ctor_get(x_262, 0);
lean_inc(x_264);
lean_dec(x_262);
x_265 = l_CancelDenoms_findCancelFactor(x_259);
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_265, 1);
lean_inc(x_267);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_268 = x_265;
} else {
 lean_dec_ref(x_265);
 x_268 = lean_box(0);
}
x_269 = lean_nat_mul(x_266, x_264);
lean_dec(x_266);
x_270 = lean_box(0);
x_271 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_271, 0, x_264);
lean_ctor_set(x_271, 1, x_270);
lean_ctor_set(x_271, 2, x_270);
lean_inc(x_269);
x_272 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_272, 0, x_269);
lean_ctor_set(x_272, 1, x_267);
lean_ctor_set(x_272, 2, x_271);
if (lean_is_scalar(x_268)) {
 x_273 = lean_alloc_ctor(0, 2, 0);
} else {
 x_273 = x_268;
}
lean_ctor_set(x_273, 0, x_269);
lean_ctor_set(x_273, 1, x_272);
return x_273;
}
}
}
}
}
else
{
lean_object* x_274; uint8_t x_275; 
lean_dec(x_186);
x_274 = l_CancelDenoms_findCancelFactor___closed__14;
x_275 = lean_string_dec_eq(x_185, x_274);
lean_dec(x_185);
if (x_275 == 0)
{
lean_object* x_276; 
lean_dec(x_184);
x_276 = l_CancelDenoms_findCancelFactor___closed__2;
return x_276;
}
else
{
lean_object* x_277; lean_object* x_278; uint8_t x_279; 
x_277 = lean_array_get_size(x_184);
x_278 = lean_unsigned_to_nat(6u);
x_279 = lean_nat_dec_eq(x_277, x_278);
lean_dec(x_277);
if (x_279 == 0)
{
lean_object* x_280; 
lean_dec(x_184);
x_280 = l_CancelDenoms_findCancelFactor___closed__2;
return x_280;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_281 = lean_unsigned_to_nat(4u);
x_282 = lean_array_fget(x_184, x_281);
x_283 = lean_unsigned_to_nat(5u);
x_284 = lean_array_fget(x_184, x_283);
lean_dec(x_184);
x_285 = l_CancelDenoms_findCancelFactor(x_282);
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_285, 1);
lean_inc(x_287);
lean_dec(x_285);
x_288 = l_CancelDenoms_findCancelFactor(x_284);
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 x_291 = x_288;
} else {
 lean_dec_ref(x_288);
 x_291 = lean_box(0);
}
x_292 = lean_nat_mul(x_286, x_289);
lean_dec(x_289);
lean_dec(x_286);
lean_inc(x_292);
x_293 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_287);
lean_ctor_set(x_293, 2, x_290);
if (lean_is_scalar(x_291)) {
 x_294 = lean_alloc_ctor(0, 2, 0);
} else {
 x_294 = x_291;
}
lean_ctor_set(x_294, 0, x_292);
lean_ctor_set(x_294, 1, x_293);
return x_294;
}
}
}
}
else
{
lean_object* x_295; uint8_t x_296; 
lean_dec(x_186);
x_295 = l_CancelDenoms_findCancelFactor___closed__15;
x_296 = lean_string_dec_eq(x_185, x_295);
lean_dec(x_185);
if (x_296 == 0)
{
lean_object* x_297; 
lean_dec(x_184);
x_297 = l_CancelDenoms_findCancelFactor___closed__2;
return x_297;
}
else
{
lean_object* x_298; lean_object* x_299; uint8_t x_300; 
x_298 = lean_array_get_size(x_184);
x_299 = lean_unsigned_to_nat(6u);
x_300 = lean_nat_dec_eq(x_298, x_299);
lean_dec(x_298);
if (x_300 == 0)
{
lean_object* x_301; 
lean_dec(x_184);
x_301 = l_CancelDenoms_findCancelFactor___closed__2;
return x_301;
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_302 = lean_unsigned_to_nat(4u);
x_303 = lean_array_fget(x_184, x_302);
x_304 = lean_unsigned_to_nat(5u);
x_305 = lean_array_fget(x_184, x_304);
lean_dec(x_184);
x_306 = l_CancelDenoms_findCancelFactor(x_303);
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_306, 1);
lean_inc(x_308);
lean_dec(x_306);
x_309 = l_CancelDenoms_findCancelFactor(x_305);
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_312 = x_309;
} else {
 lean_dec_ref(x_309);
 x_312 = lean_box(0);
}
x_313 = l_Nat_lcm(x_307, x_310);
lean_dec(x_310);
lean_dec(x_307);
lean_inc(x_313);
x_314 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_308);
lean_ctor_set(x_314, 2, x_311);
if (lean_is_scalar(x_312)) {
 x_315 = lean_alloc_ctor(0, 2, 0);
} else {
 x_315 = x_312;
}
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
return x_315;
}
}
}
}
else
{
lean_object* x_316; uint8_t x_317; 
lean_dec(x_186);
x_316 = l_CancelDenoms_findCancelFactor___closed__16;
x_317 = lean_string_dec_eq(x_185, x_316);
lean_dec(x_185);
if (x_317 == 0)
{
lean_object* x_318; 
lean_dec(x_184);
x_318 = l_CancelDenoms_findCancelFactor___closed__2;
return x_318;
}
else
{
lean_object* x_319; lean_object* x_320; uint8_t x_321; 
x_319 = lean_array_get_size(x_184);
x_320 = lean_unsigned_to_nat(6u);
x_321 = lean_nat_dec_eq(x_319, x_320);
lean_dec(x_319);
if (x_321 == 0)
{
lean_object* x_322; 
lean_dec(x_184);
x_322 = l_CancelDenoms_findCancelFactor___closed__2;
return x_322;
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_323 = lean_unsigned_to_nat(4u);
x_324 = lean_array_fget(x_184, x_323);
x_325 = lean_unsigned_to_nat(5u);
x_326 = lean_array_fget(x_184, x_325);
lean_dec(x_184);
x_327 = l_CancelDenoms_findCancelFactor(x_324);
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_327, 1);
lean_inc(x_329);
lean_dec(x_327);
x_330 = l_CancelDenoms_findCancelFactor(x_326);
x_331 = lean_ctor_get(x_330, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_330, 1);
lean_inc(x_332);
if (lean_is_exclusive(x_330)) {
 lean_ctor_release(x_330, 0);
 lean_ctor_release(x_330, 1);
 x_333 = x_330;
} else {
 lean_dec_ref(x_330);
 x_333 = lean_box(0);
}
x_334 = l_Nat_lcm(x_328, x_331);
lean_dec(x_331);
lean_dec(x_328);
lean_inc(x_334);
x_335 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_335, 0, x_334);
lean_ctor_set(x_335, 1, x_329);
lean_ctor_set(x_335, 2, x_332);
if (lean_is_scalar(x_333)) {
 x_336 = lean_alloc_ctor(0, 2, 0);
} else {
 x_336 = x_333;
}
lean_ctor_set(x_336, 0, x_334);
lean_ctor_set(x_336, 1, x_335);
return x_336;
}
}
}
}
}
else
{
lean_object* x_337; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_337 = l_CancelDenoms_findCancelFactor___closed__2;
return x_337;
}
}
else
{
lean_object* x_338; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_338 = l_CancelDenoms_findCancelFactor___closed__2;
return x_338;
}
}
else
{
lean_object* x_339; 
lean_dec(x_3);
lean_dec(x_2);
x_339 = l_CancelDenoms_findCancelFactor___closed__2;
return x_339;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("normNum", 7, 7);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__7;
x_2 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_3 = l_CancelDenoms_synthesizeUsingNormNum___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("norm_num", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optConfig", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__4;
x_2 = l_CancelDenoms_synthesizeUsingNormNum___closed__5;
x_3 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_4 = l_CancelDenoms_synthesizeUsingNormNum___closed__6;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_synthesizeUsingNormNum___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Could not prove ", 16, 16);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" using norm_num. ", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_synthesizeUsingNormNum___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__15;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_synthesizeUsingNormNum(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_4, 5);
lean_inc(x_7);
x_8 = 0;
x_9 = l_Lean_SourceInfo_fromRef(x_7, x_8);
lean_dec(x_7);
x_10 = lean_st_ref_get(x_5, x_6);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = l_CancelDenoms_synthesizeUsingNormNum___closed__3;
lean_inc(x_9);
lean_ctor_set_tag(x_10, 2);
lean_ctor_set(x_10, 1, x_14);
lean_ctor_set(x_10, 0, x_9);
x_15 = l_CancelDenoms_synthesizeUsingNormNum___closed__9;
x_16 = l_CancelDenoms_synthesizeUsingNormNum___closed__10;
lean_inc(x_9);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
x_18 = l_CancelDenoms_synthesizeUsingNormNum___closed__7;
lean_inc(x_17);
lean_inc(x_9);
x_19 = l_Lean_Syntax_node1(x_9, x_18, x_17);
x_20 = l_CancelDenoms_synthesizeUsingNormNum___closed__2;
lean_inc_n(x_17, 2);
x_21 = l_Lean_Syntax_node5(x_9, x_20, x_10, x_19, x_17, x_17, x_17);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l_synthesizeUsingTactic_x27___rarg(x_1, x_21, x_2, x_3, x_4, x_5, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
x_26 = l_Lean_Exception_isInterrupt(x_24);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l_Lean_Exception_isRuntime(x_24);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_free_object(x_22);
x_28 = l_Lean_MessageData_ofExpr(x_1);
x_29 = l_CancelDenoms_synthesizeUsingNormNum___closed__12;
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_CancelDenoms_synthesizeUsingNormNum___closed__14;
x_32 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_Exception_toMessageData(x_24);
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg(x_36, x_2, x_3, x_4, x_5, x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_37;
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_22;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_22;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_22, 0);
x_39 = lean_ctor_get(x_22, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_22);
x_40 = l_Lean_Exception_isInterrupt(x_38);
if (x_40 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Exception_isRuntime(x_38);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = l_Lean_MessageData_ofExpr(x_1);
x_43 = l_CancelDenoms_synthesizeUsingNormNum___closed__12;
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_CancelDenoms_synthesizeUsingNormNum___closed__14;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_Exception_toMessageData(x_38);
x_48 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_50 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg(x_50, x_2, x_3, x_4, x_5, x_39);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_51;
}
else
{
lean_object* x_52; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_38);
lean_ctor_set(x_52, 1, x_39);
return x_52;
}
}
else
{
lean_object* x_53; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_38);
lean_ctor_set(x_53, 1, x_39);
return x_53;
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_54 = lean_ctor_get(x_10, 1);
lean_inc(x_54);
lean_dec(x_10);
x_55 = l_CancelDenoms_synthesizeUsingNormNum___closed__3;
lean_inc(x_9);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_9);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_CancelDenoms_synthesizeUsingNormNum___closed__9;
x_58 = l_CancelDenoms_synthesizeUsingNormNum___closed__10;
lean_inc(x_9);
x_59 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_59, 0, x_9);
lean_ctor_set(x_59, 1, x_57);
lean_ctor_set(x_59, 2, x_58);
x_60 = l_CancelDenoms_synthesizeUsingNormNum___closed__7;
lean_inc(x_59);
lean_inc(x_9);
x_61 = l_Lean_Syntax_node1(x_9, x_60, x_59);
x_62 = l_CancelDenoms_synthesizeUsingNormNum___closed__2;
lean_inc_n(x_59, 2);
x_63 = l_Lean_Syntax_node5(x_9, x_62, x_56, x_61, x_59, x_59, x_59);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_64 = l_synthesizeUsingTactic_x27___rarg(x_1, x_63, x_2, x_3, x_4, x_5, x_54);
if (lean_obj_tag(x_64) == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_67 = x_64;
} else {
 lean_dec_ref(x_64);
 x_67 = lean_box(0);
}
x_68 = l_Lean_Exception_isInterrupt(x_65);
if (x_68 == 0)
{
uint8_t x_69; 
x_69 = l_Lean_Exception_isRuntime(x_65);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_67);
x_70 = l_Lean_MessageData_ofExpr(x_1);
x_71 = l_CancelDenoms_synthesizeUsingNormNum___closed__12;
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = l_CancelDenoms_synthesizeUsingNormNum___closed__14;
x_74 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Lean_Exception_toMessageData(x_65);
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg(x_78, x_2, x_3, x_4, x_5, x_66);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_79;
}
else
{
lean_object* x_80; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_67)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_67;
}
lean_ctor_set(x_80, 0, x_65);
lean_ctor_set(x_80, 1, x_66);
return x_80;
}
}
else
{
lean_object* x_81; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_67)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_67;
}
lean_ctor_set(x_81, 0, x_65);
lean_ctor_set(x_81, 1, x_66);
return x_81;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_throwError___at_CancelDenoms_synthesizeUsingNormNum___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCancelFactor___closed__7;
x_2 = l_CancelDenoms_findCancelFactor___closed__12;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NegZeroClass", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNeg", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__1___closed__2;
x_2 = l_CancelDenoms_mkProdPrf___lambda__1___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubNegZeroMonoid", 16, 16);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNegZeroClass", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__1___closed__5;
x_2 = l_CancelDenoms_mkProdPrf___lambda__1___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubtractionMonoid", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSubNegZeroMonoid", 18, 18);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__1___closed__8;
x_2 = l_CancelDenoms_mkProdPrf___lambda__1___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubtractionCommMonoid", 21, 21);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSubtractionMonoid", 19, 19);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__1___closed__11;
x_2 = l_CancelDenoms_mkProdPrf___lambda__1___closed__12;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddCommGroup", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivisionAddCommMonoid", 23, 23);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__1___closed__14;
x_2 = l_CancelDenoms_mkProdPrf___lambda__1___closed__15;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ring", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddCommGroup", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__1___closed__17;
x_2 = l_CancelDenoms_mkProdPrf___lambda__1___closed__18;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static uint64_t _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__20() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 2;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = 0;
x_12 = lean_box(0);
lean_inc(x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_11, x_12, x_6, x_7, x_8, x_9, x_10);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint64_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_2);
x_18 = l_Lean_Expr_const___override(x_17, x_2);
lean_inc(x_3);
x_19 = l_Lean_Expr_app___override(x_18, x_3);
x_20 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_2);
x_21 = l_Lean_Expr_const___override(x_20, x_2);
lean_inc(x_3);
x_22 = l_Lean_Expr_app___override(x_21, x_3);
x_23 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_2);
x_24 = l_Lean_Expr_const___override(x_23, x_2);
lean_inc(x_3);
x_25 = l_Lean_Expr_app___override(x_24, x_3);
x_26 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_2);
x_27 = l_Lean_Expr_const___override(x_26, x_2);
lean_inc(x_3);
x_28 = l_Lean_Expr_app___override(x_27, x_3);
x_29 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_2);
x_30 = l_Lean_Expr_const___override(x_29, x_2);
lean_inc(x_3);
x_31 = l_Lean_Expr_app___override(x_30, x_3);
x_32 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_2);
x_33 = l_Lean_Expr_const___override(x_32, x_2);
lean_inc(x_3);
x_34 = l_Lean_Expr_app___override(x_33, x_3);
x_35 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
x_36 = l_Lean_Expr_const___override(x_35, x_2);
x_37 = l_Lean_Expr_app___override(x_36, x_3);
x_38 = l_Lean_Expr_app___override(x_37, x_4);
x_39 = l_Lean_Expr_app___override(x_34, x_38);
x_40 = l_Lean_Expr_app___override(x_31, x_39);
x_41 = l_Lean_Expr_app___override(x_28, x_40);
x_42 = l_Lean_Expr_app___override(x_25, x_41);
x_43 = l_Lean_Expr_app___override(x_22, x_42);
x_44 = l_Lean_Expr_app___override(x_19, x_43);
lean_inc(x_15);
x_45 = l_Lean_Expr_app___override(x_44, x_15);
x_46 = lean_ctor_get(x_6, 0);
lean_inc(x_46);
x_47 = lean_ctor_get_uint64(x_6, sizeof(void*)*7);
x_48 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 8);
x_49 = lean_ctor_get(x_6, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_6, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_6, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_6, 4);
lean_inc(x_52);
x_53 = lean_ctor_get(x_6, 5);
lean_inc(x_53);
x_54 = lean_ctor_get(x_6, 6);
lean_inc(x_54);
x_55 = !lean_is_exclusive(x_46);
if (x_55 == 0)
{
uint8_t x_56; uint8_t x_57; uint8_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 9);
x_57 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 10);
x_58 = 2;
lean_ctor_set_uint8(x_46, 9, x_58);
x_59 = 2;
x_60 = lean_uint64_shift_right(x_47, x_59);
x_61 = lean_uint64_shift_left(x_60, x_59);
x_62 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_63 = lean_uint64_lor(x_61, x_62);
x_64 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_64, 0, x_46);
lean_ctor_set(x_64, 1, x_49);
lean_ctor_set(x_64, 2, x_50);
lean_ctor_set(x_64, 3, x_51);
lean_ctor_set(x_64, 4, x_52);
lean_ctor_set(x_64, 5, x_53);
lean_ctor_set(x_64, 6, x_54);
lean_ctor_set_uint64(x_64, sizeof(void*)*7, x_63);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 8, x_48);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 9, x_56);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 10, x_57);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_65 = l_Lean_Meta_isExprDefEq(x_45, x_5, x_64, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_unbox(x_66);
lean_dec(x_66);
if (x_67 == 0)
{
uint8_t x_68; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_68 = !lean_is_exclusive(x_65);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_65, 0);
lean_dec(x_69);
x_70 = 0;
x_71 = lean_box(x_70);
lean_ctor_set(x_13, 1, x_71);
lean_ctor_set(x_65, 0, x_13);
return x_65;
}
else
{
lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_65, 1);
lean_inc(x_72);
lean_dec(x_65);
x_73 = 0;
x_74 = lean_box(x_73);
lean_ctor_set(x_13, 1, x_74);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_13);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_76 = lean_ctor_get(x_65, 1);
lean_inc(x_76);
lean_dec(x_65);
x_77 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_15, x_6, x_7, x_8, x_9, x_76);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; uint8_t x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = 1;
x_81 = lean_box(x_80);
lean_ctor_set(x_13, 1, x_81);
lean_ctor_set(x_13, 0, x_79);
lean_ctor_set(x_77, 0, x_13);
return x_77;
}
else
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_ctor_get(x_77, 0);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_77);
x_84 = 1;
x_85 = lean_box(x_84);
lean_ctor_set(x_13, 1, x_85);
lean_ctor_set(x_13, 0, x_82);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_13);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_free_object(x_13);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_87 = !lean_is_exclusive(x_65);
if (x_87 == 0)
{
return x_65;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_65, 0);
x_89 = lean_ctor_get(x_65, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_65);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; uint8_t x_92; uint8_t x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; lean_object* x_111; uint64_t x_112; uint64_t x_113; uint64_t x_114; uint64_t x_115; uint64_t x_116; lean_object* x_117; lean_object* x_118; 
x_91 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 9);
x_92 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 10);
x_93 = lean_ctor_get_uint8(x_46, 0);
x_94 = lean_ctor_get_uint8(x_46, 1);
x_95 = lean_ctor_get_uint8(x_46, 2);
x_96 = lean_ctor_get_uint8(x_46, 3);
x_97 = lean_ctor_get_uint8(x_46, 4);
x_98 = lean_ctor_get_uint8(x_46, 5);
x_99 = lean_ctor_get_uint8(x_46, 6);
x_100 = lean_ctor_get_uint8(x_46, 7);
x_101 = lean_ctor_get_uint8(x_46, 8);
x_102 = lean_ctor_get_uint8(x_46, 10);
x_103 = lean_ctor_get_uint8(x_46, 11);
x_104 = lean_ctor_get_uint8(x_46, 12);
x_105 = lean_ctor_get_uint8(x_46, 13);
x_106 = lean_ctor_get_uint8(x_46, 14);
x_107 = lean_ctor_get_uint8(x_46, 15);
x_108 = lean_ctor_get_uint8(x_46, 16);
x_109 = lean_ctor_get_uint8(x_46, 17);
lean_dec(x_46);
x_110 = 2;
x_111 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_111, 0, x_93);
lean_ctor_set_uint8(x_111, 1, x_94);
lean_ctor_set_uint8(x_111, 2, x_95);
lean_ctor_set_uint8(x_111, 3, x_96);
lean_ctor_set_uint8(x_111, 4, x_97);
lean_ctor_set_uint8(x_111, 5, x_98);
lean_ctor_set_uint8(x_111, 6, x_99);
lean_ctor_set_uint8(x_111, 7, x_100);
lean_ctor_set_uint8(x_111, 8, x_101);
lean_ctor_set_uint8(x_111, 9, x_110);
lean_ctor_set_uint8(x_111, 10, x_102);
lean_ctor_set_uint8(x_111, 11, x_103);
lean_ctor_set_uint8(x_111, 12, x_104);
lean_ctor_set_uint8(x_111, 13, x_105);
lean_ctor_set_uint8(x_111, 14, x_106);
lean_ctor_set_uint8(x_111, 15, x_107);
lean_ctor_set_uint8(x_111, 16, x_108);
lean_ctor_set_uint8(x_111, 17, x_109);
x_112 = 2;
x_113 = lean_uint64_shift_right(x_47, x_112);
x_114 = lean_uint64_shift_left(x_113, x_112);
x_115 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_116 = lean_uint64_lor(x_114, x_115);
x_117 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_117, 0, x_111);
lean_ctor_set(x_117, 1, x_49);
lean_ctor_set(x_117, 2, x_50);
lean_ctor_set(x_117, 3, x_51);
lean_ctor_set(x_117, 4, x_52);
lean_ctor_set(x_117, 5, x_53);
lean_ctor_set(x_117, 6, x_54);
lean_ctor_set_uint64(x_117, sizeof(void*)*7, x_116);
lean_ctor_set_uint8(x_117, sizeof(void*)*7 + 8, x_48);
lean_ctor_set_uint8(x_117, sizeof(void*)*7 + 9, x_91);
lean_ctor_set_uint8(x_117, sizeof(void*)*7 + 10, x_92);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_118 = l_Lean_Meta_isExprDefEq(x_45, x_5, x_117, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; uint8_t x_120; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_unbox(x_119);
lean_dec(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; uint8_t x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_121 = lean_ctor_get(x_118, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_122 = x_118;
} else {
 lean_dec_ref(x_118);
 x_122 = lean_box(0);
}
x_123 = 0;
x_124 = lean_box(x_123);
lean_ctor_set(x_13, 1, x_124);
if (lean_is_scalar(x_122)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_122;
}
lean_ctor_set(x_125, 0, x_13);
lean_ctor_set(x_125, 1, x_121);
return x_125;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; lean_object* x_132; lean_object* x_133; 
x_126 = lean_ctor_get(x_118, 1);
lean_inc(x_126);
lean_dec(x_118);
x_127 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_15, x_6, x_7, x_8, x_9, x_126);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = 1;
x_132 = lean_box(x_131);
lean_ctor_set(x_13, 1, x_132);
lean_ctor_set(x_13, 0, x_128);
if (lean_is_scalar(x_130)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_130;
}
lean_ctor_set(x_133, 0, x_13);
lean_ctor_set(x_133, 1, x_129);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_free_object(x_13);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_134 = lean_ctor_get(x_118, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_118, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_136 = x_118;
} else {
 lean_dec_ref(x_118);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(1, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; uint64_t x_170; uint8_t x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; uint8_t x_179; uint8_t x_180; uint8_t x_181; uint8_t x_182; uint8_t x_183; uint8_t x_184; uint8_t x_185; uint8_t x_186; uint8_t x_187; uint8_t x_188; uint8_t x_189; uint8_t x_190; uint8_t x_191; uint8_t x_192; uint8_t x_193; uint8_t x_194; uint8_t x_195; uint8_t x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; uint64_t x_200; uint64_t x_201; uint64_t x_202; uint64_t x_203; uint64_t x_204; lean_object* x_205; lean_object* x_206; 
x_138 = lean_ctor_get(x_13, 0);
x_139 = lean_ctor_get(x_13, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_13);
x_140 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_2);
x_141 = l_Lean_Expr_const___override(x_140, x_2);
lean_inc(x_3);
x_142 = l_Lean_Expr_app___override(x_141, x_3);
x_143 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_2);
x_144 = l_Lean_Expr_const___override(x_143, x_2);
lean_inc(x_3);
x_145 = l_Lean_Expr_app___override(x_144, x_3);
x_146 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_2);
x_147 = l_Lean_Expr_const___override(x_146, x_2);
lean_inc(x_3);
x_148 = l_Lean_Expr_app___override(x_147, x_3);
x_149 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_2);
x_150 = l_Lean_Expr_const___override(x_149, x_2);
lean_inc(x_3);
x_151 = l_Lean_Expr_app___override(x_150, x_3);
x_152 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_2);
x_153 = l_Lean_Expr_const___override(x_152, x_2);
lean_inc(x_3);
x_154 = l_Lean_Expr_app___override(x_153, x_3);
x_155 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_2);
x_156 = l_Lean_Expr_const___override(x_155, x_2);
lean_inc(x_3);
x_157 = l_Lean_Expr_app___override(x_156, x_3);
x_158 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
x_159 = l_Lean_Expr_const___override(x_158, x_2);
x_160 = l_Lean_Expr_app___override(x_159, x_3);
x_161 = l_Lean_Expr_app___override(x_160, x_4);
x_162 = l_Lean_Expr_app___override(x_157, x_161);
x_163 = l_Lean_Expr_app___override(x_154, x_162);
x_164 = l_Lean_Expr_app___override(x_151, x_163);
x_165 = l_Lean_Expr_app___override(x_148, x_164);
x_166 = l_Lean_Expr_app___override(x_145, x_165);
x_167 = l_Lean_Expr_app___override(x_142, x_166);
lean_inc(x_138);
x_168 = l_Lean_Expr_app___override(x_167, x_138);
x_169 = lean_ctor_get(x_6, 0);
lean_inc(x_169);
x_170 = lean_ctor_get_uint64(x_6, sizeof(void*)*7);
x_171 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 8);
x_172 = lean_ctor_get(x_6, 1);
lean_inc(x_172);
x_173 = lean_ctor_get(x_6, 2);
lean_inc(x_173);
x_174 = lean_ctor_get(x_6, 3);
lean_inc(x_174);
x_175 = lean_ctor_get(x_6, 4);
lean_inc(x_175);
x_176 = lean_ctor_get(x_6, 5);
lean_inc(x_176);
x_177 = lean_ctor_get(x_6, 6);
lean_inc(x_177);
x_178 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 9);
x_179 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 10);
x_180 = lean_ctor_get_uint8(x_169, 0);
x_181 = lean_ctor_get_uint8(x_169, 1);
x_182 = lean_ctor_get_uint8(x_169, 2);
x_183 = lean_ctor_get_uint8(x_169, 3);
x_184 = lean_ctor_get_uint8(x_169, 4);
x_185 = lean_ctor_get_uint8(x_169, 5);
x_186 = lean_ctor_get_uint8(x_169, 6);
x_187 = lean_ctor_get_uint8(x_169, 7);
x_188 = lean_ctor_get_uint8(x_169, 8);
x_189 = lean_ctor_get_uint8(x_169, 10);
x_190 = lean_ctor_get_uint8(x_169, 11);
x_191 = lean_ctor_get_uint8(x_169, 12);
x_192 = lean_ctor_get_uint8(x_169, 13);
x_193 = lean_ctor_get_uint8(x_169, 14);
x_194 = lean_ctor_get_uint8(x_169, 15);
x_195 = lean_ctor_get_uint8(x_169, 16);
x_196 = lean_ctor_get_uint8(x_169, 17);
if (lean_is_exclusive(x_169)) {
 x_197 = x_169;
} else {
 lean_dec_ref(x_169);
 x_197 = lean_box(0);
}
x_198 = 2;
if (lean_is_scalar(x_197)) {
 x_199 = lean_alloc_ctor(0, 0, 18);
} else {
 x_199 = x_197;
}
lean_ctor_set_uint8(x_199, 0, x_180);
lean_ctor_set_uint8(x_199, 1, x_181);
lean_ctor_set_uint8(x_199, 2, x_182);
lean_ctor_set_uint8(x_199, 3, x_183);
lean_ctor_set_uint8(x_199, 4, x_184);
lean_ctor_set_uint8(x_199, 5, x_185);
lean_ctor_set_uint8(x_199, 6, x_186);
lean_ctor_set_uint8(x_199, 7, x_187);
lean_ctor_set_uint8(x_199, 8, x_188);
lean_ctor_set_uint8(x_199, 9, x_198);
lean_ctor_set_uint8(x_199, 10, x_189);
lean_ctor_set_uint8(x_199, 11, x_190);
lean_ctor_set_uint8(x_199, 12, x_191);
lean_ctor_set_uint8(x_199, 13, x_192);
lean_ctor_set_uint8(x_199, 14, x_193);
lean_ctor_set_uint8(x_199, 15, x_194);
lean_ctor_set_uint8(x_199, 16, x_195);
lean_ctor_set_uint8(x_199, 17, x_196);
x_200 = 2;
x_201 = lean_uint64_shift_right(x_170, x_200);
x_202 = lean_uint64_shift_left(x_201, x_200);
x_203 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_204 = lean_uint64_lor(x_202, x_203);
x_205 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_205, 0, x_199);
lean_ctor_set(x_205, 1, x_172);
lean_ctor_set(x_205, 2, x_173);
lean_ctor_set(x_205, 3, x_174);
lean_ctor_set(x_205, 4, x_175);
lean_ctor_set(x_205, 5, x_176);
lean_ctor_set(x_205, 6, x_177);
lean_ctor_set_uint64(x_205, sizeof(void*)*7, x_204);
lean_ctor_set_uint8(x_205, sizeof(void*)*7 + 8, x_171);
lean_ctor_set_uint8(x_205, sizeof(void*)*7 + 9, x_178);
lean_ctor_set_uint8(x_205, sizeof(void*)*7 + 10, x_179);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_206 = l_Lean_Meta_isExprDefEq(x_168, x_5, x_205, x_7, x_8, x_9, x_139);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; uint8_t x_208; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_unbox(x_207);
lean_dec(x_207);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; uint8_t x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_209 = lean_ctor_get(x_206, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_210 = x_206;
} else {
 lean_dec_ref(x_206);
 x_210 = lean_box(0);
}
x_211 = 0;
x_212 = lean_box(x_211);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_138);
lean_ctor_set(x_213, 1, x_212);
if (lean_is_scalar(x_210)) {
 x_214 = lean_alloc_ctor(0, 2, 0);
} else {
 x_214 = x_210;
}
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_209);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_215 = lean_ctor_get(x_206, 1);
lean_inc(x_215);
lean_dec(x_206);
x_216 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_138, x_6, x_7, x_8, x_9, x_215);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 x_219 = x_216;
} else {
 lean_dec_ref(x_216);
 x_219 = lean_box(0);
}
x_220 = 1;
x_221 = lean_box(x_220);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_217);
lean_ctor_set(x_222, 1, x_221);
if (lean_is_scalar(x_219)) {
 x_223 = lean_alloc_ctor(0, 2, 0);
} else {
 x_223 = x_219;
}
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_218);
return x_223;
}
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_138);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_224 = lean_ctor_get(x_206, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_206, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_226 = x_206;
} else {
 lean_dec_ref(x_206);
 x_226 = lean_box(0);
}
if (lean_is_scalar(x_226)) {
 x_227 = lean_alloc_ctor(1, 2, 0);
} else {
 x_227 = x_226;
}
lean_ctor_set(x_227, 0, x_224);
lean_ctor_set(x_227, 1, x_225);
return x_227;
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCancelFactor___closed__3;
x_2 = l_CancelDenoms_findCancelFactor___closed__16;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHAdd", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__2___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Distrib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAdd", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__2___closed__4;
x_2 = l_CancelDenoms_mkProdPrf___lambda__2___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = 0;
x_13 = lean_box(0);
lean_inc(x_7);
lean_inc(x_1);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_7);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint64_t x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = l_CancelDenoms_mkProdPrf___lambda__2___closed__1;
x_23 = l_Lean_Expr_const___override(x_22, x_2);
lean_inc(x_3);
x_24 = l_Lean_Expr_app___override(x_23, x_3);
lean_inc(x_3);
x_25 = l_Lean_Expr_app___override(x_24, x_3);
lean_inc(x_3);
x_26 = l_Lean_Expr_app___override(x_25, x_3);
x_27 = l_CancelDenoms_mkProdPrf___lambda__2___closed__3;
lean_inc(x_4);
x_28 = l_Lean_Expr_const___override(x_27, x_4);
lean_inc(x_3);
x_29 = l_Lean_Expr_app___override(x_28, x_3);
x_30 = l_CancelDenoms_mkProdPrf___lambda__2___closed__6;
x_31 = l_Lean_Expr_const___override(x_30, x_4);
x_32 = l_Lean_Expr_app___override(x_31, x_3);
x_33 = l_Lean_Expr_app___override(x_32, x_5);
x_34 = l_Lean_Expr_app___override(x_29, x_33);
x_35 = l_Lean_Expr_app___override(x_26, x_34);
lean_inc(x_16);
x_36 = l_Lean_Expr_app___override(x_35, x_16);
lean_inc(x_20);
x_37 = l_Lean_Expr_app___override(x_36, x_20);
x_38 = lean_ctor_get(x_7, 0);
lean_inc(x_38);
x_39 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_40 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_41 = lean_ctor_get(x_7, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_7, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_7, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_7, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_7, 5);
lean_inc(x_45);
x_46 = lean_ctor_get(x_7, 6);
lean_inc(x_46);
x_47 = !lean_is_exclusive(x_38);
if (x_47 == 0)
{
uint8_t x_48; uint8_t x_49; uint8_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; lean_object* x_56; lean_object* x_57; 
x_48 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_49 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_50 = 2;
lean_ctor_set_uint8(x_38, 9, x_50);
x_51 = 2;
x_52 = lean_uint64_shift_right(x_39, x_51);
x_53 = lean_uint64_shift_left(x_52, x_51);
x_54 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_55 = lean_uint64_lor(x_53, x_54);
x_56 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_56, 0, x_38);
lean_ctor_set(x_56, 1, x_41);
lean_ctor_set(x_56, 2, x_42);
lean_ctor_set(x_56, 3, x_43);
lean_ctor_set(x_56, 4, x_44);
lean_ctor_set(x_56, 5, x_45);
lean_ctor_set(x_56, 6, x_46);
lean_ctor_set_uint64(x_56, sizeof(void*)*7, x_55);
lean_ctor_set_uint8(x_56, sizeof(void*)*7 + 8, x_40);
lean_ctor_set_uint8(x_56, sizeof(void*)*7 + 9, x_48);
lean_ctor_set_uint8(x_56, sizeof(void*)*7 + 10, x_49);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_57 = l_Lean_Meta_isExprDefEq(x_37, x_6, x_56, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_unbox(x_58);
lean_dec(x_58);
if (x_59 == 0)
{
uint8_t x_60; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_60 = !lean_is_exclusive(x_57);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_57, 0);
lean_dec(x_61);
x_62 = 0;
x_63 = lean_box(x_62);
lean_ctor_set(x_18, 1, x_63);
lean_ctor_set(x_14, 1, x_18);
lean_ctor_set(x_57, 0, x_14);
return x_57;
}
else
{
lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_dec(x_57);
x_65 = 0;
x_66 = lean_box(x_65);
lean_ctor_set(x_18, 1, x_66);
lean_ctor_set(x_14, 1, x_18);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_14);
lean_ctor_set(x_67, 1, x_64);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
lean_free_object(x_14);
x_68 = lean_ctor_get(x_57, 1);
lean_inc(x_68);
lean_dec(x_57);
x_69 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_68);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
x_73 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_72);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_73, 0);
x_76 = 1;
x_77 = lean_box(x_76);
lean_ctor_set(x_69, 1, x_77);
lean_ctor_set(x_69, 0, x_75);
lean_ctor_set(x_18, 1, x_69);
lean_ctor_set(x_18, 0, x_71);
lean_ctor_set(x_73, 0, x_18);
return x_73;
}
else
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_73, 0);
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_73);
x_80 = 1;
x_81 = lean_box(x_80);
lean_ctor_set(x_69, 1, x_81);
lean_ctor_set(x_69, 0, x_78);
lean_ctor_set(x_18, 1, x_69);
lean_ctor_set(x_18, 0, x_71);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_18);
lean_ctor_set(x_82, 1, x_79);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_83 = lean_ctor_get(x_69, 0);
x_84 = lean_ctor_get(x_69, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_69);
x_85 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_84);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
x_89 = 1;
x_90 = lean_box(x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_86);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_18, 1, x_91);
lean_ctor_set(x_18, 0, x_83);
if (lean_is_scalar(x_88)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_88;
}
lean_ctor_set(x_92, 0, x_18);
lean_ctor_set(x_92, 1, x_87);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_free_object(x_18);
lean_dec(x_20);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_93 = !lean_is_exclusive(x_57);
if (x_93 == 0)
{
return x_57;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_57, 0);
x_95 = lean_ctor_get(x_57, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_57);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; lean_object* x_117; uint64_t x_118; uint64_t x_119; uint64_t x_120; uint64_t x_121; uint64_t x_122; lean_object* x_123; lean_object* x_124; 
x_97 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_98 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_99 = lean_ctor_get_uint8(x_38, 0);
x_100 = lean_ctor_get_uint8(x_38, 1);
x_101 = lean_ctor_get_uint8(x_38, 2);
x_102 = lean_ctor_get_uint8(x_38, 3);
x_103 = lean_ctor_get_uint8(x_38, 4);
x_104 = lean_ctor_get_uint8(x_38, 5);
x_105 = lean_ctor_get_uint8(x_38, 6);
x_106 = lean_ctor_get_uint8(x_38, 7);
x_107 = lean_ctor_get_uint8(x_38, 8);
x_108 = lean_ctor_get_uint8(x_38, 10);
x_109 = lean_ctor_get_uint8(x_38, 11);
x_110 = lean_ctor_get_uint8(x_38, 12);
x_111 = lean_ctor_get_uint8(x_38, 13);
x_112 = lean_ctor_get_uint8(x_38, 14);
x_113 = lean_ctor_get_uint8(x_38, 15);
x_114 = lean_ctor_get_uint8(x_38, 16);
x_115 = lean_ctor_get_uint8(x_38, 17);
lean_dec(x_38);
x_116 = 2;
x_117 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_117, 0, x_99);
lean_ctor_set_uint8(x_117, 1, x_100);
lean_ctor_set_uint8(x_117, 2, x_101);
lean_ctor_set_uint8(x_117, 3, x_102);
lean_ctor_set_uint8(x_117, 4, x_103);
lean_ctor_set_uint8(x_117, 5, x_104);
lean_ctor_set_uint8(x_117, 6, x_105);
lean_ctor_set_uint8(x_117, 7, x_106);
lean_ctor_set_uint8(x_117, 8, x_107);
lean_ctor_set_uint8(x_117, 9, x_116);
lean_ctor_set_uint8(x_117, 10, x_108);
lean_ctor_set_uint8(x_117, 11, x_109);
lean_ctor_set_uint8(x_117, 12, x_110);
lean_ctor_set_uint8(x_117, 13, x_111);
lean_ctor_set_uint8(x_117, 14, x_112);
lean_ctor_set_uint8(x_117, 15, x_113);
lean_ctor_set_uint8(x_117, 16, x_114);
lean_ctor_set_uint8(x_117, 17, x_115);
x_118 = 2;
x_119 = lean_uint64_shift_right(x_39, x_118);
x_120 = lean_uint64_shift_left(x_119, x_118);
x_121 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_122 = lean_uint64_lor(x_120, x_121);
x_123 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_123, 0, x_117);
lean_ctor_set(x_123, 1, x_41);
lean_ctor_set(x_123, 2, x_42);
lean_ctor_set(x_123, 3, x_43);
lean_ctor_set(x_123, 4, x_44);
lean_ctor_set(x_123, 5, x_45);
lean_ctor_set(x_123, 6, x_46);
lean_ctor_set_uint64(x_123, sizeof(void*)*7, x_122);
lean_ctor_set_uint8(x_123, sizeof(void*)*7 + 8, x_40);
lean_ctor_set_uint8(x_123, sizeof(void*)*7 + 9, x_97);
lean_ctor_set_uint8(x_123, sizeof(void*)*7 + 10, x_98);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_124 = l_Lean_Meta_isExprDefEq(x_37, x_6, x_123, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; uint8_t x_126; 
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_unbox(x_125);
lean_dec(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_127 = lean_ctor_get(x_124, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_128 = x_124;
} else {
 lean_dec_ref(x_124);
 x_128 = lean_box(0);
}
x_129 = 0;
x_130 = lean_box(x_129);
lean_ctor_set(x_18, 1, x_130);
lean_ctor_set(x_14, 1, x_18);
if (lean_is_scalar(x_128)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_128;
}
lean_ctor_set(x_131, 0, x_14);
lean_ctor_set(x_131, 1, x_127);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_free_object(x_14);
x_132 = lean_ctor_get(x_124, 1);
lean_inc(x_132);
lean_dec(x_124);
x_133 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_132);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_136 = x_133;
} else {
 lean_dec_ref(x_133);
 x_136 = lean_box(0);
}
x_137 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_135);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = 1;
x_142 = lean_box(x_141);
if (lean_is_scalar(x_136)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_136;
}
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_142);
lean_ctor_set(x_18, 1, x_143);
lean_ctor_set(x_18, 0, x_134);
if (lean_is_scalar(x_140)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_140;
}
lean_ctor_set(x_144, 0, x_18);
lean_ctor_set(x_144, 1, x_139);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_free_object(x_18);
lean_dec(x_20);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_145 = lean_ctor_get(x_124, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_124, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_147 = x_124;
} else {
 lean_dec_ref(x_124);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_145);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint64_t x_168; uint8_t x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; uint8_t x_177; uint8_t x_178; uint8_t x_179; uint8_t x_180; uint8_t x_181; uint8_t x_182; uint8_t x_183; uint8_t x_184; uint8_t x_185; uint8_t x_186; uint8_t x_187; uint8_t x_188; uint8_t x_189; uint8_t x_190; uint8_t x_191; uint8_t x_192; uint8_t x_193; uint8_t x_194; lean_object* x_195; uint8_t x_196; lean_object* x_197; uint64_t x_198; uint64_t x_199; uint64_t x_200; uint64_t x_201; uint64_t x_202; lean_object* x_203; lean_object* x_204; 
x_149 = lean_ctor_get(x_18, 0);
x_150 = lean_ctor_get(x_18, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_18);
x_151 = l_CancelDenoms_mkProdPrf___lambda__2___closed__1;
x_152 = l_Lean_Expr_const___override(x_151, x_2);
lean_inc(x_3);
x_153 = l_Lean_Expr_app___override(x_152, x_3);
lean_inc(x_3);
x_154 = l_Lean_Expr_app___override(x_153, x_3);
lean_inc(x_3);
x_155 = l_Lean_Expr_app___override(x_154, x_3);
x_156 = l_CancelDenoms_mkProdPrf___lambda__2___closed__3;
lean_inc(x_4);
x_157 = l_Lean_Expr_const___override(x_156, x_4);
lean_inc(x_3);
x_158 = l_Lean_Expr_app___override(x_157, x_3);
x_159 = l_CancelDenoms_mkProdPrf___lambda__2___closed__6;
x_160 = l_Lean_Expr_const___override(x_159, x_4);
x_161 = l_Lean_Expr_app___override(x_160, x_3);
x_162 = l_Lean_Expr_app___override(x_161, x_5);
x_163 = l_Lean_Expr_app___override(x_158, x_162);
x_164 = l_Lean_Expr_app___override(x_155, x_163);
lean_inc(x_16);
x_165 = l_Lean_Expr_app___override(x_164, x_16);
lean_inc(x_149);
x_166 = l_Lean_Expr_app___override(x_165, x_149);
x_167 = lean_ctor_get(x_7, 0);
lean_inc(x_167);
x_168 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_169 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_170 = lean_ctor_get(x_7, 1);
lean_inc(x_170);
x_171 = lean_ctor_get(x_7, 2);
lean_inc(x_171);
x_172 = lean_ctor_get(x_7, 3);
lean_inc(x_172);
x_173 = lean_ctor_get(x_7, 4);
lean_inc(x_173);
x_174 = lean_ctor_get(x_7, 5);
lean_inc(x_174);
x_175 = lean_ctor_get(x_7, 6);
lean_inc(x_175);
x_176 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_177 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_178 = lean_ctor_get_uint8(x_167, 0);
x_179 = lean_ctor_get_uint8(x_167, 1);
x_180 = lean_ctor_get_uint8(x_167, 2);
x_181 = lean_ctor_get_uint8(x_167, 3);
x_182 = lean_ctor_get_uint8(x_167, 4);
x_183 = lean_ctor_get_uint8(x_167, 5);
x_184 = lean_ctor_get_uint8(x_167, 6);
x_185 = lean_ctor_get_uint8(x_167, 7);
x_186 = lean_ctor_get_uint8(x_167, 8);
x_187 = lean_ctor_get_uint8(x_167, 10);
x_188 = lean_ctor_get_uint8(x_167, 11);
x_189 = lean_ctor_get_uint8(x_167, 12);
x_190 = lean_ctor_get_uint8(x_167, 13);
x_191 = lean_ctor_get_uint8(x_167, 14);
x_192 = lean_ctor_get_uint8(x_167, 15);
x_193 = lean_ctor_get_uint8(x_167, 16);
x_194 = lean_ctor_get_uint8(x_167, 17);
if (lean_is_exclusive(x_167)) {
 x_195 = x_167;
} else {
 lean_dec_ref(x_167);
 x_195 = lean_box(0);
}
x_196 = 2;
if (lean_is_scalar(x_195)) {
 x_197 = lean_alloc_ctor(0, 0, 18);
} else {
 x_197 = x_195;
}
lean_ctor_set_uint8(x_197, 0, x_178);
lean_ctor_set_uint8(x_197, 1, x_179);
lean_ctor_set_uint8(x_197, 2, x_180);
lean_ctor_set_uint8(x_197, 3, x_181);
lean_ctor_set_uint8(x_197, 4, x_182);
lean_ctor_set_uint8(x_197, 5, x_183);
lean_ctor_set_uint8(x_197, 6, x_184);
lean_ctor_set_uint8(x_197, 7, x_185);
lean_ctor_set_uint8(x_197, 8, x_186);
lean_ctor_set_uint8(x_197, 9, x_196);
lean_ctor_set_uint8(x_197, 10, x_187);
lean_ctor_set_uint8(x_197, 11, x_188);
lean_ctor_set_uint8(x_197, 12, x_189);
lean_ctor_set_uint8(x_197, 13, x_190);
lean_ctor_set_uint8(x_197, 14, x_191);
lean_ctor_set_uint8(x_197, 15, x_192);
lean_ctor_set_uint8(x_197, 16, x_193);
lean_ctor_set_uint8(x_197, 17, x_194);
x_198 = 2;
x_199 = lean_uint64_shift_right(x_168, x_198);
x_200 = lean_uint64_shift_left(x_199, x_198);
x_201 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_202 = lean_uint64_lor(x_200, x_201);
x_203 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_203, 0, x_197);
lean_ctor_set(x_203, 1, x_170);
lean_ctor_set(x_203, 2, x_171);
lean_ctor_set(x_203, 3, x_172);
lean_ctor_set(x_203, 4, x_173);
lean_ctor_set(x_203, 5, x_174);
lean_ctor_set(x_203, 6, x_175);
lean_ctor_set_uint64(x_203, sizeof(void*)*7, x_202);
lean_ctor_set_uint8(x_203, sizeof(void*)*7 + 8, x_169);
lean_ctor_set_uint8(x_203, sizeof(void*)*7 + 9, x_176);
lean_ctor_set_uint8(x_203, sizeof(void*)*7 + 10, x_177);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_204 = l_Lean_Meta_isExprDefEq(x_166, x_6, x_203, x_8, x_9, x_10, x_150);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; uint8_t x_206; 
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_unbox(x_205);
lean_dec(x_205);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; uint8_t x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_207 = lean_ctor_get(x_204, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_208 = x_204;
} else {
 lean_dec_ref(x_204);
 x_208 = lean_box(0);
}
x_209 = 0;
x_210 = lean_box(x_209);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_149);
lean_ctor_set(x_211, 1, x_210);
lean_ctor_set(x_14, 1, x_211);
if (lean_is_scalar(x_208)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_208;
}
lean_ctor_set(x_212, 0, x_14);
lean_ctor_set(x_212, 1, x_207);
return x_212;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_free_object(x_14);
x_213 = lean_ctor_get(x_204, 1);
lean_inc(x_213);
lean_dec(x_204);
x_214 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_213);
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_217 = x_214;
} else {
 lean_dec_ref(x_214);
 x_217 = lean_box(0);
}
x_218 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_149, x_7, x_8, x_9, x_10, x_216);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_221 = x_218;
} else {
 lean_dec_ref(x_218);
 x_221 = lean_box(0);
}
x_222 = 1;
x_223 = lean_box(x_222);
if (lean_is_scalar(x_217)) {
 x_224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_224 = x_217;
}
lean_ctor_set(x_224, 0, x_219);
lean_ctor_set(x_224, 1, x_223);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_215);
lean_ctor_set(x_225, 1, x_224);
if (lean_is_scalar(x_221)) {
 x_226 = lean_alloc_ctor(0, 2, 0);
} else {
 x_226 = x_221;
}
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_220);
return x_226;
}
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec(x_149);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_227 = lean_ctor_get(x_204, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_204, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_229 = x_204;
} else {
 lean_dec_ref(x_204);
 x_229 = lean_box(0);
}
if (lean_is_scalar(x_229)) {
 x_230 = lean_alloc_ctor(1, 2, 0);
} else {
 x_230 = x_229;
}
lean_ctor_set(x_230, 0, x_227);
lean_ctor_set(x_230, 1, x_228);
return x_230;
}
}
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; uint64_t x_254; uint8_t x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; uint8_t x_262; uint8_t x_263; uint8_t x_264; uint8_t x_265; uint8_t x_266; uint8_t x_267; uint8_t x_268; uint8_t x_269; uint8_t x_270; uint8_t x_271; uint8_t x_272; uint8_t x_273; uint8_t x_274; uint8_t x_275; uint8_t x_276; uint8_t x_277; uint8_t x_278; uint8_t x_279; uint8_t x_280; lean_object* x_281; uint8_t x_282; lean_object* x_283; uint64_t x_284; uint64_t x_285; uint64_t x_286; uint64_t x_287; uint64_t x_288; lean_object* x_289; lean_object* x_290; 
x_231 = lean_ctor_get(x_14, 0);
x_232 = lean_ctor_get(x_14, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_14);
lean_inc(x_7);
x_233 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_232);
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
x_237 = l_CancelDenoms_mkProdPrf___lambda__2___closed__1;
x_238 = l_Lean_Expr_const___override(x_237, x_2);
lean_inc(x_3);
x_239 = l_Lean_Expr_app___override(x_238, x_3);
lean_inc(x_3);
x_240 = l_Lean_Expr_app___override(x_239, x_3);
lean_inc(x_3);
x_241 = l_Lean_Expr_app___override(x_240, x_3);
x_242 = l_CancelDenoms_mkProdPrf___lambda__2___closed__3;
lean_inc(x_4);
x_243 = l_Lean_Expr_const___override(x_242, x_4);
lean_inc(x_3);
x_244 = l_Lean_Expr_app___override(x_243, x_3);
x_245 = l_CancelDenoms_mkProdPrf___lambda__2___closed__6;
x_246 = l_Lean_Expr_const___override(x_245, x_4);
x_247 = l_Lean_Expr_app___override(x_246, x_3);
x_248 = l_Lean_Expr_app___override(x_247, x_5);
x_249 = l_Lean_Expr_app___override(x_244, x_248);
x_250 = l_Lean_Expr_app___override(x_241, x_249);
lean_inc(x_231);
x_251 = l_Lean_Expr_app___override(x_250, x_231);
lean_inc(x_234);
x_252 = l_Lean_Expr_app___override(x_251, x_234);
x_253 = lean_ctor_get(x_7, 0);
lean_inc(x_253);
x_254 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_255 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_256 = lean_ctor_get(x_7, 1);
lean_inc(x_256);
x_257 = lean_ctor_get(x_7, 2);
lean_inc(x_257);
x_258 = lean_ctor_get(x_7, 3);
lean_inc(x_258);
x_259 = lean_ctor_get(x_7, 4);
lean_inc(x_259);
x_260 = lean_ctor_get(x_7, 5);
lean_inc(x_260);
x_261 = lean_ctor_get(x_7, 6);
lean_inc(x_261);
x_262 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_263 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_264 = lean_ctor_get_uint8(x_253, 0);
x_265 = lean_ctor_get_uint8(x_253, 1);
x_266 = lean_ctor_get_uint8(x_253, 2);
x_267 = lean_ctor_get_uint8(x_253, 3);
x_268 = lean_ctor_get_uint8(x_253, 4);
x_269 = lean_ctor_get_uint8(x_253, 5);
x_270 = lean_ctor_get_uint8(x_253, 6);
x_271 = lean_ctor_get_uint8(x_253, 7);
x_272 = lean_ctor_get_uint8(x_253, 8);
x_273 = lean_ctor_get_uint8(x_253, 10);
x_274 = lean_ctor_get_uint8(x_253, 11);
x_275 = lean_ctor_get_uint8(x_253, 12);
x_276 = lean_ctor_get_uint8(x_253, 13);
x_277 = lean_ctor_get_uint8(x_253, 14);
x_278 = lean_ctor_get_uint8(x_253, 15);
x_279 = lean_ctor_get_uint8(x_253, 16);
x_280 = lean_ctor_get_uint8(x_253, 17);
if (lean_is_exclusive(x_253)) {
 x_281 = x_253;
} else {
 lean_dec_ref(x_253);
 x_281 = lean_box(0);
}
x_282 = 2;
if (lean_is_scalar(x_281)) {
 x_283 = lean_alloc_ctor(0, 0, 18);
} else {
 x_283 = x_281;
}
lean_ctor_set_uint8(x_283, 0, x_264);
lean_ctor_set_uint8(x_283, 1, x_265);
lean_ctor_set_uint8(x_283, 2, x_266);
lean_ctor_set_uint8(x_283, 3, x_267);
lean_ctor_set_uint8(x_283, 4, x_268);
lean_ctor_set_uint8(x_283, 5, x_269);
lean_ctor_set_uint8(x_283, 6, x_270);
lean_ctor_set_uint8(x_283, 7, x_271);
lean_ctor_set_uint8(x_283, 8, x_272);
lean_ctor_set_uint8(x_283, 9, x_282);
lean_ctor_set_uint8(x_283, 10, x_273);
lean_ctor_set_uint8(x_283, 11, x_274);
lean_ctor_set_uint8(x_283, 12, x_275);
lean_ctor_set_uint8(x_283, 13, x_276);
lean_ctor_set_uint8(x_283, 14, x_277);
lean_ctor_set_uint8(x_283, 15, x_278);
lean_ctor_set_uint8(x_283, 16, x_279);
lean_ctor_set_uint8(x_283, 17, x_280);
x_284 = 2;
x_285 = lean_uint64_shift_right(x_254, x_284);
x_286 = lean_uint64_shift_left(x_285, x_284);
x_287 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_288 = lean_uint64_lor(x_286, x_287);
x_289 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_289, 0, x_283);
lean_ctor_set(x_289, 1, x_256);
lean_ctor_set(x_289, 2, x_257);
lean_ctor_set(x_289, 3, x_258);
lean_ctor_set(x_289, 4, x_259);
lean_ctor_set(x_289, 5, x_260);
lean_ctor_set(x_289, 6, x_261);
lean_ctor_set_uint64(x_289, sizeof(void*)*7, x_288);
lean_ctor_set_uint8(x_289, sizeof(void*)*7 + 8, x_255);
lean_ctor_set_uint8(x_289, sizeof(void*)*7 + 9, x_262);
lean_ctor_set_uint8(x_289, sizeof(void*)*7 + 10, x_263);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_290 = l_Lean_Meta_isExprDefEq(x_252, x_6, x_289, x_8, x_9, x_10, x_235);
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_291; uint8_t x_292; 
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_unbox(x_291);
lean_dec(x_291);
if (x_292 == 0)
{
lean_object* x_293; lean_object* x_294; uint8_t x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_293 = lean_ctor_get(x_290, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_294 = x_290;
} else {
 lean_dec_ref(x_290);
 x_294 = lean_box(0);
}
x_295 = 0;
x_296 = lean_box(x_295);
if (lean_is_scalar(x_236)) {
 x_297 = lean_alloc_ctor(0, 2, 0);
} else {
 x_297 = x_236;
}
lean_ctor_set(x_297, 0, x_234);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_231);
lean_ctor_set(x_298, 1, x_297);
if (lean_is_scalar(x_294)) {
 x_299 = lean_alloc_ctor(0, 2, 0);
} else {
 x_299 = x_294;
}
lean_ctor_set(x_299, 0, x_298);
lean_ctor_set(x_299, 1, x_293);
return x_299;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; uint8_t x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_300 = lean_ctor_get(x_290, 1);
lean_inc(x_300);
lean_dec(x_290);
x_301 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_231, x_7, x_8, x_9, x_10, x_300);
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 1);
lean_inc(x_303);
if (lean_is_exclusive(x_301)) {
 lean_ctor_release(x_301, 0);
 lean_ctor_release(x_301, 1);
 x_304 = x_301;
} else {
 lean_dec_ref(x_301);
 x_304 = lean_box(0);
}
x_305 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_234, x_7, x_8, x_9, x_10, x_303);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_305, 1);
lean_inc(x_307);
if (lean_is_exclusive(x_305)) {
 lean_ctor_release(x_305, 0);
 lean_ctor_release(x_305, 1);
 x_308 = x_305;
} else {
 lean_dec_ref(x_305);
 x_308 = lean_box(0);
}
x_309 = 1;
x_310 = lean_box(x_309);
if (lean_is_scalar(x_304)) {
 x_311 = lean_alloc_ctor(0, 2, 0);
} else {
 x_311 = x_304;
}
lean_ctor_set(x_311, 0, x_306);
lean_ctor_set(x_311, 1, x_310);
if (lean_is_scalar(x_236)) {
 x_312 = lean_alloc_ctor(0, 2, 0);
} else {
 x_312 = x_236;
}
lean_ctor_set(x_312, 0, x_302);
lean_ctor_set(x_312, 1, x_311);
if (lean_is_scalar(x_308)) {
 x_313 = lean_alloc_ctor(0, 2, 0);
} else {
 x_313 = x_308;
}
lean_ctor_set(x_313, 0, x_312);
lean_ctor_set(x_313, 1, x_307);
return x_313;
}
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
lean_dec(x_236);
lean_dec(x_234);
lean_dec(x_231);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_314 = lean_ctor_get(x_290, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_290, 1);
lean_inc(x_315);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_316 = x_290;
} else {
 lean_dec_ref(x_290);
 x_316 = lean_box(0);
}
if (lean_is_scalar(x_316)) {
 x_317 = lean_alloc_ctor(1, 2, 0);
} else {
 x_317 = x_316;
}
lean_ctor_set(x_317, 0, x_314);
lean_ctor_set(x_317, 1, x_315);
return x_317;
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCancelFactor___closed__4;
x_2 = l_CancelDenoms_findCancelFactor___closed__15;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHSub", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__3___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubNegMonoid", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSub", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__3___closed__4;
x_2 = l_CancelDenoms_mkProdPrf___lambda__3___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddGroup", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSubNegMonoid", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__3___closed__7;
x_2 = l_CancelDenoms_mkProdPrf___lambda__3___closed__8;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddGroupWithOne", 15, 15);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddGroup", 10, 10);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__3___closed__10;
x_2 = l_CancelDenoms_mkProdPrf___lambda__3___closed__11;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = 0;
x_13 = lean_box(0);
lean_inc(x_7);
lean_inc(x_1);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_7);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint64_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = l_CancelDenoms_mkProdPrf___lambda__3___closed__1;
x_23 = l_Lean_Expr_const___override(x_22, x_2);
lean_inc(x_3);
x_24 = l_Lean_Expr_app___override(x_23, x_3);
lean_inc(x_3);
x_25 = l_Lean_Expr_app___override(x_24, x_3);
lean_inc(x_3);
x_26 = l_Lean_Expr_app___override(x_25, x_3);
x_27 = l_CancelDenoms_mkProdPrf___lambda__3___closed__3;
lean_inc(x_4);
x_28 = l_Lean_Expr_const___override(x_27, x_4);
lean_inc(x_3);
x_29 = l_Lean_Expr_app___override(x_28, x_3);
x_30 = l_CancelDenoms_mkProdPrf___lambda__3___closed__6;
lean_inc(x_4);
x_31 = l_Lean_Expr_const___override(x_30, x_4);
lean_inc(x_3);
x_32 = l_Lean_Expr_app___override(x_31, x_3);
x_33 = l_CancelDenoms_mkProdPrf___lambda__3___closed__9;
lean_inc(x_4);
x_34 = l_Lean_Expr_const___override(x_33, x_4);
lean_inc(x_3);
x_35 = l_Lean_Expr_app___override(x_34, x_3);
x_36 = l_CancelDenoms_mkProdPrf___lambda__3___closed__12;
x_37 = l_Lean_Expr_const___override(x_36, x_4);
x_38 = l_Lean_Expr_app___override(x_37, x_3);
x_39 = l_Lean_Expr_app___override(x_38, x_5);
x_40 = l_Lean_Expr_app___override(x_35, x_39);
x_41 = l_Lean_Expr_app___override(x_32, x_40);
x_42 = l_Lean_Expr_app___override(x_29, x_41);
x_43 = l_Lean_Expr_app___override(x_26, x_42);
lean_inc(x_16);
x_44 = l_Lean_Expr_app___override(x_43, x_16);
lean_inc(x_20);
x_45 = l_Lean_Expr_app___override(x_44, x_20);
x_46 = lean_ctor_get(x_7, 0);
lean_inc(x_46);
x_47 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_48 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_49 = lean_ctor_get(x_7, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_7, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_7, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_7, 4);
lean_inc(x_52);
x_53 = lean_ctor_get(x_7, 5);
lean_inc(x_53);
x_54 = lean_ctor_get(x_7, 6);
lean_inc(x_54);
x_55 = !lean_is_exclusive(x_46);
if (x_55 == 0)
{
uint8_t x_56; uint8_t x_57; uint8_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_57 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_58 = 2;
lean_ctor_set_uint8(x_46, 9, x_58);
x_59 = 2;
x_60 = lean_uint64_shift_right(x_47, x_59);
x_61 = lean_uint64_shift_left(x_60, x_59);
x_62 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_63 = lean_uint64_lor(x_61, x_62);
x_64 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_64, 0, x_46);
lean_ctor_set(x_64, 1, x_49);
lean_ctor_set(x_64, 2, x_50);
lean_ctor_set(x_64, 3, x_51);
lean_ctor_set(x_64, 4, x_52);
lean_ctor_set(x_64, 5, x_53);
lean_ctor_set(x_64, 6, x_54);
lean_ctor_set_uint64(x_64, sizeof(void*)*7, x_63);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 8, x_48);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 9, x_56);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 10, x_57);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_65 = l_Lean_Meta_isExprDefEq(x_45, x_6, x_64, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_unbox(x_66);
lean_dec(x_66);
if (x_67 == 0)
{
uint8_t x_68; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_68 = !lean_is_exclusive(x_65);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_65, 0);
lean_dec(x_69);
x_70 = 0;
x_71 = lean_box(x_70);
lean_ctor_set(x_18, 1, x_71);
lean_ctor_set(x_14, 1, x_18);
lean_ctor_set(x_65, 0, x_14);
return x_65;
}
else
{
lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_65, 1);
lean_inc(x_72);
lean_dec(x_65);
x_73 = 0;
x_74 = lean_box(x_73);
lean_ctor_set(x_18, 1, x_74);
lean_ctor_set(x_14, 1, x_18);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_14);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; 
lean_free_object(x_14);
x_76 = lean_ctor_get(x_65, 1);
lean_inc(x_76);
lean_dec(x_65);
x_77 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_76);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = lean_ctor_get(x_77, 1);
x_81 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_80);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = 1;
x_85 = lean_box(x_84);
lean_ctor_set(x_77, 1, x_85);
lean_ctor_set(x_77, 0, x_83);
lean_ctor_set(x_18, 1, x_77);
lean_ctor_set(x_18, 0, x_79);
lean_ctor_set(x_81, 0, x_18);
return x_81;
}
else
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; 
x_86 = lean_ctor_get(x_81, 0);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_81);
x_88 = 1;
x_89 = lean_box(x_88);
lean_ctor_set(x_77, 1, x_89);
lean_ctor_set(x_77, 0, x_86);
lean_ctor_set(x_18, 1, x_77);
lean_ctor_set(x_18, 0, x_79);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_18);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_91 = lean_ctor_get(x_77, 0);
x_92 = lean_ctor_get(x_77, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_77);
x_93 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_92);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = 1;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_94);
lean_ctor_set(x_99, 1, x_98);
lean_ctor_set(x_18, 1, x_99);
lean_ctor_set(x_18, 0, x_91);
if (lean_is_scalar(x_96)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_96;
}
lean_ctor_set(x_100, 0, x_18);
lean_ctor_set(x_100, 1, x_95);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_free_object(x_18);
lean_dec(x_20);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_101 = !lean_is_exclusive(x_65);
if (x_101 == 0)
{
return x_65;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_65, 0);
x_103 = lean_ctor_get(x_65, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_65);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; uint8_t x_117; uint8_t x_118; uint8_t x_119; uint8_t x_120; uint8_t x_121; uint8_t x_122; uint8_t x_123; uint8_t x_124; lean_object* x_125; uint64_t x_126; uint64_t x_127; uint64_t x_128; uint64_t x_129; uint64_t x_130; lean_object* x_131; lean_object* x_132; 
x_105 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_106 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_107 = lean_ctor_get_uint8(x_46, 0);
x_108 = lean_ctor_get_uint8(x_46, 1);
x_109 = lean_ctor_get_uint8(x_46, 2);
x_110 = lean_ctor_get_uint8(x_46, 3);
x_111 = lean_ctor_get_uint8(x_46, 4);
x_112 = lean_ctor_get_uint8(x_46, 5);
x_113 = lean_ctor_get_uint8(x_46, 6);
x_114 = lean_ctor_get_uint8(x_46, 7);
x_115 = lean_ctor_get_uint8(x_46, 8);
x_116 = lean_ctor_get_uint8(x_46, 10);
x_117 = lean_ctor_get_uint8(x_46, 11);
x_118 = lean_ctor_get_uint8(x_46, 12);
x_119 = lean_ctor_get_uint8(x_46, 13);
x_120 = lean_ctor_get_uint8(x_46, 14);
x_121 = lean_ctor_get_uint8(x_46, 15);
x_122 = lean_ctor_get_uint8(x_46, 16);
x_123 = lean_ctor_get_uint8(x_46, 17);
lean_dec(x_46);
x_124 = 2;
x_125 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_125, 0, x_107);
lean_ctor_set_uint8(x_125, 1, x_108);
lean_ctor_set_uint8(x_125, 2, x_109);
lean_ctor_set_uint8(x_125, 3, x_110);
lean_ctor_set_uint8(x_125, 4, x_111);
lean_ctor_set_uint8(x_125, 5, x_112);
lean_ctor_set_uint8(x_125, 6, x_113);
lean_ctor_set_uint8(x_125, 7, x_114);
lean_ctor_set_uint8(x_125, 8, x_115);
lean_ctor_set_uint8(x_125, 9, x_124);
lean_ctor_set_uint8(x_125, 10, x_116);
lean_ctor_set_uint8(x_125, 11, x_117);
lean_ctor_set_uint8(x_125, 12, x_118);
lean_ctor_set_uint8(x_125, 13, x_119);
lean_ctor_set_uint8(x_125, 14, x_120);
lean_ctor_set_uint8(x_125, 15, x_121);
lean_ctor_set_uint8(x_125, 16, x_122);
lean_ctor_set_uint8(x_125, 17, x_123);
x_126 = 2;
x_127 = lean_uint64_shift_right(x_47, x_126);
x_128 = lean_uint64_shift_left(x_127, x_126);
x_129 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_130 = lean_uint64_lor(x_128, x_129);
x_131 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_131, 0, x_125);
lean_ctor_set(x_131, 1, x_49);
lean_ctor_set(x_131, 2, x_50);
lean_ctor_set(x_131, 3, x_51);
lean_ctor_set(x_131, 4, x_52);
lean_ctor_set(x_131, 5, x_53);
lean_ctor_set(x_131, 6, x_54);
lean_ctor_set_uint64(x_131, sizeof(void*)*7, x_130);
lean_ctor_set_uint8(x_131, sizeof(void*)*7 + 8, x_48);
lean_ctor_set_uint8(x_131, sizeof(void*)*7 + 9, x_105);
lean_ctor_set_uint8(x_131, sizeof(void*)*7 + 10, x_106);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_132 = l_Lean_Meta_isExprDefEq(x_45, x_6, x_131, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_unbox(x_133);
lean_dec(x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_135 = lean_ctor_get(x_132, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_136 = x_132;
} else {
 lean_dec_ref(x_132);
 x_136 = lean_box(0);
}
x_137 = 0;
x_138 = lean_box(x_137);
lean_ctor_set(x_18, 1, x_138);
lean_ctor_set(x_14, 1, x_18);
if (lean_is_scalar(x_136)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_136;
}
lean_ctor_set(x_139, 0, x_14);
lean_ctor_set(x_139, 1, x_135);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_free_object(x_14);
x_140 = lean_ctor_get(x_132, 1);
lean_inc(x_140);
lean_dec(x_132);
x_141 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_144 = x_141;
} else {
 lean_dec_ref(x_141);
 x_144 = lean_box(0);
}
x_145 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_143);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_148 = x_145;
} else {
 lean_dec_ref(x_145);
 x_148 = lean_box(0);
}
x_149 = 1;
x_150 = lean_box(x_149);
if (lean_is_scalar(x_144)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_144;
}
lean_ctor_set(x_151, 0, x_146);
lean_ctor_set(x_151, 1, x_150);
lean_ctor_set(x_18, 1, x_151);
lean_ctor_set(x_18, 0, x_142);
if (lean_is_scalar(x_148)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_148;
}
lean_ctor_set(x_152, 0, x_18);
lean_ctor_set(x_152, 1, x_147);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_free_object(x_18);
lean_dec(x_20);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_153 = lean_ctor_get(x_132, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_132, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_155 = x_132;
} else {
 lean_dec_ref(x_132);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint64_t x_184; uint8_t x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; uint8_t x_193; uint8_t x_194; uint8_t x_195; uint8_t x_196; uint8_t x_197; uint8_t x_198; uint8_t x_199; uint8_t x_200; uint8_t x_201; uint8_t x_202; uint8_t x_203; uint8_t x_204; uint8_t x_205; uint8_t x_206; uint8_t x_207; uint8_t x_208; uint8_t x_209; uint8_t x_210; lean_object* x_211; uint8_t x_212; lean_object* x_213; uint64_t x_214; uint64_t x_215; uint64_t x_216; uint64_t x_217; uint64_t x_218; lean_object* x_219; lean_object* x_220; 
x_157 = lean_ctor_get(x_18, 0);
x_158 = lean_ctor_get(x_18, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_18);
x_159 = l_CancelDenoms_mkProdPrf___lambda__3___closed__1;
x_160 = l_Lean_Expr_const___override(x_159, x_2);
lean_inc(x_3);
x_161 = l_Lean_Expr_app___override(x_160, x_3);
lean_inc(x_3);
x_162 = l_Lean_Expr_app___override(x_161, x_3);
lean_inc(x_3);
x_163 = l_Lean_Expr_app___override(x_162, x_3);
x_164 = l_CancelDenoms_mkProdPrf___lambda__3___closed__3;
lean_inc(x_4);
x_165 = l_Lean_Expr_const___override(x_164, x_4);
lean_inc(x_3);
x_166 = l_Lean_Expr_app___override(x_165, x_3);
x_167 = l_CancelDenoms_mkProdPrf___lambda__3___closed__6;
lean_inc(x_4);
x_168 = l_Lean_Expr_const___override(x_167, x_4);
lean_inc(x_3);
x_169 = l_Lean_Expr_app___override(x_168, x_3);
x_170 = l_CancelDenoms_mkProdPrf___lambda__3___closed__9;
lean_inc(x_4);
x_171 = l_Lean_Expr_const___override(x_170, x_4);
lean_inc(x_3);
x_172 = l_Lean_Expr_app___override(x_171, x_3);
x_173 = l_CancelDenoms_mkProdPrf___lambda__3___closed__12;
x_174 = l_Lean_Expr_const___override(x_173, x_4);
x_175 = l_Lean_Expr_app___override(x_174, x_3);
x_176 = l_Lean_Expr_app___override(x_175, x_5);
x_177 = l_Lean_Expr_app___override(x_172, x_176);
x_178 = l_Lean_Expr_app___override(x_169, x_177);
x_179 = l_Lean_Expr_app___override(x_166, x_178);
x_180 = l_Lean_Expr_app___override(x_163, x_179);
lean_inc(x_16);
x_181 = l_Lean_Expr_app___override(x_180, x_16);
lean_inc(x_157);
x_182 = l_Lean_Expr_app___override(x_181, x_157);
x_183 = lean_ctor_get(x_7, 0);
lean_inc(x_183);
x_184 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_185 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_186 = lean_ctor_get(x_7, 1);
lean_inc(x_186);
x_187 = lean_ctor_get(x_7, 2);
lean_inc(x_187);
x_188 = lean_ctor_get(x_7, 3);
lean_inc(x_188);
x_189 = lean_ctor_get(x_7, 4);
lean_inc(x_189);
x_190 = lean_ctor_get(x_7, 5);
lean_inc(x_190);
x_191 = lean_ctor_get(x_7, 6);
lean_inc(x_191);
x_192 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_193 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_194 = lean_ctor_get_uint8(x_183, 0);
x_195 = lean_ctor_get_uint8(x_183, 1);
x_196 = lean_ctor_get_uint8(x_183, 2);
x_197 = lean_ctor_get_uint8(x_183, 3);
x_198 = lean_ctor_get_uint8(x_183, 4);
x_199 = lean_ctor_get_uint8(x_183, 5);
x_200 = lean_ctor_get_uint8(x_183, 6);
x_201 = lean_ctor_get_uint8(x_183, 7);
x_202 = lean_ctor_get_uint8(x_183, 8);
x_203 = lean_ctor_get_uint8(x_183, 10);
x_204 = lean_ctor_get_uint8(x_183, 11);
x_205 = lean_ctor_get_uint8(x_183, 12);
x_206 = lean_ctor_get_uint8(x_183, 13);
x_207 = lean_ctor_get_uint8(x_183, 14);
x_208 = lean_ctor_get_uint8(x_183, 15);
x_209 = lean_ctor_get_uint8(x_183, 16);
x_210 = lean_ctor_get_uint8(x_183, 17);
if (lean_is_exclusive(x_183)) {
 x_211 = x_183;
} else {
 lean_dec_ref(x_183);
 x_211 = lean_box(0);
}
x_212 = 2;
if (lean_is_scalar(x_211)) {
 x_213 = lean_alloc_ctor(0, 0, 18);
} else {
 x_213 = x_211;
}
lean_ctor_set_uint8(x_213, 0, x_194);
lean_ctor_set_uint8(x_213, 1, x_195);
lean_ctor_set_uint8(x_213, 2, x_196);
lean_ctor_set_uint8(x_213, 3, x_197);
lean_ctor_set_uint8(x_213, 4, x_198);
lean_ctor_set_uint8(x_213, 5, x_199);
lean_ctor_set_uint8(x_213, 6, x_200);
lean_ctor_set_uint8(x_213, 7, x_201);
lean_ctor_set_uint8(x_213, 8, x_202);
lean_ctor_set_uint8(x_213, 9, x_212);
lean_ctor_set_uint8(x_213, 10, x_203);
lean_ctor_set_uint8(x_213, 11, x_204);
lean_ctor_set_uint8(x_213, 12, x_205);
lean_ctor_set_uint8(x_213, 13, x_206);
lean_ctor_set_uint8(x_213, 14, x_207);
lean_ctor_set_uint8(x_213, 15, x_208);
lean_ctor_set_uint8(x_213, 16, x_209);
lean_ctor_set_uint8(x_213, 17, x_210);
x_214 = 2;
x_215 = lean_uint64_shift_right(x_184, x_214);
x_216 = lean_uint64_shift_left(x_215, x_214);
x_217 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_218 = lean_uint64_lor(x_216, x_217);
x_219 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_219, 0, x_213);
lean_ctor_set(x_219, 1, x_186);
lean_ctor_set(x_219, 2, x_187);
lean_ctor_set(x_219, 3, x_188);
lean_ctor_set(x_219, 4, x_189);
lean_ctor_set(x_219, 5, x_190);
lean_ctor_set(x_219, 6, x_191);
lean_ctor_set_uint64(x_219, sizeof(void*)*7, x_218);
lean_ctor_set_uint8(x_219, sizeof(void*)*7 + 8, x_185);
lean_ctor_set_uint8(x_219, sizeof(void*)*7 + 9, x_192);
lean_ctor_set_uint8(x_219, sizeof(void*)*7 + 10, x_193);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_220 = l_Lean_Meta_isExprDefEq(x_182, x_6, x_219, x_8, x_9, x_10, x_158);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; uint8_t x_222; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_unbox(x_221);
lean_dec(x_221);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; uint8_t x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_223 = lean_ctor_get(x_220, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_224 = x_220;
} else {
 lean_dec_ref(x_220);
 x_224 = lean_box(0);
}
x_225 = 0;
x_226 = lean_box(x_225);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_157);
lean_ctor_set(x_227, 1, x_226);
lean_ctor_set(x_14, 1, x_227);
if (lean_is_scalar(x_224)) {
 x_228 = lean_alloc_ctor(0, 2, 0);
} else {
 x_228 = x_224;
}
lean_ctor_set(x_228, 0, x_14);
lean_ctor_set(x_228, 1, x_223);
return x_228;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_free_object(x_14);
x_229 = lean_ctor_get(x_220, 1);
lean_inc(x_229);
lean_dec(x_220);
x_230 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_229);
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_233 = x_230;
} else {
 lean_dec_ref(x_230);
 x_233 = lean_box(0);
}
x_234 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_157, x_7, x_8, x_9, x_10, x_232);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_234)) {
 lean_ctor_release(x_234, 0);
 lean_ctor_release(x_234, 1);
 x_237 = x_234;
} else {
 lean_dec_ref(x_234);
 x_237 = lean_box(0);
}
x_238 = 1;
x_239 = lean_box(x_238);
if (lean_is_scalar(x_233)) {
 x_240 = lean_alloc_ctor(0, 2, 0);
} else {
 x_240 = x_233;
}
lean_ctor_set(x_240, 0, x_235);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_231);
lean_ctor_set(x_241, 1, x_240);
if (lean_is_scalar(x_237)) {
 x_242 = lean_alloc_ctor(0, 2, 0);
} else {
 x_242 = x_237;
}
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_236);
return x_242;
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_dec(x_157);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_243 = lean_ctor_get(x_220, 0);
lean_inc(x_243);
x_244 = lean_ctor_get(x_220, 1);
lean_inc(x_244);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_245 = x_220;
} else {
 lean_dec_ref(x_220);
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
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; uint64_t x_278; uint8_t x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; uint8_t x_286; uint8_t x_287; uint8_t x_288; uint8_t x_289; uint8_t x_290; uint8_t x_291; uint8_t x_292; uint8_t x_293; uint8_t x_294; uint8_t x_295; uint8_t x_296; uint8_t x_297; uint8_t x_298; uint8_t x_299; uint8_t x_300; uint8_t x_301; uint8_t x_302; uint8_t x_303; uint8_t x_304; lean_object* x_305; uint8_t x_306; lean_object* x_307; uint64_t x_308; uint64_t x_309; uint64_t x_310; uint64_t x_311; uint64_t x_312; lean_object* x_313; lean_object* x_314; 
x_247 = lean_ctor_get(x_14, 0);
x_248 = lean_ctor_get(x_14, 1);
lean_inc(x_248);
lean_inc(x_247);
lean_dec(x_14);
lean_inc(x_7);
x_249 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_248);
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_252 = x_249;
} else {
 lean_dec_ref(x_249);
 x_252 = lean_box(0);
}
x_253 = l_CancelDenoms_mkProdPrf___lambda__3___closed__1;
x_254 = l_Lean_Expr_const___override(x_253, x_2);
lean_inc(x_3);
x_255 = l_Lean_Expr_app___override(x_254, x_3);
lean_inc(x_3);
x_256 = l_Lean_Expr_app___override(x_255, x_3);
lean_inc(x_3);
x_257 = l_Lean_Expr_app___override(x_256, x_3);
x_258 = l_CancelDenoms_mkProdPrf___lambda__3___closed__3;
lean_inc(x_4);
x_259 = l_Lean_Expr_const___override(x_258, x_4);
lean_inc(x_3);
x_260 = l_Lean_Expr_app___override(x_259, x_3);
x_261 = l_CancelDenoms_mkProdPrf___lambda__3___closed__6;
lean_inc(x_4);
x_262 = l_Lean_Expr_const___override(x_261, x_4);
lean_inc(x_3);
x_263 = l_Lean_Expr_app___override(x_262, x_3);
x_264 = l_CancelDenoms_mkProdPrf___lambda__3___closed__9;
lean_inc(x_4);
x_265 = l_Lean_Expr_const___override(x_264, x_4);
lean_inc(x_3);
x_266 = l_Lean_Expr_app___override(x_265, x_3);
x_267 = l_CancelDenoms_mkProdPrf___lambda__3___closed__12;
x_268 = l_Lean_Expr_const___override(x_267, x_4);
x_269 = l_Lean_Expr_app___override(x_268, x_3);
x_270 = l_Lean_Expr_app___override(x_269, x_5);
x_271 = l_Lean_Expr_app___override(x_266, x_270);
x_272 = l_Lean_Expr_app___override(x_263, x_271);
x_273 = l_Lean_Expr_app___override(x_260, x_272);
x_274 = l_Lean_Expr_app___override(x_257, x_273);
lean_inc(x_247);
x_275 = l_Lean_Expr_app___override(x_274, x_247);
lean_inc(x_250);
x_276 = l_Lean_Expr_app___override(x_275, x_250);
x_277 = lean_ctor_get(x_7, 0);
lean_inc(x_277);
x_278 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_279 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_280 = lean_ctor_get(x_7, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_7, 2);
lean_inc(x_281);
x_282 = lean_ctor_get(x_7, 3);
lean_inc(x_282);
x_283 = lean_ctor_get(x_7, 4);
lean_inc(x_283);
x_284 = lean_ctor_get(x_7, 5);
lean_inc(x_284);
x_285 = lean_ctor_get(x_7, 6);
lean_inc(x_285);
x_286 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_287 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_288 = lean_ctor_get_uint8(x_277, 0);
x_289 = lean_ctor_get_uint8(x_277, 1);
x_290 = lean_ctor_get_uint8(x_277, 2);
x_291 = lean_ctor_get_uint8(x_277, 3);
x_292 = lean_ctor_get_uint8(x_277, 4);
x_293 = lean_ctor_get_uint8(x_277, 5);
x_294 = lean_ctor_get_uint8(x_277, 6);
x_295 = lean_ctor_get_uint8(x_277, 7);
x_296 = lean_ctor_get_uint8(x_277, 8);
x_297 = lean_ctor_get_uint8(x_277, 10);
x_298 = lean_ctor_get_uint8(x_277, 11);
x_299 = lean_ctor_get_uint8(x_277, 12);
x_300 = lean_ctor_get_uint8(x_277, 13);
x_301 = lean_ctor_get_uint8(x_277, 14);
x_302 = lean_ctor_get_uint8(x_277, 15);
x_303 = lean_ctor_get_uint8(x_277, 16);
x_304 = lean_ctor_get_uint8(x_277, 17);
if (lean_is_exclusive(x_277)) {
 x_305 = x_277;
} else {
 lean_dec_ref(x_277);
 x_305 = lean_box(0);
}
x_306 = 2;
if (lean_is_scalar(x_305)) {
 x_307 = lean_alloc_ctor(0, 0, 18);
} else {
 x_307 = x_305;
}
lean_ctor_set_uint8(x_307, 0, x_288);
lean_ctor_set_uint8(x_307, 1, x_289);
lean_ctor_set_uint8(x_307, 2, x_290);
lean_ctor_set_uint8(x_307, 3, x_291);
lean_ctor_set_uint8(x_307, 4, x_292);
lean_ctor_set_uint8(x_307, 5, x_293);
lean_ctor_set_uint8(x_307, 6, x_294);
lean_ctor_set_uint8(x_307, 7, x_295);
lean_ctor_set_uint8(x_307, 8, x_296);
lean_ctor_set_uint8(x_307, 9, x_306);
lean_ctor_set_uint8(x_307, 10, x_297);
lean_ctor_set_uint8(x_307, 11, x_298);
lean_ctor_set_uint8(x_307, 12, x_299);
lean_ctor_set_uint8(x_307, 13, x_300);
lean_ctor_set_uint8(x_307, 14, x_301);
lean_ctor_set_uint8(x_307, 15, x_302);
lean_ctor_set_uint8(x_307, 16, x_303);
lean_ctor_set_uint8(x_307, 17, x_304);
x_308 = 2;
x_309 = lean_uint64_shift_right(x_278, x_308);
x_310 = lean_uint64_shift_left(x_309, x_308);
x_311 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_312 = lean_uint64_lor(x_310, x_311);
x_313 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_313, 0, x_307);
lean_ctor_set(x_313, 1, x_280);
lean_ctor_set(x_313, 2, x_281);
lean_ctor_set(x_313, 3, x_282);
lean_ctor_set(x_313, 4, x_283);
lean_ctor_set(x_313, 5, x_284);
lean_ctor_set(x_313, 6, x_285);
lean_ctor_set_uint64(x_313, sizeof(void*)*7, x_312);
lean_ctor_set_uint8(x_313, sizeof(void*)*7 + 8, x_279);
lean_ctor_set_uint8(x_313, sizeof(void*)*7 + 9, x_286);
lean_ctor_set_uint8(x_313, sizeof(void*)*7 + 10, x_287);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_314 = l_Lean_Meta_isExprDefEq(x_276, x_6, x_313, x_8, x_9, x_10, x_251);
if (lean_obj_tag(x_314) == 0)
{
lean_object* x_315; uint8_t x_316; 
x_315 = lean_ctor_get(x_314, 0);
lean_inc(x_315);
x_316 = lean_unbox(x_315);
lean_dec(x_315);
if (x_316 == 0)
{
lean_object* x_317; lean_object* x_318; uint8_t x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_317 = lean_ctor_get(x_314, 1);
lean_inc(x_317);
if (lean_is_exclusive(x_314)) {
 lean_ctor_release(x_314, 0);
 lean_ctor_release(x_314, 1);
 x_318 = x_314;
} else {
 lean_dec_ref(x_314);
 x_318 = lean_box(0);
}
x_319 = 0;
x_320 = lean_box(x_319);
if (lean_is_scalar(x_252)) {
 x_321 = lean_alloc_ctor(0, 2, 0);
} else {
 x_321 = x_252;
}
lean_ctor_set(x_321, 0, x_250);
lean_ctor_set(x_321, 1, x_320);
x_322 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_322, 0, x_247);
lean_ctor_set(x_322, 1, x_321);
if (lean_is_scalar(x_318)) {
 x_323 = lean_alloc_ctor(0, 2, 0);
} else {
 x_323 = x_318;
}
lean_ctor_set(x_323, 0, x_322);
lean_ctor_set(x_323, 1, x_317);
return x_323;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_324 = lean_ctor_get(x_314, 1);
lean_inc(x_324);
lean_dec(x_314);
x_325 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_247, x_7, x_8, x_9, x_10, x_324);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_328 = x_325;
} else {
 lean_dec_ref(x_325);
 x_328 = lean_box(0);
}
x_329 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_250, x_7, x_8, x_9, x_10, x_327);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
if (lean_is_exclusive(x_329)) {
 lean_ctor_release(x_329, 0);
 lean_ctor_release(x_329, 1);
 x_332 = x_329;
} else {
 lean_dec_ref(x_329);
 x_332 = lean_box(0);
}
x_333 = 1;
x_334 = lean_box(x_333);
if (lean_is_scalar(x_328)) {
 x_335 = lean_alloc_ctor(0, 2, 0);
} else {
 x_335 = x_328;
}
lean_ctor_set(x_335, 0, x_330);
lean_ctor_set(x_335, 1, x_334);
if (lean_is_scalar(x_252)) {
 x_336 = lean_alloc_ctor(0, 2, 0);
} else {
 x_336 = x_252;
}
lean_ctor_set(x_336, 0, x_326);
lean_ctor_set(x_336, 1, x_335);
if (lean_is_scalar(x_332)) {
 x_337 = lean_alloc_ctor(0, 2, 0);
} else {
 x_337 = x_332;
}
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_331);
return x_337;
}
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; 
lean_dec(x_252);
lean_dec(x_250);
lean_dec(x_247);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_338 = lean_ctor_get(x_314, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_314, 1);
lean_inc(x_339);
if (lean_is_exclusive(x_314)) {
 lean_ctor_release(x_314, 0);
 lean_ctor_release(x_314, 1);
 x_340 = x_314;
} else {
 lean_dec_ref(x_314);
 x_340 = lean_box(0);
}
if (lean_is_scalar(x_340)) {
 x_341 = lean_alloc_ctor(1, 2, 0);
} else {
 x_341 = x_340;
}
lean_ctor_set(x_341, 0, x_338);
lean_ctor_set(x_341, 1, x_339);
return x_341;
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCancelFactor___closed__6;
x_2 = l_CancelDenoms_findCancelFactor___closed__13;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHDiv", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__4___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("DivInvMonoid", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDiv", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__4___closed__4;
x_2 = l_CancelDenoms_mkProdPrf___lambda__4___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("DivisionRing", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivInvMonoid", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__4___closed__7;
x_2 = l_CancelDenoms_mkProdPrf___lambda__4___closed__8;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = 0;
x_13 = lean_box(0);
lean_inc(x_7);
lean_inc(x_1);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_7);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint64_t x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
x_23 = l_Lean_Expr_const___override(x_22, x_2);
lean_inc(x_3);
x_24 = l_Lean_Expr_app___override(x_23, x_3);
lean_inc(x_3);
x_25 = l_Lean_Expr_app___override(x_24, x_3);
lean_inc(x_3);
x_26 = l_Lean_Expr_app___override(x_25, x_3);
x_27 = l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
lean_inc(x_4);
x_28 = l_Lean_Expr_const___override(x_27, x_4);
lean_inc(x_3);
x_29 = l_Lean_Expr_app___override(x_28, x_3);
x_30 = l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
lean_inc(x_4);
x_31 = l_Lean_Expr_const___override(x_30, x_4);
lean_inc(x_3);
x_32 = l_Lean_Expr_app___override(x_31, x_3);
x_33 = l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
x_34 = l_Lean_Expr_const___override(x_33, x_4);
x_35 = l_Lean_Expr_app___override(x_34, x_3);
x_36 = l_Lean_Expr_app___override(x_35, x_5);
x_37 = l_Lean_Expr_app___override(x_32, x_36);
x_38 = l_Lean_Expr_app___override(x_29, x_37);
x_39 = l_Lean_Expr_app___override(x_26, x_38);
lean_inc(x_16);
x_40 = l_Lean_Expr_app___override(x_39, x_16);
lean_inc(x_20);
x_41 = l_Lean_Expr_app___override(x_40, x_20);
x_42 = lean_ctor_get(x_7, 0);
lean_inc(x_42);
x_43 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_44 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_45 = lean_ctor_get(x_7, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_7, 2);
lean_inc(x_46);
x_47 = lean_ctor_get(x_7, 3);
lean_inc(x_47);
x_48 = lean_ctor_get(x_7, 4);
lean_inc(x_48);
x_49 = lean_ctor_get(x_7, 5);
lean_inc(x_49);
x_50 = lean_ctor_get(x_7, 6);
lean_inc(x_50);
x_51 = !lean_is_exclusive(x_42);
if (x_51 == 0)
{
uint8_t x_52; uint8_t x_53; uint8_t x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; lean_object* x_60; lean_object* x_61; 
x_52 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_53 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_54 = 2;
lean_ctor_set_uint8(x_42, 9, x_54);
x_55 = 2;
x_56 = lean_uint64_shift_right(x_43, x_55);
x_57 = lean_uint64_shift_left(x_56, x_55);
x_58 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_59 = lean_uint64_lor(x_57, x_58);
x_60 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_60, 0, x_42);
lean_ctor_set(x_60, 1, x_45);
lean_ctor_set(x_60, 2, x_46);
lean_ctor_set(x_60, 3, x_47);
lean_ctor_set(x_60, 4, x_48);
lean_ctor_set(x_60, 5, x_49);
lean_ctor_set(x_60, 6, x_50);
lean_ctor_set_uint64(x_60, sizeof(void*)*7, x_59);
lean_ctor_set_uint8(x_60, sizeof(void*)*7 + 8, x_44);
lean_ctor_set_uint8(x_60, sizeof(void*)*7 + 9, x_52);
lean_ctor_set_uint8(x_60, sizeof(void*)*7 + 10, x_53);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_61 = l_Lean_Meta_isExprDefEq(x_41, x_6, x_60, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_unbox(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
uint8_t x_64; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_64 = !lean_is_exclusive(x_61);
if (x_64 == 0)
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_61, 0);
lean_dec(x_65);
x_66 = 0;
x_67 = lean_box(x_66);
lean_ctor_set(x_18, 1, x_67);
lean_ctor_set(x_14, 1, x_18);
lean_ctor_set(x_61, 0, x_14);
return x_61;
}
else
{
lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_61, 1);
lean_inc(x_68);
lean_dec(x_61);
x_69 = 0;
x_70 = lean_box(x_69);
lean_ctor_set(x_18, 1, x_70);
lean_ctor_set(x_14, 1, x_18);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_14);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_free_object(x_14);
x_72 = lean_ctor_get(x_61, 1);
lean_inc(x_72);
lean_dec(x_61);
x_73 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_72);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_75 = lean_ctor_get(x_73, 0);
x_76 = lean_ctor_get(x_73, 1);
x_77 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_76);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; uint8_t x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = 1;
x_81 = lean_box(x_80);
lean_ctor_set(x_73, 1, x_81);
lean_ctor_set(x_73, 0, x_79);
lean_ctor_set(x_18, 1, x_73);
lean_ctor_set(x_18, 0, x_75);
lean_ctor_set(x_77, 0, x_18);
return x_77;
}
else
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_ctor_get(x_77, 0);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_77);
x_84 = 1;
x_85 = lean_box(x_84);
lean_ctor_set(x_73, 1, x_85);
lean_ctor_set(x_73, 0, x_82);
lean_ctor_set(x_18, 1, x_73);
lean_ctor_set(x_18, 0, x_75);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_18);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_87 = lean_ctor_get(x_73, 0);
x_88 = lean_ctor_get(x_73, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_73);
x_89 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_88);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_92 = x_89;
} else {
 lean_dec_ref(x_89);
 x_92 = lean_box(0);
}
x_93 = 1;
x_94 = lean_box(x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_90);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_18, 1, x_95);
lean_ctor_set(x_18, 0, x_87);
if (lean_is_scalar(x_92)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_92;
}
lean_ctor_set(x_96, 0, x_18);
lean_ctor_set(x_96, 1, x_91);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_free_object(x_18);
lean_dec(x_20);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_97 = !lean_is_exclusive(x_61);
if (x_97 == 0)
{
return x_61;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_61, 0);
x_99 = lean_ctor_get(x_61, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_61);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; uint8_t x_117; uint8_t x_118; uint8_t x_119; uint8_t x_120; lean_object* x_121; uint64_t x_122; uint64_t x_123; uint64_t x_124; uint64_t x_125; uint64_t x_126; lean_object* x_127; lean_object* x_128; 
x_101 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_102 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_103 = lean_ctor_get_uint8(x_42, 0);
x_104 = lean_ctor_get_uint8(x_42, 1);
x_105 = lean_ctor_get_uint8(x_42, 2);
x_106 = lean_ctor_get_uint8(x_42, 3);
x_107 = lean_ctor_get_uint8(x_42, 4);
x_108 = lean_ctor_get_uint8(x_42, 5);
x_109 = lean_ctor_get_uint8(x_42, 6);
x_110 = lean_ctor_get_uint8(x_42, 7);
x_111 = lean_ctor_get_uint8(x_42, 8);
x_112 = lean_ctor_get_uint8(x_42, 10);
x_113 = lean_ctor_get_uint8(x_42, 11);
x_114 = lean_ctor_get_uint8(x_42, 12);
x_115 = lean_ctor_get_uint8(x_42, 13);
x_116 = lean_ctor_get_uint8(x_42, 14);
x_117 = lean_ctor_get_uint8(x_42, 15);
x_118 = lean_ctor_get_uint8(x_42, 16);
x_119 = lean_ctor_get_uint8(x_42, 17);
lean_dec(x_42);
x_120 = 2;
x_121 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_121, 0, x_103);
lean_ctor_set_uint8(x_121, 1, x_104);
lean_ctor_set_uint8(x_121, 2, x_105);
lean_ctor_set_uint8(x_121, 3, x_106);
lean_ctor_set_uint8(x_121, 4, x_107);
lean_ctor_set_uint8(x_121, 5, x_108);
lean_ctor_set_uint8(x_121, 6, x_109);
lean_ctor_set_uint8(x_121, 7, x_110);
lean_ctor_set_uint8(x_121, 8, x_111);
lean_ctor_set_uint8(x_121, 9, x_120);
lean_ctor_set_uint8(x_121, 10, x_112);
lean_ctor_set_uint8(x_121, 11, x_113);
lean_ctor_set_uint8(x_121, 12, x_114);
lean_ctor_set_uint8(x_121, 13, x_115);
lean_ctor_set_uint8(x_121, 14, x_116);
lean_ctor_set_uint8(x_121, 15, x_117);
lean_ctor_set_uint8(x_121, 16, x_118);
lean_ctor_set_uint8(x_121, 17, x_119);
x_122 = 2;
x_123 = lean_uint64_shift_right(x_43, x_122);
x_124 = lean_uint64_shift_left(x_123, x_122);
x_125 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_126 = lean_uint64_lor(x_124, x_125);
x_127 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_127, 0, x_121);
lean_ctor_set(x_127, 1, x_45);
lean_ctor_set(x_127, 2, x_46);
lean_ctor_set(x_127, 3, x_47);
lean_ctor_set(x_127, 4, x_48);
lean_ctor_set(x_127, 5, x_49);
lean_ctor_set(x_127, 6, x_50);
lean_ctor_set_uint64(x_127, sizeof(void*)*7, x_126);
lean_ctor_set_uint8(x_127, sizeof(void*)*7 + 8, x_44);
lean_ctor_set_uint8(x_127, sizeof(void*)*7 + 9, x_101);
lean_ctor_set_uint8(x_127, sizeof(void*)*7 + 10, x_102);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_128 = l_Lean_Meta_isExprDefEq(x_41, x_6, x_127, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; uint8_t x_130; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_unbox(x_129);
lean_dec(x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_131 = lean_ctor_get(x_128, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_132 = x_128;
} else {
 lean_dec_ref(x_128);
 x_132 = lean_box(0);
}
x_133 = 0;
x_134 = lean_box(x_133);
lean_ctor_set(x_18, 1, x_134);
lean_ctor_set(x_14, 1, x_18);
if (lean_is_scalar(x_132)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_132;
}
lean_ctor_set(x_135, 0, x_14);
lean_ctor_set(x_135, 1, x_131);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_free_object(x_14);
x_136 = lean_ctor_get(x_128, 1);
lean_inc(x_136);
lean_dec(x_128);
x_137 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_7, x_8, x_9, x_10, x_139);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_144 = x_141;
} else {
 lean_dec_ref(x_141);
 x_144 = lean_box(0);
}
x_145 = 1;
x_146 = lean_box(x_145);
if (lean_is_scalar(x_140)) {
 x_147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_147 = x_140;
}
lean_ctor_set(x_147, 0, x_142);
lean_ctor_set(x_147, 1, x_146);
lean_ctor_set(x_18, 1, x_147);
lean_ctor_set(x_18, 0, x_138);
if (lean_is_scalar(x_144)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_144;
}
lean_ctor_set(x_148, 0, x_18);
lean_ctor_set(x_148, 1, x_143);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_free_object(x_18);
lean_dec(x_20);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_149 = lean_ctor_get(x_128, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_128, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_151 = x_128;
} else {
 lean_dec_ref(x_128);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint64_t x_176; uint8_t x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; uint8_t x_185; uint8_t x_186; uint8_t x_187; uint8_t x_188; uint8_t x_189; uint8_t x_190; uint8_t x_191; uint8_t x_192; uint8_t x_193; uint8_t x_194; uint8_t x_195; uint8_t x_196; uint8_t x_197; uint8_t x_198; uint8_t x_199; uint8_t x_200; uint8_t x_201; uint8_t x_202; lean_object* x_203; uint8_t x_204; lean_object* x_205; uint64_t x_206; uint64_t x_207; uint64_t x_208; uint64_t x_209; uint64_t x_210; lean_object* x_211; lean_object* x_212; 
x_153 = lean_ctor_get(x_18, 0);
x_154 = lean_ctor_get(x_18, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_18);
x_155 = l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
x_156 = l_Lean_Expr_const___override(x_155, x_2);
lean_inc(x_3);
x_157 = l_Lean_Expr_app___override(x_156, x_3);
lean_inc(x_3);
x_158 = l_Lean_Expr_app___override(x_157, x_3);
lean_inc(x_3);
x_159 = l_Lean_Expr_app___override(x_158, x_3);
x_160 = l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
lean_inc(x_4);
x_161 = l_Lean_Expr_const___override(x_160, x_4);
lean_inc(x_3);
x_162 = l_Lean_Expr_app___override(x_161, x_3);
x_163 = l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
lean_inc(x_4);
x_164 = l_Lean_Expr_const___override(x_163, x_4);
lean_inc(x_3);
x_165 = l_Lean_Expr_app___override(x_164, x_3);
x_166 = l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
x_167 = l_Lean_Expr_const___override(x_166, x_4);
x_168 = l_Lean_Expr_app___override(x_167, x_3);
x_169 = l_Lean_Expr_app___override(x_168, x_5);
x_170 = l_Lean_Expr_app___override(x_165, x_169);
x_171 = l_Lean_Expr_app___override(x_162, x_170);
x_172 = l_Lean_Expr_app___override(x_159, x_171);
lean_inc(x_16);
x_173 = l_Lean_Expr_app___override(x_172, x_16);
lean_inc(x_153);
x_174 = l_Lean_Expr_app___override(x_173, x_153);
x_175 = lean_ctor_get(x_7, 0);
lean_inc(x_175);
x_176 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_177 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_178 = lean_ctor_get(x_7, 1);
lean_inc(x_178);
x_179 = lean_ctor_get(x_7, 2);
lean_inc(x_179);
x_180 = lean_ctor_get(x_7, 3);
lean_inc(x_180);
x_181 = lean_ctor_get(x_7, 4);
lean_inc(x_181);
x_182 = lean_ctor_get(x_7, 5);
lean_inc(x_182);
x_183 = lean_ctor_get(x_7, 6);
lean_inc(x_183);
x_184 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_185 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_186 = lean_ctor_get_uint8(x_175, 0);
x_187 = lean_ctor_get_uint8(x_175, 1);
x_188 = lean_ctor_get_uint8(x_175, 2);
x_189 = lean_ctor_get_uint8(x_175, 3);
x_190 = lean_ctor_get_uint8(x_175, 4);
x_191 = lean_ctor_get_uint8(x_175, 5);
x_192 = lean_ctor_get_uint8(x_175, 6);
x_193 = lean_ctor_get_uint8(x_175, 7);
x_194 = lean_ctor_get_uint8(x_175, 8);
x_195 = lean_ctor_get_uint8(x_175, 10);
x_196 = lean_ctor_get_uint8(x_175, 11);
x_197 = lean_ctor_get_uint8(x_175, 12);
x_198 = lean_ctor_get_uint8(x_175, 13);
x_199 = lean_ctor_get_uint8(x_175, 14);
x_200 = lean_ctor_get_uint8(x_175, 15);
x_201 = lean_ctor_get_uint8(x_175, 16);
x_202 = lean_ctor_get_uint8(x_175, 17);
if (lean_is_exclusive(x_175)) {
 x_203 = x_175;
} else {
 lean_dec_ref(x_175);
 x_203 = lean_box(0);
}
x_204 = 2;
if (lean_is_scalar(x_203)) {
 x_205 = lean_alloc_ctor(0, 0, 18);
} else {
 x_205 = x_203;
}
lean_ctor_set_uint8(x_205, 0, x_186);
lean_ctor_set_uint8(x_205, 1, x_187);
lean_ctor_set_uint8(x_205, 2, x_188);
lean_ctor_set_uint8(x_205, 3, x_189);
lean_ctor_set_uint8(x_205, 4, x_190);
lean_ctor_set_uint8(x_205, 5, x_191);
lean_ctor_set_uint8(x_205, 6, x_192);
lean_ctor_set_uint8(x_205, 7, x_193);
lean_ctor_set_uint8(x_205, 8, x_194);
lean_ctor_set_uint8(x_205, 9, x_204);
lean_ctor_set_uint8(x_205, 10, x_195);
lean_ctor_set_uint8(x_205, 11, x_196);
lean_ctor_set_uint8(x_205, 12, x_197);
lean_ctor_set_uint8(x_205, 13, x_198);
lean_ctor_set_uint8(x_205, 14, x_199);
lean_ctor_set_uint8(x_205, 15, x_200);
lean_ctor_set_uint8(x_205, 16, x_201);
lean_ctor_set_uint8(x_205, 17, x_202);
x_206 = 2;
x_207 = lean_uint64_shift_right(x_176, x_206);
x_208 = lean_uint64_shift_left(x_207, x_206);
x_209 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_210 = lean_uint64_lor(x_208, x_209);
x_211 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_211, 0, x_205);
lean_ctor_set(x_211, 1, x_178);
lean_ctor_set(x_211, 2, x_179);
lean_ctor_set(x_211, 3, x_180);
lean_ctor_set(x_211, 4, x_181);
lean_ctor_set(x_211, 5, x_182);
lean_ctor_set(x_211, 6, x_183);
lean_ctor_set_uint64(x_211, sizeof(void*)*7, x_210);
lean_ctor_set_uint8(x_211, sizeof(void*)*7 + 8, x_177);
lean_ctor_set_uint8(x_211, sizeof(void*)*7 + 9, x_184);
lean_ctor_set_uint8(x_211, sizeof(void*)*7 + 10, x_185);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_212 = l_Lean_Meta_isExprDefEq(x_174, x_6, x_211, x_8, x_9, x_10, x_154);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; uint8_t x_214; 
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
x_214 = lean_unbox(x_213);
lean_dec(x_213);
if (x_214 == 0)
{
lean_object* x_215; lean_object* x_216; uint8_t x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_215 = lean_ctor_get(x_212, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_212)) {
 lean_ctor_release(x_212, 0);
 lean_ctor_release(x_212, 1);
 x_216 = x_212;
} else {
 lean_dec_ref(x_212);
 x_216 = lean_box(0);
}
x_217 = 0;
x_218 = lean_box(x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_153);
lean_ctor_set(x_219, 1, x_218);
lean_ctor_set(x_14, 1, x_219);
if (lean_is_scalar(x_216)) {
 x_220 = lean_alloc_ctor(0, 2, 0);
} else {
 x_220 = x_216;
}
lean_ctor_set(x_220, 0, x_14);
lean_ctor_set(x_220, 1, x_215);
return x_220;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_free_object(x_14);
x_221 = lean_ctor_get(x_212, 1);
lean_inc(x_221);
lean_dec(x_212);
x_222 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_16, x_7, x_8, x_9, x_10, x_221);
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_225 = x_222;
} else {
 lean_dec_ref(x_222);
 x_225 = lean_box(0);
}
x_226 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_153, x_7, x_8, x_9, x_10, x_224);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_229 = x_226;
} else {
 lean_dec_ref(x_226);
 x_229 = lean_box(0);
}
x_230 = 1;
x_231 = lean_box(x_230);
if (lean_is_scalar(x_225)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_225;
}
lean_ctor_set(x_232, 0, x_227);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_223);
lean_ctor_set(x_233, 1, x_232);
if (lean_is_scalar(x_229)) {
 x_234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_234 = x_229;
}
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_228);
return x_234;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_153);
lean_free_object(x_14);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_235 = lean_ctor_get(x_212, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_212, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_212)) {
 lean_ctor_release(x_212, 0);
 lean_ctor_release(x_212, 1);
 x_237 = x_212;
} else {
 lean_dec_ref(x_212);
 x_237 = lean_box(0);
}
if (lean_is_scalar(x_237)) {
 x_238 = lean_alloc_ctor(1, 2, 0);
} else {
 x_238 = x_237;
}
lean_ctor_set(x_238, 0, x_235);
lean_ctor_set(x_238, 1, x_236);
return x_238;
}
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint64_t x_266; uint8_t x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; uint8_t x_274; uint8_t x_275; uint8_t x_276; uint8_t x_277; uint8_t x_278; uint8_t x_279; uint8_t x_280; uint8_t x_281; uint8_t x_282; uint8_t x_283; uint8_t x_284; uint8_t x_285; uint8_t x_286; uint8_t x_287; uint8_t x_288; uint8_t x_289; uint8_t x_290; uint8_t x_291; uint8_t x_292; lean_object* x_293; uint8_t x_294; lean_object* x_295; uint64_t x_296; uint64_t x_297; uint64_t x_298; uint64_t x_299; uint64_t x_300; lean_object* x_301; lean_object* x_302; 
x_239 = lean_ctor_get(x_14, 0);
x_240 = lean_ctor_get(x_14, 1);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_14);
lean_inc(x_7);
x_241 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_12, x_13, x_7, x_8, x_9, x_10, x_240);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_244 = x_241;
} else {
 lean_dec_ref(x_241);
 x_244 = lean_box(0);
}
x_245 = l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
x_246 = l_Lean_Expr_const___override(x_245, x_2);
lean_inc(x_3);
x_247 = l_Lean_Expr_app___override(x_246, x_3);
lean_inc(x_3);
x_248 = l_Lean_Expr_app___override(x_247, x_3);
lean_inc(x_3);
x_249 = l_Lean_Expr_app___override(x_248, x_3);
x_250 = l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
lean_inc(x_4);
x_251 = l_Lean_Expr_const___override(x_250, x_4);
lean_inc(x_3);
x_252 = l_Lean_Expr_app___override(x_251, x_3);
x_253 = l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
lean_inc(x_4);
x_254 = l_Lean_Expr_const___override(x_253, x_4);
lean_inc(x_3);
x_255 = l_Lean_Expr_app___override(x_254, x_3);
x_256 = l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
x_257 = l_Lean_Expr_const___override(x_256, x_4);
x_258 = l_Lean_Expr_app___override(x_257, x_3);
x_259 = l_Lean_Expr_app___override(x_258, x_5);
x_260 = l_Lean_Expr_app___override(x_255, x_259);
x_261 = l_Lean_Expr_app___override(x_252, x_260);
x_262 = l_Lean_Expr_app___override(x_249, x_261);
lean_inc(x_239);
x_263 = l_Lean_Expr_app___override(x_262, x_239);
lean_inc(x_242);
x_264 = l_Lean_Expr_app___override(x_263, x_242);
x_265 = lean_ctor_get(x_7, 0);
lean_inc(x_265);
x_266 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_267 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_268 = lean_ctor_get(x_7, 1);
lean_inc(x_268);
x_269 = lean_ctor_get(x_7, 2);
lean_inc(x_269);
x_270 = lean_ctor_get(x_7, 3);
lean_inc(x_270);
x_271 = lean_ctor_get(x_7, 4);
lean_inc(x_271);
x_272 = lean_ctor_get(x_7, 5);
lean_inc(x_272);
x_273 = lean_ctor_get(x_7, 6);
lean_inc(x_273);
x_274 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_275 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
x_276 = lean_ctor_get_uint8(x_265, 0);
x_277 = lean_ctor_get_uint8(x_265, 1);
x_278 = lean_ctor_get_uint8(x_265, 2);
x_279 = lean_ctor_get_uint8(x_265, 3);
x_280 = lean_ctor_get_uint8(x_265, 4);
x_281 = lean_ctor_get_uint8(x_265, 5);
x_282 = lean_ctor_get_uint8(x_265, 6);
x_283 = lean_ctor_get_uint8(x_265, 7);
x_284 = lean_ctor_get_uint8(x_265, 8);
x_285 = lean_ctor_get_uint8(x_265, 10);
x_286 = lean_ctor_get_uint8(x_265, 11);
x_287 = lean_ctor_get_uint8(x_265, 12);
x_288 = lean_ctor_get_uint8(x_265, 13);
x_289 = lean_ctor_get_uint8(x_265, 14);
x_290 = lean_ctor_get_uint8(x_265, 15);
x_291 = lean_ctor_get_uint8(x_265, 16);
x_292 = lean_ctor_get_uint8(x_265, 17);
if (lean_is_exclusive(x_265)) {
 x_293 = x_265;
} else {
 lean_dec_ref(x_265);
 x_293 = lean_box(0);
}
x_294 = 2;
if (lean_is_scalar(x_293)) {
 x_295 = lean_alloc_ctor(0, 0, 18);
} else {
 x_295 = x_293;
}
lean_ctor_set_uint8(x_295, 0, x_276);
lean_ctor_set_uint8(x_295, 1, x_277);
lean_ctor_set_uint8(x_295, 2, x_278);
lean_ctor_set_uint8(x_295, 3, x_279);
lean_ctor_set_uint8(x_295, 4, x_280);
lean_ctor_set_uint8(x_295, 5, x_281);
lean_ctor_set_uint8(x_295, 6, x_282);
lean_ctor_set_uint8(x_295, 7, x_283);
lean_ctor_set_uint8(x_295, 8, x_284);
lean_ctor_set_uint8(x_295, 9, x_294);
lean_ctor_set_uint8(x_295, 10, x_285);
lean_ctor_set_uint8(x_295, 11, x_286);
lean_ctor_set_uint8(x_295, 12, x_287);
lean_ctor_set_uint8(x_295, 13, x_288);
lean_ctor_set_uint8(x_295, 14, x_289);
lean_ctor_set_uint8(x_295, 15, x_290);
lean_ctor_set_uint8(x_295, 16, x_291);
lean_ctor_set_uint8(x_295, 17, x_292);
x_296 = 2;
x_297 = lean_uint64_shift_right(x_266, x_296);
x_298 = lean_uint64_shift_left(x_297, x_296);
x_299 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_300 = lean_uint64_lor(x_298, x_299);
x_301 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_301, 0, x_295);
lean_ctor_set(x_301, 1, x_268);
lean_ctor_set(x_301, 2, x_269);
lean_ctor_set(x_301, 3, x_270);
lean_ctor_set(x_301, 4, x_271);
lean_ctor_set(x_301, 5, x_272);
lean_ctor_set(x_301, 6, x_273);
lean_ctor_set_uint64(x_301, sizeof(void*)*7, x_300);
lean_ctor_set_uint8(x_301, sizeof(void*)*7 + 8, x_267);
lean_ctor_set_uint8(x_301, sizeof(void*)*7 + 9, x_274);
lean_ctor_set_uint8(x_301, sizeof(void*)*7 + 10, x_275);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_302 = l_Lean_Meta_isExprDefEq(x_264, x_6, x_301, x_8, x_9, x_10, x_243);
if (lean_obj_tag(x_302) == 0)
{
lean_object* x_303; uint8_t x_304; 
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
x_304 = lean_unbox(x_303);
lean_dec(x_303);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; uint8_t x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_305 = lean_ctor_get(x_302, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_302)) {
 lean_ctor_release(x_302, 0);
 lean_ctor_release(x_302, 1);
 x_306 = x_302;
} else {
 lean_dec_ref(x_302);
 x_306 = lean_box(0);
}
x_307 = 0;
x_308 = lean_box(x_307);
if (lean_is_scalar(x_244)) {
 x_309 = lean_alloc_ctor(0, 2, 0);
} else {
 x_309 = x_244;
}
lean_ctor_set(x_309, 0, x_242);
lean_ctor_set(x_309, 1, x_308);
x_310 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_310, 0, x_239);
lean_ctor_set(x_310, 1, x_309);
if (lean_is_scalar(x_306)) {
 x_311 = lean_alloc_ctor(0, 2, 0);
} else {
 x_311 = x_306;
}
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_311, 1, x_305);
return x_311;
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; uint8_t x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_312 = lean_ctor_get(x_302, 1);
lean_inc(x_312);
lean_dec(x_302);
x_313 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_239, x_7, x_8, x_9, x_10, x_312);
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
if (lean_is_exclusive(x_313)) {
 lean_ctor_release(x_313, 0);
 lean_ctor_release(x_313, 1);
 x_316 = x_313;
} else {
 lean_dec_ref(x_313);
 x_316 = lean_box(0);
}
x_317 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_242, x_7, x_8, x_9, x_10, x_315);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_318 = lean_ctor_get(x_317, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_317, 1);
lean_inc(x_319);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_320 = x_317;
} else {
 lean_dec_ref(x_317);
 x_320 = lean_box(0);
}
x_321 = 1;
x_322 = lean_box(x_321);
if (lean_is_scalar(x_316)) {
 x_323 = lean_alloc_ctor(0, 2, 0);
} else {
 x_323 = x_316;
}
lean_ctor_set(x_323, 0, x_318);
lean_ctor_set(x_323, 1, x_322);
if (lean_is_scalar(x_244)) {
 x_324 = lean_alloc_ctor(0, 2, 0);
} else {
 x_324 = x_244;
}
lean_ctor_set(x_324, 0, x_314);
lean_ctor_set(x_324, 1, x_323);
if (lean_is_scalar(x_320)) {
 x_325 = lean_alloc_ctor(0, 2, 0);
} else {
 x_325 = x_320;
}
lean_ctor_set(x_325, 0, x_324);
lean_ctor_set(x_325, 1, x_319);
return x_325;
}
}
else
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
lean_dec(x_244);
lean_dec(x_242);
lean_dec(x_239);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_326 = lean_ctor_get(x_302, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_302, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_302)) {
 lean_ctor_release(x_302, 0);
 lean_ctor_release(x_302, 1);
 x_328 = x_302;
} else {
 lean_dec_ref(x_302);
 x_328 = lean_box(0);
}
if (lean_is_scalar(x_328)) {
 x_329 = lean_alloc_ctor(1, 2, 0);
} else {
 x_329 = x_328;
}
lean_ctor_set(x_329, 0, x_326);
lean_ctor_set(x_329, 1, x_327);
return x_329;
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCancelFactor___closed__9;
x_2 = l_CancelDenoms_findCancelFactor___closed__10;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("InvOneClass", 11, 11);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toInv", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__2;
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("DivInvOneMonoid", 15, 15);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toInvOneClass", 13, 13);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__5;
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("DivisionMonoid", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivInvOneMonoid", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__8;
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("DivisionCommMonoid", 18, 18);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivisionMonoid", 16, 16);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__11;
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__12;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CommGroupWithZero", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivisionCommMonoid", 20, 20);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__14;
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__15;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Semifield", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toCommGroupWithZero", 19, 19);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__17;
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__18;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Field", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSemifield", 11, 11);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__20;
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__21;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = 0;
x_12 = lean_box(0);
lean_inc(x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_11, x_12, x_6, x_7, x_8, x_9, x_10);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint64_t x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_CancelDenoms_mkProdPrf___lambda__5___closed__1;
lean_inc(x_2);
x_18 = l_Lean_Expr_const___override(x_17, x_2);
lean_inc(x_3);
x_19 = l_Lean_Expr_app___override(x_18, x_3);
x_20 = l_CancelDenoms_mkProdPrf___lambda__5___closed__4;
lean_inc(x_2);
x_21 = l_Lean_Expr_const___override(x_20, x_2);
lean_inc(x_3);
x_22 = l_Lean_Expr_app___override(x_21, x_3);
x_23 = l_CancelDenoms_mkProdPrf___lambda__5___closed__7;
lean_inc(x_2);
x_24 = l_Lean_Expr_const___override(x_23, x_2);
lean_inc(x_3);
x_25 = l_Lean_Expr_app___override(x_24, x_3);
x_26 = l_CancelDenoms_mkProdPrf___lambda__5___closed__10;
lean_inc(x_2);
x_27 = l_Lean_Expr_const___override(x_26, x_2);
lean_inc(x_3);
x_28 = l_Lean_Expr_app___override(x_27, x_3);
x_29 = l_CancelDenoms_mkProdPrf___lambda__5___closed__13;
lean_inc(x_2);
x_30 = l_Lean_Expr_const___override(x_29, x_2);
lean_inc(x_3);
x_31 = l_Lean_Expr_app___override(x_30, x_3);
x_32 = l_CancelDenoms_mkProdPrf___lambda__5___closed__16;
lean_inc(x_2);
x_33 = l_Lean_Expr_const___override(x_32, x_2);
lean_inc(x_3);
x_34 = l_Lean_Expr_app___override(x_33, x_3);
x_35 = l_CancelDenoms_mkProdPrf___lambda__5___closed__19;
lean_inc(x_2);
x_36 = l_Lean_Expr_const___override(x_35, x_2);
lean_inc(x_3);
x_37 = l_Lean_Expr_app___override(x_36, x_3);
x_38 = l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
x_39 = l_Lean_Expr_const___override(x_38, x_2);
x_40 = l_Lean_Expr_app___override(x_39, x_3);
x_41 = l_Lean_Expr_app___override(x_40, x_4);
x_42 = l_Lean_Expr_app___override(x_37, x_41);
x_43 = l_Lean_Expr_app___override(x_34, x_42);
x_44 = l_Lean_Expr_app___override(x_31, x_43);
x_45 = l_Lean_Expr_app___override(x_28, x_44);
x_46 = l_Lean_Expr_app___override(x_25, x_45);
x_47 = l_Lean_Expr_app___override(x_22, x_46);
x_48 = l_Lean_Expr_app___override(x_19, x_47);
lean_inc(x_15);
x_49 = l_Lean_Expr_app___override(x_48, x_15);
x_50 = lean_ctor_get(x_6, 0);
lean_inc(x_50);
x_51 = lean_ctor_get_uint64(x_6, sizeof(void*)*7);
x_52 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 8);
x_53 = lean_ctor_get(x_6, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_6, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_6, 3);
lean_inc(x_55);
x_56 = lean_ctor_get(x_6, 4);
lean_inc(x_56);
x_57 = lean_ctor_get(x_6, 5);
lean_inc(x_57);
x_58 = lean_ctor_get(x_6, 6);
lean_inc(x_58);
x_59 = !lean_is_exclusive(x_50);
if (x_59 == 0)
{
uint8_t x_60; uint8_t x_61; uint8_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; uint64_t x_67; lean_object* x_68; lean_object* x_69; 
x_60 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 9);
x_61 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 10);
x_62 = 2;
lean_ctor_set_uint8(x_50, 9, x_62);
x_63 = 2;
x_64 = lean_uint64_shift_right(x_51, x_63);
x_65 = lean_uint64_shift_left(x_64, x_63);
x_66 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_67 = lean_uint64_lor(x_65, x_66);
x_68 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_68, 0, x_50);
lean_ctor_set(x_68, 1, x_53);
lean_ctor_set(x_68, 2, x_54);
lean_ctor_set(x_68, 3, x_55);
lean_ctor_set(x_68, 4, x_56);
lean_ctor_set(x_68, 5, x_57);
lean_ctor_set(x_68, 6, x_58);
lean_ctor_set_uint64(x_68, sizeof(void*)*7, x_67);
lean_ctor_set_uint8(x_68, sizeof(void*)*7 + 8, x_52);
lean_ctor_set_uint8(x_68, sizeof(void*)*7 + 9, x_60);
lean_ctor_set_uint8(x_68, sizeof(void*)*7 + 10, x_61);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_69 = l_Lean_Meta_isExprDefEq(x_49, x_5, x_68, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_unbox(x_70);
lean_dec(x_70);
if (x_71 == 0)
{
uint8_t x_72; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_72 = !lean_is_exclusive(x_69);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_69, 0);
lean_dec(x_73);
x_74 = 0;
x_75 = lean_box(x_74);
lean_ctor_set(x_13, 1, x_75);
lean_ctor_set(x_69, 0, x_13);
return x_69;
}
else
{
lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_69, 1);
lean_inc(x_76);
lean_dec(x_69);
x_77 = 0;
x_78 = lean_box(x_77);
lean_ctor_set(x_13, 1, x_78);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_13);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_80 = lean_ctor_get(x_69, 1);
lean_inc(x_80);
lean_dec(x_69);
x_81 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_15, x_6, x_7, x_8, x_9, x_80);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = 1;
x_85 = lean_box(x_84);
lean_ctor_set(x_13, 1, x_85);
lean_ctor_set(x_13, 0, x_83);
lean_ctor_set(x_81, 0, x_13);
return x_81;
}
else
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; 
x_86 = lean_ctor_get(x_81, 0);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_81);
x_88 = 1;
x_89 = lean_box(x_88);
lean_ctor_set(x_13, 1, x_89);
lean_ctor_set(x_13, 0, x_86);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_13);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_free_object(x_13);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_91 = !lean_is_exclusive(x_69);
if (x_91 == 0)
{
return x_69;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_69, 0);
x_93 = lean_ctor_get(x_69, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_69);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; uint8_t x_114; lean_object* x_115; uint64_t x_116; uint64_t x_117; uint64_t x_118; uint64_t x_119; uint64_t x_120; lean_object* x_121; lean_object* x_122; 
x_95 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 9);
x_96 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 10);
x_97 = lean_ctor_get_uint8(x_50, 0);
x_98 = lean_ctor_get_uint8(x_50, 1);
x_99 = lean_ctor_get_uint8(x_50, 2);
x_100 = lean_ctor_get_uint8(x_50, 3);
x_101 = lean_ctor_get_uint8(x_50, 4);
x_102 = lean_ctor_get_uint8(x_50, 5);
x_103 = lean_ctor_get_uint8(x_50, 6);
x_104 = lean_ctor_get_uint8(x_50, 7);
x_105 = lean_ctor_get_uint8(x_50, 8);
x_106 = lean_ctor_get_uint8(x_50, 10);
x_107 = lean_ctor_get_uint8(x_50, 11);
x_108 = lean_ctor_get_uint8(x_50, 12);
x_109 = lean_ctor_get_uint8(x_50, 13);
x_110 = lean_ctor_get_uint8(x_50, 14);
x_111 = lean_ctor_get_uint8(x_50, 15);
x_112 = lean_ctor_get_uint8(x_50, 16);
x_113 = lean_ctor_get_uint8(x_50, 17);
lean_dec(x_50);
x_114 = 2;
x_115 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_115, 0, x_97);
lean_ctor_set_uint8(x_115, 1, x_98);
lean_ctor_set_uint8(x_115, 2, x_99);
lean_ctor_set_uint8(x_115, 3, x_100);
lean_ctor_set_uint8(x_115, 4, x_101);
lean_ctor_set_uint8(x_115, 5, x_102);
lean_ctor_set_uint8(x_115, 6, x_103);
lean_ctor_set_uint8(x_115, 7, x_104);
lean_ctor_set_uint8(x_115, 8, x_105);
lean_ctor_set_uint8(x_115, 9, x_114);
lean_ctor_set_uint8(x_115, 10, x_106);
lean_ctor_set_uint8(x_115, 11, x_107);
lean_ctor_set_uint8(x_115, 12, x_108);
lean_ctor_set_uint8(x_115, 13, x_109);
lean_ctor_set_uint8(x_115, 14, x_110);
lean_ctor_set_uint8(x_115, 15, x_111);
lean_ctor_set_uint8(x_115, 16, x_112);
lean_ctor_set_uint8(x_115, 17, x_113);
x_116 = 2;
x_117 = lean_uint64_shift_right(x_51, x_116);
x_118 = lean_uint64_shift_left(x_117, x_116);
x_119 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_120 = lean_uint64_lor(x_118, x_119);
x_121 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_121, 0, x_115);
lean_ctor_set(x_121, 1, x_53);
lean_ctor_set(x_121, 2, x_54);
lean_ctor_set(x_121, 3, x_55);
lean_ctor_set(x_121, 4, x_56);
lean_ctor_set(x_121, 5, x_57);
lean_ctor_set(x_121, 6, x_58);
lean_ctor_set_uint64(x_121, sizeof(void*)*7, x_120);
lean_ctor_set_uint8(x_121, sizeof(void*)*7 + 8, x_52);
lean_ctor_set_uint8(x_121, sizeof(void*)*7 + 9, x_95);
lean_ctor_set_uint8(x_121, sizeof(void*)*7 + 10, x_96);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_122 = l_Lean_Meta_isExprDefEq(x_49, x_5, x_121, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; uint8_t x_124; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_unbox(x_123);
lean_dec(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_125 = lean_ctor_get(x_122, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_126 = x_122;
} else {
 lean_dec_ref(x_122);
 x_126 = lean_box(0);
}
x_127 = 0;
x_128 = lean_box(x_127);
lean_ctor_set(x_13, 1, x_128);
if (lean_is_scalar(x_126)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_126;
}
lean_ctor_set(x_129, 0, x_13);
lean_ctor_set(x_129, 1, x_125);
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_137; 
x_130 = lean_ctor_get(x_122, 1);
lean_inc(x_130);
lean_dec(x_122);
x_131 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_15, x_6, x_7, x_8, x_9, x_130);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_134 = x_131;
} else {
 lean_dec_ref(x_131);
 x_134 = lean_box(0);
}
x_135 = 1;
x_136 = lean_box(x_135);
lean_ctor_set(x_13, 1, x_136);
lean_ctor_set(x_13, 0, x_132);
if (lean_is_scalar(x_134)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_134;
}
lean_ctor_set(x_137, 0, x_13);
lean_ctor_set(x_137, 1, x_133);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_free_object(x_13);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_138 = lean_ctor_get(x_122, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_122, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_140 = x_122;
} else {
 lean_dec_ref(x_122);
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
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint64_t x_178; uint8_t x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; uint8_t x_187; uint8_t x_188; uint8_t x_189; uint8_t x_190; uint8_t x_191; uint8_t x_192; uint8_t x_193; uint8_t x_194; uint8_t x_195; uint8_t x_196; uint8_t x_197; uint8_t x_198; uint8_t x_199; uint8_t x_200; uint8_t x_201; uint8_t x_202; uint8_t x_203; uint8_t x_204; lean_object* x_205; uint8_t x_206; lean_object* x_207; uint64_t x_208; uint64_t x_209; uint64_t x_210; uint64_t x_211; uint64_t x_212; lean_object* x_213; lean_object* x_214; 
x_142 = lean_ctor_get(x_13, 0);
x_143 = lean_ctor_get(x_13, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_13);
x_144 = l_CancelDenoms_mkProdPrf___lambda__5___closed__1;
lean_inc(x_2);
x_145 = l_Lean_Expr_const___override(x_144, x_2);
lean_inc(x_3);
x_146 = l_Lean_Expr_app___override(x_145, x_3);
x_147 = l_CancelDenoms_mkProdPrf___lambda__5___closed__4;
lean_inc(x_2);
x_148 = l_Lean_Expr_const___override(x_147, x_2);
lean_inc(x_3);
x_149 = l_Lean_Expr_app___override(x_148, x_3);
x_150 = l_CancelDenoms_mkProdPrf___lambda__5___closed__7;
lean_inc(x_2);
x_151 = l_Lean_Expr_const___override(x_150, x_2);
lean_inc(x_3);
x_152 = l_Lean_Expr_app___override(x_151, x_3);
x_153 = l_CancelDenoms_mkProdPrf___lambda__5___closed__10;
lean_inc(x_2);
x_154 = l_Lean_Expr_const___override(x_153, x_2);
lean_inc(x_3);
x_155 = l_Lean_Expr_app___override(x_154, x_3);
x_156 = l_CancelDenoms_mkProdPrf___lambda__5___closed__13;
lean_inc(x_2);
x_157 = l_Lean_Expr_const___override(x_156, x_2);
lean_inc(x_3);
x_158 = l_Lean_Expr_app___override(x_157, x_3);
x_159 = l_CancelDenoms_mkProdPrf___lambda__5___closed__16;
lean_inc(x_2);
x_160 = l_Lean_Expr_const___override(x_159, x_2);
lean_inc(x_3);
x_161 = l_Lean_Expr_app___override(x_160, x_3);
x_162 = l_CancelDenoms_mkProdPrf___lambda__5___closed__19;
lean_inc(x_2);
x_163 = l_Lean_Expr_const___override(x_162, x_2);
lean_inc(x_3);
x_164 = l_Lean_Expr_app___override(x_163, x_3);
x_165 = l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
x_166 = l_Lean_Expr_const___override(x_165, x_2);
x_167 = l_Lean_Expr_app___override(x_166, x_3);
x_168 = l_Lean_Expr_app___override(x_167, x_4);
x_169 = l_Lean_Expr_app___override(x_164, x_168);
x_170 = l_Lean_Expr_app___override(x_161, x_169);
x_171 = l_Lean_Expr_app___override(x_158, x_170);
x_172 = l_Lean_Expr_app___override(x_155, x_171);
x_173 = l_Lean_Expr_app___override(x_152, x_172);
x_174 = l_Lean_Expr_app___override(x_149, x_173);
x_175 = l_Lean_Expr_app___override(x_146, x_174);
lean_inc(x_142);
x_176 = l_Lean_Expr_app___override(x_175, x_142);
x_177 = lean_ctor_get(x_6, 0);
lean_inc(x_177);
x_178 = lean_ctor_get_uint64(x_6, sizeof(void*)*7);
x_179 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 8);
x_180 = lean_ctor_get(x_6, 1);
lean_inc(x_180);
x_181 = lean_ctor_get(x_6, 2);
lean_inc(x_181);
x_182 = lean_ctor_get(x_6, 3);
lean_inc(x_182);
x_183 = lean_ctor_get(x_6, 4);
lean_inc(x_183);
x_184 = lean_ctor_get(x_6, 5);
lean_inc(x_184);
x_185 = lean_ctor_get(x_6, 6);
lean_inc(x_185);
x_186 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 9);
x_187 = lean_ctor_get_uint8(x_6, sizeof(void*)*7 + 10);
x_188 = lean_ctor_get_uint8(x_177, 0);
x_189 = lean_ctor_get_uint8(x_177, 1);
x_190 = lean_ctor_get_uint8(x_177, 2);
x_191 = lean_ctor_get_uint8(x_177, 3);
x_192 = lean_ctor_get_uint8(x_177, 4);
x_193 = lean_ctor_get_uint8(x_177, 5);
x_194 = lean_ctor_get_uint8(x_177, 6);
x_195 = lean_ctor_get_uint8(x_177, 7);
x_196 = lean_ctor_get_uint8(x_177, 8);
x_197 = lean_ctor_get_uint8(x_177, 10);
x_198 = lean_ctor_get_uint8(x_177, 11);
x_199 = lean_ctor_get_uint8(x_177, 12);
x_200 = lean_ctor_get_uint8(x_177, 13);
x_201 = lean_ctor_get_uint8(x_177, 14);
x_202 = lean_ctor_get_uint8(x_177, 15);
x_203 = lean_ctor_get_uint8(x_177, 16);
x_204 = lean_ctor_get_uint8(x_177, 17);
if (lean_is_exclusive(x_177)) {
 x_205 = x_177;
} else {
 lean_dec_ref(x_177);
 x_205 = lean_box(0);
}
x_206 = 2;
if (lean_is_scalar(x_205)) {
 x_207 = lean_alloc_ctor(0, 0, 18);
} else {
 x_207 = x_205;
}
lean_ctor_set_uint8(x_207, 0, x_188);
lean_ctor_set_uint8(x_207, 1, x_189);
lean_ctor_set_uint8(x_207, 2, x_190);
lean_ctor_set_uint8(x_207, 3, x_191);
lean_ctor_set_uint8(x_207, 4, x_192);
lean_ctor_set_uint8(x_207, 5, x_193);
lean_ctor_set_uint8(x_207, 6, x_194);
lean_ctor_set_uint8(x_207, 7, x_195);
lean_ctor_set_uint8(x_207, 8, x_196);
lean_ctor_set_uint8(x_207, 9, x_206);
lean_ctor_set_uint8(x_207, 10, x_197);
lean_ctor_set_uint8(x_207, 11, x_198);
lean_ctor_set_uint8(x_207, 12, x_199);
lean_ctor_set_uint8(x_207, 13, x_200);
lean_ctor_set_uint8(x_207, 14, x_201);
lean_ctor_set_uint8(x_207, 15, x_202);
lean_ctor_set_uint8(x_207, 16, x_203);
lean_ctor_set_uint8(x_207, 17, x_204);
x_208 = 2;
x_209 = lean_uint64_shift_right(x_178, x_208);
x_210 = lean_uint64_shift_left(x_209, x_208);
x_211 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_212 = lean_uint64_lor(x_210, x_211);
x_213 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_213, 0, x_207);
lean_ctor_set(x_213, 1, x_180);
lean_ctor_set(x_213, 2, x_181);
lean_ctor_set(x_213, 3, x_182);
lean_ctor_set(x_213, 4, x_183);
lean_ctor_set(x_213, 5, x_184);
lean_ctor_set(x_213, 6, x_185);
lean_ctor_set_uint64(x_213, sizeof(void*)*7, x_212);
lean_ctor_set_uint8(x_213, sizeof(void*)*7 + 8, x_179);
lean_ctor_set_uint8(x_213, sizeof(void*)*7 + 9, x_186);
lean_ctor_set_uint8(x_213, sizeof(void*)*7 + 10, x_187);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_214 = l_Lean_Meta_isExprDefEq(x_176, x_5, x_213, x_7, x_8, x_9, x_143);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; uint8_t x_216; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_unbox(x_215);
lean_dec(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; uint8_t x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_218 = x_214;
} else {
 lean_dec_ref(x_214);
 x_218 = lean_box(0);
}
x_219 = 0;
x_220 = lean_box(x_219);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_142);
lean_ctor_set(x_221, 1, x_220);
if (lean_is_scalar(x_218)) {
 x_222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_222 = x_218;
}
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_217);
return x_222;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_223 = lean_ctor_get(x_214, 1);
lean_inc(x_223);
lean_dec(x_214);
x_224 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_142, x_6, x_7, x_8, x_9, x_223);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_227 = x_224;
} else {
 lean_dec_ref(x_224);
 x_227 = lean_box(0);
}
x_228 = 1;
x_229 = lean_box(x_228);
x_230 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_230, 0, x_225);
lean_ctor_set(x_230, 1, x_229);
if (lean_is_scalar(x_227)) {
 x_231 = lean_alloc_ctor(0, 2, 0);
} else {
 x_231 = x_227;
}
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_226);
return x_231;
}
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
lean_dec(x_142);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_232 = lean_ctor_get(x_214, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_214, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_234 = x_214;
} else {
 lean_dec_ref(x_214);
 x_234 = lean_box(0);
}
if (lean_is_scalar(x_234)) {
 x_235 = lean_alloc_ctor(1, 2, 0);
} else {
 x_235 = x_234;
}
lean_ctor_set(x_235, 0, x_232);
lean_ctor_set(x_235, 1, x_233);
return x_235;
}
}
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = 0;
x_10 = lean_box(0);
lean_inc(x_4);
lean_inc(x_1);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_9, x_10, x_4, x_5, x_6, x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_4);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_9, x_10, x_4, x_5, x_6, x_7, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint64_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_13);
x_19 = l_Lean_Expr_app___override(x_2, x_13);
lean_inc(x_17);
x_20 = l_Lean_Expr_app___override(x_19, x_17);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_4, sizeof(void*)*7);
x_23 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 8);
x_24 = lean_ctor_get(x_4, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_4, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_4, 3);
lean_inc(x_26);
x_27 = lean_ctor_get(x_4, 4);
lean_inc(x_27);
x_28 = lean_ctor_get(x_4, 5);
lean_inc(x_28);
x_29 = lean_ctor_get(x_4, 6);
lean_inc(x_29);
x_30 = !lean_is_exclusive(x_21);
if (x_30 == 0)
{
uint8_t x_31; uint8_t x_32; uint8_t x_33; uint64_t x_34; uint64_t x_35; uint64_t x_36; uint64_t x_37; uint64_t x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_32 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_33 = 2;
lean_ctor_set_uint8(x_21, 9, x_33);
x_34 = 2;
x_35 = lean_uint64_shift_right(x_22, x_34);
x_36 = lean_uint64_shift_left(x_35, x_34);
x_37 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_38 = lean_uint64_lor(x_36, x_37);
x_39 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_39, 0, x_21);
lean_ctor_set(x_39, 1, x_24);
lean_ctor_set(x_39, 2, x_25);
lean_ctor_set(x_39, 3, x_26);
lean_ctor_set(x_39, 4, x_27);
lean_ctor_set(x_39, 5, x_28);
lean_ctor_set(x_39, 6, x_29);
lean_ctor_set_uint64(x_39, sizeof(void*)*7, x_38);
lean_ctor_set_uint8(x_39, sizeof(void*)*7 + 8, x_23);
lean_ctor_set_uint8(x_39, sizeof(void*)*7 + 9, x_31);
lean_ctor_set_uint8(x_39, sizeof(void*)*7 + 10, x_32);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_40 = l_Lean_Meta_isExprDefEq(x_20, x_3, x_39, x_5, x_6, x_7, x_18);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
uint8_t x_43; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_43 = !lean_is_exclusive(x_40);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_40, 0);
lean_dec(x_44);
x_45 = 0;
x_46 = lean_box(x_45);
lean_ctor_set(x_15, 1, x_46);
lean_ctor_set(x_11, 1, x_15);
lean_ctor_set(x_40, 0, x_11);
return x_40;
}
else
{
lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_dec(x_40);
x_48 = 0;
x_49 = lean_box(x_48);
lean_ctor_set(x_15, 1, x_49);
lean_ctor_set(x_11, 1, x_15);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_11);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_free_object(x_11);
x_51 = lean_ctor_get(x_40, 1);
lean_inc(x_51);
lean_dec(x_40);
x_52 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_13, x_4, x_5, x_6, x_7, x_51);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_ctor_get(x_52, 1);
x_56 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_17, x_4, x_5, x_6, x_7, x_55);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = 1;
x_60 = lean_box(x_59);
lean_ctor_set(x_52, 1, x_60);
lean_ctor_set(x_52, 0, x_58);
lean_ctor_set(x_15, 1, x_52);
lean_ctor_set(x_15, 0, x_54);
lean_ctor_set(x_56, 0, x_15);
return x_56;
}
else
{
lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_56, 0);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_56);
x_63 = 1;
x_64 = lean_box(x_63);
lean_ctor_set(x_52, 1, x_64);
lean_ctor_set(x_52, 0, x_61);
lean_ctor_set(x_15, 1, x_52);
lean_ctor_set(x_15, 0, x_54);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_15);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_66 = lean_ctor_get(x_52, 0);
x_67 = lean_ctor_get(x_52, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_52);
x_68 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_17, x_4, x_5, x_6, x_7, x_67);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_71 = x_68;
} else {
 lean_dec_ref(x_68);
 x_71 = lean_box(0);
}
x_72 = 1;
x_73 = lean_box(x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_69);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_15, 1, x_74);
lean_ctor_set(x_15, 0, x_66);
if (lean_is_scalar(x_71)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_71;
}
lean_ctor_set(x_75, 0, x_15);
lean_ctor_set(x_75, 1, x_70);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_free_object(x_15);
lean_dec(x_17);
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_40);
if (x_76 == 0)
{
return x_40;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_40, 0);
x_78 = lean_ctor_get(x_40, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_40);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; uint8_t x_86; uint8_t x_87; uint8_t x_88; uint8_t x_89; uint8_t x_90; uint8_t x_91; uint8_t x_92; uint8_t x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; lean_object* x_100; uint64_t x_101; uint64_t x_102; uint64_t x_103; uint64_t x_104; uint64_t x_105; lean_object* x_106; lean_object* x_107; 
x_80 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_81 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_82 = lean_ctor_get_uint8(x_21, 0);
x_83 = lean_ctor_get_uint8(x_21, 1);
x_84 = lean_ctor_get_uint8(x_21, 2);
x_85 = lean_ctor_get_uint8(x_21, 3);
x_86 = lean_ctor_get_uint8(x_21, 4);
x_87 = lean_ctor_get_uint8(x_21, 5);
x_88 = lean_ctor_get_uint8(x_21, 6);
x_89 = lean_ctor_get_uint8(x_21, 7);
x_90 = lean_ctor_get_uint8(x_21, 8);
x_91 = lean_ctor_get_uint8(x_21, 10);
x_92 = lean_ctor_get_uint8(x_21, 11);
x_93 = lean_ctor_get_uint8(x_21, 12);
x_94 = lean_ctor_get_uint8(x_21, 13);
x_95 = lean_ctor_get_uint8(x_21, 14);
x_96 = lean_ctor_get_uint8(x_21, 15);
x_97 = lean_ctor_get_uint8(x_21, 16);
x_98 = lean_ctor_get_uint8(x_21, 17);
lean_dec(x_21);
x_99 = 2;
x_100 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_100, 0, x_82);
lean_ctor_set_uint8(x_100, 1, x_83);
lean_ctor_set_uint8(x_100, 2, x_84);
lean_ctor_set_uint8(x_100, 3, x_85);
lean_ctor_set_uint8(x_100, 4, x_86);
lean_ctor_set_uint8(x_100, 5, x_87);
lean_ctor_set_uint8(x_100, 6, x_88);
lean_ctor_set_uint8(x_100, 7, x_89);
lean_ctor_set_uint8(x_100, 8, x_90);
lean_ctor_set_uint8(x_100, 9, x_99);
lean_ctor_set_uint8(x_100, 10, x_91);
lean_ctor_set_uint8(x_100, 11, x_92);
lean_ctor_set_uint8(x_100, 12, x_93);
lean_ctor_set_uint8(x_100, 13, x_94);
lean_ctor_set_uint8(x_100, 14, x_95);
lean_ctor_set_uint8(x_100, 15, x_96);
lean_ctor_set_uint8(x_100, 16, x_97);
lean_ctor_set_uint8(x_100, 17, x_98);
x_101 = 2;
x_102 = lean_uint64_shift_right(x_22, x_101);
x_103 = lean_uint64_shift_left(x_102, x_101);
x_104 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_105 = lean_uint64_lor(x_103, x_104);
x_106 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_106, 0, x_100);
lean_ctor_set(x_106, 1, x_24);
lean_ctor_set(x_106, 2, x_25);
lean_ctor_set(x_106, 3, x_26);
lean_ctor_set(x_106, 4, x_27);
lean_ctor_set(x_106, 5, x_28);
lean_ctor_set(x_106, 6, x_29);
lean_ctor_set_uint64(x_106, sizeof(void*)*7, x_105);
lean_ctor_set_uint8(x_106, sizeof(void*)*7 + 8, x_23);
lean_ctor_set_uint8(x_106, sizeof(void*)*7 + 9, x_80);
lean_ctor_set_uint8(x_106, sizeof(void*)*7 + 10, x_81);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_107 = l_Lean_Meta_isExprDefEq(x_20, x_3, x_106, x_5, x_6, x_7, x_18);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; uint8_t x_109; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_unbox(x_108);
lean_dec(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_110 = lean_ctor_get(x_107, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_111 = x_107;
} else {
 lean_dec_ref(x_107);
 x_111 = lean_box(0);
}
x_112 = 0;
x_113 = lean_box(x_112);
lean_ctor_set(x_15, 1, x_113);
lean_ctor_set(x_11, 1, x_15);
if (lean_is_scalar(x_111)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_111;
}
lean_ctor_set(x_114, 0, x_11);
lean_ctor_set(x_114, 1, x_110);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_free_object(x_11);
x_115 = lean_ctor_get(x_107, 1);
lean_inc(x_115);
lean_dec(x_107);
x_116 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_13, x_4, x_5, x_6, x_7, x_115);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_119 = x_116;
} else {
 lean_dec_ref(x_116);
 x_119 = lean_box(0);
}
x_120 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_17, x_4, x_5, x_6, x_7, x_118);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_123 = x_120;
} else {
 lean_dec_ref(x_120);
 x_123 = lean_box(0);
}
x_124 = 1;
x_125 = lean_box(x_124);
if (lean_is_scalar(x_119)) {
 x_126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_126 = x_119;
}
lean_ctor_set(x_126, 0, x_121);
lean_ctor_set(x_126, 1, x_125);
lean_ctor_set(x_15, 1, x_126);
lean_ctor_set(x_15, 0, x_117);
if (lean_is_scalar(x_123)) {
 x_127 = lean_alloc_ctor(0, 2, 0);
} else {
 x_127 = x_123;
}
lean_ctor_set(x_127, 0, x_15);
lean_ctor_set(x_127, 1, x_122);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_free_object(x_15);
lean_dec(x_17);
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_128 = lean_ctor_get(x_107, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_107, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_130 = x_107;
} else {
 lean_dec_ref(x_107);
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
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint64_t x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; uint8_t x_146; uint8_t x_147; uint8_t x_148; uint8_t x_149; uint8_t x_150; uint8_t x_151; uint8_t x_152; uint8_t x_153; uint8_t x_154; uint8_t x_155; uint8_t x_156; uint8_t x_157; uint8_t x_158; uint8_t x_159; uint8_t x_160; uint8_t x_161; uint8_t x_162; uint8_t x_163; lean_object* x_164; uint8_t x_165; lean_object* x_166; uint64_t x_167; uint64_t x_168; uint64_t x_169; uint64_t x_170; uint64_t x_171; lean_object* x_172; lean_object* x_173; 
x_132 = lean_ctor_get(x_15, 0);
x_133 = lean_ctor_get(x_15, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_15);
lean_inc(x_13);
x_134 = l_Lean_Expr_app___override(x_2, x_13);
lean_inc(x_132);
x_135 = l_Lean_Expr_app___override(x_134, x_132);
x_136 = lean_ctor_get(x_4, 0);
lean_inc(x_136);
x_137 = lean_ctor_get_uint64(x_4, sizeof(void*)*7);
x_138 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 8);
x_139 = lean_ctor_get(x_4, 1);
lean_inc(x_139);
x_140 = lean_ctor_get(x_4, 2);
lean_inc(x_140);
x_141 = lean_ctor_get(x_4, 3);
lean_inc(x_141);
x_142 = lean_ctor_get(x_4, 4);
lean_inc(x_142);
x_143 = lean_ctor_get(x_4, 5);
lean_inc(x_143);
x_144 = lean_ctor_get(x_4, 6);
lean_inc(x_144);
x_145 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_146 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_147 = lean_ctor_get_uint8(x_136, 0);
x_148 = lean_ctor_get_uint8(x_136, 1);
x_149 = lean_ctor_get_uint8(x_136, 2);
x_150 = lean_ctor_get_uint8(x_136, 3);
x_151 = lean_ctor_get_uint8(x_136, 4);
x_152 = lean_ctor_get_uint8(x_136, 5);
x_153 = lean_ctor_get_uint8(x_136, 6);
x_154 = lean_ctor_get_uint8(x_136, 7);
x_155 = lean_ctor_get_uint8(x_136, 8);
x_156 = lean_ctor_get_uint8(x_136, 10);
x_157 = lean_ctor_get_uint8(x_136, 11);
x_158 = lean_ctor_get_uint8(x_136, 12);
x_159 = lean_ctor_get_uint8(x_136, 13);
x_160 = lean_ctor_get_uint8(x_136, 14);
x_161 = lean_ctor_get_uint8(x_136, 15);
x_162 = lean_ctor_get_uint8(x_136, 16);
x_163 = lean_ctor_get_uint8(x_136, 17);
if (lean_is_exclusive(x_136)) {
 x_164 = x_136;
} else {
 lean_dec_ref(x_136);
 x_164 = lean_box(0);
}
x_165 = 2;
if (lean_is_scalar(x_164)) {
 x_166 = lean_alloc_ctor(0, 0, 18);
} else {
 x_166 = x_164;
}
lean_ctor_set_uint8(x_166, 0, x_147);
lean_ctor_set_uint8(x_166, 1, x_148);
lean_ctor_set_uint8(x_166, 2, x_149);
lean_ctor_set_uint8(x_166, 3, x_150);
lean_ctor_set_uint8(x_166, 4, x_151);
lean_ctor_set_uint8(x_166, 5, x_152);
lean_ctor_set_uint8(x_166, 6, x_153);
lean_ctor_set_uint8(x_166, 7, x_154);
lean_ctor_set_uint8(x_166, 8, x_155);
lean_ctor_set_uint8(x_166, 9, x_165);
lean_ctor_set_uint8(x_166, 10, x_156);
lean_ctor_set_uint8(x_166, 11, x_157);
lean_ctor_set_uint8(x_166, 12, x_158);
lean_ctor_set_uint8(x_166, 13, x_159);
lean_ctor_set_uint8(x_166, 14, x_160);
lean_ctor_set_uint8(x_166, 15, x_161);
lean_ctor_set_uint8(x_166, 16, x_162);
lean_ctor_set_uint8(x_166, 17, x_163);
x_167 = 2;
x_168 = lean_uint64_shift_right(x_137, x_167);
x_169 = lean_uint64_shift_left(x_168, x_167);
x_170 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_171 = lean_uint64_lor(x_169, x_170);
x_172 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_172, 0, x_166);
lean_ctor_set(x_172, 1, x_139);
lean_ctor_set(x_172, 2, x_140);
lean_ctor_set(x_172, 3, x_141);
lean_ctor_set(x_172, 4, x_142);
lean_ctor_set(x_172, 5, x_143);
lean_ctor_set(x_172, 6, x_144);
lean_ctor_set_uint64(x_172, sizeof(void*)*7, x_171);
lean_ctor_set_uint8(x_172, sizeof(void*)*7 + 8, x_138);
lean_ctor_set_uint8(x_172, sizeof(void*)*7 + 9, x_145);
lean_ctor_set_uint8(x_172, sizeof(void*)*7 + 10, x_146);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_173 = l_Lean_Meta_isExprDefEq(x_135, x_3, x_172, x_5, x_6, x_7, x_133);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; uint8_t x_175; 
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_unbox(x_174);
lean_dec(x_174);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; uint8_t x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_176 = lean_ctor_get(x_173, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 x_177 = x_173;
} else {
 lean_dec_ref(x_173);
 x_177 = lean_box(0);
}
x_178 = 0;
x_179 = lean_box(x_178);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_132);
lean_ctor_set(x_180, 1, x_179);
lean_ctor_set(x_11, 1, x_180);
if (lean_is_scalar(x_177)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_177;
}
lean_ctor_set(x_181, 0, x_11);
lean_ctor_set(x_181, 1, x_176);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
lean_free_object(x_11);
x_182 = lean_ctor_get(x_173, 1);
lean_inc(x_182);
lean_dec(x_173);
x_183 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_13, x_4, x_5, x_6, x_7, x_182);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_186 = x_183;
} else {
 lean_dec_ref(x_183);
 x_186 = lean_box(0);
}
x_187 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_132, x_4, x_5, x_6, x_7, x_185);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_190 = x_187;
} else {
 lean_dec_ref(x_187);
 x_190 = lean_box(0);
}
x_191 = 1;
x_192 = lean_box(x_191);
if (lean_is_scalar(x_186)) {
 x_193 = lean_alloc_ctor(0, 2, 0);
} else {
 x_193 = x_186;
}
lean_ctor_set(x_193, 0, x_188);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_184);
lean_ctor_set(x_194, 1, x_193);
if (lean_is_scalar(x_190)) {
 x_195 = lean_alloc_ctor(0, 2, 0);
} else {
 x_195 = x_190;
}
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_189);
return x_195;
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_132);
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_196 = lean_ctor_get(x_173, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_173, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 x_198 = x_173;
} else {
 lean_dec_ref(x_173);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_197);
return x_199;
}
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; uint64_t x_209; uint8_t x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; uint8_t x_218; uint8_t x_219; uint8_t x_220; uint8_t x_221; uint8_t x_222; uint8_t x_223; uint8_t x_224; uint8_t x_225; uint8_t x_226; uint8_t x_227; uint8_t x_228; uint8_t x_229; uint8_t x_230; uint8_t x_231; uint8_t x_232; uint8_t x_233; uint8_t x_234; uint8_t x_235; lean_object* x_236; uint8_t x_237; lean_object* x_238; uint64_t x_239; uint64_t x_240; uint64_t x_241; uint64_t x_242; uint64_t x_243; lean_object* x_244; lean_object* x_245; 
x_200 = lean_ctor_get(x_11, 0);
x_201 = lean_ctor_get(x_11, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_11);
lean_inc(x_4);
x_202 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_9, x_10, x_4, x_5, x_6, x_7, x_201);
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_202, 1);
lean_inc(x_204);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_205 = x_202;
} else {
 lean_dec_ref(x_202);
 x_205 = lean_box(0);
}
lean_inc(x_200);
x_206 = l_Lean_Expr_app___override(x_2, x_200);
lean_inc(x_203);
x_207 = l_Lean_Expr_app___override(x_206, x_203);
x_208 = lean_ctor_get(x_4, 0);
lean_inc(x_208);
x_209 = lean_ctor_get_uint64(x_4, sizeof(void*)*7);
x_210 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 8);
x_211 = lean_ctor_get(x_4, 1);
lean_inc(x_211);
x_212 = lean_ctor_get(x_4, 2);
lean_inc(x_212);
x_213 = lean_ctor_get(x_4, 3);
lean_inc(x_213);
x_214 = lean_ctor_get(x_4, 4);
lean_inc(x_214);
x_215 = lean_ctor_get(x_4, 5);
lean_inc(x_215);
x_216 = lean_ctor_get(x_4, 6);
lean_inc(x_216);
x_217 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_218 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_219 = lean_ctor_get_uint8(x_208, 0);
x_220 = lean_ctor_get_uint8(x_208, 1);
x_221 = lean_ctor_get_uint8(x_208, 2);
x_222 = lean_ctor_get_uint8(x_208, 3);
x_223 = lean_ctor_get_uint8(x_208, 4);
x_224 = lean_ctor_get_uint8(x_208, 5);
x_225 = lean_ctor_get_uint8(x_208, 6);
x_226 = lean_ctor_get_uint8(x_208, 7);
x_227 = lean_ctor_get_uint8(x_208, 8);
x_228 = lean_ctor_get_uint8(x_208, 10);
x_229 = lean_ctor_get_uint8(x_208, 11);
x_230 = lean_ctor_get_uint8(x_208, 12);
x_231 = lean_ctor_get_uint8(x_208, 13);
x_232 = lean_ctor_get_uint8(x_208, 14);
x_233 = lean_ctor_get_uint8(x_208, 15);
x_234 = lean_ctor_get_uint8(x_208, 16);
x_235 = lean_ctor_get_uint8(x_208, 17);
if (lean_is_exclusive(x_208)) {
 x_236 = x_208;
} else {
 lean_dec_ref(x_208);
 x_236 = lean_box(0);
}
x_237 = 2;
if (lean_is_scalar(x_236)) {
 x_238 = lean_alloc_ctor(0, 0, 18);
} else {
 x_238 = x_236;
}
lean_ctor_set_uint8(x_238, 0, x_219);
lean_ctor_set_uint8(x_238, 1, x_220);
lean_ctor_set_uint8(x_238, 2, x_221);
lean_ctor_set_uint8(x_238, 3, x_222);
lean_ctor_set_uint8(x_238, 4, x_223);
lean_ctor_set_uint8(x_238, 5, x_224);
lean_ctor_set_uint8(x_238, 6, x_225);
lean_ctor_set_uint8(x_238, 7, x_226);
lean_ctor_set_uint8(x_238, 8, x_227);
lean_ctor_set_uint8(x_238, 9, x_237);
lean_ctor_set_uint8(x_238, 10, x_228);
lean_ctor_set_uint8(x_238, 11, x_229);
lean_ctor_set_uint8(x_238, 12, x_230);
lean_ctor_set_uint8(x_238, 13, x_231);
lean_ctor_set_uint8(x_238, 14, x_232);
lean_ctor_set_uint8(x_238, 15, x_233);
lean_ctor_set_uint8(x_238, 16, x_234);
lean_ctor_set_uint8(x_238, 17, x_235);
x_239 = 2;
x_240 = lean_uint64_shift_right(x_209, x_239);
x_241 = lean_uint64_shift_left(x_240, x_239);
x_242 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_243 = lean_uint64_lor(x_241, x_242);
x_244 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_244, 0, x_238);
lean_ctor_set(x_244, 1, x_211);
lean_ctor_set(x_244, 2, x_212);
lean_ctor_set(x_244, 3, x_213);
lean_ctor_set(x_244, 4, x_214);
lean_ctor_set(x_244, 5, x_215);
lean_ctor_set(x_244, 6, x_216);
lean_ctor_set_uint64(x_244, sizeof(void*)*7, x_243);
lean_ctor_set_uint8(x_244, sizeof(void*)*7 + 8, x_210);
lean_ctor_set_uint8(x_244, sizeof(void*)*7 + 9, x_217);
lean_ctor_set_uint8(x_244, sizeof(void*)*7 + 10, x_218);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_245 = l_Lean_Meta_isExprDefEq(x_207, x_3, x_244, x_5, x_6, x_7, x_204);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; uint8_t x_247; 
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_unbox(x_246);
lean_dec(x_246);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; uint8_t x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_248 = lean_ctor_get(x_245, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_249 = x_245;
} else {
 lean_dec_ref(x_245);
 x_249 = lean_box(0);
}
x_250 = 0;
x_251 = lean_box(x_250);
if (lean_is_scalar(x_205)) {
 x_252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_252 = x_205;
}
lean_ctor_set(x_252, 0, x_203);
lean_ctor_set(x_252, 1, x_251);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_200);
lean_ctor_set(x_253, 1, x_252);
if (lean_is_scalar(x_249)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_249;
}
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_248);
return x_254;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_255 = lean_ctor_get(x_245, 1);
lean_inc(x_255);
lean_dec(x_245);
x_256 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_200, x_4, x_5, x_6, x_7, x_255);
x_257 = lean_ctor_get(x_256, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_256, 1);
lean_inc(x_258);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 x_259 = x_256;
} else {
 lean_dec_ref(x_256);
 x_259 = lean_box(0);
}
x_260 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_203, x_4, x_5, x_6, x_7, x_258);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_261 = lean_ctor_get(x_260, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_260, 1);
lean_inc(x_262);
if (lean_is_exclusive(x_260)) {
 lean_ctor_release(x_260, 0);
 lean_ctor_release(x_260, 1);
 x_263 = x_260;
} else {
 lean_dec_ref(x_260);
 x_263 = lean_box(0);
}
x_264 = 1;
x_265 = lean_box(x_264);
if (lean_is_scalar(x_259)) {
 x_266 = lean_alloc_ctor(0, 2, 0);
} else {
 x_266 = x_259;
}
lean_ctor_set(x_266, 0, x_261);
lean_ctor_set(x_266, 1, x_265);
if (lean_is_scalar(x_205)) {
 x_267 = lean_alloc_ctor(0, 2, 0);
} else {
 x_267 = x_205;
}
lean_ctor_set(x_267, 0, x_257);
lean_ctor_set(x_267, 1, x_266);
if (lean_is_scalar(x_263)) {
 x_268 = lean_alloc_ctor(0, 2, 0);
} else {
 x_268 = x_263;
}
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_262);
return x_268;
}
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
lean_dec(x_205);
lean_dec(x_203);
lean_dec(x_200);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_269 = lean_ctor_get(x_245, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_245, 1);
lean_inc(x_270);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_271 = x_245;
} else {
 lean_dec_ref(x_245);
 x_271 = lean_box(0);
}
if (lean_is_scalar(x_271)) {
 x_272 = lean_alloc_ctor(1, 2, 0);
} else {
 x_272 = x_271;
}
lean_ctor_set(x_272, 0, x_269);
lean_ctor_set(x_272, 1, x_270);
return x_272;
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Nat", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__7___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCancelFactor___closed__8;
x_2 = l_CancelDenoms_findCancelFactor___closed__11;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHPow", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__7___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Monoid", 6, 6);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNatPow", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__7___closed__6;
x_2 = l_CancelDenoms_mkProdPrf___lambda__7___closed__7;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MonoidWithZero", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toMonoid", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__7___closed__9;
x_2 = l_CancelDenoms_mkProdPrf___lambda__7___closed__10;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Semiring", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toMonoidWithZero", 16, 16);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__7___closed__12;
x_2 = l_CancelDenoms_mkProdPrf___lambda__7___closed__13;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("DivisionSemiring", 16, 16);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSemiring", 10, 10);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__7___closed__15;
x_2 = l_CancelDenoms_mkProdPrf___lambda__7___closed__16;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivisionSemiring", 18, 18);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__17;
x_2 = l_CancelDenoms_mkProdPrf___lambda__7___closed__18;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = 0;
x_14 = lean_box(0);
lean_inc(x_8);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_13, x_14, x_8, x_9, x_10, x_11, x_12);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_CancelDenoms_mkProdPrf___lambda__7___closed__2;
lean_inc(x_2);
x_20 = l_Lean_Expr_const___override(x_19, x_2);
lean_inc(x_20);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_inc(x_8);
x_22 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_21, x_13, x_14, x_8, x_9, x_10, x_11, x_18);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint64_t x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
x_26 = lean_box(0);
lean_inc(x_3);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 1, x_3);
lean_ctor_set(x_22, 0, x_26);
lean_inc(x_4);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_22);
lean_ctor_set(x_15, 0, x_4);
x_27 = l_CancelDenoms_mkProdPrf___lambda__7___closed__3;
x_28 = l_Lean_Expr_const___override(x_27, x_15);
lean_inc(x_5);
x_29 = l_Lean_Expr_app___override(x_28, x_5);
lean_inc(x_20);
x_30 = l_Lean_Expr_app___override(x_29, x_20);
lean_inc(x_5);
x_31 = l_Lean_Expr_app___override(x_30, x_5);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_2);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_CancelDenoms_mkProdPrf___lambda__7___closed__5;
x_35 = l_Lean_Expr_const___override(x_34, x_33);
lean_inc(x_5);
x_36 = l_Lean_Expr_app___override(x_35, x_5);
x_37 = l_Lean_Expr_app___override(x_36, x_20);
x_38 = l_CancelDenoms_mkProdPrf___lambda__7___closed__8;
lean_inc(x_3);
x_39 = l_Lean_Expr_const___override(x_38, x_3);
lean_inc(x_5);
x_40 = l_Lean_Expr_app___override(x_39, x_5);
x_41 = l_CancelDenoms_mkProdPrf___lambda__7___closed__11;
lean_inc(x_3);
x_42 = l_Lean_Expr_const___override(x_41, x_3);
lean_inc(x_5);
x_43 = l_Lean_Expr_app___override(x_42, x_5);
x_44 = l_CancelDenoms_mkProdPrf___lambda__7___closed__14;
lean_inc(x_3);
x_45 = l_Lean_Expr_const___override(x_44, x_3);
lean_inc(x_5);
x_46 = l_Lean_Expr_app___override(x_45, x_5);
x_47 = l_CancelDenoms_mkProdPrf___lambda__7___closed__17;
lean_inc(x_3);
x_48 = l_Lean_Expr_const___override(x_47, x_3);
lean_inc(x_5);
x_49 = l_Lean_Expr_app___override(x_48, x_5);
x_50 = l_CancelDenoms_mkProdPrf___lambda__7___closed__19;
lean_inc(x_3);
x_51 = l_Lean_Expr_const___override(x_50, x_3);
lean_inc(x_5);
x_52 = l_Lean_Expr_app___override(x_51, x_5);
x_53 = l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
x_54 = l_Lean_Expr_const___override(x_53, x_3);
x_55 = l_Lean_Expr_app___override(x_54, x_5);
x_56 = l_Lean_Expr_app___override(x_55, x_6);
x_57 = l_Lean_Expr_app___override(x_52, x_56);
x_58 = l_Lean_Expr_app___override(x_49, x_57);
x_59 = l_Lean_Expr_app___override(x_46, x_58);
x_60 = l_Lean_Expr_app___override(x_43, x_59);
x_61 = l_Lean_Expr_app___override(x_40, x_60);
x_62 = l_Lean_Expr_app___override(x_37, x_61);
x_63 = l_Lean_Expr_app___override(x_31, x_62);
lean_inc(x_17);
x_64 = l_Lean_Expr_app___override(x_63, x_17);
lean_inc(x_24);
x_65 = l_Lean_Expr_app___override(x_64, x_24);
x_66 = lean_ctor_get(x_8, 0);
lean_inc(x_66);
x_67 = lean_ctor_get_uint64(x_8, sizeof(void*)*7);
x_68 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 8);
x_69 = lean_ctor_get(x_8, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_8, 2);
lean_inc(x_70);
x_71 = lean_ctor_get(x_8, 3);
lean_inc(x_71);
x_72 = lean_ctor_get(x_8, 4);
lean_inc(x_72);
x_73 = lean_ctor_get(x_8, 5);
lean_inc(x_73);
x_74 = lean_ctor_get(x_8, 6);
lean_inc(x_74);
x_75 = !lean_is_exclusive(x_66);
if (x_75 == 0)
{
uint8_t x_76; uint8_t x_77; uint8_t x_78; uint64_t x_79; uint64_t x_80; uint64_t x_81; uint64_t x_82; uint64_t x_83; lean_object* x_84; lean_object* x_85; 
x_76 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_77 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
x_78 = 2;
lean_ctor_set_uint8(x_66, 9, x_78);
x_79 = 2;
x_80 = lean_uint64_shift_right(x_67, x_79);
x_81 = lean_uint64_shift_left(x_80, x_79);
x_82 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_83 = lean_uint64_lor(x_81, x_82);
x_84 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_84, 0, x_66);
lean_ctor_set(x_84, 1, x_69);
lean_ctor_set(x_84, 2, x_70);
lean_ctor_set(x_84, 3, x_71);
lean_ctor_set(x_84, 4, x_72);
lean_ctor_set(x_84, 5, x_73);
lean_ctor_set(x_84, 6, x_74);
lean_ctor_set_uint64(x_84, sizeof(void*)*7, x_83);
lean_ctor_set_uint8(x_84, sizeof(void*)*7 + 8, x_68);
lean_ctor_set_uint8(x_84, sizeof(void*)*7 + 9, x_76);
lean_ctor_set_uint8(x_84, sizeof(void*)*7 + 10, x_77);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_85 = l_Lean_Meta_isExprDefEq(x_65, x_7, x_84, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_unbox(x_86);
lean_dec(x_86);
if (x_87 == 0)
{
uint8_t x_88; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_88 = !lean_is_exclusive(x_85);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_89 = lean_ctor_get(x_85, 0);
lean_dec(x_89);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_24);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_17);
lean_ctor_set(x_93, 1, x_92);
lean_ctor_set(x_85, 0, x_93);
return x_85;
}
else
{
lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
lean_dec(x_85);
x_95 = 0;
x_96 = lean_box(x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_24);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_17);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_94);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_100 = lean_ctor_get(x_85, 1);
lean_inc(x_100);
lean_dec(x_85);
x_101 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_17, x_8, x_9, x_10, x_11, x_100);
x_102 = !lean_is_exclusive(x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_103 = lean_ctor_get(x_101, 0);
x_104 = lean_ctor_get(x_101, 1);
x_105 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_24, x_8, x_9, x_10, x_11, x_104);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_105, 0);
x_108 = 1;
x_109 = lean_box(x_108);
lean_ctor_set(x_101, 1, x_109);
lean_ctor_set(x_101, 0, x_107);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_103);
lean_ctor_set(x_110, 1, x_101);
lean_ctor_set(x_105, 0, x_110);
return x_105;
}
else
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_111 = lean_ctor_get(x_105, 0);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_105);
x_113 = 1;
x_114 = lean_box(x_113);
lean_ctor_set(x_101, 1, x_114);
lean_ctor_set(x_101, 0, x_111);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_103);
lean_ctor_set(x_115, 1, x_101);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_112);
return x_116;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_117 = lean_ctor_get(x_101, 0);
x_118 = lean_ctor_get(x_101, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_101);
x_119 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_24, x_8, x_9, x_10, x_11, x_118);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_122 = x_119;
} else {
 lean_dec_ref(x_119);
 x_122 = lean_box(0);
}
x_123 = 1;
x_124 = lean_box(x_123);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_117);
lean_ctor_set(x_126, 1, x_125);
if (lean_is_scalar(x_122)) {
 x_127 = lean_alloc_ctor(0, 2, 0);
} else {
 x_127 = x_122;
}
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_121);
return x_127;
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_24);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_128 = !lean_is_exclusive(x_85);
if (x_128 == 0)
{
return x_85;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_85, 0);
x_130 = lean_ctor_get(x_85, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_85);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
uint8_t x_132; uint8_t x_133; uint8_t x_134; uint8_t x_135; uint8_t x_136; uint8_t x_137; uint8_t x_138; uint8_t x_139; uint8_t x_140; uint8_t x_141; uint8_t x_142; uint8_t x_143; uint8_t x_144; uint8_t x_145; uint8_t x_146; uint8_t x_147; uint8_t x_148; uint8_t x_149; uint8_t x_150; uint8_t x_151; lean_object* x_152; uint64_t x_153; uint64_t x_154; uint64_t x_155; uint64_t x_156; uint64_t x_157; lean_object* x_158; lean_object* x_159; 
x_132 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_133 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
x_134 = lean_ctor_get_uint8(x_66, 0);
x_135 = lean_ctor_get_uint8(x_66, 1);
x_136 = lean_ctor_get_uint8(x_66, 2);
x_137 = lean_ctor_get_uint8(x_66, 3);
x_138 = lean_ctor_get_uint8(x_66, 4);
x_139 = lean_ctor_get_uint8(x_66, 5);
x_140 = lean_ctor_get_uint8(x_66, 6);
x_141 = lean_ctor_get_uint8(x_66, 7);
x_142 = lean_ctor_get_uint8(x_66, 8);
x_143 = lean_ctor_get_uint8(x_66, 10);
x_144 = lean_ctor_get_uint8(x_66, 11);
x_145 = lean_ctor_get_uint8(x_66, 12);
x_146 = lean_ctor_get_uint8(x_66, 13);
x_147 = lean_ctor_get_uint8(x_66, 14);
x_148 = lean_ctor_get_uint8(x_66, 15);
x_149 = lean_ctor_get_uint8(x_66, 16);
x_150 = lean_ctor_get_uint8(x_66, 17);
lean_dec(x_66);
x_151 = 2;
x_152 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_152, 0, x_134);
lean_ctor_set_uint8(x_152, 1, x_135);
lean_ctor_set_uint8(x_152, 2, x_136);
lean_ctor_set_uint8(x_152, 3, x_137);
lean_ctor_set_uint8(x_152, 4, x_138);
lean_ctor_set_uint8(x_152, 5, x_139);
lean_ctor_set_uint8(x_152, 6, x_140);
lean_ctor_set_uint8(x_152, 7, x_141);
lean_ctor_set_uint8(x_152, 8, x_142);
lean_ctor_set_uint8(x_152, 9, x_151);
lean_ctor_set_uint8(x_152, 10, x_143);
lean_ctor_set_uint8(x_152, 11, x_144);
lean_ctor_set_uint8(x_152, 12, x_145);
lean_ctor_set_uint8(x_152, 13, x_146);
lean_ctor_set_uint8(x_152, 14, x_147);
lean_ctor_set_uint8(x_152, 15, x_148);
lean_ctor_set_uint8(x_152, 16, x_149);
lean_ctor_set_uint8(x_152, 17, x_150);
x_153 = 2;
x_154 = lean_uint64_shift_right(x_67, x_153);
x_155 = lean_uint64_shift_left(x_154, x_153);
x_156 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_157 = lean_uint64_lor(x_155, x_156);
x_158 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_158, 0, x_152);
lean_ctor_set(x_158, 1, x_69);
lean_ctor_set(x_158, 2, x_70);
lean_ctor_set(x_158, 3, x_71);
lean_ctor_set(x_158, 4, x_72);
lean_ctor_set(x_158, 5, x_73);
lean_ctor_set(x_158, 6, x_74);
lean_ctor_set_uint64(x_158, sizeof(void*)*7, x_157);
lean_ctor_set_uint8(x_158, sizeof(void*)*7 + 8, x_68);
lean_ctor_set_uint8(x_158, sizeof(void*)*7 + 9, x_132);
lean_ctor_set_uint8(x_158, sizeof(void*)*7 + 10, x_133);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_159 = l_Lean_Meta_isExprDefEq(x_65, x_7, x_158, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; uint8_t x_161; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_unbox(x_160);
lean_dec(x_160);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_162 = lean_ctor_get(x_159, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_163 = x_159;
} else {
 lean_dec_ref(x_159);
 x_163 = lean_box(0);
}
x_164 = 0;
x_165 = lean_box(x_164);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_24);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_17);
lean_ctor_set(x_167, 1, x_166);
if (lean_is_scalar(x_163)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_163;
}
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_162);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_169 = lean_ctor_get(x_159, 1);
lean_inc(x_169);
lean_dec(x_159);
x_170 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_17, x_8, x_9, x_10, x_11, x_169);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_173 = x_170;
} else {
 lean_dec_ref(x_170);
 x_173 = lean_box(0);
}
x_174 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_24, x_8, x_9, x_10, x_11, x_172);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_177 = x_174;
} else {
 lean_dec_ref(x_174);
 x_177 = lean_box(0);
}
x_178 = 1;
x_179 = lean_box(x_178);
if (lean_is_scalar(x_173)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_173;
}
lean_ctor_set(x_180, 0, x_175);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_171);
lean_ctor_set(x_181, 1, x_180);
if (lean_is_scalar(x_177)) {
 x_182 = lean_alloc_ctor(0, 2, 0);
} else {
 x_182 = x_177;
}
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_176);
return x_182;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_24);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_183 = lean_ctor_get(x_159, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_159, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_185 = x_159;
} else {
 lean_dec_ref(x_159);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint64_t x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; uint8_t x_239; uint8_t x_240; uint8_t x_241; uint8_t x_242; uint8_t x_243; uint8_t x_244; uint8_t x_245; uint8_t x_246; uint8_t x_247; uint8_t x_248; uint8_t x_249; uint8_t x_250; uint8_t x_251; uint8_t x_252; uint8_t x_253; uint8_t x_254; uint8_t x_255; uint8_t x_256; uint8_t x_257; lean_object* x_258; uint8_t x_259; lean_object* x_260; uint64_t x_261; uint64_t x_262; uint64_t x_263; uint64_t x_264; uint64_t x_265; lean_object* x_266; lean_object* x_267; 
x_187 = lean_ctor_get(x_22, 0);
x_188 = lean_ctor_get(x_22, 1);
lean_inc(x_188);
lean_inc(x_187);
lean_dec(x_22);
x_189 = lean_box(0);
lean_inc(x_3);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_3);
lean_inc(x_4);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_190);
lean_ctor_set(x_15, 0, x_4);
x_191 = l_CancelDenoms_mkProdPrf___lambda__7___closed__3;
x_192 = l_Lean_Expr_const___override(x_191, x_15);
lean_inc(x_5);
x_193 = l_Lean_Expr_app___override(x_192, x_5);
lean_inc(x_20);
x_194 = l_Lean_Expr_app___override(x_193, x_20);
lean_inc(x_5);
x_195 = l_Lean_Expr_app___override(x_194, x_5);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_189);
lean_ctor_set(x_196, 1, x_2);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_4);
lean_ctor_set(x_197, 1, x_196);
x_198 = l_CancelDenoms_mkProdPrf___lambda__7___closed__5;
x_199 = l_Lean_Expr_const___override(x_198, x_197);
lean_inc(x_5);
x_200 = l_Lean_Expr_app___override(x_199, x_5);
x_201 = l_Lean_Expr_app___override(x_200, x_20);
x_202 = l_CancelDenoms_mkProdPrf___lambda__7___closed__8;
lean_inc(x_3);
x_203 = l_Lean_Expr_const___override(x_202, x_3);
lean_inc(x_5);
x_204 = l_Lean_Expr_app___override(x_203, x_5);
x_205 = l_CancelDenoms_mkProdPrf___lambda__7___closed__11;
lean_inc(x_3);
x_206 = l_Lean_Expr_const___override(x_205, x_3);
lean_inc(x_5);
x_207 = l_Lean_Expr_app___override(x_206, x_5);
x_208 = l_CancelDenoms_mkProdPrf___lambda__7___closed__14;
lean_inc(x_3);
x_209 = l_Lean_Expr_const___override(x_208, x_3);
lean_inc(x_5);
x_210 = l_Lean_Expr_app___override(x_209, x_5);
x_211 = l_CancelDenoms_mkProdPrf___lambda__7___closed__17;
lean_inc(x_3);
x_212 = l_Lean_Expr_const___override(x_211, x_3);
lean_inc(x_5);
x_213 = l_Lean_Expr_app___override(x_212, x_5);
x_214 = l_CancelDenoms_mkProdPrf___lambda__7___closed__19;
lean_inc(x_3);
x_215 = l_Lean_Expr_const___override(x_214, x_3);
lean_inc(x_5);
x_216 = l_Lean_Expr_app___override(x_215, x_5);
x_217 = l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
x_218 = l_Lean_Expr_const___override(x_217, x_3);
x_219 = l_Lean_Expr_app___override(x_218, x_5);
x_220 = l_Lean_Expr_app___override(x_219, x_6);
x_221 = l_Lean_Expr_app___override(x_216, x_220);
x_222 = l_Lean_Expr_app___override(x_213, x_221);
x_223 = l_Lean_Expr_app___override(x_210, x_222);
x_224 = l_Lean_Expr_app___override(x_207, x_223);
x_225 = l_Lean_Expr_app___override(x_204, x_224);
x_226 = l_Lean_Expr_app___override(x_201, x_225);
x_227 = l_Lean_Expr_app___override(x_195, x_226);
lean_inc(x_17);
x_228 = l_Lean_Expr_app___override(x_227, x_17);
lean_inc(x_187);
x_229 = l_Lean_Expr_app___override(x_228, x_187);
x_230 = lean_ctor_get(x_8, 0);
lean_inc(x_230);
x_231 = lean_ctor_get_uint64(x_8, sizeof(void*)*7);
x_232 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 8);
x_233 = lean_ctor_get(x_8, 1);
lean_inc(x_233);
x_234 = lean_ctor_get(x_8, 2);
lean_inc(x_234);
x_235 = lean_ctor_get(x_8, 3);
lean_inc(x_235);
x_236 = lean_ctor_get(x_8, 4);
lean_inc(x_236);
x_237 = lean_ctor_get(x_8, 5);
lean_inc(x_237);
x_238 = lean_ctor_get(x_8, 6);
lean_inc(x_238);
x_239 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_240 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
x_241 = lean_ctor_get_uint8(x_230, 0);
x_242 = lean_ctor_get_uint8(x_230, 1);
x_243 = lean_ctor_get_uint8(x_230, 2);
x_244 = lean_ctor_get_uint8(x_230, 3);
x_245 = lean_ctor_get_uint8(x_230, 4);
x_246 = lean_ctor_get_uint8(x_230, 5);
x_247 = lean_ctor_get_uint8(x_230, 6);
x_248 = lean_ctor_get_uint8(x_230, 7);
x_249 = lean_ctor_get_uint8(x_230, 8);
x_250 = lean_ctor_get_uint8(x_230, 10);
x_251 = lean_ctor_get_uint8(x_230, 11);
x_252 = lean_ctor_get_uint8(x_230, 12);
x_253 = lean_ctor_get_uint8(x_230, 13);
x_254 = lean_ctor_get_uint8(x_230, 14);
x_255 = lean_ctor_get_uint8(x_230, 15);
x_256 = lean_ctor_get_uint8(x_230, 16);
x_257 = lean_ctor_get_uint8(x_230, 17);
if (lean_is_exclusive(x_230)) {
 x_258 = x_230;
} else {
 lean_dec_ref(x_230);
 x_258 = lean_box(0);
}
x_259 = 2;
if (lean_is_scalar(x_258)) {
 x_260 = lean_alloc_ctor(0, 0, 18);
} else {
 x_260 = x_258;
}
lean_ctor_set_uint8(x_260, 0, x_241);
lean_ctor_set_uint8(x_260, 1, x_242);
lean_ctor_set_uint8(x_260, 2, x_243);
lean_ctor_set_uint8(x_260, 3, x_244);
lean_ctor_set_uint8(x_260, 4, x_245);
lean_ctor_set_uint8(x_260, 5, x_246);
lean_ctor_set_uint8(x_260, 6, x_247);
lean_ctor_set_uint8(x_260, 7, x_248);
lean_ctor_set_uint8(x_260, 8, x_249);
lean_ctor_set_uint8(x_260, 9, x_259);
lean_ctor_set_uint8(x_260, 10, x_250);
lean_ctor_set_uint8(x_260, 11, x_251);
lean_ctor_set_uint8(x_260, 12, x_252);
lean_ctor_set_uint8(x_260, 13, x_253);
lean_ctor_set_uint8(x_260, 14, x_254);
lean_ctor_set_uint8(x_260, 15, x_255);
lean_ctor_set_uint8(x_260, 16, x_256);
lean_ctor_set_uint8(x_260, 17, x_257);
x_261 = 2;
x_262 = lean_uint64_shift_right(x_231, x_261);
x_263 = lean_uint64_shift_left(x_262, x_261);
x_264 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_265 = lean_uint64_lor(x_263, x_264);
x_266 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_266, 0, x_260);
lean_ctor_set(x_266, 1, x_233);
lean_ctor_set(x_266, 2, x_234);
lean_ctor_set(x_266, 3, x_235);
lean_ctor_set(x_266, 4, x_236);
lean_ctor_set(x_266, 5, x_237);
lean_ctor_set(x_266, 6, x_238);
lean_ctor_set_uint64(x_266, sizeof(void*)*7, x_265);
lean_ctor_set_uint8(x_266, sizeof(void*)*7 + 8, x_232);
lean_ctor_set_uint8(x_266, sizeof(void*)*7 + 9, x_239);
lean_ctor_set_uint8(x_266, sizeof(void*)*7 + 10, x_240);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_267 = l_Lean_Meta_isExprDefEq(x_229, x_7, x_266, x_9, x_10, x_11, x_188);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; uint8_t x_269; 
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_unbox(x_268);
lean_dec(x_268);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; uint8_t x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_270 = lean_ctor_get(x_267, 1);
lean_inc(x_270);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_271 = x_267;
} else {
 lean_dec_ref(x_267);
 x_271 = lean_box(0);
}
x_272 = 0;
x_273 = lean_box(x_272);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_187);
lean_ctor_set(x_274, 1, x_273);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_17);
lean_ctor_set(x_275, 1, x_274);
if (lean_is_scalar(x_271)) {
 x_276 = lean_alloc_ctor(0, 2, 0);
} else {
 x_276 = x_271;
}
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_270);
return x_276;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; uint8_t x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_277 = lean_ctor_get(x_267, 1);
lean_inc(x_277);
lean_dec(x_267);
x_278 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_17, x_8, x_9, x_10, x_11, x_277);
x_279 = lean_ctor_get(x_278, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_278, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_278)) {
 lean_ctor_release(x_278, 0);
 lean_ctor_release(x_278, 1);
 x_281 = x_278;
} else {
 lean_dec_ref(x_278);
 x_281 = lean_box(0);
}
x_282 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_187, x_8, x_9, x_10, x_11, x_280);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_282, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_285 = x_282;
} else {
 lean_dec_ref(x_282);
 x_285 = lean_box(0);
}
x_286 = 1;
x_287 = lean_box(x_286);
if (lean_is_scalar(x_281)) {
 x_288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_288 = x_281;
}
lean_ctor_set(x_288, 0, x_283);
lean_ctor_set(x_288, 1, x_287);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_279);
lean_ctor_set(x_289, 1, x_288);
if (lean_is_scalar(x_285)) {
 x_290 = lean_alloc_ctor(0, 2, 0);
} else {
 x_290 = x_285;
}
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_284);
return x_290;
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_187);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_291 = lean_ctor_get(x_267, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_267, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_293 = x_267;
} else {
 lean_dec_ref(x_267);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(1, 2, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_291);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
}
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; uint64_t x_347; uint8_t x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; uint8_t x_355; uint8_t x_356; uint8_t x_357; uint8_t x_358; uint8_t x_359; uint8_t x_360; uint8_t x_361; uint8_t x_362; uint8_t x_363; uint8_t x_364; uint8_t x_365; uint8_t x_366; uint8_t x_367; uint8_t x_368; uint8_t x_369; uint8_t x_370; uint8_t x_371; uint8_t x_372; uint8_t x_373; lean_object* x_374; uint8_t x_375; lean_object* x_376; uint64_t x_377; uint64_t x_378; uint64_t x_379; uint64_t x_380; uint64_t x_381; lean_object* x_382; lean_object* x_383; 
x_295 = lean_ctor_get(x_15, 0);
x_296 = lean_ctor_get(x_15, 1);
lean_inc(x_296);
lean_inc(x_295);
lean_dec(x_15);
x_297 = l_CancelDenoms_mkProdPrf___lambda__7___closed__2;
lean_inc(x_2);
x_298 = l_Lean_Expr_const___override(x_297, x_2);
lean_inc(x_298);
x_299 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_299, 0, x_298);
lean_inc(x_8);
x_300 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_299, x_13, x_14, x_8, x_9, x_10, x_11, x_296);
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_300, 1);
lean_inc(x_302);
if (lean_is_exclusive(x_300)) {
 lean_ctor_release(x_300, 0);
 lean_ctor_release(x_300, 1);
 x_303 = x_300;
} else {
 lean_dec_ref(x_300);
 x_303 = lean_box(0);
}
x_304 = lean_box(0);
lean_inc(x_3);
if (lean_is_scalar(x_303)) {
 x_305 = lean_alloc_ctor(1, 2, 0);
} else {
 x_305 = x_303;
 lean_ctor_set_tag(x_305, 1);
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_3);
lean_inc(x_4);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_4);
lean_ctor_set(x_306, 1, x_305);
x_307 = l_CancelDenoms_mkProdPrf___lambda__7___closed__3;
x_308 = l_Lean_Expr_const___override(x_307, x_306);
lean_inc(x_5);
x_309 = l_Lean_Expr_app___override(x_308, x_5);
lean_inc(x_298);
x_310 = l_Lean_Expr_app___override(x_309, x_298);
lean_inc(x_5);
x_311 = l_Lean_Expr_app___override(x_310, x_5);
x_312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_312, 0, x_304);
lean_ctor_set(x_312, 1, x_2);
x_313 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_313, 0, x_4);
lean_ctor_set(x_313, 1, x_312);
x_314 = l_CancelDenoms_mkProdPrf___lambda__7___closed__5;
x_315 = l_Lean_Expr_const___override(x_314, x_313);
lean_inc(x_5);
x_316 = l_Lean_Expr_app___override(x_315, x_5);
x_317 = l_Lean_Expr_app___override(x_316, x_298);
x_318 = l_CancelDenoms_mkProdPrf___lambda__7___closed__8;
lean_inc(x_3);
x_319 = l_Lean_Expr_const___override(x_318, x_3);
lean_inc(x_5);
x_320 = l_Lean_Expr_app___override(x_319, x_5);
x_321 = l_CancelDenoms_mkProdPrf___lambda__7___closed__11;
lean_inc(x_3);
x_322 = l_Lean_Expr_const___override(x_321, x_3);
lean_inc(x_5);
x_323 = l_Lean_Expr_app___override(x_322, x_5);
x_324 = l_CancelDenoms_mkProdPrf___lambda__7___closed__14;
lean_inc(x_3);
x_325 = l_Lean_Expr_const___override(x_324, x_3);
lean_inc(x_5);
x_326 = l_Lean_Expr_app___override(x_325, x_5);
x_327 = l_CancelDenoms_mkProdPrf___lambda__7___closed__17;
lean_inc(x_3);
x_328 = l_Lean_Expr_const___override(x_327, x_3);
lean_inc(x_5);
x_329 = l_Lean_Expr_app___override(x_328, x_5);
x_330 = l_CancelDenoms_mkProdPrf___lambda__7___closed__19;
lean_inc(x_3);
x_331 = l_Lean_Expr_const___override(x_330, x_3);
lean_inc(x_5);
x_332 = l_Lean_Expr_app___override(x_331, x_5);
x_333 = l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
x_334 = l_Lean_Expr_const___override(x_333, x_3);
x_335 = l_Lean_Expr_app___override(x_334, x_5);
x_336 = l_Lean_Expr_app___override(x_335, x_6);
x_337 = l_Lean_Expr_app___override(x_332, x_336);
x_338 = l_Lean_Expr_app___override(x_329, x_337);
x_339 = l_Lean_Expr_app___override(x_326, x_338);
x_340 = l_Lean_Expr_app___override(x_323, x_339);
x_341 = l_Lean_Expr_app___override(x_320, x_340);
x_342 = l_Lean_Expr_app___override(x_317, x_341);
x_343 = l_Lean_Expr_app___override(x_311, x_342);
lean_inc(x_295);
x_344 = l_Lean_Expr_app___override(x_343, x_295);
lean_inc(x_301);
x_345 = l_Lean_Expr_app___override(x_344, x_301);
x_346 = lean_ctor_get(x_8, 0);
lean_inc(x_346);
x_347 = lean_ctor_get_uint64(x_8, sizeof(void*)*7);
x_348 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 8);
x_349 = lean_ctor_get(x_8, 1);
lean_inc(x_349);
x_350 = lean_ctor_get(x_8, 2);
lean_inc(x_350);
x_351 = lean_ctor_get(x_8, 3);
lean_inc(x_351);
x_352 = lean_ctor_get(x_8, 4);
lean_inc(x_352);
x_353 = lean_ctor_get(x_8, 5);
lean_inc(x_353);
x_354 = lean_ctor_get(x_8, 6);
lean_inc(x_354);
x_355 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_356 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
x_357 = lean_ctor_get_uint8(x_346, 0);
x_358 = lean_ctor_get_uint8(x_346, 1);
x_359 = lean_ctor_get_uint8(x_346, 2);
x_360 = lean_ctor_get_uint8(x_346, 3);
x_361 = lean_ctor_get_uint8(x_346, 4);
x_362 = lean_ctor_get_uint8(x_346, 5);
x_363 = lean_ctor_get_uint8(x_346, 6);
x_364 = lean_ctor_get_uint8(x_346, 7);
x_365 = lean_ctor_get_uint8(x_346, 8);
x_366 = lean_ctor_get_uint8(x_346, 10);
x_367 = lean_ctor_get_uint8(x_346, 11);
x_368 = lean_ctor_get_uint8(x_346, 12);
x_369 = lean_ctor_get_uint8(x_346, 13);
x_370 = lean_ctor_get_uint8(x_346, 14);
x_371 = lean_ctor_get_uint8(x_346, 15);
x_372 = lean_ctor_get_uint8(x_346, 16);
x_373 = lean_ctor_get_uint8(x_346, 17);
if (lean_is_exclusive(x_346)) {
 x_374 = x_346;
} else {
 lean_dec_ref(x_346);
 x_374 = lean_box(0);
}
x_375 = 2;
if (lean_is_scalar(x_374)) {
 x_376 = lean_alloc_ctor(0, 0, 18);
} else {
 x_376 = x_374;
}
lean_ctor_set_uint8(x_376, 0, x_357);
lean_ctor_set_uint8(x_376, 1, x_358);
lean_ctor_set_uint8(x_376, 2, x_359);
lean_ctor_set_uint8(x_376, 3, x_360);
lean_ctor_set_uint8(x_376, 4, x_361);
lean_ctor_set_uint8(x_376, 5, x_362);
lean_ctor_set_uint8(x_376, 6, x_363);
lean_ctor_set_uint8(x_376, 7, x_364);
lean_ctor_set_uint8(x_376, 8, x_365);
lean_ctor_set_uint8(x_376, 9, x_375);
lean_ctor_set_uint8(x_376, 10, x_366);
lean_ctor_set_uint8(x_376, 11, x_367);
lean_ctor_set_uint8(x_376, 12, x_368);
lean_ctor_set_uint8(x_376, 13, x_369);
lean_ctor_set_uint8(x_376, 14, x_370);
lean_ctor_set_uint8(x_376, 15, x_371);
lean_ctor_set_uint8(x_376, 16, x_372);
lean_ctor_set_uint8(x_376, 17, x_373);
x_377 = 2;
x_378 = lean_uint64_shift_right(x_347, x_377);
x_379 = lean_uint64_shift_left(x_378, x_377);
x_380 = l_CancelDenoms_mkProdPrf___lambda__1___closed__20;
x_381 = lean_uint64_lor(x_379, x_380);
x_382 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_382, 0, x_376);
lean_ctor_set(x_382, 1, x_349);
lean_ctor_set(x_382, 2, x_350);
lean_ctor_set(x_382, 3, x_351);
lean_ctor_set(x_382, 4, x_352);
lean_ctor_set(x_382, 5, x_353);
lean_ctor_set(x_382, 6, x_354);
lean_ctor_set_uint64(x_382, sizeof(void*)*7, x_381);
lean_ctor_set_uint8(x_382, sizeof(void*)*7 + 8, x_348);
lean_ctor_set_uint8(x_382, sizeof(void*)*7 + 9, x_355);
lean_ctor_set_uint8(x_382, sizeof(void*)*7 + 10, x_356);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_383 = l_Lean_Meta_isExprDefEq(x_345, x_7, x_382, x_9, x_10, x_11, x_302);
if (lean_obj_tag(x_383) == 0)
{
lean_object* x_384; uint8_t x_385; 
x_384 = lean_ctor_get(x_383, 0);
lean_inc(x_384);
x_385 = lean_unbox(x_384);
lean_dec(x_384);
if (x_385 == 0)
{
lean_object* x_386; lean_object* x_387; uint8_t x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_386 = lean_ctor_get(x_383, 1);
lean_inc(x_386);
if (lean_is_exclusive(x_383)) {
 lean_ctor_release(x_383, 0);
 lean_ctor_release(x_383, 1);
 x_387 = x_383;
} else {
 lean_dec_ref(x_383);
 x_387 = lean_box(0);
}
x_388 = 0;
x_389 = lean_box(x_388);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_301);
lean_ctor_set(x_390, 1, x_389);
x_391 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_391, 0, x_295);
lean_ctor_set(x_391, 1, x_390);
if (lean_is_scalar(x_387)) {
 x_392 = lean_alloc_ctor(0, 2, 0);
} else {
 x_392 = x_387;
}
lean_ctor_set(x_392, 0, x_391);
lean_ctor_set(x_392, 1, x_386);
return x_392;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; uint8_t x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; 
x_393 = lean_ctor_get(x_383, 1);
lean_inc(x_393);
lean_dec(x_383);
x_394 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_295, x_8, x_9, x_10, x_11, x_393);
x_395 = lean_ctor_get(x_394, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_394, 1);
lean_inc(x_396);
if (lean_is_exclusive(x_394)) {
 lean_ctor_release(x_394, 0);
 lean_ctor_release(x_394, 1);
 x_397 = x_394;
} else {
 lean_dec_ref(x_394);
 x_397 = lean_box(0);
}
x_398 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_301, x_8, x_9, x_10, x_11, x_396);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_399 = lean_ctor_get(x_398, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_398, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_401 = x_398;
} else {
 lean_dec_ref(x_398);
 x_401 = lean_box(0);
}
x_402 = 1;
x_403 = lean_box(x_402);
if (lean_is_scalar(x_397)) {
 x_404 = lean_alloc_ctor(0, 2, 0);
} else {
 x_404 = x_397;
}
lean_ctor_set(x_404, 0, x_399);
lean_ctor_set(x_404, 1, x_403);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_395);
lean_ctor_set(x_405, 1, x_404);
if (lean_is_scalar(x_401)) {
 x_406 = lean_alloc_ctor(0, 2, 0);
} else {
 x_406 = x_401;
}
lean_ctor_set(x_406, 0, x_405);
lean_ctor_set(x_406, 1, x_400);
return x_406;
}
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; 
lean_dec(x_301);
lean_dec(x_295);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_407 = lean_ctor_get(x_383, 0);
lean_inc(x_407);
x_408 = lean_ctor_get(x_383, 1);
lean_inc(x_408);
if (lean_is_exclusive(x_383)) {
 lean_ctor_release(x_383, 0);
 lean_ctor_release(x_383, 1);
 x_409 = x_383;
} else {
 lean_dec_ref(x_383);
 x_409 = lean_box(0);
}
if (lean_is_scalar(x_409)) {
 x_410 = lean_alloc_ctor(1, 2, 0);
} else {
 x_410 = x_409;
}
lean_ctor_set(x_410, 0, x_407);
lean_ctor_set(x_410, 1, x_408);
return x_410;
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mul_subst", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_mkProdPrf___lambda__8___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
lean_object* x_24; lean_object* x_25; 
lean_inc(x_1);
x_24 = l_Lean_mkRawNatLit(x_1);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_25 = l_Mathlib_Meta_NormNum_mkOfNat(x_2, x_3, x_4, x_24, x_19, x_20, x_21, x_22, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_nat_div(x_5, x_1);
lean_inc(x_29);
x_30 = l_Lean_mkRawNatLit(x_29);
lean_inc(x_3);
lean_inc(x_2);
x_31 = l_Mathlib_Meta_NormNum_mkOfNat(x_2, x_3, x_4, x_30, x_19, x_20, x_21, x_22, x_27);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_8);
lean_inc(x_28);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_2);
x_35 = l_CancelDenoms_mkProdPrf(x_2, x_3, x_6, x_1, x_28, x_7, x_8, x_19, x_20, x_21, x_22, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_10);
lean_inc(x_34);
lean_inc(x_3);
x_40 = l_CancelDenoms_mkProdPrf(x_2, x_3, x_6, x_29, x_34, x_9, x_10, x_19, x_20, x_21, x_22, x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = !lean_is_exclusive(x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = lean_ctor_get(x_41, 0);
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_28);
lean_inc(x_11);
x_46 = l_Lean_Expr_app___override(x_11, x_28);
lean_inc(x_34);
x_47 = l_Lean_Expr_app___override(x_46, x_34);
x_48 = l_Lean_Expr_app___override(x_12, x_47);
lean_inc(x_13);
x_49 = l_Lean_Expr_app___override(x_48, x_13);
x_50 = l_CancelDenoms_synthesizeUsingNormNum(x_49, x_19, x_20, x_21, x_22, x_42);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_38);
x_53 = l_Lean_Expr_app___override(x_11, x_38);
lean_inc(x_44);
x_54 = l_Lean_Expr_app___override(x_53, x_44);
x_55 = l_CancelDenoms_mkProdPrf___lambda__8___closed__2;
x_56 = l_Lean_Expr_const___override(x_55, x_14);
x_57 = l_Lean_Expr_app___override(x_56, x_3);
x_58 = l_Lean_Expr_app___override(x_57, x_15);
x_59 = l_Lean_Expr_app___override(x_58, x_28);
x_60 = l_Lean_Expr_app___override(x_59, x_34);
x_61 = l_Lean_Expr_app___override(x_60, x_13);
x_62 = l_Lean_Expr_app___override(x_61, x_8);
x_63 = l_Lean_Expr_app___override(x_62, x_10);
x_64 = l_Lean_Expr_app___override(x_63, x_38);
x_65 = l_Lean_Expr_app___override(x_64, x_44);
x_66 = l_Lean_Expr_app___override(x_65, x_39);
x_67 = l_Lean_Expr_app___override(x_66, x_45);
x_68 = l_Lean_Expr_app___override(x_67, x_52);
lean_ctor_set(x_41, 1, x_68);
lean_ctor_set(x_41, 0, x_54);
lean_ctor_set(x_50, 0, x_41);
return x_50;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_69 = lean_ctor_get(x_50, 0);
x_70 = lean_ctor_get(x_50, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_50);
lean_inc(x_38);
x_71 = l_Lean_Expr_app___override(x_11, x_38);
lean_inc(x_44);
x_72 = l_Lean_Expr_app___override(x_71, x_44);
x_73 = l_CancelDenoms_mkProdPrf___lambda__8___closed__2;
x_74 = l_Lean_Expr_const___override(x_73, x_14);
x_75 = l_Lean_Expr_app___override(x_74, x_3);
x_76 = l_Lean_Expr_app___override(x_75, x_15);
x_77 = l_Lean_Expr_app___override(x_76, x_28);
x_78 = l_Lean_Expr_app___override(x_77, x_34);
x_79 = l_Lean_Expr_app___override(x_78, x_13);
x_80 = l_Lean_Expr_app___override(x_79, x_8);
x_81 = l_Lean_Expr_app___override(x_80, x_10);
x_82 = l_Lean_Expr_app___override(x_81, x_38);
x_83 = l_Lean_Expr_app___override(x_82, x_44);
x_84 = l_Lean_Expr_app___override(x_83, x_39);
x_85 = l_Lean_Expr_app___override(x_84, x_45);
x_86 = l_Lean_Expr_app___override(x_85, x_69);
lean_ctor_set(x_41, 1, x_86);
lean_ctor_set(x_41, 0, x_72);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_41);
lean_ctor_set(x_87, 1, x_70);
return x_87;
}
}
else
{
uint8_t x_88; 
lean_free_object(x_41);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_34);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_3);
x_88 = !lean_is_exclusive(x_50);
if (x_88 == 0)
{
return x_50;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_50, 0);
x_90 = lean_ctor_get(x_50, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_50);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_92 = lean_ctor_get(x_41, 0);
x_93 = lean_ctor_get(x_41, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_41);
lean_inc(x_28);
lean_inc(x_11);
x_94 = l_Lean_Expr_app___override(x_11, x_28);
lean_inc(x_34);
x_95 = l_Lean_Expr_app___override(x_94, x_34);
x_96 = l_Lean_Expr_app___override(x_12, x_95);
lean_inc(x_13);
x_97 = l_Lean_Expr_app___override(x_96, x_13);
x_98 = l_CancelDenoms_synthesizeUsingNormNum(x_97, x_19, x_20, x_21, x_22, x_42);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_101 = x_98;
} else {
 lean_dec_ref(x_98);
 x_101 = lean_box(0);
}
lean_inc(x_38);
x_102 = l_Lean_Expr_app___override(x_11, x_38);
lean_inc(x_92);
x_103 = l_Lean_Expr_app___override(x_102, x_92);
x_104 = l_CancelDenoms_mkProdPrf___lambda__8___closed__2;
x_105 = l_Lean_Expr_const___override(x_104, x_14);
x_106 = l_Lean_Expr_app___override(x_105, x_3);
x_107 = l_Lean_Expr_app___override(x_106, x_15);
x_108 = l_Lean_Expr_app___override(x_107, x_28);
x_109 = l_Lean_Expr_app___override(x_108, x_34);
x_110 = l_Lean_Expr_app___override(x_109, x_13);
x_111 = l_Lean_Expr_app___override(x_110, x_8);
x_112 = l_Lean_Expr_app___override(x_111, x_10);
x_113 = l_Lean_Expr_app___override(x_112, x_38);
x_114 = l_Lean_Expr_app___override(x_113, x_92);
x_115 = l_Lean_Expr_app___override(x_114, x_39);
x_116 = l_Lean_Expr_app___override(x_115, x_93);
x_117 = l_Lean_Expr_app___override(x_116, x_99);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_103);
lean_ctor_set(x_118, 1, x_117);
if (lean_is_scalar(x_101)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_101;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_100);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_34);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_3);
x_120 = lean_ctor_get(x_98, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_98, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_122 = x_98;
} else {
 lean_dec_ref(x_98);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_123 = x_122;
}
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
}
else
{
uint8_t x_124; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_34);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_3);
x_124 = !lean_is_exclusive(x_40);
if (x_124 == 0)
{
return x_40;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_40, 0);
x_126 = lean_ctor_get(x_40, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_40);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_34);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_35);
if (x_128 == 0)
{
return x_35;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_35, 0);
x_130 = lean_ctor_get(x_35, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_35);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = !lean_is_exclusive(x_31);
if (x_132 == 0)
{
return x_31;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_31, 0);
x_134 = lean_ctor_get(x_31, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_31);
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
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_136 = !lean_is_exclusive(x_25);
if (x_136 == 0)
{
return x_25;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_25, 0);
x_138 = lean_ctor_get(x_25, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_25);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mul", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toMul", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__2___closed__4;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NonUnitalNonAssocSemiring", 25, 25);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDistrib", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__5;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NonUnitalNonAssocCommSemiring", 29, 29);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNonUnitalNonAssocSemiring", 27, 27);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__8;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NonUnitalNonAssocCommRing", 25, 25);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNonUnitalNonAssocCommSemiring", 31, 31);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__11;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__12;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NonUnitalCommRing", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNonUnitalNonAssocCommRing", 27, 27);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__14;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__15;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CommRing", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNonUnitalCommRing", 19, 19);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__17;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__18;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toCommRing", 10, 10);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__20;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__20;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCancelFactor___closed__5;
x_2 = l_CancelDenoms_findCancelFactor___closed__14;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHMul", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__23;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Eq", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__25;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rfl", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__27;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg_subst", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__29;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ne", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__31;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OfNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ofNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__33;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__34;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__36;
x_2 = l_Lean_Expr_lit___override(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Zero", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__39() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOfNat0", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__38;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__39;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__41() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MulZeroClass", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__42() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toZero", 6, 6);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__41;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__42;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toMulZeroClass", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__5;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__44;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__46() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inv_subst", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__46;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__48;
x_2 = l_Lean_Expr_lit___override(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__50() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("One", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__51() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOfNat1", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__50;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__51;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__53() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddMonoidWithOne", 16, 16);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__54() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOne", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__53;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__54;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__56() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("div_subst", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__56;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__58() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("pow_subst", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__58;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__60() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("recursing into mul", 18, 18);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__60;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__62() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sub_subst", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__62;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__64() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("add_subst", 9, 9);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__65() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__64;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__66() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toRing", 6, 6);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__67() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__9___closed__17;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__66;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22) {
_start:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_23 = l_CancelDenoms_mkProdPrf___lambda__9___closed__2;
lean_inc(x_1);
x_24 = l_Lean_Expr_const___override(x_23, x_1);
lean_inc(x_2);
x_25 = l_Lean_Expr_app___override(x_24, x_2);
x_26 = l_Lean_Expr_app___override(x_3, x_25);
x_27 = l_CancelDenoms_mkProdPrf___lambda__9___closed__4;
lean_inc(x_1);
x_28 = l_Lean_Expr_const___override(x_27, x_1);
lean_inc(x_2);
x_29 = l_Lean_Expr_app___override(x_28, x_2);
x_30 = l_CancelDenoms_mkProdPrf___lambda__9___closed__7;
lean_inc(x_1);
x_31 = l_Lean_Expr_const___override(x_30, x_1);
lean_inc(x_2);
x_32 = l_Lean_Expr_app___override(x_31, x_2);
x_33 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_1);
x_34 = l_Lean_Expr_const___override(x_33, x_1);
lean_inc(x_2);
x_35 = l_Lean_Expr_app___override(x_34, x_2);
x_36 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_1);
x_37 = l_Lean_Expr_const___override(x_36, x_1);
lean_inc(x_2);
x_38 = l_Lean_Expr_app___override(x_37, x_2);
x_39 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_1);
x_40 = l_Lean_Expr_const___override(x_39, x_1);
lean_inc(x_2);
x_41 = l_Lean_Expr_app___override(x_40, x_2);
x_42 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_1);
x_43 = l_Lean_Expr_const___override(x_42, x_1);
lean_inc(x_2);
x_44 = l_Lean_Expr_app___override(x_43, x_2);
x_45 = l_CancelDenoms_mkProdPrf___lambda__9___closed__21;
lean_inc(x_1);
x_46 = l_Lean_Expr_const___override(x_45, x_1);
lean_inc(x_2);
x_47 = l_Lean_Expr_app___override(x_46, x_2);
lean_inc(x_4);
x_48 = l_Lean_Expr_app___override(x_47, x_4);
lean_inc(x_48);
x_49 = l_Lean_Expr_app___override(x_44, x_48);
x_50 = l_Lean_Expr_app___override(x_41, x_49);
x_51 = l_Lean_Expr_app___override(x_38, x_50);
x_52 = l_Lean_Expr_app___override(x_35, x_51);
lean_inc(x_52);
x_53 = l_Lean_Expr_app___override(x_32, x_52);
lean_inc(x_53);
x_54 = l_Lean_Expr_app___override(x_29, x_53);
lean_inc(x_54);
x_55 = l_Lean_Expr_app___override(x_26, x_54);
lean_inc(x_1);
lean_inc(x_5);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_5);
lean_ctor_set(x_56, 1, x_1);
lean_inc(x_5);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_5);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_CancelDenoms_mkProdPrf___lambda__9___closed__22;
lean_inc(x_57);
x_59 = l_Lean_Expr_const___override(x_58, x_57);
lean_inc(x_2);
x_60 = l_Lean_Expr_app___override(x_59, x_2);
lean_inc(x_2);
x_61 = l_Lean_Expr_app___override(x_60, x_2);
lean_inc(x_2);
x_62 = l_Lean_Expr_app___override(x_61, x_2);
x_63 = l_CancelDenoms_mkProdPrf___lambda__9___closed__24;
lean_inc(x_1);
x_64 = l_Lean_Expr_const___override(x_63, x_1);
lean_inc(x_2);
x_65 = l_Lean_Expr_app___override(x_64, x_2);
lean_inc(x_65);
x_66 = l_Lean_Expr_app___override(x_65, x_54);
lean_inc(x_62);
x_67 = l_Lean_Expr_app___override(x_62, x_66);
lean_inc(x_6);
lean_inc(x_67);
x_68 = l_Lean_Expr_app___override(x_67, x_6);
lean_inc(x_7);
x_69 = l_Lean_Expr_app___override(x_68, x_7);
x_70 = l_CancelDenoms_mkProdPrf___lambda__9___closed__26;
lean_inc(x_8);
x_71 = l_Lean_Expr_const___override(x_70, x_8);
lean_inc(x_2);
x_72 = l_Lean_Expr_app___override(x_71, x_2);
x_73 = l_CancelDenoms_mkProdPrf___lambda__9___closed__28;
lean_inc(x_8);
x_74 = l_Lean_Expr_const___override(x_73, x_8);
lean_inc(x_2);
x_75 = l_Lean_Expr_app___override(x_74, x_2);
lean_inc(x_55);
x_76 = l_Lean_Expr_app___override(x_65, x_55);
x_77 = l_Lean_Expr_app___override(x_62, x_76);
lean_inc(x_6);
x_78 = l_Lean_Expr_app___override(x_77, x_6);
lean_inc(x_7);
x_79 = l_Lean_Expr_app___override(x_78, x_7);
x_80 = l_Lean_Expr_app___override(x_75, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_69);
lean_ctor_set(x_81, 1, x_80);
lean_inc(x_2);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_2);
lean_inc(x_7);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_82);
x_83 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__1), 10, 5);
lean_closure_set(x_83, 0, x_82);
lean_closure_set(x_83, 1, x_1);
lean_closure_set(x_83, 2, x_2);
lean_closure_set(x_83, 3, x_9);
lean_closure_set(x_83, 4, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_84; lean_object* x_85; 
lean_dec(x_82);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
x_84 = 0;
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_85 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_83, x_84, x_18, x_19, x_20, x_21, x_22);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
lean_dec(x_87);
if (x_88 == 0)
{
uint8_t x_89; 
lean_dec(x_86);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_85);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_85, 0);
lean_dec(x_90);
lean_ctor_set(x_85, 0, x_81);
return x_85;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
lean_dec(x_85);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_81);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_81);
x_93 = lean_ctor_get(x_85, 1);
lean_inc(x_93);
lean_dec(x_85);
x_94 = lean_ctor_get(x_86, 0);
lean_inc(x_94);
lean_dec(x_86);
lean_inc(x_94);
lean_inc(x_6);
lean_inc(x_2);
x_95 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_10, x_94, x_18, x_19, x_20, x_21, x_93);
if (lean_obj_tag(x_95) == 0)
{
uint8_t x_96; 
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_95, 0);
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_99 = lean_ctor_get(x_97, 0);
x_100 = lean_ctor_get(x_97, 1);
x_101 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_102 = l_Lean_Expr_const___override(x_101, x_1);
lean_inc(x_2);
x_103 = l_Lean_Expr_app___override(x_102, x_2);
x_104 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_105 = l_Lean_Expr_const___override(x_104, x_1);
lean_inc(x_2);
x_106 = l_Lean_Expr_app___override(x_105, x_2);
x_107 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_108 = l_Lean_Expr_const___override(x_107, x_1);
lean_inc(x_2);
x_109 = l_Lean_Expr_app___override(x_108, x_2);
x_110 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_111 = l_Lean_Expr_const___override(x_110, x_1);
lean_inc(x_2);
x_112 = l_Lean_Expr_app___override(x_111, x_2);
x_113 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_114 = l_Lean_Expr_const___override(x_113, x_1);
lean_inc(x_2);
x_115 = l_Lean_Expr_app___override(x_114, x_2);
x_116 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_117 = l_Lean_Expr_const___override(x_116, x_1);
lean_inc(x_2);
x_118 = l_Lean_Expr_app___override(x_117, x_2);
x_119 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_120 = l_Lean_Expr_const___override(x_119, x_1);
lean_inc(x_2);
x_121 = l_Lean_Expr_app___override(x_120, x_2);
lean_inc(x_9);
x_122 = l_Lean_Expr_app___override(x_121, x_9);
x_123 = l_Lean_Expr_app___override(x_118, x_122);
x_124 = l_Lean_Expr_app___override(x_115, x_123);
x_125 = l_Lean_Expr_app___override(x_112, x_124);
x_126 = l_Lean_Expr_app___override(x_109, x_125);
x_127 = l_Lean_Expr_app___override(x_106, x_126);
x_128 = l_Lean_Expr_app___override(x_103, x_127);
lean_inc(x_99);
x_129 = l_Lean_Expr_app___override(x_128, x_99);
x_130 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_131 = l_Lean_Expr_const___override(x_130, x_1);
x_132 = l_Lean_Expr_app___override(x_131, x_2);
x_133 = l_Lean_Expr_app___override(x_132, x_9);
x_134 = l_Lean_Expr_app___override(x_133, x_6);
x_135 = l_Lean_Expr_app___override(x_134, x_94);
x_136 = l_Lean_Expr_app___override(x_135, x_99);
x_137 = l_Lean_Expr_app___override(x_136, x_100);
lean_ctor_set(x_97, 1, x_137);
lean_ctor_set(x_97, 0, x_129);
return x_95;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_138 = lean_ctor_get(x_97, 0);
x_139 = lean_ctor_get(x_97, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_97);
x_140 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_141 = l_Lean_Expr_const___override(x_140, x_1);
lean_inc(x_2);
x_142 = l_Lean_Expr_app___override(x_141, x_2);
x_143 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_144 = l_Lean_Expr_const___override(x_143, x_1);
lean_inc(x_2);
x_145 = l_Lean_Expr_app___override(x_144, x_2);
x_146 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_147 = l_Lean_Expr_const___override(x_146, x_1);
lean_inc(x_2);
x_148 = l_Lean_Expr_app___override(x_147, x_2);
x_149 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_150 = l_Lean_Expr_const___override(x_149, x_1);
lean_inc(x_2);
x_151 = l_Lean_Expr_app___override(x_150, x_2);
x_152 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_153 = l_Lean_Expr_const___override(x_152, x_1);
lean_inc(x_2);
x_154 = l_Lean_Expr_app___override(x_153, x_2);
x_155 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_156 = l_Lean_Expr_const___override(x_155, x_1);
lean_inc(x_2);
x_157 = l_Lean_Expr_app___override(x_156, x_2);
x_158 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_159 = l_Lean_Expr_const___override(x_158, x_1);
lean_inc(x_2);
x_160 = l_Lean_Expr_app___override(x_159, x_2);
lean_inc(x_9);
x_161 = l_Lean_Expr_app___override(x_160, x_9);
x_162 = l_Lean_Expr_app___override(x_157, x_161);
x_163 = l_Lean_Expr_app___override(x_154, x_162);
x_164 = l_Lean_Expr_app___override(x_151, x_163);
x_165 = l_Lean_Expr_app___override(x_148, x_164);
x_166 = l_Lean_Expr_app___override(x_145, x_165);
x_167 = l_Lean_Expr_app___override(x_142, x_166);
lean_inc(x_138);
x_168 = l_Lean_Expr_app___override(x_167, x_138);
x_169 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_170 = l_Lean_Expr_const___override(x_169, x_1);
x_171 = l_Lean_Expr_app___override(x_170, x_2);
x_172 = l_Lean_Expr_app___override(x_171, x_9);
x_173 = l_Lean_Expr_app___override(x_172, x_6);
x_174 = l_Lean_Expr_app___override(x_173, x_94);
x_175 = l_Lean_Expr_app___override(x_174, x_138);
x_176 = l_Lean_Expr_app___override(x_175, x_139);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_168);
lean_ctor_set(x_177, 1, x_176);
lean_ctor_set(x_95, 0, x_177);
return x_95;
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_178 = lean_ctor_get(x_95, 0);
x_179 = lean_ctor_get(x_95, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_95);
x_180 = lean_ctor_get(x_178, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_178, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_182 = x_178;
} else {
 lean_dec_ref(x_178);
 x_182 = lean_box(0);
}
x_183 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_184 = l_Lean_Expr_const___override(x_183, x_1);
lean_inc(x_2);
x_185 = l_Lean_Expr_app___override(x_184, x_2);
x_186 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_187 = l_Lean_Expr_const___override(x_186, x_1);
lean_inc(x_2);
x_188 = l_Lean_Expr_app___override(x_187, x_2);
x_189 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_190 = l_Lean_Expr_const___override(x_189, x_1);
lean_inc(x_2);
x_191 = l_Lean_Expr_app___override(x_190, x_2);
x_192 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_193 = l_Lean_Expr_const___override(x_192, x_1);
lean_inc(x_2);
x_194 = l_Lean_Expr_app___override(x_193, x_2);
x_195 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_196 = l_Lean_Expr_const___override(x_195, x_1);
lean_inc(x_2);
x_197 = l_Lean_Expr_app___override(x_196, x_2);
x_198 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_199 = l_Lean_Expr_const___override(x_198, x_1);
lean_inc(x_2);
x_200 = l_Lean_Expr_app___override(x_199, x_2);
x_201 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_202 = l_Lean_Expr_const___override(x_201, x_1);
lean_inc(x_2);
x_203 = l_Lean_Expr_app___override(x_202, x_2);
lean_inc(x_9);
x_204 = l_Lean_Expr_app___override(x_203, x_9);
x_205 = l_Lean_Expr_app___override(x_200, x_204);
x_206 = l_Lean_Expr_app___override(x_197, x_205);
x_207 = l_Lean_Expr_app___override(x_194, x_206);
x_208 = l_Lean_Expr_app___override(x_191, x_207);
x_209 = l_Lean_Expr_app___override(x_188, x_208);
x_210 = l_Lean_Expr_app___override(x_185, x_209);
lean_inc(x_180);
x_211 = l_Lean_Expr_app___override(x_210, x_180);
x_212 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_213 = l_Lean_Expr_const___override(x_212, x_1);
x_214 = l_Lean_Expr_app___override(x_213, x_2);
x_215 = l_Lean_Expr_app___override(x_214, x_9);
x_216 = l_Lean_Expr_app___override(x_215, x_6);
x_217 = l_Lean_Expr_app___override(x_216, x_94);
x_218 = l_Lean_Expr_app___override(x_217, x_180);
x_219 = l_Lean_Expr_app___override(x_218, x_181);
if (lean_is_scalar(x_182)) {
 x_220 = lean_alloc_ctor(0, 2, 0);
} else {
 x_220 = x_182;
}
lean_ctor_set(x_220, 0, x_211);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_179);
return x_221;
}
}
else
{
uint8_t x_222; 
lean_dec(x_94);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_222 = !lean_is_exclusive(x_95);
if (x_222 == 0)
{
return x_95;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_95, 0);
x_224 = lean_ctor_get(x_95, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_95);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
}
}
}
else
{
uint8_t x_226; 
lean_dec(x_81);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_226 = !lean_is_exclusive(x_85);
if (x_226 == 0)
{
return x_85;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_85, 0);
x_228 = lean_ctor_get(x_85, 1);
lean_inc(x_228);
lean_inc(x_227);
lean_dec(x_85);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
return x_229;
}
}
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; uint8_t x_233; lean_object* x_234; 
x_230 = lean_ctor_get(x_10, 1);
lean_inc(x_230);
x_231 = lean_ctor_get(x_10, 2);
lean_inc(x_231);
lean_inc(x_7);
lean_inc(x_53);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_57);
lean_inc(x_82);
x_232 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__2), 11, 6);
lean_closure_set(x_232, 0, x_82);
lean_closure_set(x_232, 1, x_57);
lean_closure_set(x_232, 2, x_2);
lean_closure_set(x_232, 3, x_1);
lean_closure_set(x_232, 4, x_53);
lean_closure_set(x_232, 5, x_7);
x_233 = 0;
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_234 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_232, x_233, x_18, x_19, x_20, x_21, x_22);
if (lean_obj_tag(x_234) == 0)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_235, 1);
lean_inc(x_236);
x_237 = lean_ctor_get(x_236, 1);
lean_inc(x_237);
x_238 = lean_unbox(x_237);
lean_dec(x_237);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_53);
x_239 = lean_ctor_get(x_234, 1);
lean_inc(x_239);
lean_dec(x_234);
lean_inc(x_7);
lean_inc(x_12);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_57);
lean_inc(x_82);
x_240 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__3), 11, 6);
lean_closure_set(x_240, 0, x_82);
lean_closure_set(x_240, 1, x_57);
lean_closure_set(x_240, 2, x_2);
lean_closure_set(x_240, 3, x_1);
lean_closure_set(x_240, 4, x_12);
lean_closure_set(x_240, 5, x_7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_241 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_240, x_233, x_18, x_19, x_20, x_21, x_239);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; uint8_t x_245; 
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
x_245 = lean_unbox(x_244);
lean_dec(x_244);
if (x_245 == 0)
{
lean_dec(x_243);
lean_dec(x_242);
lean_dec(x_12);
if (lean_obj_tag(x_230) == 0)
{
lean_dec(x_55);
lean_dec(x_48);
lean_dec(x_16);
lean_dec(x_15);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_246; lean_object* x_247; 
lean_dec(x_82);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_52);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
x_246 = lean_ctor_get(x_241, 1);
lean_inc(x_246);
lean_dec(x_241);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_247 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_83, x_233, x_18, x_19, x_20, x_21, x_246);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_248, 1);
lean_inc(x_249);
x_250 = lean_unbox(x_249);
lean_dec(x_249);
if (x_250 == 0)
{
uint8_t x_251; 
lean_dec(x_248);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_251 = !lean_is_exclusive(x_247);
if (x_251 == 0)
{
lean_object* x_252; 
x_252 = lean_ctor_get(x_247, 0);
lean_dec(x_252);
lean_ctor_set(x_247, 0, x_81);
return x_247;
}
else
{
lean_object* x_253; lean_object* x_254; 
x_253 = lean_ctor_get(x_247, 1);
lean_inc(x_253);
lean_dec(x_247);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_81);
lean_ctor_set(x_254, 1, x_253);
return x_254;
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_81);
x_255 = lean_ctor_get(x_247, 1);
lean_inc(x_255);
lean_dec(x_247);
x_256 = lean_ctor_get(x_248, 0);
lean_inc(x_256);
lean_dec(x_248);
lean_inc(x_256);
lean_inc(x_6);
lean_inc(x_2);
x_257 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_10, x_256, x_18, x_19, x_20, x_21, x_255);
if (lean_obj_tag(x_257) == 0)
{
uint8_t x_258; 
x_258 = !lean_is_exclusive(x_257);
if (x_258 == 0)
{
lean_object* x_259; uint8_t x_260; 
x_259 = lean_ctor_get(x_257, 0);
x_260 = !lean_is_exclusive(x_259);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_261 = lean_ctor_get(x_259, 0);
x_262 = lean_ctor_get(x_259, 1);
x_263 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_264 = l_Lean_Expr_const___override(x_263, x_1);
lean_inc(x_2);
x_265 = l_Lean_Expr_app___override(x_264, x_2);
x_266 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_267 = l_Lean_Expr_const___override(x_266, x_1);
lean_inc(x_2);
x_268 = l_Lean_Expr_app___override(x_267, x_2);
x_269 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_270 = l_Lean_Expr_const___override(x_269, x_1);
lean_inc(x_2);
x_271 = l_Lean_Expr_app___override(x_270, x_2);
x_272 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_273 = l_Lean_Expr_const___override(x_272, x_1);
lean_inc(x_2);
x_274 = l_Lean_Expr_app___override(x_273, x_2);
x_275 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_276 = l_Lean_Expr_const___override(x_275, x_1);
lean_inc(x_2);
x_277 = l_Lean_Expr_app___override(x_276, x_2);
x_278 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_279 = l_Lean_Expr_const___override(x_278, x_1);
lean_inc(x_2);
x_280 = l_Lean_Expr_app___override(x_279, x_2);
x_281 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_282 = l_Lean_Expr_const___override(x_281, x_1);
lean_inc(x_2);
x_283 = l_Lean_Expr_app___override(x_282, x_2);
lean_inc(x_9);
x_284 = l_Lean_Expr_app___override(x_283, x_9);
x_285 = l_Lean_Expr_app___override(x_280, x_284);
x_286 = l_Lean_Expr_app___override(x_277, x_285);
x_287 = l_Lean_Expr_app___override(x_274, x_286);
x_288 = l_Lean_Expr_app___override(x_271, x_287);
x_289 = l_Lean_Expr_app___override(x_268, x_288);
x_290 = l_Lean_Expr_app___override(x_265, x_289);
lean_inc(x_261);
x_291 = l_Lean_Expr_app___override(x_290, x_261);
x_292 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_293 = l_Lean_Expr_const___override(x_292, x_1);
x_294 = l_Lean_Expr_app___override(x_293, x_2);
x_295 = l_Lean_Expr_app___override(x_294, x_9);
x_296 = l_Lean_Expr_app___override(x_295, x_6);
x_297 = l_Lean_Expr_app___override(x_296, x_256);
x_298 = l_Lean_Expr_app___override(x_297, x_261);
x_299 = l_Lean_Expr_app___override(x_298, x_262);
lean_ctor_set(x_259, 1, x_299);
lean_ctor_set(x_259, 0, x_291);
return x_257;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_300 = lean_ctor_get(x_259, 0);
x_301 = lean_ctor_get(x_259, 1);
lean_inc(x_301);
lean_inc(x_300);
lean_dec(x_259);
x_302 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_303 = l_Lean_Expr_const___override(x_302, x_1);
lean_inc(x_2);
x_304 = l_Lean_Expr_app___override(x_303, x_2);
x_305 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_306 = l_Lean_Expr_const___override(x_305, x_1);
lean_inc(x_2);
x_307 = l_Lean_Expr_app___override(x_306, x_2);
x_308 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_309 = l_Lean_Expr_const___override(x_308, x_1);
lean_inc(x_2);
x_310 = l_Lean_Expr_app___override(x_309, x_2);
x_311 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_312 = l_Lean_Expr_const___override(x_311, x_1);
lean_inc(x_2);
x_313 = l_Lean_Expr_app___override(x_312, x_2);
x_314 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_315 = l_Lean_Expr_const___override(x_314, x_1);
lean_inc(x_2);
x_316 = l_Lean_Expr_app___override(x_315, x_2);
x_317 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_318 = l_Lean_Expr_const___override(x_317, x_1);
lean_inc(x_2);
x_319 = l_Lean_Expr_app___override(x_318, x_2);
x_320 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_321 = l_Lean_Expr_const___override(x_320, x_1);
lean_inc(x_2);
x_322 = l_Lean_Expr_app___override(x_321, x_2);
lean_inc(x_9);
x_323 = l_Lean_Expr_app___override(x_322, x_9);
x_324 = l_Lean_Expr_app___override(x_319, x_323);
x_325 = l_Lean_Expr_app___override(x_316, x_324);
x_326 = l_Lean_Expr_app___override(x_313, x_325);
x_327 = l_Lean_Expr_app___override(x_310, x_326);
x_328 = l_Lean_Expr_app___override(x_307, x_327);
x_329 = l_Lean_Expr_app___override(x_304, x_328);
lean_inc(x_300);
x_330 = l_Lean_Expr_app___override(x_329, x_300);
x_331 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_332 = l_Lean_Expr_const___override(x_331, x_1);
x_333 = l_Lean_Expr_app___override(x_332, x_2);
x_334 = l_Lean_Expr_app___override(x_333, x_9);
x_335 = l_Lean_Expr_app___override(x_334, x_6);
x_336 = l_Lean_Expr_app___override(x_335, x_256);
x_337 = l_Lean_Expr_app___override(x_336, x_300);
x_338 = l_Lean_Expr_app___override(x_337, x_301);
x_339 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_339, 0, x_330);
lean_ctor_set(x_339, 1, x_338);
lean_ctor_set(x_257, 0, x_339);
return x_257;
}
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
x_340 = lean_ctor_get(x_257, 0);
x_341 = lean_ctor_get(x_257, 1);
lean_inc(x_341);
lean_inc(x_340);
lean_dec(x_257);
x_342 = lean_ctor_get(x_340, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_340, 1);
lean_inc(x_343);
if (lean_is_exclusive(x_340)) {
 lean_ctor_release(x_340, 0);
 lean_ctor_release(x_340, 1);
 x_344 = x_340;
} else {
 lean_dec_ref(x_340);
 x_344 = lean_box(0);
}
x_345 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_346 = l_Lean_Expr_const___override(x_345, x_1);
lean_inc(x_2);
x_347 = l_Lean_Expr_app___override(x_346, x_2);
x_348 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_349 = l_Lean_Expr_const___override(x_348, x_1);
lean_inc(x_2);
x_350 = l_Lean_Expr_app___override(x_349, x_2);
x_351 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_352 = l_Lean_Expr_const___override(x_351, x_1);
lean_inc(x_2);
x_353 = l_Lean_Expr_app___override(x_352, x_2);
x_354 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_355 = l_Lean_Expr_const___override(x_354, x_1);
lean_inc(x_2);
x_356 = l_Lean_Expr_app___override(x_355, x_2);
x_357 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_358 = l_Lean_Expr_const___override(x_357, x_1);
lean_inc(x_2);
x_359 = l_Lean_Expr_app___override(x_358, x_2);
x_360 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_361 = l_Lean_Expr_const___override(x_360, x_1);
lean_inc(x_2);
x_362 = l_Lean_Expr_app___override(x_361, x_2);
x_363 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_364 = l_Lean_Expr_const___override(x_363, x_1);
lean_inc(x_2);
x_365 = l_Lean_Expr_app___override(x_364, x_2);
lean_inc(x_9);
x_366 = l_Lean_Expr_app___override(x_365, x_9);
x_367 = l_Lean_Expr_app___override(x_362, x_366);
x_368 = l_Lean_Expr_app___override(x_359, x_367);
x_369 = l_Lean_Expr_app___override(x_356, x_368);
x_370 = l_Lean_Expr_app___override(x_353, x_369);
x_371 = l_Lean_Expr_app___override(x_350, x_370);
x_372 = l_Lean_Expr_app___override(x_347, x_371);
lean_inc(x_342);
x_373 = l_Lean_Expr_app___override(x_372, x_342);
x_374 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_375 = l_Lean_Expr_const___override(x_374, x_1);
x_376 = l_Lean_Expr_app___override(x_375, x_2);
x_377 = l_Lean_Expr_app___override(x_376, x_9);
x_378 = l_Lean_Expr_app___override(x_377, x_6);
x_379 = l_Lean_Expr_app___override(x_378, x_256);
x_380 = l_Lean_Expr_app___override(x_379, x_342);
x_381 = l_Lean_Expr_app___override(x_380, x_343);
if (lean_is_scalar(x_344)) {
 x_382 = lean_alloc_ctor(0, 2, 0);
} else {
 x_382 = x_344;
}
lean_ctor_set(x_382, 0, x_373);
lean_ctor_set(x_382, 1, x_381);
x_383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_341);
return x_383;
}
}
else
{
uint8_t x_384; 
lean_dec(x_256);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_384 = !lean_is_exclusive(x_257);
if (x_384 == 0)
{
return x_257;
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_385 = lean_ctor_get(x_257, 0);
x_386 = lean_ctor_get(x_257, 1);
lean_inc(x_386);
lean_inc(x_385);
lean_dec(x_257);
x_387 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_386);
return x_387;
}
}
}
}
else
{
uint8_t x_388; 
lean_dec(x_81);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_388 = !lean_is_exclusive(x_247);
if (x_388 == 0)
{
return x_247;
}
else
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; 
x_389 = lean_ctor_get(x_247, 0);
x_390 = lean_ctor_get(x_247, 1);
lean_inc(x_390);
lean_inc(x_389);
lean_dec(x_247);
x_391 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_391, 0, x_389);
lean_ctor_set(x_391, 1, x_390);
return x_391;
}
}
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_392 = lean_ctor_get(x_241, 1);
lean_inc(x_392);
lean_dec(x_241);
x_393 = lean_ctor_get(x_231, 0);
lean_inc(x_393);
lean_dec(x_231);
lean_inc(x_7);
lean_inc(x_13);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_57);
lean_inc(x_82);
x_394 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__4), 11, 6);
lean_closure_set(x_394, 0, x_82);
lean_closure_set(x_394, 1, x_57);
lean_closure_set(x_394, 2, x_2);
lean_closure_set(x_394, 3, x_1);
lean_closure_set(x_394, 4, x_13);
lean_closure_set(x_394, 5, x_7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_395 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_394, x_233, x_18, x_19, x_20, x_21, x_392);
if (lean_obj_tag(x_395) == 0)
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; 
x_396 = lean_ctor_get(x_395, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_396, 1);
lean_inc(x_397);
x_398 = lean_ctor_get(x_397, 1);
lean_inc(x_398);
x_399 = lean_unbox(x_398);
lean_dec(x_398);
if (x_399 == 0)
{
lean_object* x_400; lean_object* x_401; 
lean_dec(x_397);
lean_dec(x_396);
lean_dec(x_57);
lean_dec(x_13);
x_400 = lean_ctor_get(x_395, 1);
lean_inc(x_400);
lean_dec(x_395);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_401 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_83, x_233, x_18, x_19, x_20, x_21, x_400);
if (lean_obj_tag(x_401) == 0)
{
lean_object* x_402; lean_object* x_403; uint8_t x_404; 
x_402 = lean_ctor_get(x_401, 0);
lean_inc(x_402);
x_403 = lean_ctor_get(x_402, 1);
lean_inc(x_403);
x_404 = lean_unbox(x_403);
lean_dec(x_403);
if (x_404 == 0)
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; 
lean_dec(x_402);
lean_dec(x_10);
lean_dec(x_9);
x_405 = lean_ctor_get(x_401, 1);
lean_inc(x_405);
lean_dec(x_401);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_406 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__5), 10, 5);
lean_closure_set(x_406, 0, x_82);
lean_closure_set(x_406, 1, x_1);
lean_closure_set(x_406, 2, x_2);
lean_closure_set(x_406, 3, x_4);
lean_closure_set(x_406, 4, x_7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_407 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_406, x_233, x_18, x_19, x_20, x_21, x_405);
if (lean_obj_tag(x_407) == 0)
{
lean_object* x_408; lean_object* x_409; uint8_t x_410; 
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_408, 1);
lean_inc(x_409);
x_410 = lean_unbox(x_409);
lean_dec(x_409);
if (x_410 == 0)
{
uint8_t x_411; 
lean_dec(x_408);
lean_dec(x_393);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_52);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_411 = !lean_is_exclusive(x_407);
if (x_411 == 0)
{
lean_object* x_412; 
x_412 = lean_ctor_get(x_407, 0);
lean_dec(x_412);
lean_ctor_set(x_407, 0, x_81);
return x_407;
}
else
{
lean_object* x_413; lean_object* x_414; 
x_413 = lean_ctor_get(x_407, 1);
lean_inc(x_413);
lean_dec(x_407);
x_414 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_414, 0, x_81);
lean_ctor_set(x_414, 1, x_413);
return x_414;
}
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
lean_dec(x_81);
x_415 = lean_ctor_get(x_407, 1);
lean_inc(x_415);
lean_dec(x_407);
x_416 = lean_ctor_get(x_408, 0);
lean_inc(x_416);
lean_dec(x_408);
lean_inc(x_393);
x_417 = l_Lean_mkRawNatLit(x_393);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_5);
x_418 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_417, x_18, x_19, x_20, x_21, x_415);
if (lean_obj_tag(x_418) == 0)
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; 
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_418, 1);
lean_inc(x_420);
lean_dec(x_418);
x_421 = lean_ctor_get(x_419, 0);
lean_inc(x_421);
lean_dec(x_419);
x_422 = lean_nat_div(x_11, x_393);
lean_dec(x_393);
lean_dec(x_11);
x_423 = l_Lean_mkRawNatLit(x_422);
lean_inc(x_2);
x_424 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_423, x_18, x_19, x_20, x_21, x_420);
if (lean_obj_tag(x_424) == 0)
{
lean_object* x_425; lean_object* x_426; uint8_t x_427; 
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_424, 1);
lean_inc(x_426);
lean_dec(x_424);
x_427 = !lean_is_exclusive(x_425);
if (x_427 == 0)
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; 
x_428 = lean_ctor_get(x_425, 0);
x_429 = lean_ctor_get(x_425, 1);
lean_dec(x_429);
x_430 = l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
x_431 = l_Lean_Expr_const___override(x_430, x_8);
lean_inc(x_2);
x_432 = l_Lean_Expr_app___override(x_431, x_2);
lean_inc(x_421);
x_433 = l_Lean_Expr_app___override(x_432, x_421);
x_434 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_1);
x_435 = l_Lean_Expr_const___override(x_434, x_1);
lean_inc(x_2);
x_436 = l_Lean_Expr_app___override(x_435, x_2);
x_437 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_438 = l_Lean_Expr_app___override(x_436, x_437);
x_439 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_1);
x_440 = l_Lean_Expr_const___override(x_439, x_1);
lean_inc(x_2);
x_441 = l_Lean_Expr_app___override(x_440, x_2);
x_442 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_1);
x_443 = l_Lean_Expr_const___override(x_442, x_1);
lean_inc(x_2);
x_444 = l_Lean_Expr_app___override(x_443, x_2);
x_445 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_1);
x_446 = l_Lean_Expr_const___override(x_445, x_1);
lean_inc(x_2);
x_447 = l_Lean_Expr_app___override(x_446, x_2);
x_448 = l_Lean_Expr_app___override(x_447, x_52);
x_449 = l_Lean_Expr_app___override(x_444, x_448);
x_450 = l_Lean_Expr_app___override(x_441, x_449);
x_451 = l_Lean_Expr_app___override(x_438, x_450);
x_452 = l_Lean_Expr_app___override(x_433, x_451);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_453 = l_CancelDenoms_synthesizeUsingNormNum(x_452, x_18, x_19, x_20, x_21, x_426);
if (lean_obj_tag(x_453) == 0)
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; 
x_454 = lean_ctor_get(x_453, 0);
lean_inc(x_454);
x_455 = lean_ctor_get(x_453, 1);
lean_inc(x_455);
lean_dec(x_453);
lean_inc(x_428);
x_456 = l_Lean_Expr_app___override(x_67, x_428);
x_457 = l_Lean_Expr_app___override(x_456, x_421);
x_458 = l_Lean_Expr_app___override(x_72, x_457);
lean_inc(x_6);
x_459 = l_Lean_Expr_app___override(x_458, x_6);
x_460 = l_CancelDenoms_synthesizeUsingNormNum(x_459, x_18, x_19, x_20, x_21, x_455);
if (lean_obj_tag(x_460) == 0)
{
uint8_t x_461; 
x_461 = !lean_is_exclusive(x_460);
if (x_461 == 0)
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; 
x_462 = lean_ctor_get(x_460, 0);
x_463 = l_CancelDenoms_mkProdPrf___lambda__9___closed__47;
x_464 = l_Lean_Expr_const___override(x_463, x_1);
x_465 = l_Lean_Expr_app___override(x_464, x_2);
x_466 = l_Lean_Expr_app___override(x_465, x_4);
lean_inc(x_428);
x_467 = l_Lean_Expr_app___override(x_466, x_428);
x_468 = l_Lean_Expr_app___override(x_467, x_6);
x_469 = l_Lean_Expr_app___override(x_468, x_416);
x_470 = l_Lean_Expr_app___override(x_469, x_454);
x_471 = l_Lean_Expr_app___override(x_470, x_462);
lean_ctor_set(x_425, 1, x_471);
lean_ctor_set(x_460, 0, x_425);
return x_460;
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; 
x_472 = lean_ctor_get(x_460, 0);
x_473 = lean_ctor_get(x_460, 1);
lean_inc(x_473);
lean_inc(x_472);
lean_dec(x_460);
x_474 = l_CancelDenoms_mkProdPrf___lambda__9___closed__47;
x_475 = l_Lean_Expr_const___override(x_474, x_1);
x_476 = l_Lean_Expr_app___override(x_475, x_2);
x_477 = l_Lean_Expr_app___override(x_476, x_4);
lean_inc(x_428);
x_478 = l_Lean_Expr_app___override(x_477, x_428);
x_479 = l_Lean_Expr_app___override(x_478, x_6);
x_480 = l_Lean_Expr_app___override(x_479, x_416);
x_481 = l_Lean_Expr_app___override(x_480, x_454);
x_482 = l_Lean_Expr_app___override(x_481, x_472);
lean_ctor_set(x_425, 1, x_482);
x_483 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_483, 0, x_425);
lean_ctor_set(x_483, 1, x_473);
return x_483;
}
}
else
{
uint8_t x_484; 
lean_dec(x_454);
lean_free_object(x_425);
lean_dec(x_428);
lean_dec(x_416);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_484 = !lean_is_exclusive(x_460);
if (x_484 == 0)
{
return x_460;
}
else
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; 
x_485 = lean_ctor_get(x_460, 0);
x_486 = lean_ctor_get(x_460, 1);
lean_inc(x_486);
lean_inc(x_485);
lean_dec(x_460);
x_487 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_487, 0, x_485);
lean_ctor_set(x_487, 1, x_486);
return x_487;
}
}
}
else
{
uint8_t x_488; 
lean_free_object(x_425);
lean_dec(x_428);
lean_dec(x_421);
lean_dec(x_416);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_488 = !lean_is_exclusive(x_453);
if (x_488 == 0)
{
return x_453;
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; 
x_489 = lean_ctor_get(x_453, 0);
x_490 = lean_ctor_get(x_453, 1);
lean_inc(x_490);
lean_inc(x_489);
lean_dec(x_453);
x_491 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_491, 0, x_489);
lean_ctor_set(x_491, 1, x_490);
return x_491;
}
}
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; 
x_492 = lean_ctor_get(x_425, 0);
lean_inc(x_492);
lean_dec(x_425);
x_493 = l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
x_494 = l_Lean_Expr_const___override(x_493, x_8);
lean_inc(x_2);
x_495 = l_Lean_Expr_app___override(x_494, x_2);
lean_inc(x_421);
x_496 = l_Lean_Expr_app___override(x_495, x_421);
x_497 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_1);
x_498 = l_Lean_Expr_const___override(x_497, x_1);
lean_inc(x_2);
x_499 = l_Lean_Expr_app___override(x_498, x_2);
x_500 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_501 = l_Lean_Expr_app___override(x_499, x_500);
x_502 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_1);
x_503 = l_Lean_Expr_const___override(x_502, x_1);
lean_inc(x_2);
x_504 = l_Lean_Expr_app___override(x_503, x_2);
x_505 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_1);
x_506 = l_Lean_Expr_const___override(x_505, x_1);
lean_inc(x_2);
x_507 = l_Lean_Expr_app___override(x_506, x_2);
x_508 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_1);
x_509 = l_Lean_Expr_const___override(x_508, x_1);
lean_inc(x_2);
x_510 = l_Lean_Expr_app___override(x_509, x_2);
x_511 = l_Lean_Expr_app___override(x_510, x_52);
x_512 = l_Lean_Expr_app___override(x_507, x_511);
x_513 = l_Lean_Expr_app___override(x_504, x_512);
x_514 = l_Lean_Expr_app___override(x_501, x_513);
x_515 = l_Lean_Expr_app___override(x_496, x_514);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_516 = l_CancelDenoms_synthesizeUsingNormNum(x_515, x_18, x_19, x_20, x_21, x_426);
if (lean_obj_tag(x_516) == 0)
{
lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; 
x_517 = lean_ctor_get(x_516, 0);
lean_inc(x_517);
x_518 = lean_ctor_get(x_516, 1);
lean_inc(x_518);
lean_dec(x_516);
lean_inc(x_492);
x_519 = l_Lean_Expr_app___override(x_67, x_492);
x_520 = l_Lean_Expr_app___override(x_519, x_421);
x_521 = l_Lean_Expr_app___override(x_72, x_520);
lean_inc(x_6);
x_522 = l_Lean_Expr_app___override(x_521, x_6);
x_523 = l_CancelDenoms_synthesizeUsingNormNum(x_522, x_18, x_19, x_20, x_21, x_518);
if (lean_obj_tag(x_523) == 0)
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; 
x_524 = lean_ctor_get(x_523, 0);
lean_inc(x_524);
x_525 = lean_ctor_get(x_523, 1);
lean_inc(x_525);
if (lean_is_exclusive(x_523)) {
 lean_ctor_release(x_523, 0);
 lean_ctor_release(x_523, 1);
 x_526 = x_523;
} else {
 lean_dec_ref(x_523);
 x_526 = lean_box(0);
}
x_527 = l_CancelDenoms_mkProdPrf___lambda__9___closed__47;
x_528 = l_Lean_Expr_const___override(x_527, x_1);
x_529 = l_Lean_Expr_app___override(x_528, x_2);
x_530 = l_Lean_Expr_app___override(x_529, x_4);
lean_inc(x_492);
x_531 = l_Lean_Expr_app___override(x_530, x_492);
x_532 = l_Lean_Expr_app___override(x_531, x_6);
x_533 = l_Lean_Expr_app___override(x_532, x_416);
x_534 = l_Lean_Expr_app___override(x_533, x_517);
x_535 = l_Lean_Expr_app___override(x_534, x_524);
x_536 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_536, 0, x_492);
lean_ctor_set(x_536, 1, x_535);
if (lean_is_scalar(x_526)) {
 x_537 = lean_alloc_ctor(0, 2, 0);
} else {
 x_537 = x_526;
}
lean_ctor_set(x_537, 0, x_536);
lean_ctor_set(x_537, 1, x_525);
return x_537;
}
else
{
lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; 
lean_dec(x_517);
lean_dec(x_492);
lean_dec(x_416);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_538 = lean_ctor_get(x_523, 0);
lean_inc(x_538);
x_539 = lean_ctor_get(x_523, 1);
lean_inc(x_539);
if (lean_is_exclusive(x_523)) {
 lean_ctor_release(x_523, 0);
 lean_ctor_release(x_523, 1);
 x_540 = x_523;
} else {
 lean_dec_ref(x_523);
 x_540 = lean_box(0);
}
if (lean_is_scalar(x_540)) {
 x_541 = lean_alloc_ctor(1, 2, 0);
} else {
 x_541 = x_540;
}
lean_ctor_set(x_541, 0, x_538);
lean_ctor_set(x_541, 1, x_539);
return x_541;
}
}
else
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; 
lean_dec(x_492);
lean_dec(x_421);
lean_dec(x_416);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_542 = lean_ctor_get(x_516, 0);
lean_inc(x_542);
x_543 = lean_ctor_get(x_516, 1);
lean_inc(x_543);
if (lean_is_exclusive(x_516)) {
 lean_ctor_release(x_516, 0);
 lean_ctor_release(x_516, 1);
 x_544 = x_516;
} else {
 lean_dec_ref(x_516);
 x_544 = lean_box(0);
}
if (lean_is_scalar(x_544)) {
 x_545 = lean_alloc_ctor(1, 2, 0);
} else {
 x_545 = x_544;
}
lean_ctor_set(x_545, 0, x_542);
lean_ctor_set(x_545, 1, x_543);
return x_545;
}
}
}
else
{
uint8_t x_546; 
lean_dec(x_421);
lean_dec(x_416);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_52);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_546 = !lean_is_exclusive(x_424);
if (x_546 == 0)
{
return x_424;
}
else
{
lean_object* x_547; lean_object* x_548; lean_object* x_549; 
x_547 = lean_ctor_get(x_424, 0);
x_548 = lean_ctor_get(x_424, 1);
lean_inc(x_548);
lean_inc(x_547);
lean_dec(x_424);
x_549 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_549, 0, x_547);
lean_ctor_set(x_549, 1, x_548);
return x_549;
}
}
}
else
{
uint8_t x_550; 
lean_dec(x_416);
lean_dec(x_393);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_52);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_550 = !lean_is_exclusive(x_418);
if (x_550 == 0)
{
return x_418;
}
else
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; 
x_551 = lean_ctor_get(x_418, 0);
x_552 = lean_ctor_get(x_418, 1);
lean_inc(x_552);
lean_inc(x_551);
lean_dec(x_418);
x_553 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_553, 0, x_551);
lean_ctor_set(x_553, 1, x_552);
return x_553;
}
}
}
}
else
{
uint8_t x_554; 
lean_dec(x_393);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_52);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_554 = !lean_is_exclusive(x_407);
if (x_554 == 0)
{
return x_407;
}
else
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; 
x_555 = lean_ctor_get(x_407, 0);
x_556 = lean_ctor_get(x_407, 1);
lean_inc(x_556);
lean_inc(x_555);
lean_dec(x_407);
x_557 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_557, 0, x_555);
lean_ctor_set(x_557, 1, x_556);
return x_557;
}
}
}
else
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; 
lean_dec(x_393);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_52);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
x_558 = lean_ctor_get(x_401, 1);
lean_inc(x_558);
lean_dec(x_401);
x_559 = lean_ctor_get(x_402, 0);
lean_inc(x_559);
lean_dec(x_402);
lean_inc(x_559);
lean_inc(x_6);
lean_inc(x_2);
x_560 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_10, x_559, x_18, x_19, x_20, x_21, x_558);
if (lean_obj_tag(x_560) == 0)
{
uint8_t x_561; 
x_561 = !lean_is_exclusive(x_560);
if (x_561 == 0)
{
lean_object* x_562; uint8_t x_563; 
x_562 = lean_ctor_get(x_560, 0);
x_563 = !lean_is_exclusive(x_562);
if (x_563 == 0)
{
lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; 
x_564 = lean_ctor_get(x_562, 0);
x_565 = lean_ctor_get(x_562, 1);
x_566 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_567 = l_Lean_Expr_const___override(x_566, x_1);
lean_inc(x_2);
x_568 = l_Lean_Expr_app___override(x_567, x_2);
x_569 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_570 = l_Lean_Expr_const___override(x_569, x_1);
lean_inc(x_2);
x_571 = l_Lean_Expr_app___override(x_570, x_2);
x_572 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_573 = l_Lean_Expr_const___override(x_572, x_1);
lean_inc(x_2);
x_574 = l_Lean_Expr_app___override(x_573, x_2);
x_575 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_576 = l_Lean_Expr_const___override(x_575, x_1);
lean_inc(x_2);
x_577 = l_Lean_Expr_app___override(x_576, x_2);
x_578 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_579 = l_Lean_Expr_const___override(x_578, x_1);
lean_inc(x_2);
x_580 = l_Lean_Expr_app___override(x_579, x_2);
x_581 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_582 = l_Lean_Expr_const___override(x_581, x_1);
lean_inc(x_2);
x_583 = l_Lean_Expr_app___override(x_582, x_2);
x_584 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_585 = l_Lean_Expr_const___override(x_584, x_1);
lean_inc(x_2);
x_586 = l_Lean_Expr_app___override(x_585, x_2);
lean_inc(x_9);
x_587 = l_Lean_Expr_app___override(x_586, x_9);
x_588 = l_Lean_Expr_app___override(x_583, x_587);
x_589 = l_Lean_Expr_app___override(x_580, x_588);
x_590 = l_Lean_Expr_app___override(x_577, x_589);
x_591 = l_Lean_Expr_app___override(x_574, x_590);
x_592 = l_Lean_Expr_app___override(x_571, x_591);
x_593 = l_Lean_Expr_app___override(x_568, x_592);
lean_inc(x_564);
x_594 = l_Lean_Expr_app___override(x_593, x_564);
x_595 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_596 = l_Lean_Expr_const___override(x_595, x_1);
x_597 = l_Lean_Expr_app___override(x_596, x_2);
x_598 = l_Lean_Expr_app___override(x_597, x_9);
x_599 = l_Lean_Expr_app___override(x_598, x_6);
x_600 = l_Lean_Expr_app___override(x_599, x_559);
x_601 = l_Lean_Expr_app___override(x_600, x_564);
x_602 = l_Lean_Expr_app___override(x_601, x_565);
lean_ctor_set(x_562, 1, x_602);
lean_ctor_set(x_562, 0, x_594);
return x_560;
}
else
{
lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; 
x_603 = lean_ctor_get(x_562, 0);
x_604 = lean_ctor_get(x_562, 1);
lean_inc(x_604);
lean_inc(x_603);
lean_dec(x_562);
x_605 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_606 = l_Lean_Expr_const___override(x_605, x_1);
lean_inc(x_2);
x_607 = l_Lean_Expr_app___override(x_606, x_2);
x_608 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_609 = l_Lean_Expr_const___override(x_608, x_1);
lean_inc(x_2);
x_610 = l_Lean_Expr_app___override(x_609, x_2);
x_611 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_612 = l_Lean_Expr_const___override(x_611, x_1);
lean_inc(x_2);
x_613 = l_Lean_Expr_app___override(x_612, x_2);
x_614 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_615 = l_Lean_Expr_const___override(x_614, x_1);
lean_inc(x_2);
x_616 = l_Lean_Expr_app___override(x_615, x_2);
x_617 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_618 = l_Lean_Expr_const___override(x_617, x_1);
lean_inc(x_2);
x_619 = l_Lean_Expr_app___override(x_618, x_2);
x_620 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_621 = l_Lean_Expr_const___override(x_620, x_1);
lean_inc(x_2);
x_622 = l_Lean_Expr_app___override(x_621, x_2);
x_623 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_624 = l_Lean_Expr_const___override(x_623, x_1);
lean_inc(x_2);
x_625 = l_Lean_Expr_app___override(x_624, x_2);
lean_inc(x_9);
x_626 = l_Lean_Expr_app___override(x_625, x_9);
x_627 = l_Lean_Expr_app___override(x_622, x_626);
x_628 = l_Lean_Expr_app___override(x_619, x_627);
x_629 = l_Lean_Expr_app___override(x_616, x_628);
x_630 = l_Lean_Expr_app___override(x_613, x_629);
x_631 = l_Lean_Expr_app___override(x_610, x_630);
x_632 = l_Lean_Expr_app___override(x_607, x_631);
lean_inc(x_603);
x_633 = l_Lean_Expr_app___override(x_632, x_603);
x_634 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_635 = l_Lean_Expr_const___override(x_634, x_1);
x_636 = l_Lean_Expr_app___override(x_635, x_2);
x_637 = l_Lean_Expr_app___override(x_636, x_9);
x_638 = l_Lean_Expr_app___override(x_637, x_6);
x_639 = l_Lean_Expr_app___override(x_638, x_559);
x_640 = l_Lean_Expr_app___override(x_639, x_603);
x_641 = l_Lean_Expr_app___override(x_640, x_604);
x_642 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_642, 0, x_633);
lean_ctor_set(x_642, 1, x_641);
lean_ctor_set(x_560, 0, x_642);
return x_560;
}
}
else
{
lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; 
x_643 = lean_ctor_get(x_560, 0);
x_644 = lean_ctor_get(x_560, 1);
lean_inc(x_644);
lean_inc(x_643);
lean_dec(x_560);
x_645 = lean_ctor_get(x_643, 0);
lean_inc(x_645);
x_646 = lean_ctor_get(x_643, 1);
lean_inc(x_646);
if (lean_is_exclusive(x_643)) {
 lean_ctor_release(x_643, 0);
 lean_ctor_release(x_643, 1);
 x_647 = x_643;
} else {
 lean_dec_ref(x_643);
 x_647 = lean_box(0);
}
x_648 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_649 = l_Lean_Expr_const___override(x_648, x_1);
lean_inc(x_2);
x_650 = l_Lean_Expr_app___override(x_649, x_2);
x_651 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_652 = l_Lean_Expr_const___override(x_651, x_1);
lean_inc(x_2);
x_653 = l_Lean_Expr_app___override(x_652, x_2);
x_654 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_655 = l_Lean_Expr_const___override(x_654, x_1);
lean_inc(x_2);
x_656 = l_Lean_Expr_app___override(x_655, x_2);
x_657 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_658 = l_Lean_Expr_const___override(x_657, x_1);
lean_inc(x_2);
x_659 = l_Lean_Expr_app___override(x_658, x_2);
x_660 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_661 = l_Lean_Expr_const___override(x_660, x_1);
lean_inc(x_2);
x_662 = l_Lean_Expr_app___override(x_661, x_2);
x_663 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_664 = l_Lean_Expr_const___override(x_663, x_1);
lean_inc(x_2);
x_665 = l_Lean_Expr_app___override(x_664, x_2);
x_666 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_667 = l_Lean_Expr_const___override(x_666, x_1);
lean_inc(x_2);
x_668 = l_Lean_Expr_app___override(x_667, x_2);
lean_inc(x_9);
x_669 = l_Lean_Expr_app___override(x_668, x_9);
x_670 = l_Lean_Expr_app___override(x_665, x_669);
x_671 = l_Lean_Expr_app___override(x_662, x_670);
x_672 = l_Lean_Expr_app___override(x_659, x_671);
x_673 = l_Lean_Expr_app___override(x_656, x_672);
x_674 = l_Lean_Expr_app___override(x_653, x_673);
x_675 = l_Lean_Expr_app___override(x_650, x_674);
lean_inc(x_645);
x_676 = l_Lean_Expr_app___override(x_675, x_645);
x_677 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_678 = l_Lean_Expr_const___override(x_677, x_1);
x_679 = l_Lean_Expr_app___override(x_678, x_2);
x_680 = l_Lean_Expr_app___override(x_679, x_9);
x_681 = l_Lean_Expr_app___override(x_680, x_6);
x_682 = l_Lean_Expr_app___override(x_681, x_559);
x_683 = l_Lean_Expr_app___override(x_682, x_645);
x_684 = l_Lean_Expr_app___override(x_683, x_646);
if (lean_is_scalar(x_647)) {
 x_685 = lean_alloc_ctor(0, 2, 0);
} else {
 x_685 = x_647;
}
lean_ctor_set(x_685, 0, x_676);
lean_ctor_set(x_685, 1, x_684);
x_686 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_686, 0, x_685);
lean_ctor_set(x_686, 1, x_644);
return x_686;
}
}
else
{
uint8_t x_687; 
lean_dec(x_559);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_687 = !lean_is_exclusive(x_560);
if (x_687 == 0)
{
return x_560;
}
else
{
lean_object* x_688; lean_object* x_689; lean_object* x_690; 
x_688 = lean_ctor_get(x_560, 0);
x_689 = lean_ctor_get(x_560, 1);
lean_inc(x_689);
lean_inc(x_688);
lean_dec(x_560);
x_690 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_690, 0, x_688);
lean_ctor_set(x_690, 1, x_689);
return x_690;
}
}
}
}
else
{
uint8_t x_691; 
lean_dec(x_393);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_52);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_691 = !lean_is_exclusive(x_401);
if (x_691 == 0)
{
return x_401;
}
else
{
lean_object* x_692; lean_object* x_693; lean_object* x_694; 
x_692 = lean_ctor_get(x_401, 0);
x_693 = lean_ctor_get(x_401, 1);
lean_inc(x_693);
lean_inc(x_692);
lean_dec(x_401);
x_694 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_694, 0, x_692);
lean_ctor_set(x_694, 1, x_693);
return x_694;
}
}
}
else
{
lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_52);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_695 = lean_ctor_get(x_395, 1);
lean_inc(x_695);
lean_dec(x_395);
x_696 = lean_ctor_get(x_396, 0);
lean_inc(x_696);
lean_dec(x_396);
x_697 = lean_ctor_get(x_397, 0);
lean_inc(x_697);
lean_dec(x_397);
lean_inc(x_393);
x_698 = l_Lean_mkRawNatLit(x_393);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_5);
x_699 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_698, x_18, x_19, x_20, x_21, x_695);
if (lean_obj_tag(x_699) == 0)
{
lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; 
x_700 = lean_ctor_get(x_699, 0);
lean_inc(x_700);
x_701 = lean_ctor_get(x_699, 1);
lean_inc(x_701);
lean_dec(x_699);
x_702 = lean_ctor_get(x_700, 0);
lean_inc(x_702);
lean_dec(x_700);
x_703 = lean_nat_div(x_11, x_393);
lean_dec(x_393);
lean_dec(x_11);
lean_inc(x_703);
x_704 = l_Lean_mkRawNatLit(x_703);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_5);
x_705 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_704, x_18, x_19, x_20, x_21, x_701);
if (lean_obj_tag(x_705) == 0)
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; 
x_706 = lean_ctor_get(x_705, 0);
lean_inc(x_706);
x_707 = lean_ctor_get(x_705, 1);
lean_inc(x_707);
lean_dec(x_705);
x_708 = lean_ctor_get(x_706, 0);
lean_inc(x_708);
lean_dec(x_706);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_696);
lean_inc(x_708);
lean_inc(x_4);
lean_inc(x_2);
x_709 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_703, x_708, x_230, x_696, x_18, x_19, x_20, x_21, x_707);
if (lean_obj_tag(x_709) == 0)
{
lean_object* x_710; lean_object* x_711; uint8_t x_712; 
x_710 = lean_ctor_get(x_709, 0);
lean_inc(x_710);
x_711 = lean_ctor_get(x_709, 1);
lean_inc(x_711);
lean_dec(x_709);
x_712 = !lean_is_exclusive(x_710);
if (x_712 == 0)
{
lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; 
x_713 = lean_ctor_get(x_710, 0);
x_714 = lean_ctor_get(x_710, 1);
x_715 = l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
x_716 = l_Lean_Expr_const___override(x_715, x_57);
lean_inc(x_2);
x_717 = l_Lean_Expr_app___override(x_716, x_2);
lean_inc(x_2);
x_718 = l_Lean_Expr_app___override(x_717, x_2);
lean_inc(x_2);
x_719 = l_Lean_Expr_app___override(x_718, x_2);
x_720 = l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
lean_inc(x_1);
x_721 = l_Lean_Expr_const___override(x_720, x_1);
lean_inc(x_2);
x_722 = l_Lean_Expr_app___override(x_721, x_2);
x_723 = l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
lean_inc(x_1);
x_724 = l_Lean_Expr_const___override(x_723, x_1);
lean_inc(x_2);
x_725 = l_Lean_Expr_app___override(x_724, x_2);
x_726 = l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
lean_inc(x_1);
x_727 = l_Lean_Expr_const___override(x_726, x_1);
lean_inc(x_2);
x_728 = l_Lean_Expr_app___override(x_727, x_2);
x_729 = l_Lean_Expr_app___override(x_728, x_13);
x_730 = l_Lean_Expr_app___override(x_725, x_729);
x_731 = l_Lean_Expr_app___override(x_722, x_730);
x_732 = l_Lean_Expr_app___override(x_719, x_731);
lean_inc(x_702);
x_733 = l_Lean_Expr_app___override(x_732, x_702);
lean_inc(x_697);
x_734 = l_Lean_Expr_app___override(x_733, x_697);
lean_inc(x_72);
x_735 = l_Lean_Expr_app___override(x_72, x_734);
x_736 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_1);
x_737 = l_Lean_Expr_const___override(x_736, x_1);
lean_inc(x_2);
x_738 = l_Lean_Expr_app___override(x_737, x_2);
x_739 = l_CancelDenoms_mkProdPrf___lambda__9___closed__49;
x_740 = l_Lean_Expr_app___override(x_738, x_739);
x_741 = l_CancelDenoms_mkProdPrf___lambda__9___closed__52;
lean_inc(x_1);
x_742 = l_Lean_Expr_const___override(x_741, x_1);
lean_inc(x_2);
x_743 = l_Lean_Expr_app___override(x_742, x_2);
x_744 = l_CancelDenoms_mkProdPrf___lambda__9___closed__55;
lean_inc(x_1);
x_745 = l_Lean_Expr_const___override(x_744, x_1);
lean_inc(x_2);
x_746 = l_Lean_Expr_app___override(x_745, x_2);
x_747 = l_Lean_Expr_app___override(x_746, x_14);
x_748 = l_Lean_Expr_app___override(x_743, x_747);
x_749 = l_Lean_Expr_app___override(x_740, x_748);
x_750 = l_Lean_Expr_app___override(x_735, x_749);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_751 = l_CancelDenoms_synthesizeUsingNormNum(x_750, x_18, x_19, x_20, x_21, x_711);
if (lean_obj_tag(x_751) == 0)
{
lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; 
x_752 = lean_ctor_get(x_751, 0);
lean_inc(x_752);
x_753 = lean_ctor_get(x_751, 1);
lean_inc(x_753);
lean_dec(x_751);
lean_inc(x_708);
x_754 = l_Lean_Expr_app___override(x_67, x_708);
lean_inc(x_702);
x_755 = l_Lean_Expr_app___override(x_754, x_702);
x_756 = l_Lean_Expr_app___override(x_72, x_755);
lean_inc(x_6);
x_757 = l_Lean_Expr_app___override(x_756, x_6);
x_758 = l_CancelDenoms_synthesizeUsingNormNum(x_757, x_18, x_19, x_20, x_21, x_753);
if (lean_obj_tag(x_758) == 0)
{
uint8_t x_759; 
x_759 = !lean_is_exclusive(x_758);
if (x_759 == 0)
{
lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; 
x_760 = lean_ctor_get(x_758, 0);
x_761 = l_CancelDenoms_mkProdPrf___lambda__9___closed__57;
x_762 = l_Lean_Expr_const___override(x_761, x_1);
x_763 = l_Lean_Expr_app___override(x_762, x_2);
x_764 = l_Lean_Expr_app___override(x_763, x_4);
x_765 = l_Lean_Expr_app___override(x_764, x_708);
x_766 = l_Lean_Expr_app___override(x_765, x_702);
x_767 = l_Lean_Expr_app___override(x_766, x_6);
x_768 = l_Lean_Expr_app___override(x_767, x_696);
x_769 = l_Lean_Expr_app___override(x_768, x_697);
lean_inc(x_713);
x_770 = l_Lean_Expr_app___override(x_769, x_713);
x_771 = l_Lean_Expr_app___override(x_770, x_714);
x_772 = l_Lean_Expr_app___override(x_771, x_752);
x_773 = l_Lean_Expr_app___override(x_772, x_760);
lean_ctor_set(x_710, 1, x_773);
lean_ctor_set(x_758, 0, x_710);
return x_758;
}
else
{
lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; 
x_774 = lean_ctor_get(x_758, 0);
x_775 = lean_ctor_get(x_758, 1);
lean_inc(x_775);
lean_inc(x_774);
lean_dec(x_758);
x_776 = l_CancelDenoms_mkProdPrf___lambda__9___closed__57;
x_777 = l_Lean_Expr_const___override(x_776, x_1);
x_778 = l_Lean_Expr_app___override(x_777, x_2);
x_779 = l_Lean_Expr_app___override(x_778, x_4);
x_780 = l_Lean_Expr_app___override(x_779, x_708);
x_781 = l_Lean_Expr_app___override(x_780, x_702);
x_782 = l_Lean_Expr_app___override(x_781, x_6);
x_783 = l_Lean_Expr_app___override(x_782, x_696);
x_784 = l_Lean_Expr_app___override(x_783, x_697);
lean_inc(x_713);
x_785 = l_Lean_Expr_app___override(x_784, x_713);
x_786 = l_Lean_Expr_app___override(x_785, x_714);
x_787 = l_Lean_Expr_app___override(x_786, x_752);
x_788 = l_Lean_Expr_app___override(x_787, x_774);
lean_ctor_set(x_710, 1, x_788);
x_789 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_789, 0, x_710);
lean_ctor_set(x_789, 1, x_775);
return x_789;
}
}
else
{
uint8_t x_790; 
lean_dec(x_752);
lean_free_object(x_710);
lean_dec(x_714);
lean_dec(x_713);
lean_dec(x_708);
lean_dec(x_702);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_790 = !lean_is_exclusive(x_758);
if (x_790 == 0)
{
return x_758;
}
else
{
lean_object* x_791; lean_object* x_792; lean_object* x_793; 
x_791 = lean_ctor_get(x_758, 0);
x_792 = lean_ctor_get(x_758, 1);
lean_inc(x_792);
lean_inc(x_791);
lean_dec(x_758);
x_793 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_793, 0, x_791);
lean_ctor_set(x_793, 1, x_792);
return x_793;
}
}
}
else
{
uint8_t x_794; 
lean_free_object(x_710);
lean_dec(x_714);
lean_dec(x_713);
lean_dec(x_708);
lean_dec(x_702);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_794 = !lean_is_exclusive(x_751);
if (x_794 == 0)
{
return x_751;
}
else
{
lean_object* x_795; lean_object* x_796; lean_object* x_797; 
x_795 = lean_ctor_get(x_751, 0);
x_796 = lean_ctor_get(x_751, 1);
lean_inc(x_796);
lean_inc(x_795);
lean_dec(x_751);
x_797 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_797, 0, x_795);
lean_ctor_set(x_797, 1, x_796);
return x_797;
}
}
}
else
{
lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; 
x_798 = lean_ctor_get(x_710, 0);
x_799 = lean_ctor_get(x_710, 1);
lean_inc(x_799);
lean_inc(x_798);
lean_dec(x_710);
x_800 = l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
x_801 = l_Lean_Expr_const___override(x_800, x_57);
lean_inc(x_2);
x_802 = l_Lean_Expr_app___override(x_801, x_2);
lean_inc(x_2);
x_803 = l_Lean_Expr_app___override(x_802, x_2);
lean_inc(x_2);
x_804 = l_Lean_Expr_app___override(x_803, x_2);
x_805 = l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
lean_inc(x_1);
x_806 = l_Lean_Expr_const___override(x_805, x_1);
lean_inc(x_2);
x_807 = l_Lean_Expr_app___override(x_806, x_2);
x_808 = l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
lean_inc(x_1);
x_809 = l_Lean_Expr_const___override(x_808, x_1);
lean_inc(x_2);
x_810 = l_Lean_Expr_app___override(x_809, x_2);
x_811 = l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
lean_inc(x_1);
x_812 = l_Lean_Expr_const___override(x_811, x_1);
lean_inc(x_2);
x_813 = l_Lean_Expr_app___override(x_812, x_2);
x_814 = l_Lean_Expr_app___override(x_813, x_13);
x_815 = l_Lean_Expr_app___override(x_810, x_814);
x_816 = l_Lean_Expr_app___override(x_807, x_815);
x_817 = l_Lean_Expr_app___override(x_804, x_816);
lean_inc(x_702);
x_818 = l_Lean_Expr_app___override(x_817, x_702);
lean_inc(x_697);
x_819 = l_Lean_Expr_app___override(x_818, x_697);
lean_inc(x_72);
x_820 = l_Lean_Expr_app___override(x_72, x_819);
x_821 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_1);
x_822 = l_Lean_Expr_const___override(x_821, x_1);
lean_inc(x_2);
x_823 = l_Lean_Expr_app___override(x_822, x_2);
x_824 = l_CancelDenoms_mkProdPrf___lambda__9___closed__49;
x_825 = l_Lean_Expr_app___override(x_823, x_824);
x_826 = l_CancelDenoms_mkProdPrf___lambda__9___closed__52;
lean_inc(x_1);
x_827 = l_Lean_Expr_const___override(x_826, x_1);
lean_inc(x_2);
x_828 = l_Lean_Expr_app___override(x_827, x_2);
x_829 = l_CancelDenoms_mkProdPrf___lambda__9___closed__55;
lean_inc(x_1);
x_830 = l_Lean_Expr_const___override(x_829, x_1);
lean_inc(x_2);
x_831 = l_Lean_Expr_app___override(x_830, x_2);
x_832 = l_Lean_Expr_app___override(x_831, x_14);
x_833 = l_Lean_Expr_app___override(x_828, x_832);
x_834 = l_Lean_Expr_app___override(x_825, x_833);
x_835 = l_Lean_Expr_app___override(x_820, x_834);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_836 = l_CancelDenoms_synthesizeUsingNormNum(x_835, x_18, x_19, x_20, x_21, x_711);
if (lean_obj_tag(x_836) == 0)
{
lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; 
x_837 = lean_ctor_get(x_836, 0);
lean_inc(x_837);
x_838 = lean_ctor_get(x_836, 1);
lean_inc(x_838);
lean_dec(x_836);
lean_inc(x_708);
x_839 = l_Lean_Expr_app___override(x_67, x_708);
lean_inc(x_702);
x_840 = l_Lean_Expr_app___override(x_839, x_702);
x_841 = l_Lean_Expr_app___override(x_72, x_840);
lean_inc(x_6);
x_842 = l_Lean_Expr_app___override(x_841, x_6);
x_843 = l_CancelDenoms_synthesizeUsingNormNum(x_842, x_18, x_19, x_20, x_21, x_838);
if (lean_obj_tag(x_843) == 0)
{
lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; 
x_844 = lean_ctor_get(x_843, 0);
lean_inc(x_844);
x_845 = lean_ctor_get(x_843, 1);
lean_inc(x_845);
if (lean_is_exclusive(x_843)) {
 lean_ctor_release(x_843, 0);
 lean_ctor_release(x_843, 1);
 x_846 = x_843;
} else {
 lean_dec_ref(x_843);
 x_846 = lean_box(0);
}
x_847 = l_CancelDenoms_mkProdPrf___lambda__9___closed__57;
x_848 = l_Lean_Expr_const___override(x_847, x_1);
x_849 = l_Lean_Expr_app___override(x_848, x_2);
x_850 = l_Lean_Expr_app___override(x_849, x_4);
x_851 = l_Lean_Expr_app___override(x_850, x_708);
x_852 = l_Lean_Expr_app___override(x_851, x_702);
x_853 = l_Lean_Expr_app___override(x_852, x_6);
x_854 = l_Lean_Expr_app___override(x_853, x_696);
x_855 = l_Lean_Expr_app___override(x_854, x_697);
lean_inc(x_798);
x_856 = l_Lean_Expr_app___override(x_855, x_798);
x_857 = l_Lean_Expr_app___override(x_856, x_799);
x_858 = l_Lean_Expr_app___override(x_857, x_837);
x_859 = l_Lean_Expr_app___override(x_858, x_844);
x_860 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_860, 0, x_798);
lean_ctor_set(x_860, 1, x_859);
if (lean_is_scalar(x_846)) {
 x_861 = lean_alloc_ctor(0, 2, 0);
} else {
 x_861 = x_846;
}
lean_ctor_set(x_861, 0, x_860);
lean_ctor_set(x_861, 1, x_845);
return x_861;
}
else
{
lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; 
lean_dec(x_837);
lean_dec(x_799);
lean_dec(x_798);
lean_dec(x_708);
lean_dec(x_702);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_862 = lean_ctor_get(x_843, 0);
lean_inc(x_862);
x_863 = lean_ctor_get(x_843, 1);
lean_inc(x_863);
if (lean_is_exclusive(x_843)) {
 lean_ctor_release(x_843, 0);
 lean_ctor_release(x_843, 1);
 x_864 = x_843;
} else {
 lean_dec_ref(x_843);
 x_864 = lean_box(0);
}
if (lean_is_scalar(x_864)) {
 x_865 = lean_alloc_ctor(1, 2, 0);
} else {
 x_865 = x_864;
}
lean_ctor_set(x_865, 0, x_862);
lean_ctor_set(x_865, 1, x_863);
return x_865;
}
}
else
{
lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; 
lean_dec(x_799);
lean_dec(x_798);
lean_dec(x_708);
lean_dec(x_702);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_866 = lean_ctor_get(x_836, 0);
lean_inc(x_866);
x_867 = lean_ctor_get(x_836, 1);
lean_inc(x_867);
if (lean_is_exclusive(x_836)) {
 lean_ctor_release(x_836, 0);
 lean_ctor_release(x_836, 1);
 x_868 = x_836;
} else {
 lean_dec_ref(x_836);
 x_868 = lean_box(0);
}
if (lean_is_scalar(x_868)) {
 x_869 = lean_alloc_ctor(1, 2, 0);
} else {
 x_869 = x_868;
}
lean_ctor_set(x_869, 0, x_866);
lean_ctor_set(x_869, 1, x_867);
return x_869;
}
}
}
else
{
uint8_t x_870; 
lean_dec(x_708);
lean_dec(x_702);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_870 = !lean_is_exclusive(x_709);
if (x_870 == 0)
{
return x_709;
}
else
{
lean_object* x_871; lean_object* x_872; lean_object* x_873; 
x_871 = lean_ctor_get(x_709, 0);
x_872 = lean_ctor_get(x_709, 1);
lean_inc(x_872);
lean_inc(x_871);
lean_dec(x_709);
x_873 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_873, 0, x_871);
lean_ctor_set(x_873, 1, x_872);
return x_873;
}
}
}
else
{
uint8_t x_874; 
lean_dec(x_703);
lean_dec(x_702);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_874 = !lean_is_exclusive(x_705);
if (x_874 == 0)
{
return x_705;
}
else
{
lean_object* x_875; lean_object* x_876; lean_object* x_877; 
x_875 = lean_ctor_get(x_705, 0);
x_876 = lean_ctor_get(x_705, 1);
lean_inc(x_876);
lean_inc(x_875);
lean_dec(x_705);
x_877 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_877, 0, x_875);
lean_ctor_set(x_877, 1, x_876);
return x_877;
}
}
}
else
{
uint8_t x_878; 
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_393);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_878 = !lean_is_exclusive(x_699);
if (x_878 == 0)
{
return x_699;
}
else
{
lean_object* x_879; lean_object* x_880; lean_object* x_881; 
x_879 = lean_ctor_get(x_699, 0);
x_880 = lean_ctor_get(x_699, 1);
lean_inc(x_880);
lean_inc(x_879);
lean_dec(x_699);
x_881 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_881, 0, x_879);
lean_ctor_set(x_881, 1, x_880);
return x_881;
}
}
}
}
else
{
uint8_t x_882; 
lean_dec(x_393);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_52);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_882 = !lean_is_exclusive(x_395);
if (x_882 == 0)
{
return x_395;
}
else
{
lean_object* x_883; lean_object* x_884; lean_object* x_885; 
x_883 = lean_ctor_get(x_395, 0);
x_884 = lean_ctor_get(x_395, 1);
lean_inc(x_884);
lean_inc(x_883);
lean_dec(x_395);
x_885 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_885, 0, x_883);
lean_ctor_set(x_885, 1, x_884);
return x_885;
}
}
}
}
else
{
lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; 
lean_dec(x_52);
lean_dec(x_8);
x_886 = lean_ctor_get(x_241, 1);
lean_inc(x_886);
lean_dec(x_241);
x_887 = lean_ctor_get(x_230, 0);
lean_inc(x_887);
lean_inc(x_7);
lean_inc(x_67);
lean_inc(x_82);
x_888 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__6), 8, 3);
lean_closure_set(x_888, 0, x_82);
lean_closure_set(x_888, 1, x_67);
lean_closure_set(x_888, 2, x_7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_889 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_888, x_233, x_18, x_19, x_20, x_21, x_886);
if (lean_obj_tag(x_889) == 0)
{
lean_object* x_890; lean_object* x_891; lean_object* x_892; uint8_t x_893; 
x_890 = lean_ctor_get(x_889, 0);
lean_inc(x_890);
x_891 = lean_ctor_get(x_890, 1);
lean_inc(x_891);
x_892 = lean_ctor_get(x_891, 1);
lean_inc(x_892);
x_893 = lean_unbox(x_892);
lean_dec(x_892);
if (x_893 == 0)
{
lean_dec(x_891);
lean_dec(x_890);
lean_dec(x_55);
lean_dec(x_16);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_894; lean_object* x_895; 
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_82);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_48);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_7);
x_894 = lean_ctor_get(x_889, 1);
lean_inc(x_894);
lean_dec(x_889);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_895 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_83, x_233, x_18, x_19, x_20, x_21, x_894);
if (lean_obj_tag(x_895) == 0)
{
lean_object* x_896; lean_object* x_897; uint8_t x_898; 
x_896 = lean_ctor_get(x_895, 0);
lean_inc(x_896);
x_897 = lean_ctor_get(x_896, 1);
lean_inc(x_897);
x_898 = lean_unbox(x_897);
lean_dec(x_897);
if (x_898 == 0)
{
uint8_t x_899; 
lean_dec(x_896);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_899 = !lean_is_exclusive(x_895);
if (x_899 == 0)
{
lean_object* x_900; 
x_900 = lean_ctor_get(x_895, 0);
lean_dec(x_900);
lean_ctor_set(x_895, 0, x_81);
return x_895;
}
else
{
lean_object* x_901; lean_object* x_902; 
x_901 = lean_ctor_get(x_895, 1);
lean_inc(x_901);
lean_dec(x_895);
x_902 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_902, 0, x_81);
lean_ctor_set(x_902, 1, x_901);
return x_902;
}
}
else
{
lean_object* x_903; lean_object* x_904; lean_object* x_905; 
lean_dec(x_81);
x_903 = lean_ctor_get(x_895, 1);
lean_inc(x_903);
lean_dec(x_895);
x_904 = lean_ctor_get(x_896, 0);
lean_inc(x_904);
lean_dec(x_896);
lean_inc(x_904);
lean_inc(x_6);
lean_inc(x_2);
x_905 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_10, x_904, x_18, x_19, x_20, x_21, x_903);
if (lean_obj_tag(x_905) == 0)
{
uint8_t x_906; 
x_906 = !lean_is_exclusive(x_905);
if (x_906 == 0)
{
lean_object* x_907; uint8_t x_908; 
x_907 = lean_ctor_get(x_905, 0);
x_908 = !lean_is_exclusive(x_907);
if (x_908 == 0)
{
lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; 
x_909 = lean_ctor_get(x_907, 0);
x_910 = lean_ctor_get(x_907, 1);
x_911 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_912 = l_Lean_Expr_const___override(x_911, x_1);
lean_inc(x_2);
x_913 = l_Lean_Expr_app___override(x_912, x_2);
x_914 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_915 = l_Lean_Expr_const___override(x_914, x_1);
lean_inc(x_2);
x_916 = l_Lean_Expr_app___override(x_915, x_2);
x_917 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_918 = l_Lean_Expr_const___override(x_917, x_1);
lean_inc(x_2);
x_919 = l_Lean_Expr_app___override(x_918, x_2);
x_920 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_921 = l_Lean_Expr_const___override(x_920, x_1);
lean_inc(x_2);
x_922 = l_Lean_Expr_app___override(x_921, x_2);
x_923 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_924 = l_Lean_Expr_const___override(x_923, x_1);
lean_inc(x_2);
x_925 = l_Lean_Expr_app___override(x_924, x_2);
x_926 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_927 = l_Lean_Expr_const___override(x_926, x_1);
lean_inc(x_2);
x_928 = l_Lean_Expr_app___override(x_927, x_2);
x_929 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_930 = l_Lean_Expr_const___override(x_929, x_1);
lean_inc(x_2);
x_931 = l_Lean_Expr_app___override(x_930, x_2);
lean_inc(x_9);
x_932 = l_Lean_Expr_app___override(x_931, x_9);
x_933 = l_Lean_Expr_app___override(x_928, x_932);
x_934 = l_Lean_Expr_app___override(x_925, x_933);
x_935 = l_Lean_Expr_app___override(x_922, x_934);
x_936 = l_Lean_Expr_app___override(x_919, x_935);
x_937 = l_Lean_Expr_app___override(x_916, x_936);
x_938 = l_Lean_Expr_app___override(x_913, x_937);
lean_inc(x_909);
x_939 = l_Lean_Expr_app___override(x_938, x_909);
x_940 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_941 = l_Lean_Expr_const___override(x_940, x_1);
x_942 = l_Lean_Expr_app___override(x_941, x_2);
x_943 = l_Lean_Expr_app___override(x_942, x_9);
x_944 = l_Lean_Expr_app___override(x_943, x_6);
x_945 = l_Lean_Expr_app___override(x_944, x_904);
x_946 = l_Lean_Expr_app___override(x_945, x_909);
x_947 = l_Lean_Expr_app___override(x_946, x_910);
lean_ctor_set(x_907, 1, x_947);
lean_ctor_set(x_907, 0, x_939);
return x_905;
}
else
{
lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; 
x_948 = lean_ctor_get(x_907, 0);
x_949 = lean_ctor_get(x_907, 1);
lean_inc(x_949);
lean_inc(x_948);
lean_dec(x_907);
x_950 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_951 = l_Lean_Expr_const___override(x_950, x_1);
lean_inc(x_2);
x_952 = l_Lean_Expr_app___override(x_951, x_2);
x_953 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_954 = l_Lean_Expr_const___override(x_953, x_1);
lean_inc(x_2);
x_955 = l_Lean_Expr_app___override(x_954, x_2);
x_956 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_957 = l_Lean_Expr_const___override(x_956, x_1);
lean_inc(x_2);
x_958 = l_Lean_Expr_app___override(x_957, x_2);
x_959 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_960 = l_Lean_Expr_const___override(x_959, x_1);
lean_inc(x_2);
x_961 = l_Lean_Expr_app___override(x_960, x_2);
x_962 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_963 = l_Lean_Expr_const___override(x_962, x_1);
lean_inc(x_2);
x_964 = l_Lean_Expr_app___override(x_963, x_2);
x_965 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_966 = l_Lean_Expr_const___override(x_965, x_1);
lean_inc(x_2);
x_967 = l_Lean_Expr_app___override(x_966, x_2);
x_968 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_969 = l_Lean_Expr_const___override(x_968, x_1);
lean_inc(x_2);
x_970 = l_Lean_Expr_app___override(x_969, x_2);
lean_inc(x_9);
x_971 = l_Lean_Expr_app___override(x_970, x_9);
x_972 = l_Lean_Expr_app___override(x_967, x_971);
x_973 = l_Lean_Expr_app___override(x_964, x_972);
x_974 = l_Lean_Expr_app___override(x_961, x_973);
x_975 = l_Lean_Expr_app___override(x_958, x_974);
x_976 = l_Lean_Expr_app___override(x_955, x_975);
x_977 = l_Lean_Expr_app___override(x_952, x_976);
lean_inc(x_948);
x_978 = l_Lean_Expr_app___override(x_977, x_948);
x_979 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_980 = l_Lean_Expr_const___override(x_979, x_1);
x_981 = l_Lean_Expr_app___override(x_980, x_2);
x_982 = l_Lean_Expr_app___override(x_981, x_9);
x_983 = l_Lean_Expr_app___override(x_982, x_6);
x_984 = l_Lean_Expr_app___override(x_983, x_904);
x_985 = l_Lean_Expr_app___override(x_984, x_948);
x_986 = l_Lean_Expr_app___override(x_985, x_949);
x_987 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_987, 0, x_978);
lean_ctor_set(x_987, 1, x_986);
lean_ctor_set(x_905, 0, x_987);
return x_905;
}
}
else
{
lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; 
x_988 = lean_ctor_get(x_905, 0);
x_989 = lean_ctor_get(x_905, 1);
lean_inc(x_989);
lean_inc(x_988);
lean_dec(x_905);
x_990 = lean_ctor_get(x_988, 0);
lean_inc(x_990);
x_991 = lean_ctor_get(x_988, 1);
lean_inc(x_991);
if (lean_is_exclusive(x_988)) {
 lean_ctor_release(x_988, 0);
 lean_ctor_release(x_988, 1);
 x_992 = x_988;
} else {
 lean_dec_ref(x_988);
 x_992 = lean_box(0);
}
x_993 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_994 = l_Lean_Expr_const___override(x_993, x_1);
lean_inc(x_2);
x_995 = l_Lean_Expr_app___override(x_994, x_2);
x_996 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_997 = l_Lean_Expr_const___override(x_996, x_1);
lean_inc(x_2);
x_998 = l_Lean_Expr_app___override(x_997, x_2);
x_999 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_1000 = l_Lean_Expr_const___override(x_999, x_1);
lean_inc(x_2);
x_1001 = l_Lean_Expr_app___override(x_1000, x_2);
x_1002 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_1003 = l_Lean_Expr_const___override(x_1002, x_1);
lean_inc(x_2);
x_1004 = l_Lean_Expr_app___override(x_1003, x_2);
x_1005 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_1006 = l_Lean_Expr_const___override(x_1005, x_1);
lean_inc(x_2);
x_1007 = l_Lean_Expr_app___override(x_1006, x_2);
x_1008 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_1009 = l_Lean_Expr_const___override(x_1008, x_1);
lean_inc(x_2);
x_1010 = l_Lean_Expr_app___override(x_1009, x_2);
x_1011 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_1012 = l_Lean_Expr_const___override(x_1011, x_1);
lean_inc(x_2);
x_1013 = l_Lean_Expr_app___override(x_1012, x_2);
lean_inc(x_9);
x_1014 = l_Lean_Expr_app___override(x_1013, x_9);
x_1015 = l_Lean_Expr_app___override(x_1010, x_1014);
x_1016 = l_Lean_Expr_app___override(x_1007, x_1015);
x_1017 = l_Lean_Expr_app___override(x_1004, x_1016);
x_1018 = l_Lean_Expr_app___override(x_1001, x_1017);
x_1019 = l_Lean_Expr_app___override(x_998, x_1018);
x_1020 = l_Lean_Expr_app___override(x_995, x_1019);
lean_inc(x_990);
x_1021 = l_Lean_Expr_app___override(x_1020, x_990);
x_1022 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_1023 = l_Lean_Expr_const___override(x_1022, x_1);
x_1024 = l_Lean_Expr_app___override(x_1023, x_2);
x_1025 = l_Lean_Expr_app___override(x_1024, x_9);
x_1026 = l_Lean_Expr_app___override(x_1025, x_6);
x_1027 = l_Lean_Expr_app___override(x_1026, x_904);
x_1028 = l_Lean_Expr_app___override(x_1027, x_990);
x_1029 = l_Lean_Expr_app___override(x_1028, x_991);
if (lean_is_scalar(x_992)) {
 x_1030 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1030 = x_992;
}
lean_ctor_set(x_1030, 0, x_1021);
lean_ctor_set(x_1030, 1, x_1029);
x_1031 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1031, 0, x_1030);
lean_ctor_set(x_1031, 1, x_989);
return x_1031;
}
}
else
{
uint8_t x_1032; 
lean_dec(x_904);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_1032 = !lean_is_exclusive(x_905);
if (x_1032 == 0)
{
return x_905;
}
else
{
lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; 
x_1033 = lean_ctor_get(x_905, 0);
x_1034 = lean_ctor_get(x_905, 1);
lean_inc(x_1034);
lean_inc(x_1033);
lean_dec(x_905);
x_1035 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1035, 0, x_1033);
lean_ctor_set(x_1035, 1, x_1034);
return x_1035;
}
}
}
}
else
{
uint8_t x_1036; 
lean_dec(x_81);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1036 = !lean_is_exclusive(x_895);
if (x_1036 == 0)
{
return x_895;
}
else
{
lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; 
x_1037 = lean_ctor_get(x_895, 0);
x_1038 = lean_ctor_get(x_895, 1);
lean_inc(x_1038);
lean_inc(x_1037);
lean_dec(x_895);
x_1039 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1039, 0, x_1037);
lean_ctor_set(x_1039, 1, x_1038);
return x_1039;
}
}
}
else
{
lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; 
x_1040 = lean_ctor_get(x_889, 1);
lean_inc(x_1040);
lean_dec(x_889);
x_1041 = lean_ctor_get(x_231, 0);
lean_inc(x_1041);
x_1042 = lean_ctor_get(x_231, 1);
lean_inc(x_1042);
x_1043 = lean_ctor_get(x_231, 2);
lean_inc(x_1043);
lean_dec(x_231);
lean_inc(x_7);
lean_inc(x_13);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_57);
lean_inc(x_82);
x_1044 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__4), 11, 6);
lean_closure_set(x_1044, 0, x_82);
lean_closure_set(x_1044, 1, x_57);
lean_closure_set(x_1044, 2, x_2);
lean_closure_set(x_1044, 3, x_1);
lean_closure_set(x_1044, 4, x_13);
lean_closure_set(x_1044, 5, x_7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_1045 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_1044, x_233, x_18, x_19, x_20, x_21, x_1040);
if (lean_obj_tag(x_1045) == 0)
{
lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; uint8_t x_1049; 
x_1046 = lean_ctor_get(x_1045, 0);
lean_inc(x_1046);
x_1047 = lean_ctor_get(x_1046, 1);
lean_inc(x_1047);
x_1048 = lean_ctor_get(x_1047, 1);
lean_inc(x_1048);
x_1049 = lean_unbox(x_1048);
lean_dec(x_1048);
if (x_1049 == 0)
{
lean_object* x_1050; lean_object* x_1051; 
lean_dec(x_1047);
lean_dec(x_1046);
lean_dec(x_57);
lean_dec(x_13);
x_1050 = lean_ctor_get(x_1045, 1);
lean_inc(x_1050);
lean_dec(x_1045);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_1051 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_83, x_233, x_18, x_19, x_20, x_21, x_1050);
if (lean_obj_tag(x_1051) == 0)
{
lean_object* x_1052; lean_object* x_1053; uint8_t x_1054; 
x_1052 = lean_ctor_get(x_1051, 0);
lean_inc(x_1052);
x_1053 = lean_ctor_get(x_1052, 1);
lean_inc(x_1053);
x_1054 = lean_unbox(x_1053);
lean_dec(x_1053);
if (x_1054 == 0)
{
lean_dec(x_1052);
lean_dec(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_1042) == 0)
{
if (lean_obj_tag(x_1043) == 0)
{
lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; 
x_1055 = lean_ctor_get(x_1051, 1);
lean_inc(x_1055);
lean_dec(x_1051);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_15);
x_1056 = lean_alloc_closure((void*)(l_CancelDenoms_mkProdPrf___lambda__7), 12, 7);
lean_closure_set(x_1056, 0, x_82);
lean_closure_set(x_1056, 1, x_15);
lean_closure_set(x_1056, 2, x_1);
lean_closure_set(x_1056, 3, x_5);
lean_closure_set(x_1056, 4, x_2);
lean_closure_set(x_1056, 5, x_4);
lean_closure_set(x_1056, 6, x_7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_1057 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_1056, x_233, x_18, x_19, x_20, x_21, x_1055);
if (lean_obj_tag(x_1057) == 0)
{
lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; uint8_t x_1061; 
x_1058 = lean_ctor_get(x_1057, 0);
lean_inc(x_1058);
x_1059 = lean_ctor_get(x_1058, 1);
lean_inc(x_1059);
x_1060 = lean_ctor_get(x_1059, 1);
lean_inc(x_1060);
x_1061 = lean_unbox(x_1060);
lean_dec(x_1060);
if (x_1061 == 0)
{
uint8_t x_1062; 
lean_dec(x_1059);
lean_dec(x_1058);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1062 = !lean_is_exclusive(x_1057);
if (x_1062 == 0)
{
lean_object* x_1063; 
x_1063 = lean_ctor_get(x_1057, 0);
lean_dec(x_1063);
lean_ctor_set(x_1057, 0, x_81);
return x_1057;
}
else
{
lean_object* x_1064; lean_object* x_1065; 
x_1064 = lean_ctor_get(x_1057, 1);
lean_inc(x_1064);
lean_dec(x_1057);
x_1065 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1065, 0, x_81);
lean_ctor_set(x_1065, 1, x_1064);
return x_1065;
}
}
else
{
lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; 
lean_dec(x_81);
x_1066 = lean_ctor_get(x_1057, 1);
lean_inc(x_1066);
lean_dec(x_1057);
x_1067 = lean_ctor_get(x_1058, 0);
lean_inc(x_1067);
lean_dec(x_1058);
x_1068 = lean_ctor_get(x_1059, 0);
lean_inc(x_1068);
lean_dec(x_1059);
lean_inc(x_887);
x_1069 = l_Lean_mkRawNatLit(x_887);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_5);
x_1070 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_1069, x_18, x_19, x_20, x_21, x_1066);
if (lean_obj_tag(x_1070) == 0)
{
lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; 
x_1071 = lean_ctor_get(x_1070, 0);
lean_inc(x_1071);
x_1072 = lean_ctor_get(x_1070, 1);
lean_inc(x_1072);
lean_dec(x_1070);
x_1073 = lean_ctor_get(x_1071, 0);
lean_inc(x_1073);
lean_dec(x_1071);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_1067);
lean_inc(x_1073);
lean_inc(x_887);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_5);
x_1074 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_887, x_1073, x_230, x_1067, x_18, x_19, x_20, x_21, x_1072);
if (lean_obj_tag(x_1074) == 0)
{
lean_object* x_1075; lean_object* x_1076; uint8_t x_1077; 
x_1075 = lean_ctor_get(x_1074, 0);
lean_inc(x_1075);
x_1076 = lean_ctor_get(x_1074, 1);
lean_inc(x_1076);
lean_dec(x_1074);
x_1077 = !lean_is_exclusive(x_1075);
if (x_1077 == 0)
{
lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; 
x_1078 = lean_ctor_get(x_1075, 0);
x_1079 = lean_ctor_get(x_1075, 1);
x_1080 = lean_nat_pow(x_887, x_1041);
lean_dec(x_1041);
lean_dec(x_887);
x_1081 = lean_nat_div(x_11, x_1080);
lean_dec(x_1080);
lean_dec(x_11);
x_1082 = l_Lean_mkRawNatLit(x_1081);
lean_inc(x_2);
lean_inc(x_5);
x_1083 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_1082, x_18, x_19, x_20, x_21, x_1076);
if (lean_obj_tag(x_1083) == 0)
{
lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; 
x_1084 = lean_ctor_get(x_1083, 0);
lean_inc(x_1084);
x_1085 = lean_ctor_get(x_1083, 1);
lean_inc(x_1085);
lean_dec(x_1083);
x_1086 = lean_ctor_get(x_1084, 0);
lean_inc(x_1086);
lean_dec(x_1084);
lean_inc(x_1086);
x_1087 = l_Lean_Expr_app___override(x_67, x_1086);
x_1088 = lean_box(0);
lean_inc(x_1);
x_1089 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1089, 0, x_1088);
lean_ctor_set(x_1089, 1, x_1);
lean_inc(x_5);
x_1090 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1090, 0, x_5);
lean_ctor_set(x_1090, 1, x_1089);
x_1091 = l_CancelDenoms_mkProdPrf___lambda__7___closed__3;
x_1092 = l_Lean_Expr_const___override(x_1091, x_1090);
lean_inc(x_2);
x_1093 = l_Lean_Expr_app___override(x_1092, x_2);
x_1094 = l_CancelDenoms_mkProdPrf___lambda__7___closed__2;
lean_inc(x_15);
x_1095 = l_Lean_Expr_const___override(x_1094, x_15);
lean_inc(x_1095);
x_1096 = l_Lean_Expr_app___override(x_1093, x_1095);
lean_inc(x_2);
x_1097 = l_Lean_Expr_app___override(x_1096, x_2);
x_1098 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1098, 0, x_1088);
lean_ctor_set(x_1098, 1, x_15);
x_1099 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1099, 0, x_5);
lean_ctor_set(x_1099, 1, x_1098);
x_1100 = l_CancelDenoms_mkProdPrf___lambda__7___closed__5;
x_1101 = l_Lean_Expr_const___override(x_1100, x_1099);
lean_inc(x_2);
x_1102 = l_Lean_Expr_app___override(x_1101, x_2);
x_1103 = l_Lean_Expr_app___override(x_1102, x_1095);
x_1104 = l_CancelDenoms_mkProdPrf___lambda__7___closed__8;
lean_inc(x_1);
x_1105 = l_Lean_Expr_const___override(x_1104, x_1);
lean_inc(x_2);
x_1106 = l_Lean_Expr_app___override(x_1105, x_2);
x_1107 = l_CancelDenoms_mkProdPrf___lambda__7___closed__11;
lean_inc(x_1);
x_1108 = l_Lean_Expr_const___override(x_1107, x_1);
lean_inc(x_2);
x_1109 = l_Lean_Expr_app___override(x_1108, x_2);
x_1110 = l_CancelDenoms_mkProdPrf___lambda__7___closed__14;
lean_inc(x_1);
x_1111 = l_Lean_Expr_const___override(x_1110, x_1);
lean_inc(x_2);
x_1112 = l_Lean_Expr_app___override(x_1111, x_2);
x_1113 = l_CancelDenoms_mkProdPrf___lambda__7___closed__17;
lean_inc(x_1);
x_1114 = l_Lean_Expr_const___override(x_1113, x_1);
lean_inc(x_2);
x_1115 = l_Lean_Expr_app___override(x_1114, x_2);
x_1116 = l_CancelDenoms_mkProdPrf___lambda__7___closed__19;
lean_inc(x_1);
x_1117 = l_Lean_Expr_const___override(x_1116, x_1);
lean_inc(x_2);
x_1118 = l_Lean_Expr_app___override(x_1117, x_2);
x_1119 = l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
lean_inc(x_1);
x_1120 = l_Lean_Expr_const___override(x_1119, x_1);
lean_inc(x_2);
x_1121 = l_Lean_Expr_app___override(x_1120, x_2);
x_1122 = l_Lean_Expr_app___override(x_1121, x_4);
x_1123 = l_Lean_Expr_app___override(x_1118, x_1122);
x_1124 = l_Lean_Expr_app___override(x_1115, x_1123);
x_1125 = l_Lean_Expr_app___override(x_1112, x_1124);
x_1126 = l_Lean_Expr_app___override(x_1109, x_1125);
x_1127 = l_Lean_Expr_app___override(x_1106, x_1126);
x_1128 = l_Lean_Expr_app___override(x_1103, x_1127);
x_1129 = l_Lean_Expr_app___override(x_1097, x_1128);
lean_inc(x_1073);
lean_inc(x_1129);
x_1130 = l_Lean_Expr_app___override(x_1129, x_1073);
lean_inc(x_1068);
x_1131 = l_Lean_Expr_app___override(x_1130, x_1068);
lean_inc(x_1087);
x_1132 = l_Lean_Expr_app___override(x_1087, x_1131);
x_1133 = l_Lean_Expr_app___override(x_72, x_1132);
lean_inc(x_6);
x_1134 = l_Lean_Expr_app___override(x_1133, x_6);
x_1135 = l_CancelDenoms_synthesizeUsingNormNum(x_1134, x_18, x_19, x_20, x_21, x_1085);
if (lean_obj_tag(x_1135) == 0)
{
uint8_t x_1136; 
x_1136 = !lean_is_exclusive(x_1135);
if (x_1136 == 0)
{
lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; 
x_1137 = lean_ctor_get(x_1135, 0);
lean_inc(x_1078);
x_1138 = l_Lean_Expr_app___override(x_1129, x_1078);
lean_inc(x_1068);
x_1139 = l_Lean_Expr_app___override(x_1138, x_1068);
x_1140 = l_Lean_Expr_app___override(x_1087, x_1139);
x_1141 = l_CancelDenoms_mkProdPrf___lambda__9___closed__59;
x_1142 = l_Lean_Expr_const___override(x_1141, x_1);
x_1143 = l_Lean_Expr_app___override(x_1142, x_2);
x_1144 = l_Lean_Expr_app___override(x_1143, x_48);
x_1145 = l_Lean_Expr_app___override(x_1144, x_1073);
x_1146 = l_Lean_Expr_app___override(x_1145, x_1067);
x_1147 = l_Lean_Expr_app___override(x_1146, x_1078);
x_1148 = l_Lean_Expr_app___override(x_1147, x_6);
x_1149 = l_Lean_Expr_app___override(x_1148, x_1086);
x_1150 = l_Lean_Expr_app___override(x_1149, x_1068);
x_1151 = l_Lean_Expr_app___override(x_1150, x_1079);
x_1152 = l_Lean_Expr_app___override(x_1151, x_1137);
lean_ctor_set(x_1075, 1, x_1152);
lean_ctor_set(x_1075, 0, x_1140);
lean_ctor_set(x_1135, 0, x_1075);
return x_1135;
}
else
{
lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; 
x_1153 = lean_ctor_get(x_1135, 0);
x_1154 = lean_ctor_get(x_1135, 1);
lean_inc(x_1154);
lean_inc(x_1153);
lean_dec(x_1135);
lean_inc(x_1078);
x_1155 = l_Lean_Expr_app___override(x_1129, x_1078);
lean_inc(x_1068);
x_1156 = l_Lean_Expr_app___override(x_1155, x_1068);
x_1157 = l_Lean_Expr_app___override(x_1087, x_1156);
x_1158 = l_CancelDenoms_mkProdPrf___lambda__9___closed__59;
x_1159 = l_Lean_Expr_const___override(x_1158, x_1);
x_1160 = l_Lean_Expr_app___override(x_1159, x_2);
x_1161 = l_Lean_Expr_app___override(x_1160, x_48);
x_1162 = l_Lean_Expr_app___override(x_1161, x_1073);
x_1163 = l_Lean_Expr_app___override(x_1162, x_1067);
x_1164 = l_Lean_Expr_app___override(x_1163, x_1078);
x_1165 = l_Lean_Expr_app___override(x_1164, x_6);
x_1166 = l_Lean_Expr_app___override(x_1165, x_1086);
x_1167 = l_Lean_Expr_app___override(x_1166, x_1068);
x_1168 = l_Lean_Expr_app___override(x_1167, x_1079);
x_1169 = l_Lean_Expr_app___override(x_1168, x_1153);
lean_ctor_set(x_1075, 1, x_1169);
lean_ctor_set(x_1075, 0, x_1157);
x_1170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1170, 0, x_1075);
lean_ctor_set(x_1170, 1, x_1154);
return x_1170;
}
}
else
{
uint8_t x_1171; 
lean_dec(x_1129);
lean_dec(x_1087);
lean_dec(x_1086);
lean_free_object(x_1075);
lean_dec(x_1079);
lean_dec(x_1078);
lean_dec(x_1073);
lean_dec(x_1068);
lean_dec(x_1067);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_1171 = !lean_is_exclusive(x_1135);
if (x_1171 == 0)
{
return x_1135;
}
else
{
lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; 
x_1172 = lean_ctor_get(x_1135, 0);
x_1173 = lean_ctor_get(x_1135, 1);
lean_inc(x_1173);
lean_inc(x_1172);
lean_dec(x_1135);
x_1174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1174, 0, x_1172);
lean_ctor_set(x_1174, 1, x_1173);
return x_1174;
}
}
}
else
{
uint8_t x_1175; 
lean_free_object(x_1075);
lean_dec(x_1079);
lean_dec(x_1078);
lean_dec(x_1073);
lean_dec(x_1068);
lean_dec(x_1067);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1175 = !lean_is_exclusive(x_1083);
if (x_1175 == 0)
{
return x_1083;
}
else
{
lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; 
x_1176 = lean_ctor_get(x_1083, 0);
x_1177 = lean_ctor_get(x_1083, 1);
lean_inc(x_1177);
lean_inc(x_1176);
lean_dec(x_1083);
x_1178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1178, 0, x_1176);
lean_ctor_set(x_1178, 1, x_1177);
return x_1178;
}
}
}
else
{
lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; 
x_1179 = lean_ctor_get(x_1075, 0);
x_1180 = lean_ctor_get(x_1075, 1);
lean_inc(x_1180);
lean_inc(x_1179);
lean_dec(x_1075);
x_1181 = lean_nat_pow(x_887, x_1041);
lean_dec(x_1041);
lean_dec(x_887);
x_1182 = lean_nat_div(x_11, x_1181);
lean_dec(x_1181);
lean_dec(x_11);
x_1183 = l_Lean_mkRawNatLit(x_1182);
lean_inc(x_2);
lean_inc(x_5);
x_1184 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_1183, x_18, x_19, x_20, x_21, x_1076);
if (lean_obj_tag(x_1184) == 0)
{
lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; lean_object* x_1209; lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; 
x_1185 = lean_ctor_get(x_1184, 0);
lean_inc(x_1185);
x_1186 = lean_ctor_get(x_1184, 1);
lean_inc(x_1186);
lean_dec(x_1184);
x_1187 = lean_ctor_get(x_1185, 0);
lean_inc(x_1187);
lean_dec(x_1185);
lean_inc(x_1187);
x_1188 = l_Lean_Expr_app___override(x_67, x_1187);
x_1189 = lean_box(0);
lean_inc(x_1);
x_1190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1190, 0, x_1189);
lean_ctor_set(x_1190, 1, x_1);
lean_inc(x_5);
x_1191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1191, 0, x_5);
lean_ctor_set(x_1191, 1, x_1190);
x_1192 = l_CancelDenoms_mkProdPrf___lambda__7___closed__3;
x_1193 = l_Lean_Expr_const___override(x_1192, x_1191);
lean_inc(x_2);
x_1194 = l_Lean_Expr_app___override(x_1193, x_2);
x_1195 = l_CancelDenoms_mkProdPrf___lambda__7___closed__2;
lean_inc(x_15);
x_1196 = l_Lean_Expr_const___override(x_1195, x_15);
lean_inc(x_1196);
x_1197 = l_Lean_Expr_app___override(x_1194, x_1196);
lean_inc(x_2);
x_1198 = l_Lean_Expr_app___override(x_1197, x_2);
x_1199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1199, 0, x_1189);
lean_ctor_set(x_1199, 1, x_15);
x_1200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1200, 0, x_5);
lean_ctor_set(x_1200, 1, x_1199);
x_1201 = l_CancelDenoms_mkProdPrf___lambda__7___closed__5;
x_1202 = l_Lean_Expr_const___override(x_1201, x_1200);
lean_inc(x_2);
x_1203 = l_Lean_Expr_app___override(x_1202, x_2);
x_1204 = l_Lean_Expr_app___override(x_1203, x_1196);
x_1205 = l_CancelDenoms_mkProdPrf___lambda__7___closed__8;
lean_inc(x_1);
x_1206 = l_Lean_Expr_const___override(x_1205, x_1);
lean_inc(x_2);
x_1207 = l_Lean_Expr_app___override(x_1206, x_2);
x_1208 = l_CancelDenoms_mkProdPrf___lambda__7___closed__11;
lean_inc(x_1);
x_1209 = l_Lean_Expr_const___override(x_1208, x_1);
lean_inc(x_2);
x_1210 = l_Lean_Expr_app___override(x_1209, x_2);
x_1211 = l_CancelDenoms_mkProdPrf___lambda__7___closed__14;
lean_inc(x_1);
x_1212 = l_Lean_Expr_const___override(x_1211, x_1);
lean_inc(x_2);
x_1213 = l_Lean_Expr_app___override(x_1212, x_2);
x_1214 = l_CancelDenoms_mkProdPrf___lambda__7___closed__17;
lean_inc(x_1);
x_1215 = l_Lean_Expr_const___override(x_1214, x_1);
lean_inc(x_2);
x_1216 = l_Lean_Expr_app___override(x_1215, x_2);
x_1217 = l_CancelDenoms_mkProdPrf___lambda__7___closed__19;
lean_inc(x_1);
x_1218 = l_Lean_Expr_const___override(x_1217, x_1);
lean_inc(x_2);
x_1219 = l_Lean_Expr_app___override(x_1218, x_2);
x_1220 = l_CancelDenoms_mkProdPrf___lambda__5___closed__22;
lean_inc(x_1);
x_1221 = l_Lean_Expr_const___override(x_1220, x_1);
lean_inc(x_2);
x_1222 = l_Lean_Expr_app___override(x_1221, x_2);
x_1223 = l_Lean_Expr_app___override(x_1222, x_4);
x_1224 = l_Lean_Expr_app___override(x_1219, x_1223);
x_1225 = l_Lean_Expr_app___override(x_1216, x_1224);
x_1226 = l_Lean_Expr_app___override(x_1213, x_1225);
x_1227 = l_Lean_Expr_app___override(x_1210, x_1226);
x_1228 = l_Lean_Expr_app___override(x_1207, x_1227);
x_1229 = l_Lean_Expr_app___override(x_1204, x_1228);
x_1230 = l_Lean_Expr_app___override(x_1198, x_1229);
lean_inc(x_1073);
lean_inc(x_1230);
x_1231 = l_Lean_Expr_app___override(x_1230, x_1073);
lean_inc(x_1068);
x_1232 = l_Lean_Expr_app___override(x_1231, x_1068);
lean_inc(x_1188);
x_1233 = l_Lean_Expr_app___override(x_1188, x_1232);
x_1234 = l_Lean_Expr_app___override(x_72, x_1233);
lean_inc(x_6);
x_1235 = l_Lean_Expr_app___override(x_1234, x_6);
x_1236 = l_CancelDenoms_synthesizeUsingNormNum(x_1235, x_18, x_19, x_20, x_21, x_1186);
if (lean_obj_tag(x_1236) == 0)
{
lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; 
x_1237 = lean_ctor_get(x_1236, 0);
lean_inc(x_1237);
x_1238 = lean_ctor_get(x_1236, 1);
lean_inc(x_1238);
if (lean_is_exclusive(x_1236)) {
 lean_ctor_release(x_1236, 0);
 lean_ctor_release(x_1236, 1);
 x_1239 = x_1236;
} else {
 lean_dec_ref(x_1236);
 x_1239 = lean_box(0);
}
lean_inc(x_1179);
x_1240 = l_Lean_Expr_app___override(x_1230, x_1179);
lean_inc(x_1068);
x_1241 = l_Lean_Expr_app___override(x_1240, x_1068);
x_1242 = l_Lean_Expr_app___override(x_1188, x_1241);
x_1243 = l_CancelDenoms_mkProdPrf___lambda__9___closed__59;
x_1244 = l_Lean_Expr_const___override(x_1243, x_1);
x_1245 = l_Lean_Expr_app___override(x_1244, x_2);
x_1246 = l_Lean_Expr_app___override(x_1245, x_48);
x_1247 = l_Lean_Expr_app___override(x_1246, x_1073);
x_1248 = l_Lean_Expr_app___override(x_1247, x_1067);
x_1249 = l_Lean_Expr_app___override(x_1248, x_1179);
x_1250 = l_Lean_Expr_app___override(x_1249, x_6);
x_1251 = l_Lean_Expr_app___override(x_1250, x_1187);
x_1252 = l_Lean_Expr_app___override(x_1251, x_1068);
x_1253 = l_Lean_Expr_app___override(x_1252, x_1180);
x_1254 = l_Lean_Expr_app___override(x_1253, x_1237);
x_1255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1255, 0, x_1242);
lean_ctor_set(x_1255, 1, x_1254);
if (lean_is_scalar(x_1239)) {
 x_1256 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1256 = x_1239;
}
lean_ctor_set(x_1256, 0, x_1255);
lean_ctor_set(x_1256, 1, x_1238);
return x_1256;
}
else
{
lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; 
lean_dec(x_1230);
lean_dec(x_1188);
lean_dec(x_1187);
lean_dec(x_1180);
lean_dec(x_1179);
lean_dec(x_1073);
lean_dec(x_1068);
lean_dec(x_1067);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_1257 = lean_ctor_get(x_1236, 0);
lean_inc(x_1257);
x_1258 = lean_ctor_get(x_1236, 1);
lean_inc(x_1258);
if (lean_is_exclusive(x_1236)) {
 lean_ctor_release(x_1236, 0);
 lean_ctor_release(x_1236, 1);
 x_1259 = x_1236;
} else {
 lean_dec_ref(x_1236);
 x_1259 = lean_box(0);
}
if (lean_is_scalar(x_1259)) {
 x_1260 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1260 = x_1259;
}
lean_ctor_set(x_1260, 0, x_1257);
lean_ctor_set(x_1260, 1, x_1258);
return x_1260;
}
}
else
{
lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; 
lean_dec(x_1180);
lean_dec(x_1179);
lean_dec(x_1073);
lean_dec(x_1068);
lean_dec(x_1067);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1261 = lean_ctor_get(x_1184, 0);
lean_inc(x_1261);
x_1262 = lean_ctor_get(x_1184, 1);
lean_inc(x_1262);
if (lean_is_exclusive(x_1184)) {
 lean_ctor_release(x_1184, 0);
 lean_ctor_release(x_1184, 1);
 x_1263 = x_1184;
} else {
 lean_dec_ref(x_1184);
 x_1263 = lean_box(0);
}
if (lean_is_scalar(x_1263)) {
 x_1264 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1264 = x_1263;
}
lean_ctor_set(x_1264, 0, x_1261);
lean_ctor_set(x_1264, 1, x_1262);
return x_1264;
}
}
}
else
{
uint8_t x_1265; 
lean_dec(x_1073);
lean_dec(x_1068);
lean_dec(x_1067);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1265 = !lean_is_exclusive(x_1074);
if (x_1265 == 0)
{
return x_1074;
}
else
{
lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; 
x_1266 = lean_ctor_get(x_1074, 0);
x_1267 = lean_ctor_get(x_1074, 1);
lean_inc(x_1267);
lean_inc(x_1266);
lean_dec(x_1074);
x_1268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1268, 0, x_1266);
lean_ctor_set(x_1268, 1, x_1267);
return x_1268;
}
}
}
else
{
uint8_t x_1269; 
lean_dec(x_1068);
lean_dec(x_1067);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1269 = !lean_is_exclusive(x_1070);
if (x_1269 == 0)
{
return x_1070;
}
else
{
lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; 
x_1270 = lean_ctor_get(x_1070, 0);
x_1271 = lean_ctor_get(x_1070, 1);
lean_inc(x_1271);
lean_inc(x_1270);
lean_dec(x_1070);
x_1272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1272, 0, x_1270);
lean_ctor_set(x_1272, 1, x_1271);
return x_1272;
}
}
}
}
else
{
uint8_t x_1273; 
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1273 = !lean_is_exclusive(x_1057);
if (x_1273 == 0)
{
return x_1057;
}
else
{
lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; 
x_1274 = lean_ctor_get(x_1057, 0);
x_1275 = lean_ctor_get(x_1057, 1);
lean_inc(x_1275);
lean_inc(x_1274);
lean_dec(x_1057);
x_1276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1276, 0, x_1274);
lean_ctor_set(x_1276, 1, x_1275);
return x_1276;
}
}
}
else
{
uint8_t x_1277; 
lean_dec(x_1043);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_82);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1277 = !lean_is_exclusive(x_1051);
if (x_1277 == 0)
{
lean_object* x_1278; 
x_1278 = lean_ctor_get(x_1051, 0);
lean_dec(x_1278);
lean_ctor_set(x_1051, 0, x_81);
return x_1051;
}
else
{
lean_object* x_1279; lean_object* x_1280; 
x_1279 = lean_ctor_get(x_1051, 1);
lean_inc(x_1279);
lean_dec(x_1051);
x_1280 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1280, 0, x_81);
lean_ctor_set(x_1280, 1, x_1279);
return x_1280;
}
}
}
else
{
uint8_t x_1281; 
lean_dec(x_1043);
lean_dec(x_1042);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_82);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1281 = !lean_is_exclusive(x_1051);
if (x_1281 == 0)
{
lean_object* x_1282; 
x_1282 = lean_ctor_get(x_1051, 0);
lean_dec(x_1282);
lean_ctor_set(x_1051, 0, x_81);
return x_1051;
}
else
{
lean_object* x_1283; lean_object* x_1284; 
x_1283 = lean_ctor_get(x_1051, 1);
lean_inc(x_1283);
lean_dec(x_1051);
x_1284 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1284, 0, x_81);
lean_ctor_set(x_1284, 1, x_1283);
return x_1284;
}
}
}
else
{
lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; 
lean_dec(x_1043);
lean_dec(x_1042);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_7);
x_1285 = lean_ctor_get(x_1051, 1);
lean_inc(x_1285);
lean_dec(x_1051);
x_1286 = lean_ctor_get(x_1052, 0);
lean_inc(x_1286);
lean_dec(x_1052);
lean_inc(x_1286);
lean_inc(x_6);
lean_inc(x_2);
x_1287 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_10, x_1286, x_18, x_19, x_20, x_21, x_1285);
if (lean_obj_tag(x_1287) == 0)
{
uint8_t x_1288; 
x_1288 = !lean_is_exclusive(x_1287);
if (x_1288 == 0)
{
lean_object* x_1289; uint8_t x_1290; 
x_1289 = lean_ctor_get(x_1287, 0);
x_1290 = !lean_is_exclusive(x_1289);
if (x_1290 == 0)
{
lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; lean_object* x_1316; lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; 
x_1291 = lean_ctor_get(x_1289, 0);
x_1292 = lean_ctor_get(x_1289, 1);
x_1293 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_1294 = l_Lean_Expr_const___override(x_1293, x_1);
lean_inc(x_2);
x_1295 = l_Lean_Expr_app___override(x_1294, x_2);
x_1296 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_1297 = l_Lean_Expr_const___override(x_1296, x_1);
lean_inc(x_2);
x_1298 = l_Lean_Expr_app___override(x_1297, x_2);
x_1299 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_1300 = l_Lean_Expr_const___override(x_1299, x_1);
lean_inc(x_2);
x_1301 = l_Lean_Expr_app___override(x_1300, x_2);
x_1302 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_1303 = l_Lean_Expr_const___override(x_1302, x_1);
lean_inc(x_2);
x_1304 = l_Lean_Expr_app___override(x_1303, x_2);
x_1305 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_1306 = l_Lean_Expr_const___override(x_1305, x_1);
lean_inc(x_2);
x_1307 = l_Lean_Expr_app___override(x_1306, x_2);
x_1308 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_1309 = l_Lean_Expr_const___override(x_1308, x_1);
lean_inc(x_2);
x_1310 = l_Lean_Expr_app___override(x_1309, x_2);
x_1311 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_1312 = l_Lean_Expr_const___override(x_1311, x_1);
lean_inc(x_2);
x_1313 = l_Lean_Expr_app___override(x_1312, x_2);
lean_inc(x_9);
x_1314 = l_Lean_Expr_app___override(x_1313, x_9);
x_1315 = l_Lean_Expr_app___override(x_1310, x_1314);
x_1316 = l_Lean_Expr_app___override(x_1307, x_1315);
x_1317 = l_Lean_Expr_app___override(x_1304, x_1316);
x_1318 = l_Lean_Expr_app___override(x_1301, x_1317);
x_1319 = l_Lean_Expr_app___override(x_1298, x_1318);
x_1320 = l_Lean_Expr_app___override(x_1295, x_1319);
lean_inc(x_1291);
x_1321 = l_Lean_Expr_app___override(x_1320, x_1291);
x_1322 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_1323 = l_Lean_Expr_const___override(x_1322, x_1);
x_1324 = l_Lean_Expr_app___override(x_1323, x_2);
x_1325 = l_Lean_Expr_app___override(x_1324, x_9);
x_1326 = l_Lean_Expr_app___override(x_1325, x_6);
x_1327 = l_Lean_Expr_app___override(x_1326, x_1286);
x_1328 = l_Lean_Expr_app___override(x_1327, x_1291);
x_1329 = l_Lean_Expr_app___override(x_1328, x_1292);
lean_ctor_set(x_1289, 1, x_1329);
lean_ctor_set(x_1289, 0, x_1321);
return x_1287;
}
else
{
lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; 
x_1330 = lean_ctor_get(x_1289, 0);
x_1331 = lean_ctor_get(x_1289, 1);
lean_inc(x_1331);
lean_inc(x_1330);
lean_dec(x_1289);
x_1332 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_1333 = l_Lean_Expr_const___override(x_1332, x_1);
lean_inc(x_2);
x_1334 = l_Lean_Expr_app___override(x_1333, x_2);
x_1335 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_1336 = l_Lean_Expr_const___override(x_1335, x_1);
lean_inc(x_2);
x_1337 = l_Lean_Expr_app___override(x_1336, x_2);
x_1338 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_1339 = l_Lean_Expr_const___override(x_1338, x_1);
lean_inc(x_2);
x_1340 = l_Lean_Expr_app___override(x_1339, x_2);
x_1341 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_1342 = l_Lean_Expr_const___override(x_1341, x_1);
lean_inc(x_2);
x_1343 = l_Lean_Expr_app___override(x_1342, x_2);
x_1344 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_1345 = l_Lean_Expr_const___override(x_1344, x_1);
lean_inc(x_2);
x_1346 = l_Lean_Expr_app___override(x_1345, x_2);
x_1347 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_1348 = l_Lean_Expr_const___override(x_1347, x_1);
lean_inc(x_2);
x_1349 = l_Lean_Expr_app___override(x_1348, x_2);
x_1350 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_1351 = l_Lean_Expr_const___override(x_1350, x_1);
lean_inc(x_2);
x_1352 = l_Lean_Expr_app___override(x_1351, x_2);
lean_inc(x_9);
x_1353 = l_Lean_Expr_app___override(x_1352, x_9);
x_1354 = l_Lean_Expr_app___override(x_1349, x_1353);
x_1355 = l_Lean_Expr_app___override(x_1346, x_1354);
x_1356 = l_Lean_Expr_app___override(x_1343, x_1355);
x_1357 = l_Lean_Expr_app___override(x_1340, x_1356);
x_1358 = l_Lean_Expr_app___override(x_1337, x_1357);
x_1359 = l_Lean_Expr_app___override(x_1334, x_1358);
lean_inc(x_1330);
x_1360 = l_Lean_Expr_app___override(x_1359, x_1330);
x_1361 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_1362 = l_Lean_Expr_const___override(x_1361, x_1);
x_1363 = l_Lean_Expr_app___override(x_1362, x_2);
x_1364 = l_Lean_Expr_app___override(x_1363, x_9);
x_1365 = l_Lean_Expr_app___override(x_1364, x_6);
x_1366 = l_Lean_Expr_app___override(x_1365, x_1286);
x_1367 = l_Lean_Expr_app___override(x_1366, x_1330);
x_1368 = l_Lean_Expr_app___override(x_1367, x_1331);
x_1369 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1369, 0, x_1360);
lean_ctor_set(x_1369, 1, x_1368);
lean_ctor_set(x_1287, 0, x_1369);
return x_1287;
}
}
else
{
lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; lean_object* x_1392; lean_object* x_1393; lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; lean_object* x_1403; lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; 
x_1370 = lean_ctor_get(x_1287, 0);
x_1371 = lean_ctor_get(x_1287, 1);
lean_inc(x_1371);
lean_inc(x_1370);
lean_dec(x_1287);
x_1372 = lean_ctor_get(x_1370, 0);
lean_inc(x_1372);
x_1373 = lean_ctor_get(x_1370, 1);
lean_inc(x_1373);
if (lean_is_exclusive(x_1370)) {
 lean_ctor_release(x_1370, 0);
 lean_ctor_release(x_1370, 1);
 x_1374 = x_1370;
} else {
 lean_dec_ref(x_1370);
 x_1374 = lean_box(0);
}
x_1375 = l_CancelDenoms_mkProdPrf___lambda__1___closed__1;
lean_inc(x_1);
x_1376 = l_Lean_Expr_const___override(x_1375, x_1);
lean_inc(x_2);
x_1377 = l_Lean_Expr_app___override(x_1376, x_2);
x_1378 = l_CancelDenoms_mkProdPrf___lambda__1___closed__4;
lean_inc(x_1);
x_1379 = l_Lean_Expr_const___override(x_1378, x_1);
lean_inc(x_2);
x_1380 = l_Lean_Expr_app___override(x_1379, x_2);
x_1381 = l_CancelDenoms_mkProdPrf___lambda__1___closed__7;
lean_inc(x_1);
x_1382 = l_Lean_Expr_const___override(x_1381, x_1);
lean_inc(x_2);
x_1383 = l_Lean_Expr_app___override(x_1382, x_2);
x_1384 = l_CancelDenoms_mkProdPrf___lambda__1___closed__10;
lean_inc(x_1);
x_1385 = l_Lean_Expr_const___override(x_1384, x_1);
lean_inc(x_2);
x_1386 = l_Lean_Expr_app___override(x_1385, x_2);
x_1387 = l_CancelDenoms_mkProdPrf___lambda__1___closed__13;
lean_inc(x_1);
x_1388 = l_Lean_Expr_const___override(x_1387, x_1);
lean_inc(x_2);
x_1389 = l_Lean_Expr_app___override(x_1388, x_2);
x_1390 = l_CancelDenoms_mkProdPrf___lambda__1___closed__16;
lean_inc(x_1);
x_1391 = l_Lean_Expr_const___override(x_1390, x_1);
lean_inc(x_2);
x_1392 = l_Lean_Expr_app___override(x_1391, x_2);
x_1393 = l_CancelDenoms_mkProdPrf___lambda__1___closed__19;
lean_inc(x_1);
x_1394 = l_Lean_Expr_const___override(x_1393, x_1);
lean_inc(x_2);
x_1395 = l_Lean_Expr_app___override(x_1394, x_2);
lean_inc(x_9);
x_1396 = l_Lean_Expr_app___override(x_1395, x_9);
x_1397 = l_Lean_Expr_app___override(x_1392, x_1396);
x_1398 = l_Lean_Expr_app___override(x_1389, x_1397);
x_1399 = l_Lean_Expr_app___override(x_1386, x_1398);
x_1400 = l_Lean_Expr_app___override(x_1383, x_1399);
x_1401 = l_Lean_Expr_app___override(x_1380, x_1400);
x_1402 = l_Lean_Expr_app___override(x_1377, x_1401);
lean_inc(x_1372);
x_1403 = l_Lean_Expr_app___override(x_1402, x_1372);
x_1404 = l_CancelDenoms_mkProdPrf___lambda__9___closed__30;
x_1405 = l_Lean_Expr_const___override(x_1404, x_1);
x_1406 = l_Lean_Expr_app___override(x_1405, x_2);
x_1407 = l_Lean_Expr_app___override(x_1406, x_9);
x_1408 = l_Lean_Expr_app___override(x_1407, x_6);
x_1409 = l_Lean_Expr_app___override(x_1408, x_1286);
x_1410 = l_Lean_Expr_app___override(x_1409, x_1372);
x_1411 = l_Lean_Expr_app___override(x_1410, x_1373);
if (lean_is_scalar(x_1374)) {
 x_1412 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1412 = x_1374;
}
lean_ctor_set(x_1412, 0, x_1403);
lean_ctor_set(x_1412, 1, x_1411);
x_1413 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1413, 0, x_1412);
lean_ctor_set(x_1413, 1, x_1371);
return x_1413;
}
}
else
{
uint8_t x_1414; 
lean_dec(x_1286);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_1414 = !lean_is_exclusive(x_1287);
if (x_1414 == 0)
{
return x_1287;
}
else
{
lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; 
x_1415 = lean_ctor_get(x_1287, 0);
x_1416 = lean_ctor_get(x_1287, 1);
lean_inc(x_1416);
lean_inc(x_1415);
lean_dec(x_1287);
x_1417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1417, 0, x_1415);
lean_ctor_set(x_1417, 1, x_1416);
return x_1417;
}
}
}
}
else
{
uint8_t x_1418; 
lean_dec(x_1043);
lean_dec(x_1042);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1418 = !lean_is_exclusive(x_1051);
if (x_1418 == 0)
{
return x_1051;
}
else
{
lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; 
x_1419 = lean_ctor_get(x_1051, 0);
x_1420 = lean_ctor_get(x_1051, 1);
lean_inc(x_1420);
lean_inc(x_1419);
lean_dec(x_1051);
x_1421 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1421, 0, x_1419);
lean_ctor_set(x_1421, 1, x_1420);
return x_1421;
}
}
}
else
{
lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; 
lean_dec(x_1043);
lean_dec(x_1042);
lean_dec(x_887);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_48);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_1422 = lean_ctor_get(x_1045, 1);
lean_inc(x_1422);
lean_dec(x_1045);
x_1423 = lean_ctor_get(x_1046, 0);
lean_inc(x_1423);
lean_dec(x_1046);
x_1424 = lean_ctor_get(x_1047, 0);
lean_inc(x_1424);
lean_dec(x_1047);
lean_inc(x_1041);
x_1425 = l_Lean_mkRawNatLit(x_1041);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_5);
x_1426 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_1425, x_18, x_19, x_20, x_21, x_1422);
if (lean_obj_tag(x_1426) == 0)
{
lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; 
x_1427 = lean_ctor_get(x_1426, 0);
lean_inc(x_1427);
x_1428 = lean_ctor_get(x_1426, 1);
lean_inc(x_1428);
lean_dec(x_1426);
x_1429 = lean_ctor_get(x_1427, 0);
lean_inc(x_1429);
lean_dec(x_1427);
x_1430 = lean_nat_div(x_11, x_1041);
lean_dec(x_1041);
lean_dec(x_11);
lean_inc(x_1430);
x_1431 = l_Lean_mkRawNatLit(x_1430);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_5);
x_1432 = l_Mathlib_Meta_NormNum_mkOfNat(x_5, x_2, x_14, x_1431, x_18, x_19, x_20, x_21, x_1428);
if (lean_obj_tag(x_1432) == 0)
{
lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; 
x_1433 = lean_ctor_get(x_1432, 0);
lean_inc(x_1433);
x_1434 = lean_ctor_get(x_1432, 1);
lean_inc(x_1434);
lean_dec(x_1432);
x_1435 = lean_ctor_get(x_1433, 0);
lean_inc(x_1435);
lean_dec(x_1433);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_1423);
lean_inc(x_1435);
lean_inc(x_4);
lean_inc(x_2);
x_1436 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_1430, x_1435, x_230, x_1423, x_18, x_19, x_20, x_21, x_1434);
if (lean_obj_tag(x_1436) == 0)
{
lean_object* x_1437; lean_object* x_1438; uint8_t x_1439; 
x_1437 = lean_ctor_get(x_1436, 0);
lean_inc(x_1437);
x_1438 = lean_ctor_get(x_1436, 1);
lean_inc(x_1438);
lean_dec(x_1436);
x_1439 = !lean_is_exclusive(x_1437);
if (x_1439 == 0)
{
lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; lean_object* x_1477; lean_object* x_1478; 
x_1440 = lean_ctor_get(x_1437, 0);
x_1441 = lean_ctor_get(x_1437, 1);
x_1442 = l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
x_1443 = l_Lean_Expr_const___override(x_1442, x_57);
lean_inc(x_2);
x_1444 = l_Lean_Expr_app___override(x_1443, x_2);
lean_inc(x_2);
x_1445 = l_Lean_Expr_app___override(x_1444, x_2);
lean_inc(x_2);
x_1446 = l_Lean_Expr_app___override(x_1445, x_2);
x_1447 = l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
lean_inc(x_1);
x_1448 = l_Lean_Expr_const___override(x_1447, x_1);
lean_inc(x_2);
x_1449 = l_Lean_Expr_app___override(x_1448, x_2);
x_1450 = l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
lean_inc(x_1);
x_1451 = l_Lean_Expr_const___override(x_1450, x_1);
lean_inc(x_2);
x_1452 = l_Lean_Expr_app___override(x_1451, x_2);
x_1453 = l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
lean_inc(x_1);
x_1454 = l_Lean_Expr_const___override(x_1453, x_1);
lean_inc(x_2);
x_1455 = l_Lean_Expr_app___override(x_1454, x_2);
x_1456 = l_Lean_Expr_app___override(x_1455, x_13);
x_1457 = l_Lean_Expr_app___override(x_1452, x_1456);
x_1458 = l_Lean_Expr_app___override(x_1449, x_1457);
x_1459 = l_Lean_Expr_app___override(x_1446, x_1458);
lean_inc(x_1429);
x_1460 = l_Lean_Expr_app___override(x_1459, x_1429);
lean_inc(x_1424);
x_1461 = l_Lean_Expr_app___override(x_1460, x_1424);
lean_inc(x_72);
x_1462 = l_Lean_Expr_app___override(x_72, x_1461);
x_1463 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_1);
x_1464 = l_Lean_Expr_const___override(x_1463, x_1);
lean_inc(x_2);
x_1465 = l_Lean_Expr_app___override(x_1464, x_2);
x_1466 = l_CancelDenoms_mkProdPrf___lambda__9___closed__49;
x_1467 = l_Lean_Expr_app___override(x_1465, x_1466);
x_1468 = l_CancelDenoms_mkProdPrf___lambda__9___closed__52;
lean_inc(x_1);
x_1469 = l_Lean_Expr_const___override(x_1468, x_1);
lean_inc(x_2);
x_1470 = l_Lean_Expr_app___override(x_1469, x_2);
x_1471 = l_CancelDenoms_mkProdPrf___lambda__9___closed__55;
lean_inc(x_1);
x_1472 = l_Lean_Expr_const___override(x_1471, x_1);
lean_inc(x_2);
x_1473 = l_Lean_Expr_app___override(x_1472, x_2);
x_1474 = l_Lean_Expr_app___override(x_1473, x_14);
x_1475 = l_Lean_Expr_app___override(x_1470, x_1474);
x_1476 = l_Lean_Expr_app___override(x_1467, x_1475);
x_1477 = l_Lean_Expr_app___override(x_1462, x_1476);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_1478 = l_CancelDenoms_synthesizeUsingNormNum(x_1477, x_18, x_19, x_20, x_21, x_1438);
if (lean_obj_tag(x_1478) == 0)
{
lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; 
x_1479 = lean_ctor_get(x_1478, 0);
lean_inc(x_1479);
x_1480 = lean_ctor_get(x_1478, 1);
lean_inc(x_1480);
lean_dec(x_1478);
lean_inc(x_1435);
x_1481 = l_Lean_Expr_app___override(x_67, x_1435);
lean_inc(x_1429);
x_1482 = l_Lean_Expr_app___override(x_1481, x_1429);
x_1483 = l_Lean_Expr_app___override(x_72, x_1482);
lean_inc(x_6);
x_1484 = l_Lean_Expr_app___override(x_1483, x_6);
x_1485 = l_CancelDenoms_synthesizeUsingNormNum(x_1484, x_18, x_19, x_20, x_21, x_1480);
if (lean_obj_tag(x_1485) == 0)
{
uint8_t x_1486; 
x_1486 = !lean_is_exclusive(x_1485);
if (x_1486 == 0)
{
lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; 
x_1487 = lean_ctor_get(x_1485, 0);
x_1488 = l_CancelDenoms_mkProdPrf___lambda__9___closed__57;
x_1489 = l_Lean_Expr_const___override(x_1488, x_1);
x_1490 = l_Lean_Expr_app___override(x_1489, x_2);
x_1491 = l_Lean_Expr_app___override(x_1490, x_4);
x_1492 = l_Lean_Expr_app___override(x_1491, x_1435);
x_1493 = l_Lean_Expr_app___override(x_1492, x_1429);
x_1494 = l_Lean_Expr_app___override(x_1493, x_6);
x_1495 = l_Lean_Expr_app___override(x_1494, x_1423);
x_1496 = l_Lean_Expr_app___override(x_1495, x_1424);
lean_inc(x_1440);
x_1497 = l_Lean_Expr_app___override(x_1496, x_1440);
x_1498 = l_Lean_Expr_app___override(x_1497, x_1441);
x_1499 = l_Lean_Expr_app___override(x_1498, x_1479);
x_1500 = l_Lean_Expr_app___override(x_1499, x_1487);
lean_ctor_set(x_1437, 1, x_1500);
lean_ctor_set(x_1485, 0, x_1437);
return x_1485;
}
else
{
lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; 
x_1501 = lean_ctor_get(x_1485, 0);
x_1502 = lean_ctor_get(x_1485, 1);
lean_inc(x_1502);
lean_inc(x_1501);
lean_dec(x_1485);
x_1503 = l_CancelDenoms_mkProdPrf___lambda__9___closed__57;
x_1504 = l_Lean_Expr_const___override(x_1503, x_1);
x_1505 = l_Lean_Expr_app___override(x_1504, x_2);
x_1506 = l_Lean_Expr_app___override(x_1505, x_4);
x_1507 = l_Lean_Expr_app___override(x_1506, x_1435);
x_1508 = l_Lean_Expr_app___override(x_1507, x_1429);
x_1509 = l_Lean_Expr_app___override(x_1508, x_6);
x_1510 = l_Lean_Expr_app___override(x_1509, x_1423);
x_1511 = l_Lean_Expr_app___override(x_1510, x_1424);
lean_inc(x_1440);
x_1512 = l_Lean_Expr_app___override(x_1511, x_1440);
x_1513 = l_Lean_Expr_app___override(x_1512, x_1441);
x_1514 = l_Lean_Expr_app___override(x_1513, x_1479);
x_1515 = l_Lean_Expr_app___override(x_1514, x_1501);
lean_ctor_set(x_1437, 1, x_1515);
x_1516 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1516, 0, x_1437);
lean_ctor_set(x_1516, 1, x_1502);
return x_1516;
}
}
else
{
uint8_t x_1517; 
lean_dec(x_1479);
lean_free_object(x_1437);
lean_dec(x_1441);
lean_dec(x_1440);
lean_dec(x_1435);
lean_dec(x_1429);
lean_dec(x_1424);
lean_dec(x_1423);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1517 = !lean_is_exclusive(x_1485);
if (x_1517 == 0)
{
return x_1485;
}
else
{
lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; 
x_1518 = lean_ctor_get(x_1485, 0);
x_1519 = lean_ctor_get(x_1485, 1);
lean_inc(x_1519);
lean_inc(x_1518);
lean_dec(x_1485);
x_1520 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1520, 0, x_1518);
lean_ctor_set(x_1520, 1, x_1519);
return x_1520;
}
}
}
else
{
uint8_t x_1521; 
lean_free_object(x_1437);
lean_dec(x_1441);
lean_dec(x_1440);
lean_dec(x_1435);
lean_dec(x_1429);
lean_dec(x_1424);
lean_dec(x_1423);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1521 = !lean_is_exclusive(x_1478);
if (x_1521 == 0)
{
return x_1478;
}
else
{
lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; 
x_1522 = lean_ctor_get(x_1478, 0);
x_1523 = lean_ctor_get(x_1478, 1);
lean_inc(x_1523);
lean_inc(x_1522);
lean_dec(x_1478);
x_1524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1524, 0, x_1522);
lean_ctor_set(x_1524, 1, x_1523);
return x_1524;
}
}
}
else
{
lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; lean_object* x_1548; lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; lean_object* x_1552; lean_object* x_1553; lean_object* x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; lean_object* x_1562; lean_object* x_1563; 
x_1525 = lean_ctor_get(x_1437, 0);
x_1526 = lean_ctor_get(x_1437, 1);
lean_inc(x_1526);
lean_inc(x_1525);
lean_dec(x_1437);
x_1527 = l_CancelDenoms_mkProdPrf___lambda__4___closed__1;
x_1528 = l_Lean_Expr_const___override(x_1527, x_57);
lean_inc(x_2);
x_1529 = l_Lean_Expr_app___override(x_1528, x_2);
lean_inc(x_2);
x_1530 = l_Lean_Expr_app___override(x_1529, x_2);
lean_inc(x_2);
x_1531 = l_Lean_Expr_app___override(x_1530, x_2);
x_1532 = l_CancelDenoms_mkProdPrf___lambda__4___closed__3;
lean_inc(x_1);
x_1533 = l_Lean_Expr_const___override(x_1532, x_1);
lean_inc(x_2);
x_1534 = l_Lean_Expr_app___override(x_1533, x_2);
x_1535 = l_CancelDenoms_mkProdPrf___lambda__4___closed__6;
lean_inc(x_1);
x_1536 = l_Lean_Expr_const___override(x_1535, x_1);
lean_inc(x_2);
x_1537 = l_Lean_Expr_app___override(x_1536, x_2);
x_1538 = l_CancelDenoms_mkProdPrf___lambda__4___closed__9;
lean_inc(x_1);
x_1539 = l_Lean_Expr_const___override(x_1538, x_1);
lean_inc(x_2);
x_1540 = l_Lean_Expr_app___override(x_1539, x_2);
x_1541 = l_Lean_Expr_app___override(x_1540, x_13);
x_1542 = l_Lean_Expr_app___override(x_1537, x_1541);
x_1543 = l_Lean_Expr_app___override(x_1534, x_1542);
x_1544 = l_Lean_Expr_app___override(x_1531, x_1543);
lean_inc(x_1429);
x_1545 = l_Lean_Expr_app___override(x_1544, x_1429);
lean_inc(x_1424);
x_1546 = l_Lean_Expr_app___override(x_1545, x_1424);
lean_inc(x_72);
x_1547 = l_Lean_Expr_app___override(x_72, x_1546);
x_1548 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_1);
x_1549 = l_Lean_Expr_const___override(x_1548, x_1);
lean_inc(x_2);
x_1550 = l_Lean_Expr_app___override(x_1549, x_2);
x_1551 = l_CancelDenoms_mkProdPrf___lambda__9___closed__49;
x_1552 = l_Lean_Expr_app___override(x_1550, x_1551);
x_1553 = l_CancelDenoms_mkProdPrf___lambda__9___closed__52;
lean_inc(x_1);
x_1554 = l_Lean_Expr_const___override(x_1553, x_1);
lean_inc(x_2);
x_1555 = l_Lean_Expr_app___override(x_1554, x_2);
x_1556 = l_CancelDenoms_mkProdPrf___lambda__9___closed__55;
lean_inc(x_1);
x_1557 = l_Lean_Expr_const___override(x_1556, x_1);
lean_inc(x_2);
x_1558 = l_Lean_Expr_app___override(x_1557, x_2);
x_1559 = l_Lean_Expr_app___override(x_1558, x_14);
x_1560 = l_Lean_Expr_app___override(x_1555, x_1559);
x_1561 = l_Lean_Expr_app___override(x_1552, x_1560);
x_1562 = l_Lean_Expr_app___override(x_1547, x_1561);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_1563 = l_CancelDenoms_synthesizeUsingNormNum(x_1562, x_18, x_19, x_20, x_21, x_1438);
if (lean_obj_tag(x_1563) == 0)
{
lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; lean_object* x_1567; lean_object* x_1568; lean_object* x_1569; lean_object* x_1570; 
x_1564 = lean_ctor_get(x_1563, 0);
lean_inc(x_1564);
x_1565 = lean_ctor_get(x_1563, 1);
lean_inc(x_1565);
lean_dec(x_1563);
lean_inc(x_1435);
x_1566 = l_Lean_Expr_app___override(x_67, x_1435);
lean_inc(x_1429);
x_1567 = l_Lean_Expr_app___override(x_1566, x_1429);
x_1568 = l_Lean_Expr_app___override(x_72, x_1567);
lean_inc(x_6);
x_1569 = l_Lean_Expr_app___override(x_1568, x_6);
x_1570 = l_CancelDenoms_synthesizeUsingNormNum(x_1569, x_18, x_19, x_20, x_21, x_1565);
if (lean_obj_tag(x_1570) == 0)
{
lean_object* x_1571; lean_object* x_1572; lean_object* x_1573; lean_object* x_1574; lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; lean_object* x_1578; lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; lean_object* x_1582; lean_object* x_1583; lean_object* x_1584; lean_object* x_1585; lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; 
x_1571 = lean_ctor_get(x_1570, 0);
lean_inc(x_1571);
x_1572 = lean_ctor_get(x_1570, 1);
lean_inc(x_1572);
if (lean_is_exclusive(x_1570)) {
 lean_ctor_release(x_1570, 0);
 lean_ctor_release(x_1570, 1);
 x_1573 = x_1570;
} else {
 lean_dec_ref(x_1570);
 x_1573 = lean_box(0);
}
x_1574 = l_CancelDenoms_mkProdPrf___lambda__9___closed__57;
x_1575 = l_Lean_Expr_const___override(x_1574, x_1);
x_1576 = l_Lean_Expr_app___override(x_1575, x_2);
x_1577 = l_Lean_Expr_app___override(x_1576, x_4);
x_1578 = l_Lean_Expr_app___override(x_1577, x_1435);
x_1579 = l_Lean_Expr_app___override(x_1578, x_1429);
x_1580 = l_Lean_Expr_app___override(x_1579, x_6);
x_1581 = l_Lean_Expr_app___override(x_1580, x_1423);
x_1582 = l_Lean_Expr_app___override(x_1581, x_1424);
lean_inc(x_1525);
x_1583 = l_Lean_Expr_app___override(x_1582, x_1525);
x_1584 = l_Lean_Expr_app___override(x_1583, x_1526);
x_1585 = l_Lean_Expr_app___override(x_1584, x_1564);
x_1586 = l_Lean_Expr_app___override(x_1585, x_1571);
x_1587 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1587, 0, x_1525);
lean_ctor_set(x_1587, 1, x_1586);
if (lean_is_scalar(x_1573)) {
 x_1588 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1588 = x_1573;
}
lean_ctor_set(x_1588, 0, x_1587);
lean_ctor_set(x_1588, 1, x_1572);
return x_1588;
}
else
{
lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; lean_object* x_1592; 
lean_dec(x_1564);
lean_dec(x_1526);
lean_dec(x_1525);
lean_dec(x_1435);
lean_dec(x_1429);
lean_dec(x_1424);
lean_dec(x_1423);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1589 = lean_ctor_get(x_1570, 0);
lean_inc(x_1589);
x_1590 = lean_ctor_get(x_1570, 1);
lean_inc(x_1590);
if (lean_is_exclusive(x_1570)) {
 lean_ctor_release(x_1570, 0);
 lean_ctor_release(x_1570, 1);
 x_1591 = x_1570;
} else {
 lean_dec_ref(x_1570);
 x_1591 = lean_box(0);
}
if (lean_is_scalar(x_1591)) {
 x_1592 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1592 = x_1591;
}
lean_ctor_set(x_1592, 0, x_1589);
lean_ctor_set(x_1592, 1, x_1590);
return x_1592;
}
}
else
{
lean_object* x_1593; lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; 
lean_dec(x_1526);
lean_dec(x_1525);
lean_dec(x_1435);
lean_dec(x_1429);
lean_dec(x_1424);
lean_dec(x_1423);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1593 = lean_ctor_get(x_1563, 0);
lean_inc(x_1593);
x_1594 = lean_ctor_get(x_1563, 1);
lean_inc(x_1594);
if (lean_is_exclusive(x_1563)) {
 lean_ctor_release(x_1563, 0);
 lean_ctor_release(x_1563, 1);
 x_1595 = x_1563;
} else {
 lean_dec_ref(x_1563);
 x_1595 = lean_box(0);
}
if (lean_is_scalar(x_1595)) {
 x_1596 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1596 = x_1595;
}
lean_ctor_set(x_1596, 0, x_1593);
lean_ctor_set(x_1596, 1, x_1594);
return x_1596;
}
}
}
else
{
uint8_t x_1597; 
lean_dec(x_1435);
lean_dec(x_1429);
lean_dec(x_1424);
lean_dec(x_1423);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1597 = !lean_is_exclusive(x_1436);
if (x_1597 == 0)
{
return x_1436;
}
else
{
lean_object* x_1598; lean_object* x_1599; lean_object* x_1600; 
x_1598 = lean_ctor_get(x_1436, 0);
x_1599 = lean_ctor_get(x_1436, 1);
lean_inc(x_1599);
lean_inc(x_1598);
lean_dec(x_1436);
x_1600 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1600, 0, x_1598);
lean_ctor_set(x_1600, 1, x_1599);
return x_1600;
}
}
}
else
{
uint8_t x_1601; 
lean_dec(x_1430);
lean_dec(x_1429);
lean_dec(x_1424);
lean_dec(x_1423);
lean_dec(x_230);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1601 = !lean_is_exclusive(x_1432);
if (x_1601 == 0)
{
return x_1432;
}
else
{
lean_object* x_1602; lean_object* x_1603; lean_object* x_1604; 
x_1602 = lean_ctor_get(x_1432, 0);
x_1603 = lean_ctor_get(x_1432, 1);
lean_inc(x_1603);
lean_inc(x_1602);
lean_dec(x_1432);
x_1604 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1604, 0, x_1602);
lean_ctor_set(x_1604, 1, x_1603);
return x_1604;
}
}
}
else
{
uint8_t x_1605; 
lean_dec(x_1424);
lean_dec(x_1423);
lean_dec(x_1041);
lean_dec(x_230);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1605 = !lean_is_exclusive(x_1426);
if (x_1605 == 0)
{
return x_1426;
}
else
{
lean_object* x_1606; lean_object* x_1607; lean_object* x_1608; 
x_1606 = lean_ctor_get(x_1426, 0);
x_1607 = lean_ctor_get(x_1426, 1);
lean_inc(x_1607);
lean_inc(x_1606);
lean_dec(x_1426);
x_1608 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1608, 0, x_1606);
lean_ctor_set(x_1608, 1, x_1607);
return x_1608;
}
}
}
}
else
{
uint8_t x_1609; 
lean_dec(x_1043);
lean_dec(x_1042);
lean_dec(x_1041);
lean_dec(x_887);
lean_dec(x_230);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1609 = !lean_is_exclusive(x_1045);
if (x_1609 == 0)
{
return x_1045;
}
else
{
lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; 
x_1610 = lean_ctor_get(x_1045, 0);
x_1611 = lean_ctor_get(x_1045, 1);
lean_inc(x_1611);
lean_inc(x_1610);
lean_dec(x_1045);
x_1612 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1612, 0, x_1610);
lean_ctor_set(x_1612, 1, x_1611);
return x_1612;
}
}
}
}
else
{
lean_object* x_1613; lean_object* x_1614; lean_object* x_1615; lean_object* x_1616; lean_object* x_1617; uint8_t x_1618; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_57);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
x_1613 = lean_ctor_get(x_889, 1);
lean_inc(x_1613);
lean_dec(x_889);
x_1614 = lean_ctor_get(x_890, 0);
lean_inc(x_1614);
lean_dec(x_890);
x_1615 = lean_ctor_get(x_891, 0);
lean_inc(x_1615);
lean_dec(x_891);
lean_inc(x_16);
x_1616 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_16, x_18, x_19, x_20, x_21, x_1613);
x_1617 = lean_ctor_get(x_1616, 0);
lean_inc(x_1617);
x_1618 = lean_unbox(x_1617);
lean_dec(x_1617);
if (x_1618 == 0)
{
lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; 
lean_dec(x_16);
x_1619 = lean_ctor_get(x_1616, 1);
lean_inc(x_1619);
lean_dec(x_1616);
x_1620 = lean_box(0);
x_1621 = l_CancelDenoms_mkProdPrf___lambda__8(x_887, x_5, x_2, x_14, x_11, x_4, x_230, x_1614, x_231, x_1615, x_67, x_72, x_6, x_1, x_48, x_55, x_7, x_1620, x_18, x_19, x_20, x_21, x_1619);
lean_dec(x_7);
lean_dec(x_55);
lean_dec(x_11);
return x_1621;
}
else
{
lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; lean_object* x_1625; lean_object* x_1626; lean_object* x_1627; 
x_1622 = lean_ctor_get(x_1616, 1);
lean_inc(x_1622);
lean_dec(x_1616);
x_1623 = l_CancelDenoms_mkProdPrf___lambda__9___closed__61;
x_1624 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_16, x_1623, x_18, x_19, x_20, x_21, x_1622);
x_1625 = lean_ctor_get(x_1624, 0);
lean_inc(x_1625);
x_1626 = lean_ctor_get(x_1624, 1);
lean_inc(x_1626);
lean_dec(x_1624);
x_1627 = l_CancelDenoms_mkProdPrf___lambda__8(x_887, x_5, x_2, x_14, x_11, x_4, x_230, x_1614, x_231, x_1615, x_67, x_72, x_6, x_1, x_48, x_55, x_7, x_1625, x_18, x_19, x_20, x_21, x_1626);
lean_dec(x_1625);
lean_dec(x_7);
lean_dec(x_55);
lean_dec(x_11);
return x_1627;
}
}
}
else
{
uint8_t x_1628; 
lean_dec(x_887);
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1628 = !lean_is_exclusive(x_889);
if (x_1628 == 0)
{
return x_889;
}
else
{
lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; 
x_1629 = lean_ctor_get(x_889, 0);
x_1630 = lean_ctor_get(x_889, 1);
lean_inc(x_1630);
lean_inc(x_1629);
lean_dec(x_889);
x_1631 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1631, 0, x_1629);
lean_ctor_set(x_1631, 1, x_1630);
return x_1631;
}
}
}
}
else
{
lean_object* x_1632; lean_object* x_1633; lean_object* x_1634; lean_object* x_1635; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
x_1632 = lean_ctor_get(x_241, 1);
lean_inc(x_1632);
lean_dec(x_241);
x_1633 = lean_ctor_get(x_242, 0);
lean_inc(x_1633);
lean_dec(x_242);
x_1634 = lean_ctor_get(x_243, 0);
lean_inc(x_1634);
lean_dec(x_243);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_1633);
lean_inc(x_6);
lean_inc(x_11);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_5);
x_1635 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_230, x_1633, x_18, x_19, x_20, x_21, x_1632);
if (lean_obj_tag(x_1635) == 0)
{
lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; 
x_1636 = lean_ctor_get(x_1635, 0);
lean_inc(x_1636);
x_1637 = lean_ctor_get(x_1635, 1);
lean_inc(x_1637);
lean_dec(x_1635);
x_1638 = lean_ctor_get(x_1636, 0);
lean_inc(x_1638);
x_1639 = lean_ctor_get(x_1636, 1);
lean_inc(x_1639);
lean_dec(x_1636);
lean_inc(x_1634);
lean_inc(x_6);
lean_inc(x_2);
x_1640 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_231, x_1634, x_18, x_19, x_20, x_21, x_1637);
if (lean_obj_tag(x_1640) == 0)
{
uint8_t x_1641; 
x_1641 = !lean_is_exclusive(x_1640);
if (x_1641 == 0)
{
lean_object* x_1642; uint8_t x_1643; 
x_1642 = lean_ctor_get(x_1640, 0);
x_1643 = !lean_is_exclusive(x_1642);
if (x_1643 == 0)
{
lean_object* x_1644; lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; lean_object* x_1663; lean_object* x_1664; lean_object* x_1665; lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; lean_object* x_1671; lean_object* x_1672; lean_object* x_1673; lean_object* x_1674; lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; lean_object* x_1680; 
x_1644 = lean_ctor_get(x_1642, 0);
x_1645 = lean_ctor_get(x_1642, 1);
x_1646 = l_CancelDenoms_mkProdPrf___lambda__3___closed__1;
x_1647 = l_Lean_Expr_const___override(x_1646, x_57);
lean_inc(x_2);
x_1648 = l_Lean_Expr_app___override(x_1647, x_2);
lean_inc(x_2);
x_1649 = l_Lean_Expr_app___override(x_1648, x_2);
lean_inc(x_2);
x_1650 = l_Lean_Expr_app___override(x_1649, x_2);
x_1651 = l_CancelDenoms_mkProdPrf___lambda__3___closed__3;
lean_inc(x_1);
x_1652 = l_Lean_Expr_const___override(x_1651, x_1);
lean_inc(x_2);
x_1653 = l_Lean_Expr_app___override(x_1652, x_2);
x_1654 = l_CancelDenoms_mkProdPrf___lambda__3___closed__6;
lean_inc(x_1);
x_1655 = l_Lean_Expr_const___override(x_1654, x_1);
lean_inc(x_2);
x_1656 = l_Lean_Expr_app___override(x_1655, x_2);
x_1657 = l_CancelDenoms_mkProdPrf___lambda__3___closed__9;
lean_inc(x_1);
x_1658 = l_Lean_Expr_const___override(x_1657, x_1);
lean_inc(x_2);
x_1659 = l_Lean_Expr_app___override(x_1658, x_2);
x_1660 = l_CancelDenoms_mkProdPrf___lambda__3___closed__12;
lean_inc(x_1);
x_1661 = l_Lean_Expr_const___override(x_1660, x_1);
lean_inc(x_2);
x_1662 = l_Lean_Expr_app___override(x_1661, x_2);
x_1663 = l_Lean_Expr_app___override(x_1662, x_12);
x_1664 = l_Lean_Expr_app___override(x_1659, x_1663);
x_1665 = l_Lean_Expr_app___override(x_1656, x_1664);
x_1666 = l_Lean_Expr_app___override(x_1653, x_1665);
x_1667 = l_Lean_Expr_app___override(x_1650, x_1666);
lean_inc(x_1638);
x_1668 = l_Lean_Expr_app___override(x_1667, x_1638);
lean_inc(x_1644);
x_1669 = l_Lean_Expr_app___override(x_1668, x_1644);
x_1670 = l_CancelDenoms_mkProdPrf___lambda__9___closed__63;
x_1671 = l_Lean_Expr_const___override(x_1670, x_1);
x_1672 = l_Lean_Expr_app___override(x_1671, x_2);
x_1673 = l_Lean_Expr_app___override(x_1672, x_9);
x_1674 = l_Lean_Expr_app___override(x_1673, x_6);
x_1675 = l_Lean_Expr_app___override(x_1674, x_1633);
x_1676 = l_Lean_Expr_app___override(x_1675, x_1634);
x_1677 = l_Lean_Expr_app___override(x_1676, x_1638);
x_1678 = l_Lean_Expr_app___override(x_1677, x_1644);
x_1679 = l_Lean_Expr_app___override(x_1678, x_1639);
x_1680 = l_Lean_Expr_app___override(x_1679, x_1645);
lean_ctor_set(x_1642, 1, x_1680);
lean_ctor_set(x_1642, 0, x_1669);
return x_1640;
}
else
{
lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; lean_object* x_1690; lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; lean_object* x_1696; lean_object* x_1697; lean_object* x_1698; lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; lean_object* x_1702; lean_object* x_1703; lean_object* x_1704; lean_object* x_1705; lean_object* x_1706; lean_object* x_1707; lean_object* x_1708; lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; lean_object* x_1713; lean_object* x_1714; lean_object* x_1715; lean_object* x_1716; lean_object* x_1717; lean_object* x_1718; 
x_1681 = lean_ctor_get(x_1642, 0);
x_1682 = lean_ctor_get(x_1642, 1);
lean_inc(x_1682);
lean_inc(x_1681);
lean_dec(x_1642);
x_1683 = l_CancelDenoms_mkProdPrf___lambda__3___closed__1;
x_1684 = l_Lean_Expr_const___override(x_1683, x_57);
lean_inc(x_2);
x_1685 = l_Lean_Expr_app___override(x_1684, x_2);
lean_inc(x_2);
x_1686 = l_Lean_Expr_app___override(x_1685, x_2);
lean_inc(x_2);
x_1687 = l_Lean_Expr_app___override(x_1686, x_2);
x_1688 = l_CancelDenoms_mkProdPrf___lambda__3___closed__3;
lean_inc(x_1);
x_1689 = l_Lean_Expr_const___override(x_1688, x_1);
lean_inc(x_2);
x_1690 = l_Lean_Expr_app___override(x_1689, x_2);
x_1691 = l_CancelDenoms_mkProdPrf___lambda__3___closed__6;
lean_inc(x_1);
x_1692 = l_Lean_Expr_const___override(x_1691, x_1);
lean_inc(x_2);
x_1693 = l_Lean_Expr_app___override(x_1692, x_2);
x_1694 = l_CancelDenoms_mkProdPrf___lambda__3___closed__9;
lean_inc(x_1);
x_1695 = l_Lean_Expr_const___override(x_1694, x_1);
lean_inc(x_2);
x_1696 = l_Lean_Expr_app___override(x_1695, x_2);
x_1697 = l_CancelDenoms_mkProdPrf___lambda__3___closed__12;
lean_inc(x_1);
x_1698 = l_Lean_Expr_const___override(x_1697, x_1);
lean_inc(x_2);
x_1699 = l_Lean_Expr_app___override(x_1698, x_2);
x_1700 = l_Lean_Expr_app___override(x_1699, x_12);
x_1701 = l_Lean_Expr_app___override(x_1696, x_1700);
x_1702 = l_Lean_Expr_app___override(x_1693, x_1701);
x_1703 = l_Lean_Expr_app___override(x_1690, x_1702);
x_1704 = l_Lean_Expr_app___override(x_1687, x_1703);
lean_inc(x_1638);
x_1705 = l_Lean_Expr_app___override(x_1704, x_1638);
lean_inc(x_1681);
x_1706 = l_Lean_Expr_app___override(x_1705, x_1681);
x_1707 = l_CancelDenoms_mkProdPrf___lambda__9___closed__63;
x_1708 = l_Lean_Expr_const___override(x_1707, x_1);
x_1709 = l_Lean_Expr_app___override(x_1708, x_2);
x_1710 = l_Lean_Expr_app___override(x_1709, x_9);
x_1711 = l_Lean_Expr_app___override(x_1710, x_6);
x_1712 = l_Lean_Expr_app___override(x_1711, x_1633);
x_1713 = l_Lean_Expr_app___override(x_1712, x_1634);
x_1714 = l_Lean_Expr_app___override(x_1713, x_1638);
x_1715 = l_Lean_Expr_app___override(x_1714, x_1681);
x_1716 = l_Lean_Expr_app___override(x_1715, x_1639);
x_1717 = l_Lean_Expr_app___override(x_1716, x_1682);
x_1718 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1718, 0, x_1706);
lean_ctor_set(x_1718, 1, x_1717);
lean_ctor_set(x_1640, 0, x_1718);
return x_1640;
}
}
else
{
lean_object* x_1719; lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; lean_object* x_1724; lean_object* x_1725; lean_object* x_1726; lean_object* x_1727; lean_object* x_1728; lean_object* x_1729; lean_object* x_1730; lean_object* x_1731; lean_object* x_1732; lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; lean_object* x_1737; lean_object* x_1738; lean_object* x_1739; lean_object* x_1740; lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; lean_object* x_1747; lean_object* x_1748; lean_object* x_1749; lean_object* x_1750; lean_object* x_1751; lean_object* x_1752; lean_object* x_1753; lean_object* x_1754; lean_object* x_1755; lean_object* x_1756; lean_object* x_1757; lean_object* x_1758; lean_object* x_1759; lean_object* x_1760; 
x_1719 = lean_ctor_get(x_1640, 0);
x_1720 = lean_ctor_get(x_1640, 1);
lean_inc(x_1720);
lean_inc(x_1719);
lean_dec(x_1640);
x_1721 = lean_ctor_get(x_1719, 0);
lean_inc(x_1721);
x_1722 = lean_ctor_get(x_1719, 1);
lean_inc(x_1722);
if (lean_is_exclusive(x_1719)) {
 lean_ctor_release(x_1719, 0);
 lean_ctor_release(x_1719, 1);
 x_1723 = x_1719;
} else {
 lean_dec_ref(x_1719);
 x_1723 = lean_box(0);
}
x_1724 = l_CancelDenoms_mkProdPrf___lambda__3___closed__1;
x_1725 = l_Lean_Expr_const___override(x_1724, x_57);
lean_inc(x_2);
x_1726 = l_Lean_Expr_app___override(x_1725, x_2);
lean_inc(x_2);
x_1727 = l_Lean_Expr_app___override(x_1726, x_2);
lean_inc(x_2);
x_1728 = l_Lean_Expr_app___override(x_1727, x_2);
x_1729 = l_CancelDenoms_mkProdPrf___lambda__3___closed__3;
lean_inc(x_1);
x_1730 = l_Lean_Expr_const___override(x_1729, x_1);
lean_inc(x_2);
x_1731 = l_Lean_Expr_app___override(x_1730, x_2);
x_1732 = l_CancelDenoms_mkProdPrf___lambda__3___closed__6;
lean_inc(x_1);
x_1733 = l_Lean_Expr_const___override(x_1732, x_1);
lean_inc(x_2);
x_1734 = l_Lean_Expr_app___override(x_1733, x_2);
x_1735 = l_CancelDenoms_mkProdPrf___lambda__3___closed__9;
lean_inc(x_1);
x_1736 = l_Lean_Expr_const___override(x_1735, x_1);
lean_inc(x_2);
x_1737 = l_Lean_Expr_app___override(x_1736, x_2);
x_1738 = l_CancelDenoms_mkProdPrf___lambda__3___closed__12;
lean_inc(x_1);
x_1739 = l_Lean_Expr_const___override(x_1738, x_1);
lean_inc(x_2);
x_1740 = l_Lean_Expr_app___override(x_1739, x_2);
x_1741 = l_Lean_Expr_app___override(x_1740, x_12);
x_1742 = l_Lean_Expr_app___override(x_1737, x_1741);
x_1743 = l_Lean_Expr_app___override(x_1734, x_1742);
x_1744 = l_Lean_Expr_app___override(x_1731, x_1743);
x_1745 = l_Lean_Expr_app___override(x_1728, x_1744);
lean_inc(x_1638);
x_1746 = l_Lean_Expr_app___override(x_1745, x_1638);
lean_inc(x_1721);
x_1747 = l_Lean_Expr_app___override(x_1746, x_1721);
x_1748 = l_CancelDenoms_mkProdPrf___lambda__9___closed__63;
x_1749 = l_Lean_Expr_const___override(x_1748, x_1);
x_1750 = l_Lean_Expr_app___override(x_1749, x_2);
x_1751 = l_Lean_Expr_app___override(x_1750, x_9);
x_1752 = l_Lean_Expr_app___override(x_1751, x_6);
x_1753 = l_Lean_Expr_app___override(x_1752, x_1633);
x_1754 = l_Lean_Expr_app___override(x_1753, x_1634);
x_1755 = l_Lean_Expr_app___override(x_1754, x_1638);
x_1756 = l_Lean_Expr_app___override(x_1755, x_1721);
x_1757 = l_Lean_Expr_app___override(x_1756, x_1639);
x_1758 = l_Lean_Expr_app___override(x_1757, x_1722);
if (lean_is_scalar(x_1723)) {
 x_1759 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1759 = x_1723;
}
lean_ctor_set(x_1759, 0, x_1747);
lean_ctor_set(x_1759, 1, x_1758);
x_1760 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1760, 0, x_1759);
lean_ctor_set(x_1760, 1, x_1720);
return x_1760;
}
}
else
{
uint8_t x_1761; 
lean_dec(x_1639);
lean_dec(x_1638);
lean_dec(x_1634);
lean_dec(x_1633);
lean_dec(x_57);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_1761 = !lean_is_exclusive(x_1640);
if (x_1761 == 0)
{
return x_1640;
}
else
{
lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; 
x_1762 = lean_ctor_get(x_1640, 0);
x_1763 = lean_ctor_get(x_1640, 1);
lean_inc(x_1763);
lean_inc(x_1762);
lean_dec(x_1640);
x_1764 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1764, 0, x_1762);
lean_ctor_set(x_1764, 1, x_1763);
return x_1764;
}
}
}
else
{
uint8_t x_1765; 
lean_dec(x_1634);
lean_dec(x_1633);
lean_dec(x_231);
lean_dec(x_57);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1765 = !lean_is_exclusive(x_1635);
if (x_1765 == 0)
{
return x_1635;
}
else
{
lean_object* x_1766; lean_object* x_1767; lean_object* x_1768; 
x_1766 = lean_ctor_get(x_1635, 0);
x_1767 = lean_ctor_get(x_1635, 1);
lean_inc(x_1767);
lean_inc(x_1766);
lean_dec(x_1635);
x_1768 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1768, 0, x_1766);
lean_ctor_set(x_1768, 1, x_1767);
return x_1768;
}
}
}
}
else
{
uint8_t x_1769; 
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_1769 = !lean_is_exclusive(x_241);
if (x_1769 == 0)
{
return x_241;
}
else
{
lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; 
x_1770 = lean_ctor_get(x_241, 0);
x_1771 = lean_ctor_get(x_241, 1);
lean_inc(x_1771);
lean_inc(x_1770);
lean_dec(x_241);
x_1772 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1772, 0, x_1770);
lean_ctor_set(x_1772, 1, x_1771);
return x_1772;
}
}
}
else
{
lean_object* x_1773; lean_object* x_1774; lean_object* x_1775; lean_object* x_1776; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_1773 = lean_ctor_get(x_234, 1);
lean_inc(x_1773);
lean_dec(x_234);
x_1774 = lean_ctor_get(x_235, 0);
lean_inc(x_1774);
lean_dec(x_235);
x_1775 = lean_ctor_get(x_236, 0);
lean_inc(x_1775);
lean_dec(x_236);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_1774);
lean_inc(x_6);
lean_inc(x_11);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_5);
x_1776 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_230, x_1774, x_18, x_19, x_20, x_21, x_1773);
if (lean_obj_tag(x_1776) == 0)
{
lean_object* x_1777; lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; 
x_1777 = lean_ctor_get(x_1776, 0);
lean_inc(x_1777);
x_1778 = lean_ctor_get(x_1776, 1);
lean_inc(x_1778);
lean_dec(x_1776);
x_1779 = lean_ctor_get(x_1777, 0);
lean_inc(x_1779);
x_1780 = lean_ctor_get(x_1777, 1);
lean_inc(x_1780);
lean_dec(x_1777);
lean_inc(x_1775);
lean_inc(x_6);
lean_inc(x_2);
x_1781 = l_CancelDenoms_mkProdPrf(x_5, x_2, x_4, x_11, x_6, x_231, x_1775, x_18, x_19, x_20, x_21, x_1778);
if (lean_obj_tag(x_1781) == 0)
{
uint8_t x_1782; 
x_1782 = !lean_is_exclusive(x_1781);
if (x_1782 == 0)
{
lean_object* x_1783; uint8_t x_1784; 
x_1783 = lean_ctor_get(x_1781, 0);
x_1784 = !lean_is_exclusive(x_1783);
if (x_1784 == 0)
{
lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; lean_object* x_1789; lean_object* x_1790; lean_object* x_1791; lean_object* x_1792; lean_object* x_1793; lean_object* x_1794; lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; lean_object* x_1799; lean_object* x_1800; lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; lean_object* x_1808; lean_object* x_1809; lean_object* x_1810; lean_object* x_1811; lean_object* x_1812; lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; 
x_1785 = lean_ctor_get(x_1783, 0);
x_1786 = lean_ctor_get(x_1783, 1);
x_1787 = l_CancelDenoms_mkProdPrf___lambda__2___closed__1;
x_1788 = l_Lean_Expr_const___override(x_1787, x_57);
lean_inc(x_2);
x_1789 = l_Lean_Expr_app___override(x_1788, x_2);
lean_inc(x_2);
x_1790 = l_Lean_Expr_app___override(x_1789, x_2);
lean_inc(x_2);
x_1791 = l_Lean_Expr_app___override(x_1790, x_2);
x_1792 = l_CancelDenoms_mkProdPrf___lambda__2___closed__3;
lean_inc(x_1);
x_1793 = l_Lean_Expr_const___override(x_1792, x_1);
lean_inc(x_2);
x_1794 = l_Lean_Expr_app___override(x_1793, x_2);
x_1795 = l_CancelDenoms_mkProdPrf___lambda__2___closed__6;
lean_inc(x_1);
x_1796 = l_Lean_Expr_const___override(x_1795, x_1);
lean_inc(x_2);
x_1797 = l_Lean_Expr_app___override(x_1796, x_2);
x_1798 = l_Lean_Expr_app___override(x_1797, x_53);
x_1799 = l_Lean_Expr_app___override(x_1794, x_1798);
x_1800 = l_Lean_Expr_app___override(x_1791, x_1799);
lean_inc(x_1779);
x_1801 = l_Lean_Expr_app___override(x_1800, x_1779);
lean_inc(x_1785);
x_1802 = l_Lean_Expr_app___override(x_1801, x_1785);
x_1803 = l_CancelDenoms_mkProdPrf___lambda__9___closed__65;
lean_inc(x_1);
x_1804 = l_Lean_Expr_const___override(x_1803, x_1);
lean_inc(x_2);
x_1805 = l_Lean_Expr_app___override(x_1804, x_2);
x_1806 = l_CancelDenoms_mkProdPrf___lambda__9___closed__67;
x_1807 = l_Lean_Expr_const___override(x_1806, x_1);
x_1808 = l_Lean_Expr_app___override(x_1807, x_2);
x_1809 = l_Lean_Expr_app___override(x_1808, x_48);
x_1810 = l_Lean_Expr_app___override(x_1805, x_1809);
x_1811 = l_Lean_Expr_app___override(x_1810, x_6);
x_1812 = l_Lean_Expr_app___override(x_1811, x_1774);
x_1813 = l_Lean_Expr_app___override(x_1812, x_1775);
x_1814 = l_Lean_Expr_app___override(x_1813, x_1779);
x_1815 = l_Lean_Expr_app___override(x_1814, x_1785);
x_1816 = l_Lean_Expr_app___override(x_1815, x_1780);
x_1817 = l_Lean_Expr_app___override(x_1816, x_1786);
lean_ctor_set(x_1783, 1, x_1817);
lean_ctor_set(x_1783, 0, x_1802);
return x_1781;
}
else
{
lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; lean_object* x_1826; lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; lean_object* x_1831; lean_object* x_1832; lean_object* x_1833; lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; lean_object* x_1838; lean_object* x_1839; lean_object* x_1840; lean_object* x_1841; lean_object* x_1842; lean_object* x_1843; lean_object* x_1844; lean_object* x_1845; lean_object* x_1846; lean_object* x_1847; lean_object* x_1848; lean_object* x_1849; lean_object* x_1850; lean_object* x_1851; 
x_1818 = lean_ctor_get(x_1783, 0);
x_1819 = lean_ctor_get(x_1783, 1);
lean_inc(x_1819);
lean_inc(x_1818);
lean_dec(x_1783);
x_1820 = l_CancelDenoms_mkProdPrf___lambda__2___closed__1;
x_1821 = l_Lean_Expr_const___override(x_1820, x_57);
lean_inc(x_2);
x_1822 = l_Lean_Expr_app___override(x_1821, x_2);
lean_inc(x_2);
x_1823 = l_Lean_Expr_app___override(x_1822, x_2);
lean_inc(x_2);
x_1824 = l_Lean_Expr_app___override(x_1823, x_2);
x_1825 = l_CancelDenoms_mkProdPrf___lambda__2___closed__3;
lean_inc(x_1);
x_1826 = l_Lean_Expr_const___override(x_1825, x_1);
lean_inc(x_2);
x_1827 = l_Lean_Expr_app___override(x_1826, x_2);
x_1828 = l_CancelDenoms_mkProdPrf___lambda__2___closed__6;
lean_inc(x_1);
x_1829 = l_Lean_Expr_const___override(x_1828, x_1);
lean_inc(x_2);
x_1830 = l_Lean_Expr_app___override(x_1829, x_2);
x_1831 = l_Lean_Expr_app___override(x_1830, x_53);
x_1832 = l_Lean_Expr_app___override(x_1827, x_1831);
x_1833 = l_Lean_Expr_app___override(x_1824, x_1832);
lean_inc(x_1779);
x_1834 = l_Lean_Expr_app___override(x_1833, x_1779);
lean_inc(x_1818);
x_1835 = l_Lean_Expr_app___override(x_1834, x_1818);
x_1836 = l_CancelDenoms_mkProdPrf___lambda__9___closed__65;
lean_inc(x_1);
x_1837 = l_Lean_Expr_const___override(x_1836, x_1);
lean_inc(x_2);
x_1838 = l_Lean_Expr_app___override(x_1837, x_2);
x_1839 = l_CancelDenoms_mkProdPrf___lambda__9___closed__67;
x_1840 = l_Lean_Expr_const___override(x_1839, x_1);
x_1841 = l_Lean_Expr_app___override(x_1840, x_2);
x_1842 = l_Lean_Expr_app___override(x_1841, x_48);
x_1843 = l_Lean_Expr_app___override(x_1838, x_1842);
x_1844 = l_Lean_Expr_app___override(x_1843, x_6);
x_1845 = l_Lean_Expr_app___override(x_1844, x_1774);
x_1846 = l_Lean_Expr_app___override(x_1845, x_1775);
x_1847 = l_Lean_Expr_app___override(x_1846, x_1779);
x_1848 = l_Lean_Expr_app___override(x_1847, x_1818);
x_1849 = l_Lean_Expr_app___override(x_1848, x_1780);
x_1850 = l_Lean_Expr_app___override(x_1849, x_1819);
x_1851 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1851, 0, x_1835);
lean_ctor_set(x_1851, 1, x_1850);
lean_ctor_set(x_1781, 0, x_1851);
return x_1781;
}
}
else
{
lean_object* x_1852; lean_object* x_1853; lean_object* x_1854; lean_object* x_1855; lean_object* x_1856; lean_object* x_1857; lean_object* x_1858; lean_object* x_1859; lean_object* x_1860; lean_object* x_1861; lean_object* x_1862; lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; lean_object* x_1867; lean_object* x_1868; lean_object* x_1869; lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; lean_object* x_1873; lean_object* x_1874; lean_object* x_1875; lean_object* x_1876; lean_object* x_1877; lean_object* x_1878; lean_object* x_1879; lean_object* x_1880; lean_object* x_1881; lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; lean_object* x_1886; lean_object* x_1887; lean_object* x_1888; lean_object* x_1889; 
x_1852 = lean_ctor_get(x_1781, 0);
x_1853 = lean_ctor_get(x_1781, 1);
lean_inc(x_1853);
lean_inc(x_1852);
lean_dec(x_1781);
x_1854 = lean_ctor_get(x_1852, 0);
lean_inc(x_1854);
x_1855 = lean_ctor_get(x_1852, 1);
lean_inc(x_1855);
if (lean_is_exclusive(x_1852)) {
 lean_ctor_release(x_1852, 0);
 lean_ctor_release(x_1852, 1);
 x_1856 = x_1852;
} else {
 lean_dec_ref(x_1852);
 x_1856 = lean_box(0);
}
x_1857 = l_CancelDenoms_mkProdPrf___lambda__2___closed__1;
x_1858 = l_Lean_Expr_const___override(x_1857, x_57);
lean_inc(x_2);
x_1859 = l_Lean_Expr_app___override(x_1858, x_2);
lean_inc(x_2);
x_1860 = l_Lean_Expr_app___override(x_1859, x_2);
lean_inc(x_2);
x_1861 = l_Lean_Expr_app___override(x_1860, x_2);
x_1862 = l_CancelDenoms_mkProdPrf___lambda__2___closed__3;
lean_inc(x_1);
x_1863 = l_Lean_Expr_const___override(x_1862, x_1);
lean_inc(x_2);
x_1864 = l_Lean_Expr_app___override(x_1863, x_2);
x_1865 = l_CancelDenoms_mkProdPrf___lambda__2___closed__6;
lean_inc(x_1);
x_1866 = l_Lean_Expr_const___override(x_1865, x_1);
lean_inc(x_2);
x_1867 = l_Lean_Expr_app___override(x_1866, x_2);
x_1868 = l_Lean_Expr_app___override(x_1867, x_53);
x_1869 = l_Lean_Expr_app___override(x_1864, x_1868);
x_1870 = l_Lean_Expr_app___override(x_1861, x_1869);
lean_inc(x_1779);
x_1871 = l_Lean_Expr_app___override(x_1870, x_1779);
lean_inc(x_1854);
x_1872 = l_Lean_Expr_app___override(x_1871, x_1854);
x_1873 = l_CancelDenoms_mkProdPrf___lambda__9___closed__65;
lean_inc(x_1);
x_1874 = l_Lean_Expr_const___override(x_1873, x_1);
lean_inc(x_2);
x_1875 = l_Lean_Expr_app___override(x_1874, x_2);
x_1876 = l_CancelDenoms_mkProdPrf___lambda__9___closed__67;
x_1877 = l_Lean_Expr_const___override(x_1876, x_1);
x_1878 = l_Lean_Expr_app___override(x_1877, x_2);
x_1879 = l_Lean_Expr_app___override(x_1878, x_48);
x_1880 = l_Lean_Expr_app___override(x_1875, x_1879);
x_1881 = l_Lean_Expr_app___override(x_1880, x_6);
x_1882 = l_Lean_Expr_app___override(x_1881, x_1774);
x_1883 = l_Lean_Expr_app___override(x_1882, x_1775);
x_1884 = l_Lean_Expr_app___override(x_1883, x_1779);
x_1885 = l_Lean_Expr_app___override(x_1884, x_1854);
x_1886 = l_Lean_Expr_app___override(x_1885, x_1780);
x_1887 = l_Lean_Expr_app___override(x_1886, x_1855);
if (lean_is_scalar(x_1856)) {
 x_1888 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1888 = x_1856;
}
lean_ctor_set(x_1888, 0, x_1872);
lean_ctor_set(x_1888, 1, x_1887);
x_1889 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1889, 0, x_1888);
lean_ctor_set(x_1889, 1, x_1853);
return x_1889;
}
}
else
{
uint8_t x_1890; 
lean_dec(x_1780);
lean_dec(x_1779);
lean_dec(x_1775);
lean_dec(x_1774);
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_1890 = !lean_is_exclusive(x_1781);
if (x_1890 == 0)
{
return x_1781;
}
else
{
lean_object* x_1891; lean_object* x_1892; lean_object* x_1893; 
x_1891 = lean_ctor_get(x_1781, 0);
x_1892 = lean_ctor_get(x_1781, 1);
lean_inc(x_1892);
lean_inc(x_1891);
lean_dec(x_1781);
x_1893 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1893, 0, x_1891);
lean_ctor_set(x_1893, 1, x_1892);
return x_1893;
}
}
}
else
{
uint8_t x_1894; 
lean_dec(x_1775);
lean_dec(x_1774);
lean_dec(x_231);
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1894 = !lean_is_exclusive(x_1776);
if (x_1894 == 0)
{
return x_1776;
}
else
{
lean_object* x_1895; lean_object* x_1896; lean_object* x_1897; 
x_1895 = lean_ctor_get(x_1776, 0);
x_1896 = lean_ctor_get(x_1776, 1);
lean_inc(x_1896);
lean_inc(x_1895);
lean_dec(x_1776);
x_1897 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1897, 0, x_1895);
lean_ctor_set(x_1897, 1, x_1896);
return x_1897;
}
}
}
}
else
{
uint8_t x_1898; 
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_72);
lean_dec(x_67);
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_1898 = !lean_is_exclusive(x_234);
if (x_1898 == 0)
{
return x_234;
}
else
{
lean_object* x_1899; lean_object* x_1900; lean_object* x_1901; 
x_1899 = lean_ctor_get(x_234, 0);
x_1900 = lean_ctor_get(x_234, 1);
lean_inc(x_1900);
lean_inc(x_1899);
lean_dec(x_234);
x_1901 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1901, 0, x_1899);
lean_ctor_set(x_1901, 1, x_1900);
return x_1901;
}
}
}
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__53;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inferInstance", 13, 13);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddMonoidWithOne", 18, 18);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__3___closed__10;
x_2 = l_CancelDenoms_mkProdPrf___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddGroupWithOne", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__1___closed__17;
x_2 = l_CancelDenoms_mkProdPrf___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__4___closed__7;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__66;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivisionRing", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_mkProdPrf___lambda__5___closed__20;
x_2 = l_CancelDenoms_mkProdPrf___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mkProdPrf ", 10, 10);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_mkProdPrf___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ", 1, 1);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_mkProdPrf___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_mkProdPrf___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_13 = lean_box(0);
lean_inc(x_1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_14);
x_16 = l_Lean_Expr_const___override(x_15, x_14);
lean_inc(x_2);
x_17 = l_Lean_Expr_app___override(x_16, x_2);
lean_inc(x_1);
x_18 = l_Lean_Level_succ___override(x_1);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_13);
x_20 = l_CancelDenoms_mkProdPrf___closed__3;
lean_inc(x_19);
x_21 = l_Lean_Expr_const___override(x_20, x_19);
lean_inc(x_21);
x_22 = l_Lean_Expr_app___override(x_21, x_17);
x_23 = l_CancelDenoms_mkProdPrf___closed__5;
lean_inc(x_14);
x_24 = l_Lean_Expr_const___override(x_23, x_14);
lean_inc(x_2);
x_25 = l_Lean_Expr_app___override(x_24, x_2);
x_26 = l_CancelDenoms_mkProdPrf___closed__7;
lean_inc(x_14);
x_27 = l_Lean_Expr_const___override(x_26, x_14);
lean_inc(x_2);
x_28 = l_Lean_Expr_app___override(x_27, x_2);
x_29 = l_CancelDenoms_mkProdPrf___closed__8;
lean_inc(x_14);
x_30 = l_Lean_Expr_const___override(x_29, x_14);
lean_inc(x_2);
x_31 = l_Lean_Expr_app___override(x_30, x_2);
x_32 = l_CancelDenoms_mkProdPrf___closed__10;
lean_inc(x_14);
x_33 = l_Lean_Expr_const___override(x_32, x_14);
lean_inc(x_2);
x_34 = l_Lean_Expr_app___override(x_33, x_2);
lean_inc(x_3);
x_35 = l_Lean_Expr_app___override(x_34, x_3);
lean_inc(x_35);
x_36 = l_Lean_Expr_app___override(x_31, x_35);
lean_inc(x_36);
x_37 = l_Lean_Expr_app___override(x_28, x_36);
lean_inc(x_37);
x_38 = l_Lean_Expr_app___override(x_25, x_37);
x_39 = l_Lean_Expr_app___override(x_22, x_38);
x_40 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2;
x_41 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_40, x_8, x_9, x_10, x_11, x_12);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_box(0);
x_46 = l_CancelDenoms_mkProdPrf___lambda__9(x_14, x_2, x_21, x_3, x_1, x_5, x_7, x_19, x_36, x_6, x_4, x_37, x_35, x_39, x_13, x_40, x_45, x_8, x_9, x_10, x_11, x_44);
return x_46;
}
else
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_41);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_48 = lean_ctor_get(x_41, 1);
x_49 = lean_ctor_get(x_41, 0);
lean_dec(x_49);
lean_inc(x_7);
x_50 = l_Lean_MessageData_ofExpr(x_7);
x_51 = l_CancelDenoms_mkProdPrf___closed__12;
lean_ctor_set_tag(x_41, 7);
lean_ctor_set(x_41, 1, x_50);
lean_ctor_set(x_41, 0, x_51);
x_52 = l_CancelDenoms_mkProdPrf___closed__14;
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_41);
lean_ctor_set(x_53, 1, x_52);
lean_inc(x_4);
x_54 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
x_55 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = l_Lean_MessageData_ofFormat(x_55);
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_53);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_40, x_59, x_8, x_9, x_10, x_11, x_48);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_CancelDenoms_mkProdPrf___lambda__9(x_14, x_2, x_21, x_3, x_1, x_5, x_7, x_19, x_36, x_6, x_4, x_37, x_35, x_39, x_13, x_40, x_61, x_8, x_9, x_10, x_11, x_62);
lean_dec(x_61);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_64 = lean_ctor_get(x_41, 1);
lean_inc(x_64);
lean_dec(x_41);
lean_inc(x_7);
x_65 = l_Lean_MessageData_ofExpr(x_7);
x_66 = l_CancelDenoms_mkProdPrf___closed__12;
x_67 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = l_CancelDenoms_mkProdPrf___closed__14;
x_69 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
lean_inc(x_4);
x_70 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
x_71 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = l_Lean_MessageData_ofFormat(x_71);
x_73 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_73, 0, x_69);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_40, x_75, x_8, x_9, x_10, x_11, x_64);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_CancelDenoms_mkProdPrf___lambda__9(x_14, x_2, x_21, x_3, x_1, x_5, x_7, x_19, x_36, x_6, x_4, x_37, x_35, x_39, x_13, x_40, x_77, x_8, x_9, x_10, x_11, x_78);
lean_dec(x_77);
return x_79;
}
}
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__8___boxed(lean_object** _args) {
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
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
_start:
{
lean_object* x_24; 
x_24 = l_CancelDenoms_mkProdPrf___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_5);
return x_24;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_mkProdPrf___lambda__9___boxed(lean_object** _args) {
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
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
_start:
{
lean_object* x_23; 
x_23 = l_CancelDenoms_mkProdPrf___lambda__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22);
lean_dec(x_17);
return x_23;
}
}
static lean_object* _init_l_CancelDenoms_deriveThms___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("div_div_eq_mul_div", 18, 18);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_deriveThms___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_deriveThms___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_deriveThms___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("div_neg", 7, 7);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_deriveThms___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_deriveThms___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_deriveThms___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_deriveThms___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_deriveThms___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_deriveThms___closed__2;
x_2 = l_CancelDenoms_deriveThms___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_deriveThms() {
_start:
{
lean_object* x_1; 
x_1 = l_CancelDenoms_deriveThms___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_derive___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("derive_trans", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_derive___lambda__2___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("derive_trans₂", 15, 13);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_derive___lambda__2___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_dec(x_4);
x_15 = l_CancelDenoms_derive___lambda__1(x_1, x_14, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_5);
lean_inc(x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_array_mk(x_19);
x_21 = l_CancelDenoms_derive___lambda__2___closed__2;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_mkAppM(x_21, x_20, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_CancelDenoms_derive___lambda__1(x_1, x_23, x_7, x_8, x_9, x_10, x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
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
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_12, 0);
x_32 = lean_ctor_get(x_4, 1);
lean_inc(x_32);
lean_dec(x_4);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_5);
lean_inc(x_31);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_array_mk(x_34);
x_36 = l_CancelDenoms_derive___lambda__2___closed__2;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_37 = l_Lean_Meta_mkAppM(x_36, x_35, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_CancelDenoms_derive___lambda__1(x_1, x_38, x_7, x_8, x_9, x_10, x_39);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_40;
}
else
{
uint8_t x_41; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
return x_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_37, 0);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_37);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_45 = lean_ctor_get(x_12, 0);
x_46 = lean_ctor_get(x_30, 0);
x_47 = lean_ctor_get(x_4, 1);
lean_inc(x_47);
lean_dec(x_4);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_5);
lean_inc(x_46);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
lean_inc(x_45);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_mk(x_50);
x_52 = l_CancelDenoms_derive___lambda__2___closed__4;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_53 = l_Lean_Meta_mkAppM(x_52, x_51, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_CancelDenoms_derive___lambda__1(x_1, x_54, x_7, x_8, x_9, x_10, x_55);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_56;
}
else
{
uint8_t x_57; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_53);
if (x_57 == 0)
{
return x_53;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_53, 0);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_53);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_mkProdPrf___lambda__5___closed__20;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CancelDenoms.derive failed to normalize ", 40, 40);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_derive___lambda__3___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__3___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_derive___lambda__3___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__3___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("pf : ", 5, 5);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__3___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_derive___lambda__3___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_CancelDenoms_findCancelFactor(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_14 = x_11;
} else {
 lean_dec_ref(x_11);
 x_14 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Qq_inferTypeQ_x27(x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
x_25 = l_Lean_Level_succ___override(x_20);
x_26 = lean_box(0);
lean_inc(x_20);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 1, x_26);
lean_ctor_set(x_17, 0, x_20);
x_27 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_17);
x_28 = l_Lean_Expr_const___override(x_27, x_17);
lean_inc(x_23);
x_29 = l_Lean_Expr_app___override(x_28, x_23);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_30 = l_Qq_synthInstanceQ___rarg(x_29, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_79; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
x_34 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_17);
x_35 = l_Lean_Expr_const___override(x_34, x_17);
lean_inc(x_23);
x_36 = l_Lean_Expr_app___override(x_35, x_23);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 1, x_26);
lean_ctor_set(x_16, 0, x_25);
x_37 = l_CancelDenoms_mkProdPrf___closed__3;
x_38 = l_Lean_Expr_const___override(x_37, x_16);
x_39 = l_Lean_Expr_app___override(x_38, x_36);
x_40 = l_CancelDenoms_mkProdPrf___closed__5;
lean_inc(x_17);
x_41 = l_Lean_Expr_const___override(x_40, x_17);
lean_inc(x_23);
x_42 = l_Lean_Expr_app___override(x_41, x_23);
x_43 = l_CancelDenoms_mkProdPrf___closed__7;
lean_inc(x_17);
x_44 = l_Lean_Expr_const___override(x_43, x_17);
lean_inc(x_23);
x_45 = l_Lean_Expr_app___override(x_44, x_23);
x_46 = l_CancelDenoms_mkProdPrf___closed__8;
lean_inc(x_17);
x_47 = l_Lean_Expr_const___override(x_46, x_17);
lean_inc(x_23);
x_48 = l_Lean_Expr_app___override(x_47, x_23);
x_49 = l_CancelDenoms_mkProdPrf___closed__10;
x_50 = l_Lean_Expr_const___override(x_49, x_17);
lean_inc(x_23);
x_51 = l_Lean_Expr_app___override(x_50, x_23);
lean_inc(x_31);
x_52 = l_Lean_Expr_app___override(x_51, x_31);
x_53 = l_Lean_Expr_app___override(x_48, x_52);
x_54 = l_Lean_Expr_app___override(x_45, x_53);
x_55 = l_Lean_Expr_app___override(x_42, x_54);
x_56 = l_Lean_Expr_app___override(x_39, x_55);
lean_inc(x_12);
x_57 = l_Lean_mkRawNatLit(x_12);
lean_inc(x_23);
lean_inc(x_20);
x_79 = l_Mathlib_Meta_NormNum_mkOfNat(x_20, x_23, x_56, x_57, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_ctor_get(x_80, 0);
lean_inc(x_82);
lean_dec(x_80);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_24);
lean_inc(x_12);
x_83 = l_CancelDenoms_mkProdPrf(x_20, x_23, x_31, x_12, x_82, x_13, x_24, x_5, x_6, x_7, x_8, x_81);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
lean_inc(x_2);
x_86 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_5, x_6, x_7, x_8, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_2);
x_89 = lean_ctor_get(x_86, 1);
lean_inc(x_89);
lean_dec(x_86);
x_90 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_91 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_84, x_26, x_90, x_5, x_6, x_7, x_8, x_89);
lean_dec(x_1);
if (lean_obj_tag(x_91) == 0)
{
uint8_t x_92; 
lean_dec(x_33);
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
lean_dec(x_93);
lean_ctor_set(x_91, 0, x_94);
return x_91;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_95 = lean_ctor_get(x_91, 0);
x_96 = lean_ctor_get(x_91, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_91);
x_97 = lean_ctor_get(x_95, 0);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_91, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_91, 1);
lean_inc(x_100);
lean_dec(x_91);
x_58 = x_99;
x_59 = x_100;
goto block_78;
}
}
else
{
uint8_t x_101; 
x_101 = !lean_is_exclusive(x_86);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_102 = lean_ctor_get(x_86, 1);
x_103 = lean_ctor_get(x_86, 0);
lean_dec(x_103);
x_104 = lean_ctor_get(x_84, 1);
lean_inc(x_104);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_105 = lean_infer_type(x_104, x_5, x_6, x_7, x_8, x_102);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_107 = lean_ctor_get(x_105, 0);
x_108 = lean_ctor_get(x_105, 1);
x_109 = l_Lean_MessageData_ofExpr(x_107);
x_110 = l_CancelDenoms_derive___lambda__3___closed__7;
lean_ctor_set_tag(x_105, 7);
lean_ctor_set(x_105, 1, x_109);
lean_ctor_set(x_105, 0, x_110);
x_111 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
lean_ctor_set_tag(x_86, 7);
lean_ctor_set(x_86, 1, x_111);
lean_ctor_set(x_86, 0, x_105);
x_112 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_86, x_5, x_6, x_7, x_8, x_108);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_115 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_84, x_26, x_113, x_5, x_6, x_7, x_8, x_114);
lean_dec(x_113);
lean_dec(x_1);
if (lean_obj_tag(x_115) == 0)
{
uint8_t x_116; 
lean_dec(x_33);
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_115, 0);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
lean_dec(x_117);
lean_ctor_set(x_115, 0, x_118);
return x_115;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_119 = lean_ctor_get(x_115, 0);
x_120 = lean_ctor_get(x_115, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_115);
x_121 = lean_ctor_get(x_119, 0);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_115, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_115, 1);
lean_inc(x_124);
lean_dec(x_115);
x_58 = x_123;
x_59 = x_124;
goto block_78;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_125 = lean_ctor_get(x_105, 0);
x_126 = lean_ctor_get(x_105, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_105);
x_127 = l_Lean_MessageData_ofExpr(x_125);
x_128 = l_CancelDenoms_derive___lambda__3___closed__7;
x_129 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
lean_ctor_set_tag(x_86, 7);
lean_ctor_set(x_86, 1, x_130);
lean_ctor_set(x_86, 0, x_129);
x_131 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_86, x_5, x_6, x_7, x_8, x_126);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_134 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_84, x_26, x_132, x_5, x_6, x_7, x_8, x_133);
lean_dec(x_132);
lean_dec(x_1);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_33);
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_137 = x_134;
} else {
 lean_dec_ref(x_134);
 x_137 = lean_box(0);
}
x_138 = lean_ctor_get(x_135, 0);
lean_inc(x_138);
lean_dec(x_135);
if (lean_is_scalar(x_137)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_137;
}
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_136);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; 
x_140 = lean_ctor_get(x_134, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_134, 1);
lean_inc(x_141);
lean_dec(x_134);
x_58 = x_140;
x_59 = x_141;
goto block_78;
}
}
}
else
{
lean_object* x_142; lean_object* x_143; 
lean_free_object(x_86);
lean_dec(x_84);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_142 = lean_ctor_get(x_105, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_105, 1);
lean_inc(x_143);
lean_dec(x_105);
x_58 = x_142;
x_59 = x_143;
goto block_78;
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_86, 1);
lean_inc(x_144);
lean_dec(x_86);
x_145 = lean_ctor_get(x_84, 1);
lean_inc(x_145);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_146 = lean_infer_type(x_145, x_5, x_6, x_7, x_8, x_144);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_149 = x_146;
} else {
 lean_dec_ref(x_146);
 x_149 = lean_box(0);
}
x_150 = l_Lean_MessageData_ofExpr(x_147);
x_151 = l_CancelDenoms_derive___lambda__3___closed__7;
if (lean_is_scalar(x_149)) {
 x_152 = lean_alloc_ctor(7, 2, 0);
} else {
 x_152 = x_149;
 lean_ctor_set_tag(x_152, 7);
}
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_154 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_154, x_5, x_6, x_7, x_8, x_148);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_158 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_84, x_26, x_156, x_5, x_6, x_7, x_8, x_157);
lean_dec(x_156);
lean_dec(x_1);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_33);
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_161 = x_158;
} else {
 lean_dec_ref(x_158);
 x_161 = lean_box(0);
}
x_162 = lean_ctor_get(x_159, 0);
lean_inc(x_162);
lean_dec(x_159);
if (lean_is_scalar(x_161)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_161;
}
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_160);
return x_163;
}
else
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_158, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_158, 1);
lean_inc(x_165);
lean_dec(x_158);
x_58 = x_164;
x_59 = x_165;
goto block_78;
}
}
else
{
lean_object* x_166; lean_object* x_167; 
lean_dec(x_84);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_166 = lean_ctor_get(x_146, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_146, 1);
lean_inc(x_167);
lean_dec(x_146);
x_58 = x_166;
x_59 = x_167;
goto block_78;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_168 = lean_ctor_get(x_83, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_83, 1);
lean_inc(x_169);
lean_dec(x_83);
x_58 = x_168;
x_59 = x_169;
goto block_78;
}
}
else
{
lean_object* x_170; lean_object* x_171; 
lean_dec(x_31);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_170 = lean_ctor_get(x_79, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_79, 1);
lean_inc(x_171);
lean_dec(x_79);
x_58 = x_170;
x_59 = x_171;
goto block_78;
}
block_78:
{
uint8_t x_60; 
x_60 = l_Lean_Exception_isInterrupt(x_58);
if (x_60 == 0)
{
uint8_t x_61; 
x_61 = l_Lean_Exception_isRuntime(x_58);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_dec(x_33);
x_62 = l_Lean_MessageData_ofExpr(x_24);
x_63 = l_CancelDenoms_derive___lambda__3___closed__3;
if (lean_is_scalar(x_14)) {
 x_64 = lean_alloc_ctor(7, 2, 0);
} else {
 x_64 = x_14;
 lean_ctor_set_tag(x_64, 7);
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_CancelDenoms_derive___lambda__3___closed__5;
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_Exception_toMessageData(x_58);
x_68 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_70 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_Lean_throwError___at_CancelDenoms_derive___spec__1(x_70, x_5, x_6, x_7, x_8, x_59);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
return x_71;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_71);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
else
{
lean_object* x_76; 
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_33)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_33;
 lean_ctor_set_tag(x_76, 1);
}
lean_ctor_set(x_76, 0, x_58);
lean_ctor_set(x_76, 1, x_59);
return x_76;
}
}
else
{
lean_object* x_77; 
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_33)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_33;
 lean_ctor_set_tag(x_77, 1);
}
lean_ctor_set(x_77, 0, x_58);
lean_ctor_set(x_77, 1, x_59);
return x_77;
}
}
}
else
{
uint8_t x_172; 
lean_dec(x_17);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_free_object(x_16);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_172 = !lean_is_exclusive(x_30);
if (x_172 == 0)
{
return x_30;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_30, 0);
x_174 = lean_ctor_get(x_30, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_30);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
return x_175;
}
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_176 = lean_ctor_get(x_17, 0);
x_177 = lean_ctor_get(x_17, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_17);
lean_inc(x_20);
x_178 = l_Lean_Level_succ___override(x_20);
x_179 = lean_box(0);
lean_inc(x_20);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_20);
lean_ctor_set(x_180, 1, x_179);
x_181 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_180);
x_182 = l_Lean_Expr_const___override(x_181, x_180);
lean_inc(x_176);
x_183 = l_Lean_Expr_app___override(x_182, x_176);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_184 = l_Qq_synthInstanceQ___rarg(x_183, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_233; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_187 = x_184;
} else {
 lean_dec_ref(x_184);
 x_187 = lean_box(0);
}
x_188 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_180);
x_189 = l_Lean_Expr_const___override(x_188, x_180);
lean_inc(x_176);
x_190 = l_Lean_Expr_app___override(x_189, x_176);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 1, x_179);
lean_ctor_set(x_16, 0, x_178);
x_191 = l_CancelDenoms_mkProdPrf___closed__3;
x_192 = l_Lean_Expr_const___override(x_191, x_16);
x_193 = l_Lean_Expr_app___override(x_192, x_190);
x_194 = l_CancelDenoms_mkProdPrf___closed__5;
lean_inc(x_180);
x_195 = l_Lean_Expr_const___override(x_194, x_180);
lean_inc(x_176);
x_196 = l_Lean_Expr_app___override(x_195, x_176);
x_197 = l_CancelDenoms_mkProdPrf___closed__7;
lean_inc(x_180);
x_198 = l_Lean_Expr_const___override(x_197, x_180);
lean_inc(x_176);
x_199 = l_Lean_Expr_app___override(x_198, x_176);
x_200 = l_CancelDenoms_mkProdPrf___closed__8;
lean_inc(x_180);
x_201 = l_Lean_Expr_const___override(x_200, x_180);
lean_inc(x_176);
x_202 = l_Lean_Expr_app___override(x_201, x_176);
x_203 = l_CancelDenoms_mkProdPrf___closed__10;
x_204 = l_Lean_Expr_const___override(x_203, x_180);
lean_inc(x_176);
x_205 = l_Lean_Expr_app___override(x_204, x_176);
lean_inc(x_185);
x_206 = l_Lean_Expr_app___override(x_205, x_185);
x_207 = l_Lean_Expr_app___override(x_202, x_206);
x_208 = l_Lean_Expr_app___override(x_199, x_207);
x_209 = l_Lean_Expr_app___override(x_196, x_208);
x_210 = l_Lean_Expr_app___override(x_193, x_209);
lean_inc(x_12);
x_211 = l_Lean_mkRawNatLit(x_12);
lean_inc(x_176);
lean_inc(x_20);
x_233 = l_Mathlib_Meta_NormNum_mkOfNat(x_20, x_176, x_210, x_211, x_5, x_6, x_7, x_8, x_186);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = lean_ctor_get(x_234, 0);
lean_inc(x_236);
lean_dec(x_234);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_177);
lean_inc(x_12);
x_237 = l_CancelDenoms_mkProdPrf(x_20, x_176, x_185, x_12, x_236, x_13, x_177, x_5, x_6, x_7, x_8, x_235);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_237, 1);
lean_inc(x_239);
lean_dec(x_237);
lean_inc(x_2);
x_240 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_5, x_6, x_7, x_8, x_239);
x_241 = lean_ctor_get(x_240, 0);
lean_inc(x_241);
x_242 = lean_unbox(x_241);
lean_dec(x_241);
if (x_242 == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_2);
x_243 = lean_ctor_get(x_240, 1);
lean_inc(x_243);
lean_dec(x_240);
x_244 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_245 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_238, x_179, x_244, x_5, x_6, x_7, x_8, x_243);
lean_dec(x_1);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_187);
lean_dec(x_177);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_248 = x_245;
} else {
 lean_dec_ref(x_245);
 x_248 = lean_box(0);
}
x_249 = lean_ctor_get(x_246, 0);
lean_inc(x_249);
lean_dec(x_246);
if (lean_is_scalar(x_248)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_248;
}
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_247);
return x_250;
}
else
{
lean_object* x_251; lean_object* x_252; 
x_251 = lean_ctor_get(x_245, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_245, 1);
lean_inc(x_252);
lean_dec(x_245);
x_212 = x_251;
x_213 = x_252;
goto block_232;
}
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
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
x_255 = lean_ctor_get(x_238, 1);
lean_inc(x_255);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_256 = lean_infer_type(x_255, x_5, x_6, x_7, x_8, x_253);
if (lean_obj_tag(x_256) == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_257 = lean_ctor_get(x_256, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_256, 1);
lean_inc(x_258);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 x_259 = x_256;
} else {
 lean_dec_ref(x_256);
 x_259 = lean_box(0);
}
x_260 = l_Lean_MessageData_ofExpr(x_257);
x_261 = l_CancelDenoms_derive___lambda__3___closed__7;
if (lean_is_scalar(x_259)) {
 x_262 = lean_alloc_ctor(7, 2, 0);
} else {
 x_262 = x_259;
 lean_ctor_set_tag(x_262, 7);
}
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_260);
x_263 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
if (lean_is_scalar(x_254)) {
 x_264 = lean_alloc_ctor(7, 2, 0);
} else {
 x_264 = x_254;
 lean_ctor_set_tag(x_264, 7);
}
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
x_265 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_264, x_5, x_6, x_7, x_8, x_258);
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_265, 1);
lean_inc(x_267);
lean_dec(x_265);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_268 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_238, x_179, x_266, x_5, x_6, x_7, x_8, x_267);
lean_dec(x_266);
lean_dec(x_1);
if (lean_obj_tag(x_268) == 0)
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
lean_dec(x_187);
lean_dec(x_177);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_269 = lean_ctor_get(x_268, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_268, 1);
lean_inc(x_270);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 lean_ctor_release(x_268, 1);
 x_271 = x_268;
} else {
 lean_dec_ref(x_268);
 x_271 = lean_box(0);
}
x_272 = lean_ctor_get(x_269, 0);
lean_inc(x_272);
lean_dec(x_269);
if (lean_is_scalar(x_271)) {
 x_273 = lean_alloc_ctor(0, 2, 0);
} else {
 x_273 = x_271;
}
lean_ctor_set(x_273, 0, x_272);
lean_ctor_set(x_273, 1, x_270);
return x_273;
}
else
{
lean_object* x_274; lean_object* x_275; 
x_274 = lean_ctor_get(x_268, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_268, 1);
lean_inc(x_275);
lean_dec(x_268);
x_212 = x_274;
x_213 = x_275;
goto block_232;
}
}
else
{
lean_object* x_276; lean_object* x_277; 
lean_dec(x_254);
lean_dec(x_238);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_276 = lean_ctor_get(x_256, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_256, 1);
lean_inc(x_277);
lean_dec(x_256);
x_212 = x_276;
x_213 = x_277;
goto block_232;
}
}
}
else
{
lean_object* x_278; lean_object* x_279; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_278 = lean_ctor_get(x_237, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_237, 1);
lean_inc(x_279);
lean_dec(x_237);
x_212 = x_278;
x_213 = x_279;
goto block_232;
}
}
else
{
lean_object* x_280; lean_object* x_281; 
lean_dec(x_185);
lean_dec(x_176);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_280 = lean_ctor_get(x_233, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_233, 1);
lean_inc(x_281);
lean_dec(x_233);
x_212 = x_280;
x_213 = x_281;
goto block_232;
}
block_232:
{
uint8_t x_214; 
x_214 = l_Lean_Exception_isInterrupt(x_212);
if (x_214 == 0)
{
uint8_t x_215; 
x_215 = l_Lean_Exception_isRuntime(x_212);
if (x_215 == 0)
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_187);
x_216 = l_Lean_MessageData_ofExpr(x_177);
x_217 = l_CancelDenoms_derive___lambda__3___closed__3;
if (lean_is_scalar(x_14)) {
 x_218 = lean_alloc_ctor(7, 2, 0);
} else {
 x_218 = x_14;
 lean_ctor_set_tag(x_218, 7);
}
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_216);
x_219 = l_CancelDenoms_derive___lambda__3___closed__5;
x_220 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
x_221 = l_Lean_Exception_toMessageData(x_212);
x_222 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
x_223 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_224 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
x_225 = l_Lean_throwError___at_CancelDenoms_derive___spec__1(x_224, x_5, x_6, x_7, x_8, x_213);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_228 = x_225;
} else {
 lean_dec_ref(x_225);
 x_228 = lean_box(0);
}
if (lean_is_scalar(x_228)) {
 x_229 = lean_alloc_ctor(1, 2, 0);
} else {
 x_229 = x_228;
}
lean_ctor_set(x_229, 0, x_226);
lean_ctor_set(x_229, 1, x_227);
return x_229;
}
else
{
lean_object* x_230; 
lean_dec(x_177);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_187)) {
 x_230 = lean_alloc_ctor(1, 2, 0);
} else {
 x_230 = x_187;
 lean_ctor_set_tag(x_230, 1);
}
lean_ctor_set(x_230, 0, x_212);
lean_ctor_set(x_230, 1, x_213);
return x_230;
}
}
else
{
lean_object* x_231; 
lean_dec(x_177);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_187)) {
 x_231 = lean_alloc_ctor(1, 2, 0);
} else {
 x_231 = x_187;
 lean_ctor_set_tag(x_231, 1);
}
lean_ctor_set(x_231, 0, x_212);
lean_ctor_set(x_231, 1, x_213);
return x_231;
}
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_180);
lean_dec(x_178);
lean_dec(x_177);
lean_dec(x_176);
lean_free_object(x_16);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_282 = lean_ctor_get(x_184, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_184, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_284 = x_184;
} else {
 lean_dec_ref(x_184);
 x_284 = lean_box(0);
}
if (lean_is_scalar(x_284)) {
 x_285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_285 = x_284;
}
lean_ctor_set(x_285, 0, x_282);
lean_ctor_set(x_285, 1, x_283);
return x_285;
}
}
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_286 = lean_ctor_get(x_16, 0);
lean_inc(x_286);
lean_dec(x_16);
x_287 = lean_ctor_get(x_17, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_17, 1);
lean_inc(x_288);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_289 = x_17;
} else {
 lean_dec_ref(x_17);
 x_289 = lean_box(0);
}
lean_inc(x_286);
x_290 = l_Lean_Level_succ___override(x_286);
x_291 = lean_box(0);
lean_inc(x_286);
if (lean_is_scalar(x_289)) {
 x_292 = lean_alloc_ctor(1, 2, 0);
} else {
 x_292 = x_289;
 lean_ctor_set_tag(x_292, 1);
}
lean_ctor_set(x_292, 0, x_286);
lean_ctor_set(x_292, 1, x_291);
x_293 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_292);
x_294 = l_Lean_Expr_const___override(x_293, x_292);
lean_inc(x_287);
x_295 = l_Lean_Expr_app___override(x_294, x_287);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_296 = l_Qq_synthInstanceQ___rarg(x_295, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_296) == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_346; 
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_299 = x_296;
} else {
 lean_dec_ref(x_296);
 x_299 = lean_box(0);
}
x_300 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_292);
x_301 = l_Lean_Expr_const___override(x_300, x_292);
lean_inc(x_287);
x_302 = l_Lean_Expr_app___override(x_301, x_287);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_290);
lean_ctor_set(x_303, 1, x_291);
x_304 = l_CancelDenoms_mkProdPrf___closed__3;
x_305 = l_Lean_Expr_const___override(x_304, x_303);
x_306 = l_Lean_Expr_app___override(x_305, x_302);
x_307 = l_CancelDenoms_mkProdPrf___closed__5;
lean_inc(x_292);
x_308 = l_Lean_Expr_const___override(x_307, x_292);
lean_inc(x_287);
x_309 = l_Lean_Expr_app___override(x_308, x_287);
x_310 = l_CancelDenoms_mkProdPrf___closed__7;
lean_inc(x_292);
x_311 = l_Lean_Expr_const___override(x_310, x_292);
lean_inc(x_287);
x_312 = l_Lean_Expr_app___override(x_311, x_287);
x_313 = l_CancelDenoms_mkProdPrf___closed__8;
lean_inc(x_292);
x_314 = l_Lean_Expr_const___override(x_313, x_292);
lean_inc(x_287);
x_315 = l_Lean_Expr_app___override(x_314, x_287);
x_316 = l_CancelDenoms_mkProdPrf___closed__10;
x_317 = l_Lean_Expr_const___override(x_316, x_292);
lean_inc(x_287);
x_318 = l_Lean_Expr_app___override(x_317, x_287);
lean_inc(x_297);
x_319 = l_Lean_Expr_app___override(x_318, x_297);
x_320 = l_Lean_Expr_app___override(x_315, x_319);
x_321 = l_Lean_Expr_app___override(x_312, x_320);
x_322 = l_Lean_Expr_app___override(x_309, x_321);
x_323 = l_Lean_Expr_app___override(x_306, x_322);
lean_inc(x_12);
x_324 = l_Lean_mkRawNatLit(x_12);
lean_inc(x_287);
lean_inc(x_286);
x_346 = l_Mathlib_Meta_NormNum_mkOfNat(x_286, x_287, x_323, x_324, x_5, x_6, x_7, x_8, x_298);
if (lean_obj_tag(x_346) == 0)
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_347 = lean_ctor_get(x_346, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_346, 1);
lean_inc(x_348);
lean_dec(x_346);
x_349 = lean_ctor_get(x_347, 0);
lean_inc(x_349);
lean_dec(x_347);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_288);
lean_inc(x_12);
x_350 = l_CancelDenoms_mkProdPrf(x_286, x_287, x_297, x_12, x_349, x_13, x_288, x_5, x_6, x_7, x_8, x_348);
if (lean_obj_tag(x_350) == 0)
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; uint8_t x_355; 
x_351 = lean_ctor_get(x_350, 0);
lean_inc(x_351);
x_352 = lean_ctor_get(x_350, 1);
lean_inc(x_352);
lean_dec(x_350);
lean_inc(x_2);
x_353 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_5, x_6, x_7, x_8, x_352);
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_unbox(x_354);
lean_dec(x_354);
if (x_355 == 0)
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; 
lean_dec(x_2);
x_356 = lean_ctor_get(x_353, 1);
lean_inc(x_356);
lean_dec(x_353);
x_357 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_358 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_351, x_291, x_357, x_5, x_6, x_7, x_8, x_356);
lean_dec(x_1);
if (lean_obj_tag(x_358) == 0)
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; 
lean_dec(x_299);
lean_dec(x_288);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_359 = lean_ctor_get(x_358, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_358, 1);
lean_inc(x_360);
if (lean_is_exclusive(x_358)) {
 lean_ctor_release(x_358, 0);
 lean_ctor_release(x_358, 1);
 x_361 = x_358;
} else {
 lean_dec_ref(x_358);
 x_361 = lean_box(0);
}
x_362 = lean_ctor_get(x_359, 0);
lean_inc(x_362);
lean_dec(x_359);
if (lean_is_scalar(x_361)) {
 x_363 = lean_alloc_ctor(0, 2, 0);
} else {
 x_363 = x_361;
}
lean_ctor_set(x_363, 0, x_362);
lean_ctor_set(x_363, 1, x_360);
return x_363;
}
else
{
lean_object* x_364; lean_object* x_365; 
x_364 = lean_ctor_get(x_358, 0);
lean_inc(x_364);
x_365 = lean_ctor_get(x_358, 1);
lean_inc(x_365);
lean_dec(x_358);
x_325 = x_364;
x_326 = x_365;
goto block_345;
}
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
x_366 = lean_ctor_get(x_353, 1);
lean_inc(x_366);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 x_367 = x_353;
} else {
 lean_dec_ref(x_353);
 x_367 = lean_box(0);
}
x_368 = lean_ctor_get(x_351, 1);
lean_inc(x_368);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_369 = lean_infer_type(x_368, x_5, x_6, x_7, x_8, x_366);
if (lean_obj_tag(x_369) == 0)
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_370 = lean_ctor_get(x_369, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_369, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_369)) {
 lean_ctor_release(x_369, 0);
 lean_ctor_release(x_369, 1);
 x_372 = x_369;
} else {
 lean_dec_ref(x_369);
 x_372 = lean_box(0);
}
x_373 = l_Lean_MessageData_ofExpr(x_370);
x_374 = l_CancelDenoms_derive___lambda__3___closed__7;
if (lean_is_scalar(x_372)) {
 x_375 = lean_alloc_ctor(7, 2, 0);
} else {
 x_375 = x_372;
 lean_ctor_set_tag(x_375, 7);
}
lean_ctor_set(x_375, 0, x_374);
lean_ctor_set(x_375, 1, x_373);
x_376 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
if (lean_is_scalar(x_367)) {
 x_377 = lean_alloc_ctor(7, 2, 0);
} else {
 x_377 = x_367;
 lean_ctor_set_tag(x_377, 7);
}
lean_ctor_set(x_377, 0, x_375);
lean_ctor_set(x_377, 1, x_376);
x_378 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_377, x_5, x_6, x_7, x_8, x_371);
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_378, 1);
lean_inc(x_380);
lean_dec(x_378);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_381 = l_CancelDenoms_derive___lambda__2(x_12, x_3, x_1, x_351, x_291, x_379, x_5, x_6, x_7, x_8, x_380);
lean_dec(x_379);
lean_dec(x_1);
if (lean_obj_tag(x_381) == 0)
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
lean_dec(x_299);
lean_dec(x_288);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 x_384 = x_381;
} else {
 lean_dec_ref(x_381);
 x_384 = lean_box(0);
}
x_385 = lean_ctor_get(x_382, 0);
lean_inc(x_385);
lean_dec(x_382);
if (lean_is_scalar(x_384)) {
 x_386 = lean_alloc_ctor(0, 2, 0);
} else {
 x_386 = x_384;
}
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_383);
return x_386;
}
else
{
lean_object* x_387; lean_object* x_388; 
x_387 = lean_ctor_get(x_381, 0);
lean_inc(x_387);
x_388 = lean_ctor_get(x_381, 1);
lean_inc(x_388);
lean_dec(x_381);
x_325 = x_387;
x_326 = x_388;
goto block_345;
}
}
else
{
lean_object* x_389; lean_object* x_390; 
lean_dec(x_367);
lean_dec(x_351);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_389 = lean_ctor_get(x_369, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_369, 1);
lean_inc(x_390);
lean_dec(x_369);
x_325 = x_389;
x_326 = x_390;
goto block_345;
}
}
}
else
{
lean_object* x_391; lean_object* x_392; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_391 = lean_ctor_get(x_350, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_350, 1);
lean_inc(x_392);
lean_dec(x_350);
x_325 = x_391;
x_326 = x_392;
goto block_345;
}
}
else
{
lean_object* x_393; lean_object* x_394; 
lean_dec(x_297);
lean_dec(x_287);
lean_dec(x_286);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_393 = lean_ctor_get(x_346, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_346, 1);
lean_inc(x_394);
lean_dec(x_346);
x_325 = x_393;
x_326 = x_394;
goto block_345;
}
block_345:
{
uint8_t x_327; 
x_327 = l_Lean_Exception_isInterrupt(x_325);
if (x_327 == 0)
{
uint8_t x_328; 
x_328 = l_Lean_Exception_isRuntime(x_325);
if (x_328 == 0)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_299);
x_329 = l_Lean_MessageData_ofExpr(x_288);
x_330 = l_CancelDenoms_derive___lambda__3___closed__3;
if (lean_is_scalar(x_14)) {
 x_331 = lean_alloc_ctor(7, 2, 0);
} else {
 x_331 = x_14;
 lean_ctor_set_tag(x_331, 7);
}
lean_ctor_set(x_331, 0, x_330);
lean_ctor_set(x_331, 1, x_329);
x_332 = l_CancelDenoms_derive___lambda__3___closed__5;
x_333 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
x_334 = l_Lean_Exception_toMessageData(x_325);
x_335 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_334);
x_336 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_337 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_337, 0, x_335);
lean_ctor_set(x_337, 1, x_336);
x_338 = l_Lean_throwError___at_CancelDenoms_derive___spec__1(x_337, x_5, x_6, x_7, x_8, x_326);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_341 = x_338;
} else {
 lean_dec_ref(x_338);
 x_341 = lean_box(0);
}
if (lean_is_scalar(x_341)) {
 x_342 = lean_alloc_ctor(1, 2, 0);
} else {
 x_342 = x_341;
}
lean_ctor_set(x_342, 0, x_339);
lean_ctor_set(x_342, 1, x_340);
return x_342;
}
else
{
lean_object* x_343; 
lean_dec(x_288);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_299)) {
 x_343 = lean_alloc_ctor(1, 2, 0);
} else {
 x_343 = x_299;
 lean_ctor_set_tag(x_343, 1);
}
lean_ctor_set(x_343, 0, x_325);
lean_ctor_set(x_343, 1, x_326);
return x_343;
}
}
else
{
lean_object* x_344; 
lean_dec(x_288);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_299)) {
 x_344 = lean_alloc_ctor(1, 2, 0);
} else {
 x_344 = x_299;
 lean_ctor_set_tag(x_344, 1);
}
lean_ctor_set(x_344, 0, x_325);
lean_ctor_set(x_344, 1, x_326);
return x_344;
}
}
}
else
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; 
lean_dec(x_292);
lean_dec(x_290);
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_286);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_395 = lean_ctor_get(x_296, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_296, 1);
lean_inc(x_396);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_397 = x_296;
} else {
 lean_dec_ref(x_296);
 x_397 = lean_box(0);
}
if (lean_is_scalar(x_397)) {
 x_398 = lean_alloc_ctor(1, 2, 0);
} else {
 x_398 = x_397;
}
lean_ctor_set(x_398, 0, x_395);
lean_ctor_set(x_398, 1, x_396);
return x_398;
}
}
}
else
{
uint8_t x_399; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_399 = !lean_is_exclusive(x_15);
if (x_399 == 0)
{
return x_15;
}
else
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_400 = lean_ctor_get(x_15, 0);
x_401 = lean_ctor_get(x_15, 1);
lean_inc(x_401);
lean_inc(x_400);
lean_dec(x_15);
x_402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_402, 0, x_400);
lean_ctor_set(x_402, 1, x_401);
return x_402;
}
}
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = l_Lean_Meta_Simp_defaultMaxSteps;
x_2 = lean_unsigned_to_nat(2u);
x_3 = 0;
x_4 = 1;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 2, 20);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set_uint8(x_6, sizeof(void*)*2, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 1, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 2, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 4, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 5, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 6, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 7, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 8, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 9, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 10, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 11, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 12, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 13, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 14, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 15, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 16, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 17, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 18, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 19, x_4);
return x_6;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_derive___lambda__4___closed__2;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_CancelDenoms_derive___lambda__4___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_derive___lambda__4___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__7() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_CancelDenoms_derive___lambda__4___closed__4;
x_3 = l_CancelDenoms_derive___lambda__4___closed__6;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("e norm_num'd = ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__4___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_derive___lambda__4___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_CancelDenoms_derive___lambda__4___closed__1;
x_10 = l_CancelDenoms_synthesizeUsingNormNum___closed__10;
x_11 = l_CancelDenoms_derive___lambda__4___closed__7;
x_12 = l_Lean_Meta_Simp_mkContext(x_9, x_10, x_11, x_4, x_5, x_6, x_7, x_8);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Mathlib_Meta_NormNum_deriveSimp(x_14, x_17, x_16, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_2);
x_21 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_4, x_5, x_6, x_7, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_free_object(x_12);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_box(0);
x_26 = l_CancelDenoms_derive___lambda__3(x_19, x_2, x_1, x_25, x_4, x_5, x_6, x_7, x_24);
lean_dec(x_1);
return x_26;
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_28 = lean_ctor_get(x_21, 1);
x_29 = lean_ctor_get(x_21, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_19, 0);
lean_inc(x_30);
x_31 = l_Lean_MessageData_ofExpr(x_30);
x_32 = l_CancelDenoms_derive___lambda__4___closed__9;
lean_ctor_set_tag(x_21, 7);
lean_ctor_set(x_21, 1, x_31);
lean_ctor_set(x_21, 0, x_32);
x_33 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_33);
lean_ctor_set(x_12, 0, x_21);
lean_inc(x_2);
x_34 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_12, x_4, x_5, x_6, x_7, x_28);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_CancelDenoms_derive___lambda__3(x_19, x_2, x_1, x_35, x_4, x_5, x_6, x_7, x_36);
lean_dec(x_35);
lean_dec(x_1);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = lean_ctor_get(x_21, 1);
lean_inc(x_38);
lean_dec(x_21);
x_39 = lean_ctor_get(x_19, 0);
lean_inc(x_39);
x_40 = l_Lean_MessageData_ofExpr(x_39);
x_41 = l_CancelDenoms_derive___lambda__4___closed__9;
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_43);
lean_ctor_set(x_12, 0, x_42);
lean_inc(x_2);
x_44 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_12, x_4, x_5, x_6, x_7, x_38);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_CancelDenoms_derive___lambda__3(x_19, x_2, x_1, x_45, x_4, x_5, x_6, x_7, x_46);
lean_dec(x_45);
lean_dec(x_1);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_free_object(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_18);
if (x_48 == 0)
{
return x_18;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_18, 0);
x_50 = lean_ctor_get(x_18, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_18);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_12, 0);
x_53 = lean_ctor_get(x_12, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_12);
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_56 = l_Mathlib_Meta_NormNum_deriveSimp(x_52, x_55, x_54, x_4, x_5, x_6, x_7, x_53);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
lean_inc(x_2);
x_59 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_4, x_5, x_6, x_7, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_box(0);
x_64 = l_CancelDenoms_derive___lambda__3(x_57, x_2, x_1, x_63, x_4, x_5, x_6, x_7, x_62);
lean_dec(x_1);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_66 = x_59;
} else {
 lean_dec_ref(x_59);
 x_66 = lean_box(0);
}
x_67 = lean_ctor_get(x_57, 0);
lean_inc(x_67);
x_68 = l_Lean_MessageData_ofExpr(x_67);
x_69 = l_CancelDenoms_derive___lambda__4___closed__9;
if (lean_is_scalar(x_66)) {
 x_70 = lean_alloc_ctor(7, 2, 0);
} else {
 x_70 = x_66;
 lean_ctor_set_tag(x_70, 7);
}
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
lean_inc(x_2);
x_73 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_72, x_4, x_5, x_6, x_7, x_65);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_CancelDenoms_derive___lambda__3(x_57, x_2, x_1, x_74, x_4, x_5, x_6, x_7, x_75);
lean_dec(x_74);
lean_dec(x_1);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_77 = lean_ctor_get(x_56, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_56, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_79 = x_56;
} else {
 lean_dec_ref(x_56);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("e simplified = ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_derive___lambda__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_CancelDenoms_deriveThms;
x_10 = l_Lean_Meta_Simp_neutralConfig;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_11 = l_Lean_Meta_simpOnlyNames(x_9, x_1, x_10, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_14 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_2, x_4, x_5, x_6, x_7, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_box(0);
x_19 = l_CancelDenoms_derive___lambda__4(x_12, x_2, x_18, x_4, x_5, x_6, x_7, x_17);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_14, 1);
x_22 = lean_ctor_get(x_14, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
x_24 = l_Lean_MessageData_ofExpr(x_23);
x_25 = l_CancelDenoms_derive___lambda__5___closed__2;
lean_ctor_set_tag(x_14, 7);
lean_ctor_set(x_14, 1, x_24);
lean_ctor_set(x_14, 0, x_25);
x_26 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_14);
lean_ctor_set(x_27, 1, x_26);
lean_inc(x_2);
x_28 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_27, x_4, x_5, x_6, x_7, x_21);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_CancelDenoms_derive___lambda__4(x_12, x_2, x_29, x_4, x_5, x_6, x_7, x_30);
lean_dec(x_29);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
x_33 = lean_ctor_get(x_12, 0);
lean_inc(x_33);
x_34 = l_Lean_MessageData_ofExpr(x_33);
x_35 = l_CancelDenoms_derive___lambda__5___closed__2;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
lean_inc(x_2);
x_39 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_2, x_38, x_4, x_5, x_6, x_7, x_32);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_CancelDenoms_derive___lambda__4(x_12, x_2, x_40, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_40);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_11);
if (x_43 == 0)
{
return x_11;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_11, 0);
x_45 = lean_ctor_get(x_11, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_11);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
static lean_object* _init_l_CancelDenoms_derive___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("e = ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_derive___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_derive___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2;
x_8 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_7, x_2, x_3, x_4, x_5, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_box(0);
x_13 = l_CancelDenoms_derive___lambda__5(x_1, x_7, x_12, x_2, x_3, x_4, x_5, x_11);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
x_16 = lean_ctor_get(x_8, 0);
lean_dec(x_16);
lean_inc(x_1);
x_17 = l_Lean_MessageData_ofExpr(x_1);
x_18 = l_CancelDenoms_derive___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_17);
lean_ctor_set(x_8, 0, x_18);
x_19 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_7, x_20, x_2, x_3, x_4, x_5, x_15);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_CancelDenoms_derive___lambda__5(x_1, x_7, x_22, x_2, x_3, x_4, x_5, x_23);
lean_dec(x_22);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
lean_inc(x_1);
x_26 = l_Lean_MessageData_ofExpr(x_1);
x_27 = l_CancelDenoms_derive___closed__2;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_CancelDenoms_synthesizeUsingNormNum___closed__16;
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_7, x_30, x_2, x_3, x_4, x_5, x_25);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_CancelDenoms_derive___lambda__5(x_1, x_7, x_32, x_2, x_3, x_4, x_5, x_33);
lean_dec(x_32);
return x_34;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_CancelDenoms_derive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_CancelDenoms_derive___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CancelDenoms_derive___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_CancelDenoms_derive___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_CancelDenoms_derive___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CancelDenoms_derive___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_derive___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CancelDenoms_derive___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Not", 3, 3);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancel_factors_ne", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_findCompLemma___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_CancelDenoms_findCompLemma___closed__3;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancel_factors_eq", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_findCompLemma___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_CancelDenoms_findCompLemma___closed__6;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("gt", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancel_factors_lt", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_findCompLemma___closed__13;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__15() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_CancelDenoms_findCompLemma___closed__14;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ge", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancel_factors_le", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1;
x_2 = l_CancelDenoms_findCompLemma___closed__17;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__19() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_CancelDenoms_findCompLemma___closed__18;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le", 2, 2);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_findCompLemma___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_findCompLemma(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Meta_whnfR(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = l_Lean_Expr_getAppFnArgs(x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
switch (lean_obj_tag(x_13)) {
case 0:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_11, 1);
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = l_CancelDenoms_mkProdPrf___lambda__9___closed__25;
x_19 = lean_string_dec_eq(x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_CancelDenoms_findCompLemma___closed__1;
x_21 = lean_string_dec_eq(x_17, x_20);
lean_dec(x_17);
if (x_21 == 0)
{
lean_object* x_22; 
lean_free_object(x_11);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_box(0);
lean_ctor_set(x_7, 0, x_22);
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_array_get_size(x_15);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_dec_eq(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; 
lean_free_object(x_11);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_box(0);
lean_ctor_set(x_7, 0, x_26);
return x_7;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_free_object(x_7);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_array_fget(x_15, x_27);
lean_dec(x_15);
x_29 = l_Lean_Meta_whnfR(x_28, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = l_Lean_Expr_getAppFnArgs(x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 1)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_32, 1);
x_37 = lean_ctor_get(x_32, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = lean_string_dec_eq(x_38, x_18);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
lean_free_object(x_32);
lean_dec(x_36);
lean_free_object(x_11);
x_40 = lean_box(0);
lean_ctor_set(x_29, 0, x_40);
return x_29;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_array_get_size(x_36);
x_42 = lean_unsigned_to_nat(3u);
x_43 = lean_nat_dec_eq(x_41, x_42);
lean_dec(x_41);
if (x_43 == 0)
{
lean_object* x_44; 
lean_free_object(x_32);
lean_dec(x_36);
lean_free_object(x_11);
x_44 = lean_box(0);
lean_ctor_set(x_29, 0, x_44);
return x_29;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_array_fget(x_36, x_24);
x_46 = lean_unsigned_to_nat(2u);
x_47 = lean_array_fget(x_36, x_46);
lean_dec(x_36);
x_48 = l_CancelDenoms_findCompLemma___closed__4;
lean_ctor_set(x_32, 1, x_48);
lean_ctor_set(x_32, 0, x_47);
lean_ctor_set(x_11, 1, x_32);
lean_ctor_set(x_11, 0, x_45);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_11);
lean_ctor_set(x_29, 0, x_49);
return x_29;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = lean_ctor_get(x_32, 1);
lean_inc(x_50);
lean_dec(x_32);
x_51 = lean_ctor_get(x_33, 1);
lean_inc(x_51);
lean_dec(x_33);
x_52 = lean_string_dec_eq(x_51, x_18);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; 
lean_dec(x_50);
lean_free_object(x_11);
x_53 = lean_box(0);
lean_ctor_set(x_29, 0, x_53);
return x_29;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_array_get_size(x_50);
x_55 = lean_unsigned_to_nat(3u);
x_56 = lean_nat_dec_eq(x_54, x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_50);
lean_free_object(x_11);
x_57 = lean_box(0);
lean_ctor_set(x_29, 0, x_57);
return x_29;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_array_fget(x_50, x_24);
x_59 = lean_unsigned_to_nat(2u);
x_60 = lean_array_fget(x_50, x_59);
lean_dec(x_50);
x_61 = l_CancelDenoms_findCompLemma___closed__4;
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set(x_11, 1, x_62);
lean_ctor_set(x_11, 0, x_58);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_11);
lean_ctor_set(x_29, 0, x_63);
return x_29;
}
}
}
}
else
{
lean_object* x_64; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_free_object(x_11);
x_64 = lean_box(0);
lean_ctor_set(x_29, 0, x_64);
return x_29;
}
}
else
{
lean_object* x_65; 
lean_dec(x_33);
lean_dec(x_32);
lean_free_object(x_11);
x_65 = lean_box(0);
lean_ctor_set(x_29, 0, x_65);
return x_29;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_29, 0);
x_67 = lean_ctor_get(x_29, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_29);
x_68 = l_Lean_Expr_getAppFnArgs(x_66);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
if (lean_obj_tag(x_69) == 1)
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_72 = x_68;
} else {
 lean_dec_ref(x_68);
 x_72 = lean_box(0);
}
x_73 = lean_ctor_get(x_69, 1);
lean_inc(x_73);
lean_dec(x_69);
x_74 = lean_string_dec_eq(x_73, x_18);
lean_dec(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_72);
lean_dec(x_71);
lean_free_object(x_11);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_67);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_77 = lean_array_get_size(x_71);
x_78 = lean_unsigned_to_nat(3u);
x_79 = lean_nat_dec_eq(x_77, x_78);
lean_dec(x_77);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_72);
lean_dec(x_71);
lean_free_object(x_11);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_67);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_82 = lean_array_fget(x_71, x_24);
x_83 = lean_unsigned_to_nat(2u);
x_84 = lean_array_fget(x_71, x_83);
lean_dec(x_71);
x_85 = l_CancelDenoms_findCompLemma___closed__4;
if (lean_is_scalar(x_72)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_72;
}
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
lean_ctor_set(x_11, 1, x_86);
lean_ctor_set(x_11, 0, x_82);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_11);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_67);
return x_88;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_free_object(x_11);
x_89 = lean_box(0);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_67);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_69);
lean_dec(x_68);
lean_free_object(x_11);
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_67);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_free_object(x_11);
x_93 = !lean_is_exclusive(x_29);
if (x_93 == 0)
{
return x_29;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_29, 0);
x_95 = lean_ctor_get(x_29, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_29);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
}
else
{
lean_object* x_97; lean_object* x_98; uint8_t x_99; 
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_97 = lean_array_get_size(x_15);
x_98 = lean_unsigned_to_nat(3u);
x_99 = lean_nat_dec_eq(x_97, x_98);
lean_dec(x_97);
if (x_99 == 0)
{
lean_object* x_100; 
lean_free_object(x_11);
lean_dec(x_15);
x_100 = lean_box(0);
lean_ctor_set(x_7, 0, x_100);
return x_7;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_array_fget(x_15, x_101);
x_103 = lean_unsigned_to_nat(2u);
x_104 = lean_array_fget(x_15, x_103);
lean_dec(x_15);
x_105 = l_CancelDenoms_findCompLemma___closed__7;
lean_ctor_set(x_11, 1, x_105);
lean_ctor_set(x_11, 0, x_104);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_102);
lean_ctor_set(x_106, 1, x_11);
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_7, 0, x_107);
return x_7;
}
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_108 = lean_ctor_get(x_11, 1);
lean_inc(x_108);
lean_dec(x_11);
x_109 = lean_ctor_get(x_12, 1);
lean_inc(x_109);
lean_dec(x_12);
x_110 = l_CancelDenoms_mkProdPrf___lambda__9___closed__25;
x_111 = lean_string_dec_eq(x_109, x_110);
if (x_111 == 0)
{
lean_object* x_112; uint8_t x_113; 
x_112 = l_CancelDenoms_findCompLemma___closed__1;
x_113 = lean_string_dec_eq(x_109, x_112);
lean_dec(x_109);
if (x_113 == 0)
{
lean_object* x_114; 
lean_dec(x_108);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_114 = lean_box(0);
lean_ctor_set(x_7, 0, x_114);
return x_7;
}
else
{
lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_115 = lean_array_get_size(x_108);
x_116 = lean_unsigned_to_nat(1u);
x_117 = lean_nat_dec_eq(x_115, x_116);
lean_dec(x_115);
if (x_117 == 0)
{
lean_object* x_118; 
lean_dec(x_108);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_118 = lean_box(0);
lean_ctor_set(x_7, 0, x_118);
return x_7;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_free_object(x_7);
x_119 = lean_unsigned_to_nat(0u);
x_120 = lean_array_fget(x_108, x_119);
lean_dec(x_108);
x_121 = l_Lean_Meta_whnfR(x_120, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = l_Lean_Expr_getAppFnArgs(x_122);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
if (lean_obj_tag(x_126) == 1)
{
lean_object* x_127; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_126, 1);
lean_inc(x_130);
lean_dec(x_126);
x_131 = lean_string_dec_eq(x_130, x_110);
lean_dec(x_130);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_129);
lean_dec(x_128);
x_132 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_124;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_123);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_134 = lean_array_get_size(x_128);
x_135 = lean_unsigned_to_nat(3u);
x_136 = lean_nat_dec_eq(x_134, x_135);
lean_dec(x_134);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; 
lean_dec(x_129);
lean_dec(x_128);
x_137 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_124;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_123);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_139 = lean_array_fget(x_128, x_116);
x_140 = lean_unsigned_to_nat(2u);
x_141 = lean_array_fget(x_128, x_140);
lean_dec(x_128);
x_142 = l_CancelDenoms_findCompLemma___closed__4;
if (lean_is_scalar(x_129)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_129;
}
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_139);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_145, 0, x_144);
if (lean_is_scalar(x_124)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_124;
}
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_123);
return x_146;
}
}
}
else
{
lean_object* x_147; lean_object* x_148; 
lean_dec(x_127);
lean_dec(x_126);
lean_dec(x_125);
x_147 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_124;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_123);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; 
lean_dec(x_126);
lean_dec(x_125);
x_149 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_124;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_123);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = lean_ctor_get(x_121, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_121, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_153 = x_121;
} else {
 lean_dec_ref(x_121);
 x_153 = lean_box(0);
}
if (lean_is_scalar(x_153)) {
 x_154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_154 = x_153;
}
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
}
}
else
{
lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_109);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_155 = lean_array_get_size(x_108);
x_156 = lean_unsigned_to_nat(3u);
x_157 = lean_nat_dec_eq(x_155, x_156);
lean_dec(x_155);
if (x_157 == 0)
{
lean_object* x_158; 
lean_dec(x_108);
x_158 = lean_box(0);
lean_ctor_set(x_7, 0, x_158);
return x_7;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_159 = lean_unsigned_to_nat(1u);
x_160 = lean_array_fget(x_108, x_159);
x_161 = lean_unsigned_to_nat(2u);
x_162 = lean_array_fget(x_108, x_161);
lean_dec(x_108);
x_163 = l_CancelDenoms_findCompLemma___closed__7;
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_160);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_7, 0, x_166);
return x_7;
}
}
}
}
case 1:
{
lean_object* x_167; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_167 = lean_ctor_get(x_13, 0);
lean_inc(x_167);
if (lean_obj_tag(x_167) == 0)
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_11);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_169 = lean_ctor_get(x_11, 1);
x_170 = lean_ctor_get(x_11, 0);
lean_dec(x_170);
x_171 = lean_ctor_get(x_12, 1);
lean_inc(x_171);
lean_dec(x_12);
x_172 = lean_ctor_get(x_13, 1);
lean_inc(x_172);
lean_dec(x_13);
x_173 = l_CancelDenoms_findCompLemma___closed__8;
x_174 = lean_string_dec_eq(x_172, x_173);
if (x_174 == 0)
{
lean_object* x_175; uint8_t x_176; 
x_175 = l_CancelDenoms_findCompLemma___closed__9;
x_176 = lean_string_dec_eq(x_172, x_175);
if (x_176 == 0)
{
lean_object* x_177; uint8_t x_178; 
x_177 = l_CancelDenoms_findCompLemma___closed__10;
x_178 = lean_string_dec_eq(x_172, x_177);
if (x_178 == 0)
{
lean_object* x_179; uint8_t x_180; 
x_179 = l_CancelDenoms_findCompLemma___closed__11;
x_180 = lean_string_dec_eq(x_172, x_179);
lean_dec(x_172);
if (x_180 == 0)
{
lean_object* x_181; 
lean_dec(x_171);
lean_free_object(x_11);
lean_dec(x_169);
x_181 = lean_box(0);
lean_ctor_set(x_7, 0, x_181);
return x_7;
}
else
{
lean_object* x_182; uint8_t x_183; 
x_182 = l_CancelDenoms_findCompLemma___closed__12;
x_183 = lean_string_dec_eq(x_171, x_182);
lean_dec(x_171);
if (x_183 == 0)
{
lean_object* x_184; 
lean_free_object(x_11);
lean_dec(x_169);
x_184 = lean_box(0);
lean_ctor_set(x_7, 0, x_184);
return x_7;
}
else
{
lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_185 = lean_array_get_size(x_169);
x_186 = lean_unsigned_to_nat(4u);
x_187 = lean_nat_dec_eq(x_185, x_186);
lean_dec(x_185);
if (x_187 == 0)
{
lean_object* x_188; 
lean_free_object(x_11);
lean_dec(x_169);
x_188 = lean_box(0);
lean_ctor_set(x_7, 0, x_188);
return x_7;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_189 = lean_unsigned_to_nat(2u);
x_190 = lean_array_fget(x_169, x_189);
x_191 = lean_unsigned_to_nat(3u);
x_192 = lean_array_fget(x_169, x_191);
lean_dec(x_169);
x_193 = l_CancelDenoms_findCompLemma___closed__15;
lean_ctor_set(x_11, 1, x_193);
lean_ctor_set(x_11, 0, x_190);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_11);
x_195 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_7, 0, x_195);
return x_7;
}
}
}
}
else
{
lean_object* x_196; uint8_t x_197; 
lean_dec(x_172);
x_196 = l_CancelDenoms_findCompLemma___closed__16;
x_197 = lean_string_dec_eq(x_171, x_196);
lean_dec(x_171);
if (x_197 == 0)
{
lean_object* x_198; 
lean_free_object(x_11);
lean_dec(x_169);
x_198 = lean_box(0);
lean_ctor_set(x_7, 0, x_198);
return x_7;
}
else
{
lean_object* x_199; lean_object* x_200; uint8_t x_201; 
x_199 = lean_array_get_size(x_169);
x_200 = lean_unsigned_to_nat(4u);
x_201 = lean_nat_dec_eq(x_199, x_200);
lean_dec(x_199);
if (x_201 == 0)
{
lean_object* x_202; 
lean_free_object(x_11);
lean_dec(x_169);
x_202 = lean_box(0);
lean_ctor_set(x_7, 0, x_202);
return x_7;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_203 = lean_unsigned_to_nat(2u);
x_204 = lean_array_fget(x_169, x_203);
x_205 = lean_unsigned_to_nat(3u);
x_206 = lean_array_fget(x_169, x_205);
lean_dec(x_169);
x_207 = l_CancelDenoms_findCompLemma___closed__19;
lean_ctor_set(x_11, 1, x_207);
lean_ctor_set(x_11, 0, x_204);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_11);
x_209 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_7, 0, x_209);
return x_7;
}
}
}
}
else
{
lean_object* x_210; uint8_t x_211; 
lean_dec(x_172);
x_210 = l_CancelDenoms_findCompLemma___closed__20;
x_211 = lean_string_dec_eq(x_171, x_210);
lean_dec(x_171);
if (x_211 == 0)
{
lean_object* x_212; 
lean_free_object(x_11);
lean_dec(x_169);
x_212 = lean_box(0);
lean_ctor_set(x_7, 0, x_212);
return x_7;
}
else
{
lean_object* x_213; lean_object* x_214; uint8_t x_215; 
x_213 = lean_array_get_size(x_169);
x_214 = lean_unsigned_to_nat(4u);
x_215 = lean_nat_dec_eq(x_213, x_214);
lean_dec(x_213);
if (x_215 == 0)
{
lean_object* x_216; 
lean_free_object(x_11);
lean_dec(x_169);
x_216 = lean_box(0);
lean_ctor_set(x_7, 0, x_216);
return x_7;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_217 = lean_unsigned_to_nat(2u);
x_218 = lean_array_fget(x_169, x_217);
x_219 = lean_unsigned_to_nat(3u);
x_220 = lean_array_fget(x_169, x_219);
lean_dec(x_169);
x_221 = l_CancelDenoms_findCompLemma___closed__19;
lean_ctor_set(x_11, 1, x_221);
lean_ctor_set(x_11, 0, x_220);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_218);
lean_ctor_set(x_222, 1, x_11);
x_223 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_7, 0, x_223);
return x_7;
}
}
}
}
else
{
lean_object* x_224; uint8_t x_225; 
lean_dec(x_172);
x_224 = l_CancelDenoms_findCompLemma___closed__21;
x_225 = lean_string_dec_eq(x_171, x_224);
lean_dec(x_171);
if (x_225 == 0)
{
lean_object* x_226; 
lean_free_object(x_11);
lean_dec(x_169);
x_226 = lean_box(0);
lean_ctor_set(x_7, 0, x_226);
return x_7;
}
else
{
lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_227 = lean_array_get_size(x_169);
x_228 = lean_unsigned_to_nat(4u);
x_229 = lean_nat_dec_eq(x_227, x_228);
lean_dec(x_227);
if (x_229 == 0)
{
lean_object* x_230; 
lean_free_object(x_11);
lean_dec(x_169);
x_230 = lean_box(0);
lean_ctor_set(x_7, 0, x_230);
return x_7;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_231 = lean_unsigned_to_nat(2u);
x_232 = lean_array_fget(x_169, x_231);
x_233 = lean_unsigned_to_nat(3u);
x_234 = lean_array_fget(x_169, x_233);
lean_dec(x_169);
x_235 = l_CancelDenoms_findCompLemma___closed__15;
lean_ctor_set(x_11, 1, x_235);
lean_ctor_set(x_11, 0, x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_232);
lean_ctor_set(x_236, 1, x_11);
x_237 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_7, 0, x_237);
return x_7;
}
}
}
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_238 = lean_ctor_get(x_11, 1);
lean_inc(x_238);
lean_dec(x_11);
x_239 = lean_ctor_get(x_12, 1);
lean_inc(x_239);
lean_dec(x_12);
x_240 = lean_ctor_get(x_13, 1);
lean_inc(x_240);
lean_dec(x_13);
x_241 = l_CancelDenoms_findCompLemma___closed__8;
x_242 = lean_string_dec_eq(x_240, x_241);
if (x_242 == 0)
{
lean_object* x_243; uint8_t x_244; 
x_243 = l_CancelDenoms_findCompLemma___closed__9;
x_244 = lean_string_dec_eq(x_240, x_243);
if (x_244 == 0)
{
lean_object* x_245; uint8_t x_246; 
x_245 = l_CancelDenoms_findCompLemma___closed__10;
x_246 = lean_string_dec_eq(x_240, x_245);
if (x_246 == 0)
{
lean_object* x_247; uint8_t x_248; 
x_247 = l_CancelDenoms_findCompLemma___closed__11;
x_248 = lean_string_dec_eq(x_240, x_247);
lean_dec(x_240);
if (x_248 == 0)
{
lean_object* x_249; 
lean_dec(x_239);
lean_dec(x_238);
x_249 = lean_box(0);
lean_ctor_set(x_7, 0, x_249);
return x_7;
}
else
{
lean_object* x_250; uint8_t x_251; 
x_250 = l_CancelDenoms_findCompLemma___closed__12;
x_251 = lean_string_dec_eq(x_239, x_250);
lean_dec(x_239);
if (x_251 == 0)
{
lean_object* x_252; 
lean_dec(x_238);
x_252 = lean_box(0);
lean_ctor_set(x_7, 0, x_252);
return x_7;
}
else
{
lean_object* x_253; lean_object* x_254; uint8_t x_255; 
x_253 = lean_array_get_size(x_238);
x_254 = lean_unsigned_to_nat(4u);
x_255 = lean_nat_dec_eq(x_253, x_254);
lean_dec(x_253);
if (x_255 == 0)
{
lean_object* x_256; 
lean_dec(x_238);
x_256 = lean_box(0);
lean_ctor_set(x_7, 0, x_256);
return x_7;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_257 = lean_unsigned_to_nat(2u);
x_258 = lean_array_fget(x_238, x_257);
x_259 = lean_unsigned_to_nat(3u);
x_260 = lean_array_fget(x_238, x_259);
lean_dec(x_238);
x_261 = l_CancelDenoms_findCompLemma___closed__15;
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_258);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_263, 0, x_260);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_7, 0, x_264);
return x_7;
}
}
}
}
else
{
lean_object* x_265; uint8_t x_266; 
lean_dec(x_240);
x_265 = l_CancelDenoms_findCompLemma___closed__16;
x_266 = lean_string_dec_eq(x_239, x_265);
lean_dec(x_239);
if (x_266 == 0)
{
lean_object* x_267; 
lean_dec(x_238);
x_267 = lean_box(0);
lean_ctor_set(x_7, 0, x_267);
return x_7;
}
else
{
lean_object* x_268; lean_object* x_269; uint8_t x_270; 
x_268 = lean_array_get_size(x_238);
x_269 = lean_unsigned_to_nat(4u);
x_270 = lean_nat_dec_eq(x_268, x_269);
lean_dec(x_268);
if (x_270 == 0)
{
lean_object* x_271; 
lean_dec(x_238);
x_271 = lean_box(0);
lean_ctor_set(x_7, 0, x_271);
return x_7;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_272 = lean_unsigned_to_nat(2u);
x_273 = lean_array_fget(x_238, x_272);
x_274 = lean_unsigned_to_nat(3u);
x_275 = lean_array_fget(x_238, x_274);
lean_dec(x_238);
x_276 = l_CancelDenoms_findCompLemma___closed__19;
x_277 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_277, 0, x_273);
lean_ctor_set(x_277, 1, x_276);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_275);
lean_ctor_set(x_278, 1, x_277);
x_279 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_7, 0, x_279);
return x_7;
}
}
}
}
else
{
lean_object* x_280; uint8_t x_281; 
lean_dec(x_240);
x_280 = l_CancelDenoms_findCompLemma___closed__20;
x_281 = lean_string_dec_eq(x_239, x_280);
lean_dec(x_239);
if (x_281 == 0)
{
lean_object* x_282; 
lean_dec(x_238);
x_282 = lean_box(0);
lean_ctor_set(x_7, 0, x_282);
return x_7;
}
else
{
lean_object* x_283; lean_object* x_284; uint8_t x_285; 
x_283 = lean_array_get_size(x_238);
x_284 = lean_unsigned_to_nat(4u);
x_285 = lean_nat_dec_eq(x_283, x_284);
lean_dec(x_283);
if (x_285 == 0)
{
lean_object* x_286; 
lean_dec(x_238);
x_286 = lean_box(0);
lean_ctor_set(x_7, 0, x_286);
return x_7;
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_287 = lean_unsigned_to_nat(2u);
x_288 = lean_array_fget(x_238, x_287);
x_289 = lean_unsigned_to_nat(3u);
x_290 = lean_array_fget(x_238, x_289);
lean_dec(x_238);
x_291 = l_CancelDenoms_findCompLemma___closed__19;
x_292 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_288);
lean_ctor_set(x_293, 1, x_292);
x_294 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_7, 0, x_294);
return x_7;
}
}
}
}
else
{
lean_object* x_295; uint8_t x_296; 
lean_dec(x_240);
x_295 = l_CancelDenoms_findCompLemma___closed__21;
x_296 = lean_string_dec_eq(x_239, x_295);
lean_dec(x_239);
if (x_296 == 0)
{
lean_object* x_297; 
lean_dec(x_238);
x_297 = lean_box(0);
lean_ctor_set(x_7, 0, x_297);
return x_7;
}
else
{
lean_object* x_298; lean_object* x_299; uint8_t x_300; 
x_298 = lean_array_get_size(x_238);
x_299 = lean_unsigned_to_nat(4u);
x_300 = lean_nat_dec_eq(x_298, x_299);
lean_dec(x_298);
if (x_300 == 0)
{
lean_object* x_301; 
lean_dec(x_238);
x_301 = lean_box(0);
lean_ctor_set(x_7, 0, x_301);
return x_7;
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_302 = lean_unsigned_to_nat(2u);
x_303 = lean_array_fget(x_238, x_302);
x_304 = lean_unsigned_to_nat(3u);
x_305 = lean_array_fget(x_238, x_304);
lean_dec(x_238);
x_306 = l_CancelDenoms_findCompLemma___closed__15;
x_307 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_307, 0, x_305);
lean_ctor_set(x_307, 1, x_306);
x_308 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_308, 0, x_303);
lean_ctor_set(x_308, 1, x_307);
x_309 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_7, 0, x_309);
return x_7;
}
}
}
}
}
else
{
lean_object* x_310; 
lean_dec(x_167);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_310 = lean_box(0);
lean_ctor_set(x_7, 0, x_310);
return x_7;
}
}
default: 
{
lean_object* x_311; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_311 = lean_box(0);
lean_ctor_set(x_7, 0, x_311);
return x_7;
}
}
}
else
{
lean_object* x_312; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_312 = lean_box(0);
lean_ctor_set(x_7, 0, x_312);
return x_7;
}
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_313 = lean_ctor_get(x_7, 0);
x_314 = lean_ctor_get(x_7, 1);
lean_inc(x_314);
lean_inc(x_313);
lean_dec(x_7);
x_315 = l_Lean_Expr_getAppFnArgs(x_313);
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
if (lean_obj_tag(x_316) == 1)
{
lean_object* x_317; 
x_317 = lean_ctor_get(x_316, 0);
lean_inc(x_317);
switch (lean_obj_tag(x_317)) {
case 0:
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_318 = lean_ctor_get(x_315, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_315)) {
 lean_ctor_release(x_315, 0);
 lean_ctor_release(x_315, 1);
 x_319 = x_315;
} else {
 lean_dec_ref(x_315);
 x_319 = lean_box(0);
}
x_320 = lean_ctor_get(x_316, 1);
lean_inc(x_320);
lean_dec(x_316);
x_321 = l_CancelDenoms_mkProdPrf___lambda__9___closed__25;
x_322 = lean_string_dec_eq(x_320, x_321);
if (x_322 == 0)
{
lean_object* x_323; uint8_t x_324; 
x_323 = l_CancelDenoms_findCompLemma___closed__1;
x_324 = lean_string_dec_eq(x_320, x_323);
lean_dec(x_320);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; 
lean_dec(x_319);
lean_dec(x_318);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_325 = lean_box(0);
x_326 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_326, 0, x_325);
lean_ctor_set(x_326, 1, x_314);
return x_326;
}
else
{
lean_object* x_327; lean_object* x_328; uint8_t x_329; 
x_327 = lean_array_get_size(x_318);
x_328 = lean_unsigned_to_nat(1u);
x_329 = lean_nat_dec_eq(x_327, x_328);
lean_dec(x_327);
if (x_329 == 0)
{
lean_object* x_330; lean_object* x_331; 
lean_dec(x_319);
lean_dec(x_318);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_330 = lean_box(0);
x_331 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_331, 0, x_330);
lean_ctor_set(x_331, 1, x_314);
return x_331;
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_332 = lean_unsigned_to_nat(0u);
x_333 = lean_array_fget(x_318, x_332);
lean_dec(x_318);
x_334 = l_Lean_Meta_whnfR(x_333, x_2, x_3, x_4, x_5, x_314);
if (lean_obj_tag(x_334) == 0)
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
if (lean_is_exclusive(x_334)) {
 lean_ctor_release(x_334, 0);
 lean_ctor_release(x_334, 1);
 x_337 = x_334;
} else {
 lean_dec_ref(x_334);
 x_337 = lean_box(0);
}
x_338 = l_Lean_Expr_getAppFnArgs(x_335);
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
if (lean_obj_tag(x_339) == 1)
{
lean_object* x_340; 
x_340 = lean_ctor_get(x_339, 0);
lean_inc(x_340);
if (lean_obj_tag(x_340) == 0)
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_341 = lean_ctor_get(x_338, 1);
lean_inc(x_341);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_342 = x_338;
} else {
 lean_dec_ref(x_338);
 x_342 = lean_box(0);
}
x_343 = lean_ctor_get(x_339, 1);
lean_inc(x_343);
lean_dec(x_339);
x_344 = lean_string_dec_eq(x_343, x_321);
lean_dec(x_343);
if (x_344 == 0)
{
lean_object* x_345; lean_object* x_346; 
lean_dec(x_342);
lean_dec(x_341);
lean_dec(x_319);
x_345 = lean_box(0);
if (lean_is_scalar(x_337)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_337;
}
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_336);
return x_346;
}
else
{
lean_object* x_347; lean_object* x_348; uint8_t x_349; 
x_347 = lean_array_get_size(x_341);
x_348 = lean_unsigned_to_nat(3u);
x_349 = lean_nat_dec_eq(x_347, x_348);
lean_dec(x_347);
if (x_349 == 0)
{
lean_object* x_350; lean_object* x_351; 
lean_dec(x_342);
lean_dec(x_341);
lean_dec(x_319);
x_350 = lean_box(0);
if (lean_is_scalar(x_337)) {
 x_351 = lean_alloc_ctor(0, 2, 0);
} else {
 x_351 = x_337;
}
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_336);
return x_351;
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_352 = lean_array_fget(x_341, x_328);
x_353 = lean_unsigned_to_nat(2u);
x_354 = lean_array_fget(x_341, x_353);
lean_dec(x_341);
x_355 = l_CancelDenoms_findCompLemma___closed__4;
if (lean_is_scalar(x_342)) {
 x_356 = lean_alloc_ctor(0, 2, 0);
} else {
 x_356 = x_342;
}
lean_ctor_set(x_356, 0, x_354);
lean_ctor_set(x_356, 1, x_355);
if (lean_is_scalar(x_319)) {
 x_357 = lean_alloc_ctor(0, 2, 0);
} else {
 x_357 = x_319;
}
lean_ctor_set(x_357, 0, x_352);
lean_ctor_set(x_357, 1, x_356);
x_358 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_358, 0, x_357);
if (lean_is_scalar(x_337)) {
 x_359 = lean_alloc_ctor(0, 2, 0);
} else {
 x_359 = x_337;
}
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_336);
return x_359;
}
}
}
else
{
lean_object* x_360; lean_object* x_361; 
lean_dec(x_340);
lean_dec(x_339);
lean_dec(x_338);
lean_dec(x_319);
x_360 = lean_box(0);
if (lean_is_scalar(x_337)) {
 x_361 = lean_alloc_ctor(0, 2, 0);
} else {
 x_361 = x_337;
}
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_336);
return x_361;
}
}
else
{
lean_object* x_362; lean_object* x_363; 
lean_dec(x_339);
lean_dec(x_338);
lean_dec(x_319);
x_362 = lean_box(0);
if (lean_is_scalar(x_337)) {
 x_363 = lean_alloc_ctor(0, 2, 0);
} else {
 x_363 = x_337;
}
lean_ctor_set(x_363, 0, x_362);
lean_ctor_set(x_363, 1, x_336);
return x_363;
}
}
else
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
lean_dec(x_319);
x_364 = lean_ctor_get(x_334, 0);
lean_inc(x_364);
x_365 = lean_ctor_get(x_334, 1);
lean_inc(x_365);
if (lean_is_exclusive(x_334)) {
 lean_ctor_release(x_334, 0);
 lean_ctor_release(x_334, 1);
 x_366 = x_334;
} else {
 lean_dec_ref(x_334);
 x_366 = lean_box(0);
}
if (lean_is_scalar(x_366)) {
 x_367 = lean_alloc_ctor(1, 2, 0);
} else {
 x_367 = x_366;
}
lean_ctor_set(x_367, 0, x_364);
lean_ctor_set(x_367, 1, x_365);
return x_367;
}
}
}
}
else
{
lean_object* x_368; lean_object* x_369; uint8_t x_370; 
lean_dec(x_320);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_368 = lean_array_get_size(x_318);
x_369 = lean_unsigned_to_nat(3u);
x_370 = lean_nat_dec_eq(x_368, x_369);
lean_dec(x_368);
if (x_370 == 0)
{
lean_object* x_371; lean_object* x_372; 
lean_dec(x_319);
lean_dec(x_318);
x_371 = lean_box(0);
x_372 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_372, 0, x_371);
lean_ctor_set(x_372, 1, x_314);
return x_372;
}
else
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_373 = lean_unsigned_to_nat(1u);
x_374 = lean_array_fget(x_318, x_373);
x_375 = lean_unsigned_to_nat(2u);
x_376 = lean_array_fget(x_318, x_375);
lean_dec(x_318);
x_377 = l_CancelDenoms_findCompLemma___closed__7;
if (lean_is_scalar(x_319)) {
 x_378 = lean_alloc_ctor(0, 2, 0);
} else {
 x_378 = x_319;
}
lean_ctor_set(x_378, 0, x_376);
lean_ctor_set(x_378, 1, x_377);
x_379 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_379, 0, x_374);
lean_ctor_set(x_379, 1, x_378);
x_380 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_380, 0, x_379);
x_381 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_381, 0, x_380);
lean_ctor_set(x_381, 1, x_314);
return x_381;
}
}
}
case 1:
{
lean_object* x_382; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_382 = lean_ctor_get(x_317, 0);
lean_inc(x_382);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; uint8_t x_388; 
x_383 = lean_ctor_get(x_315, 1);
lean_inc(x_383);
if (lean_is_exclusive(x_315)) {
 lean_ctor_release(x_315, 0);
 lean_ctor_release(x_315, 1);
 x_384 = x_315;
} else {
 lean_dec_ref(x_315);
 x_384 = lean_box(0);
}
x_385 = lean_ctor_get(x_316, 1);
lean_inc(x_385);
lean_dec(x_316);
x_386 = lean_ctor_get(x_317, 1);
lean_inc(x_386);
lean_dec(x_317);
x_387 = l_CancelDenoms_findCompLemma___closed__8;
x_388 = lean_string_dec_eq(x_386, x_387);
if (x_388 == 0)
{
lean_object* x_389; uint8_t x_390; 
x_389 = l_CancelDenoms_findCompLemma___closed__9;
x_390 = lean_string_dec_eq(x_386, x_389);
if (x_390 == 0)
{
lean_object* x_391; uint8_t x_392; 
x_391 = l_CancelDenoms_findCompLemma___closed__10;
x_392 = lean_string_dec_eq(x_386, x_391);
if (x_392 == 0)
{
lean_object* x_393; uint8_t x_394; 
x_393 = l_CancelDenoms_findCompLemma___closed__11;
x_394 = lean_string_dec_eq(x_386, x_393);
lean_dec(x_386);
if (x_394 == 0)
{
lean_object* x_395; lean_object* x_396; 
lean_dec(x_385);
lean_dec(x_384);
lean_dec(x_383);
x_395 = lean_box(0);
x_396 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_396, 0, x_395);
lean_ctor_set(x_396, 1, x_314);
return x_396;
}
else
{
lean_object* x_397; uint8_t x_398; 
x_397 = l_CancelDenoms_findCompLemma___closed__12;
x_398 = lean_string_dec_eq(x_385, x_397);
lean_dec(x_385);
if (x_398 == 0)
{
lean_object* x_399; lean_object* x_400; 
lean_dec(x_384);
lean_dec(x_383);
x_399 = lean_box(0);
x_400 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_400, 0, x_399);
lean_ctor_set(x_400, 1, x_314);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; uint8_t x_403; 
x_401 = lean_array_get_size(x_383);
x_402 = lean_unsigned_to_nat(4u);
x_403 = lean_nat_dec_eq(x_401, x_402);
lean_dec(x_401);
if (x_403 == 0)
{
lean_object* x_404; lean_object* x_405; 
lean_dec(x_384);
lean_dec(x_383);
x_404 = lean_box(0);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_314);
return x_405;
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_406 = lean_unsigned_to_nat(2u);
x_407 = lean_array_fget(x_383, x_406);
x_408 = lean_unsigned_to_nat(3u);
x_409 = lean_array_fget(x_383, x_408);
lean_dec(x_383);
x_410 = l_CancelDenoms_findCompLemma___closed__15;
if (lean_is_scalar(x_384)) {
 x_411 = lean_alloc_ctor(0, 2, 0);
} else {
 x_411 = x_384;
}
lean_ctor_set(x_411, 0, x_407);
lean_ctor_set(x_411, 1, x_410);
x_412 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_412, 0, x_409);
lean_ctor_set(x_412, 1, x_411);
x_413 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_413, 0, x_412);
x_414 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_414, 0, x_413);
lean_ctor_set(x_414, 1, x_314);
return x_414;
}
}
}
}
else
{
lean_object* x_415; uint8_t x_416; 
lean_dec(x_386);
x_415 = l_CancelDenoms_findCompLemma___closed__16;
x_416 = lean_string_dec_eq(x_385, x_415);
lean_dec(x_385);
if (x_416 == 0)
{
lean_object* x_417; lean_object* x_418; 
lean_dec(x_384);
lean_dec(x_383);
x_417 = lean_box(0);
x_418 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_418, 0, x_417);
lean_ctor_set(x_418, 1, x_314);
return x_418;
}
else
{
lean_object* x_419; lean_object* x_420; uint8_t x_421; 
x_419 = lean_array_get_size(x_383);
x_420 = lean_unsigned_to_nat(4u);
x_421 = lean_nat_dec_eq(x_419, x_420);
lean_dec(x_419);
if (x_421 == 0)
{
lean_object* x_422; lean_object* x_423; 
lean_dec(x_384);
lean_dec(x_383);
x_422 = lean_box(0);
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_314);
return x_423;
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; 
x_424 = lean_unsigned_to_nat(2u);
x_425 = lean_array_fget(x_383, x_424);
x_426 = lean_unsigned_to_nat(3u);
x_427 = lean_array_fget(x_383, x_426);
lean_dec(x_383);
x_428 = l_CancelDenoms_findCompLemma___closed__19;
if (lean_is_scalar(x_384)) {
 x_429 = lean_alloc_ctor(0, 2, 0);
} else {
 x_429 = x_384;
}
lean_ctor_set(x_429, 0, x_425);
lean_ctor_set(x_429, 1, x_428);
x_430 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_430, 0, x_427);
lean_ctor_set(x_430, 1, x_429);
x_431 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_431, 0, x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_431);
lean_ctor_set(x_432, 1, x_314);
return x_432;
}
}
}
}
else
{
lean_object* x_433; uint8_t x_434; 
lean_dec(x_386);
x_433 = l_CancelDenoms_findCompLemma___closed__20;
x_434 = lean_string_dec_eq(x_385, x_433);
lean_dec(x_385);
if (x_434 == 0)
{
lean_object* x_435; lean_object* x_436; 
lean_dec(x_384);
lean_dec(x_383);
x_435 = lean_box(0);
x_436 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_436, 0, x_435);
lean_ctor_set(x_436, 1, x_314);
return x_436;
}
else
{
lean_object* x_437; lean_object* x_438; uint8_t x_439; 
x_437 = lean_array_get_size(x_383);
x_438 = lean_unsigned_to_nat(4u);
x_439 = lean_nat_dec_eq(x_437, x_438);
lean_dec(x_437);
if (x_439 == 0)
{
lean_object* x_440; lean_object* x_441; 
lean_dec(x_384);
lean_dec(x_383);
x_440 = lean_box(0);
x_441 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_314);
return x_441;
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_442 = lean_unsigned_to_nat(2u);
x_443 = lean_array_fget(x_383, x_442);
x_444 = lean_unsigned_to_nat(3u);
x_445 = lean_array_fget(x_383, x_444);
lean_dec(x_383);
x_446 = l_CancelDenoms_findCompLemma___closed__19;
if (lean_is_scalar(x_384)) {
 x_447 = lean_alloc_ctor(0, 2, 0);
} else {
 x_447 = x_384;
}
lean_ctor_set(x_447, 0, x_445);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_448, 0, x_443);
lean_ctor_set(x_448, 1, x_447);
x_449 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_449, 0, x_448);
x_450 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_450, 0, x_449);
lean_ctor_set(x_450, 1, x_314);
return x_450;
}
}
}
}
else
{
lean_object* x_451; uint8_t x_452; 
lean_dec(x_386);
x_451 = l_CancelDenoms_findCompLemma___closed__21;
x_452 = lean_string_dec_eq(x_385, x_451);
lean_dec(x_385);
if (x_452 == 0)
{
lean_object* x_453; lean_object* x_454; 
lean_dec(x_384);
lean_dec(x_383);
x_453 = lean_box(0);
x_454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_314);
return x_454;
}
else
{
lean_object* x_455; lean_object* x_456; uint8_t x_457; 
x_455 = lean_array_get_size(x_383);
x_456 = lean_unsigned_to_nat(4u);
x_457 = lean_nat_dec_eq(x_455, x_456);
lean_dec(x_455);
if (x_457 == 0)
{
lean_object* x_458; lean_object* x_459; 
lean_dec(x_384);
lean_dec(x_383);
x_458 = lean_box(0);
x_459 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_459, 0, x_458);
lean_ctor_set(x_459, 1, x_314);
return x_459;
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
x_460 = lean_unsigned_to_nat(2u);
x_461 = lean_array_fget(x_383, x_460);
x_462 = lean_unsigned_to_nat(3u);
x_463 = lean_array_fget(x_383, x_462);
lean_dec(x_383);
x_464 = l_CancelDenoms_findCompLemma___closed__15;
if (lean_is_scalar(x_384)) {
 x_465 = lean_alloc_ctor(0, 2, 0);
} else {
 x_465 = x_384;
}
lean_ctor_set(x_465, 0, x_463);
lean_ctor_set(x_465, 1, x_464);
x_466 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_466, 0, x_461);
lean_ctor_set(x_466, 1, x_465);
x_467 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_467, 0, x_466);
x_468 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_468, 0, x_467);
lean_ctor_set(x_468, 1, x_314);
return x_468;
}
}
}
}
else
{
lean_object* x_469; lean_object* x_470; 
lean_dec(x_382);
lean_dec(x_317);
lean_dec(x_316);
lean_dec(x_315);
x_469 = lean_box(0);
x_470 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_470, 0, x_469);
lean_ctor_set(x_470, 1, x_314);
return x_470;
}
}
default: 
{
lean_object* x_471; lean_object* x_472; 
lean_dec(x_317);
lean_dec(x_316);
lean_dec(x_315);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_471 = lean_box(0);
x_472 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_472, 0, x_471);
lean_ctor_set(x_472, 1, x_314);
return x_472;
}
}
}
else
{
lean_object* x_473; lean_object* x_474; 
lean_dec(x_316);
lean_dec(x_315);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_473 = lean_box(0);
x_474 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_474, 0, x_473);
lean_ctor_set(x_474, 1, x_314);
return x_474;
}
}
}
else
{
uint8_t x_475; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_475 = !lean_is_exclusive(x_7);
if (x_475 == 0)
{
return x_7;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_476 = lean_ctor_get(x_7, 0);
x_477 = lean_ctor_get(x_7, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_7);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Expr_bvar___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_cancelDenominatorsInType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_CancelDenoms_synthesizeUsingNormNum(x_14, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = l_CancelDenoms_synthesizeUsingNormNum(x_15, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_23 = l_CancelDenoms_synthesizeUsingNormNum(x_16, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 0, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_5);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_3);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_array_mk(x_29);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_31 = l_Lean_Meta_mkAppM(x_4, x_30, x_6, x_7, x_8, x_9, x_25);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_32);
x_34 = lean_infer_type(x_32, x_6, x_7, x_8, x_9, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_CancelDenoms_findCompLemma(x_35, x_6, x_7, x_8, x_9, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 0);
lean_dec(x_40);
x_41 = l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1;
lean_ctor_set(x_12, 1, x_32);
lean_ctor_set(x_12, 0, x_41);
lean_ctor_set(x_37, 0, x_12);
return x_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_dec(x_37);
x_43 = l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1;
lean_ctor_set(x_12, 1, x_32);
lean_ctor_set(x_12, 0, x_43);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_12);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_free_object(x_12);
x_45 = lean_ctor_get(x_38, 0);
lean_inc(x_45);
lean_dec(x_38);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = !lean_is_exclusive(x_37);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_37, 0);
lean_dec(x_48);
x_49 = !lean_is_exclusive(x_46);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_46, 1);
lean_dec(x_50);
lean_ctor_set(x_46, 1, x_32);
lean_ctor_set(x_37, 0, x_46);
return x_37;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_46, 0);
lean_inc(x_51);
lean_dec(x_46);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_32);
lean_ctor_set(x_37, 0, x_52);
return x_37;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_37, 1);
lean_inc(x_53);
lean_dec(x_37);
x_54 = lean_ctor_get(x_46, 0);
lean_inc(x_54);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_55 = x_46;
} else {
 lean_dec_ref(x_46);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_32);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_53);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_32);
lean_free_object(x_12);
x_58 = !lean_is_exclusive(x_37);
if (x_58 == 0)
{
return x_37;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_37, 0);
x_60 = lean_ctor_get(x_37, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_37);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_32);
lean_free_object(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_62 = !lean_is_exclusive(x_34);
if (x_62 == 0)
{
return x_34;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_34, 0);
x_64 = lean_ctor_get(x_34, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_34);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_free_object(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_66 = !lean_is_exclusive(x_31);
if (x_66 == 0)
{
return x_31;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_31, 0);
x_68 = lean_ctor_get(x_31, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_31);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_21);
lean_dec(x_18);
lean_free_object(x_12);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_23);
if (x_70 == 0)
{
return x_23;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_23, 0);
x_72 = lean_ctor_get(x_23, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_23);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_18);
lean_free_object(x_12);
lean_dec(x_16);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_20);
if (x_74 == 0)
{
return x_20;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_20, 0);
x_76 = lean_ctor_get(x_20, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_20);
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
lean_free_object(x_12);
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_17);
if (x_78 == 0)
{
return x_17;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_17, 0);
x_80 = lean_ctor_get(x_17, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_17);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_5, 0);
x_83 = lean_ctor_get(x_12, 0);
x_84 = lean_ctor_get(x_12, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_85 = l_CancelDenoms_synthesizeUsingNormNum(x_82, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_88 = l_CancelDenoms_synthesizeUsingNormNum(x_83, x_6, x_7, x_8, x_9, x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_91 = l_CancelDenoms_synthesizeUsingNormNum(x_84, x_6, x_7, x_8, x_9, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 0, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_89);
lean_ctor_set(x_94, 1, x_5);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_86);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_2);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_3);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_array_mk(x_97);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_99 = l_Lean_Meta_mkAppM(x_4, x_98, x_6, x_7, x_8, x_9, x_93);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_100);
x_102 = lean_infer_type(x_100, x_6, x_7, x_8, x_9, x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_CancelDenoms_findCompLemma(x_103, x_6, x_7, x_8, x_9, x_104);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_108 = x_105;
} else {
 lean_dec_ref(x_105);
 x_108 = lean_box(0);
}
x_109 = l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1;
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_100);
if (lean_is_scalar(x_108)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_108;
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_107);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_112 = lean_ctor_get(x_106, 0);
lean_inc(x_112);
lean_dec(x_106);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
lean_dec(x_112);
x_114 = lean_ctor_get(x_105, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_115 = x_105;
} else {
 lean_dec_ref(x_105);
 x_115 = lean_box(0);
}
x_116 = lean_ctor_get(x_113, 0);
lean_inc(x_116);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_117 = x_113;
} else {
 lean_dec_ref(x_113);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_100);
if (lean_is_scalar(x_115)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_115;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_114);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_100);
x_120 = lean_ctor_get(x_105, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_105, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_122 = x_105;
} else {
 lean_dec_ref(x_105);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_123 = x_122;
}
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_100);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_124 = lean_ctor_get(x_102, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_102, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_126 = x_102;
} else {
 lean_dec_ref(x_102);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_128 = lean_ctor_get(x_99, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_99, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_130 = x_99;
} else {
 lean_dec_ref(x_99);
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
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_89);
lean_dec(x_86);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = lean_ctor_get(x_91, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_91, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_134 = x_91;
} else {
 lean_dec_ref(x_91);
 x_134 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_133);
return x_135;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_86);
lean_dec(x_84);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_136 = lean_ctor_get(x_88, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_88, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_138 = x_88;
} else {
 lean_dec_ref(x_88);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_84);
lean_dec(x_83);
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_140 = lean_ctor_get(x_85, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_85, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_142 = x_85;
} else {
 lean_dec_ref(x_85);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_144 = lean_ctor_get(x_5, 1);
x_145 = lean_ctor_get(x_5, 0);
lean_inc(x_144);
lean_inc(x_145);
lean_dec(x_5);
x_146 = lean_ctor_get(x_144, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_144, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_148 = x_144;
} else {
 lean_dec_ref(x_144);
 x_148 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_149 = l_CancelDenoms_synthesizeUsingNormNum(x_145, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_152 = l_CancelDenoms_synthesizeUsingNormNum(x_146, x_6, x_7, x_8, x_9, x_151);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_155 = l_CancelDenoms_synthesizeUsingNormNum(x_147, x_6, x_7, x_8, x_9, x_154);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_1);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_153);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_150);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_2);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_3);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_array_mk(x_162);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_164 = l_Lean_Meta_mkAppM(x_4, x_163, x_6, x_7, x_8, x_9, x_157);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_165);
x_167 = lean_infer_type(x_165, x_6, x_7, x_8, x_9, x_166);
if (lean_obj_tag(x_167) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
lean_dec(x_167);
x_170 = l_CancelDenoms_findCompLemma(x_168, x_6, x_7, x_8, x_9, x_169);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_173 = x_170;
} else {
 lean_dec_ref(x_170);
 x_173 = lean_box(0);
}
x_174 = l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1;
if (lean_is_scalar(x_148)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_148;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_165);
if (lean_is_scalar(x_173)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_173;
}
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_172);
return x_176;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_148);
x_177 = lean_ctor_get(x_171, 0);
lean_inc(x_177);
lean_dec(x_171);
x_178 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
lean_dec(x_177);
x_179 = lean_ctor_get(x_170, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_180 = x_170;
} else {
 lean_dec_ref(x_170);
 x_180 = lean_box(0);
}
x_181 = lean_ctor_get(x_178, 0);
lean_inc(x_181);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_182 = x_178;
} else {
 lean_dec_ref(x_178);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(0, 2, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_165);
if (lean_is_scalar(x_180)) {
 x_184 = lean_alloc_ctor(0, 2, 0);
} else {
 x_184 = x_180;
}
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_179);
return x_184;
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_165);
lean_dec(x_148);
x_185 = lean_ctor_get(x_170, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_170, 1);
lean_inc(x_186);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_187 = x_170;
} else {
 lean_dec_ref(x_170);
 x_187 = lean_box(0);
}
if (lean_is_scalar(x_187)) {
 x_188 = lean_alloc_ctor(1, 2, 0);
} else {
 x_188 = x_187;
}
lean_ctor_set(x_188, 0, x_185);
lean_ctor_set(x_188, 1, x_186);
return x_188;
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_165);
lean_dec(x_148);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_189 = lean_ctor_get(x_167, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_167, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_191 = x_167;
} else {
 lean_dec_ref(x_167);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(1, 2, 0);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_189);
lean_ctor_set(x_192, 1, x_190);
return x_192;
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_148);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_193 = lean_ctor_get(x_164, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_164, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_195 = x_164;
} else {
 lean_dec_ref(x_164);
 x_195 = lean_box(0);
}
if (lean_is_scalar(x_195)) {
 x_196 = lean_alloc_ctor(1, 2, 0);
} else {
 x_196 = x_195;
}
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set(x_196, 1, x_194);
return x_196;
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_153);
lean_dec(x_150);
lean_dec(x_148);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_197 = lean_ctor_get(x_155, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_155, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_199 = x_155;
} else {
 lean_dec_ref(x_155);
 x_199 = lean_box(0);
}
if (lean_is_scalar(x_199)) {
 x_200 = lean_alloc_ctor(1, 2, 0);
} else {
 x_200 = x_199;
}
lean_ctor_set(x_200, 0, x_197);
lean_ctor_set(x_200, 1, x_198);
return x_200;
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_150);
lean_dec(x_148);
lean_dec(x_147);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_201 = lean_ctor_get(x_152, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_152, 1);
lean_inc(x_202);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_203 = x_152;
} else {
 lean_dec_ref(x_152);
 x_203 = lean_box(0);
}
if (lean_is_scalar(x_203)) {
 x_204 = lean_alloc_ctor(1, 2, 0);
} else {
 x_204 = x_203;
}
lean_ctor_set(x_204, 0, x_201);
lean_ctor_set(x_204, 1, x_202);
return x_204;
}
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
lean_dec(x_148);
lean_dec(x_147);
lean_dec(x_146);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_205 = lean_ctor_get(x_149, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_149, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_207 = x_149;
} else {
 lean_dec_ref(x_149);
 x_207 = lean_box(0);
}
if (lean_is_scalar(x_207)) {
 x_208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_208 = x_207;
}
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_206);
return x_208;
}
}
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cannot kill factors", 19, 19);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LinearOrderedField", 18, 18);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_findCompLemma___closed__8;
x_2 = l_CancelDenoms_findCompLemma___closed__21;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Preorder", 8, 8);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toLT", 4, 4);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__6;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__7;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("PartialOrder", 12, 12);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toPreorder", 10, 10);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__9;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__10;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OrderedAddCommGroup", 19, 19);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toPartialOrder", 14, 14);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__12;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__13;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("StrictOrderedRing", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOrderedAddCommGroup", 21, 21);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__15;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__16;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LinearOrderedRing", 17, 17);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toStrictOrderedRing", 19, 19);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__18;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__19;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LinearOrderedCommRing", 21, 21);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toLinearOrderedRing", 19, 19);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__21;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__22;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toLinearOrderedCommRing", 23, 23);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__3;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__24;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("StrictOrderedCommRing", 21, 21);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__26;
x_2 = l_CancelDenoms_mkProdPrf___lambda__9___closed__20;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toStrictOrderedCommRing", 23, 23);
return x_1;
}
}
static lean_object* _init_l_CancelDenoms_cancelDenominatorsInType___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_CancelDenoms_cancelDenominatorsInType___closed__21;
x_2 = l_CancelDenoms_cancelDenominatorsInType___closed__28;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CancelDenoms_cancelDenominatorsInType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_CancelDenoms_findCompLemma(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_CancelDenoms_cancelDenominatorsInType___closed__2;
x_11 = l_Lean_throwError___at_Lean_Meta_Grind_mkEMatchEqTheoremCore___spec__1(x_10, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_16);
x_20 = l_CancelDenoms_derive(x_16, x_2, x_3, x_4, x_5, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_26 = l_Qq_inferTypeQ_x27(x_16, x_2, x_3, x_4, x_5, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_dec(x_32);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_dec(x_35);
lean_inc(x_31);
x_36 = l_Lean_Level_succ___override(x_31);
x_37 = lean_box(0);
lean_inc(x_31);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 1, x_37);
lean_ctor_set(x_28, 0, x_31);
x_38 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_28);
x_39 = l_Lean_Expr_const___override(x_38, x_28);
lean_inc(x_34);
x_40 = l_Lean_Expr_app___override(x_39, x_34);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_41 = l_Qq_synthInstanceQ___rarg(x_40, x_2, x_3, x_4, x_5, x_29);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_44 = l_CancelDenoms_derive(x_17, x_2, x_3, x_4, x_5, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = !lean_is_exclusive(x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_45, 0);
x_49 = lean_ctor_get(x_45, 1);
x_50 = lean_nat_gcd(x_24, x_48);
x_51 = l_Lean_mkRawNatLit(x_24);
lean_inc(x_42);
lean_inc(x_34);
lean_inc(x_31);
x_52 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_34, x_42, x_51, x_2, x_3, x_4, x_5, x_46);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_mkRawNatLit(x_48);
lean_inc(x_42);
lean_inc(x_34);
lean_inc(x_31);
x_57 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_34, x_42, x_56, x_2, x_3, x_4, x_5, x_54);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_mkRawNatLit(x_50);
lean_inc(x_34);
x_62 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_34, x_42, x_61, x_2, x_3, x_4, x_5, x_59);
if (lean_obj_tag(x_62) == 0)
{
uint8_t x_63; 
x_63 = lean_unbox(x_19);
lean_dec(x_19);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_64 = lean_ctor_get(x_62, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_dec(x_62);
x_66 = lean_ctor_get(x_64, 0);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_28);
x_68 = l_Lean_Expr_const___override(x_67, x_28);
lean_inc(x_34);
x_69 = l_Lean_Expr_app___override(x_68, x_34);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_70 = l_Qq_synthInstanceQ___rarg(x_69, x_2, x_3, x_4, x_5, x_65);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 1, x_37);
lean_ctor_set(x_27, 0, x_36);
x_73 = l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
x_74 = l_Lean_Expr_const___override(x_73, x_27);
lean_inc(x_34);
x_75 = l_Lean_Expr_app___override(x_74, x_34);
lean_inc(x_75);
x_76 = l_Lean_Expr_app___override(x_75, x_55);
x_77 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_28);
x_78 = l_Lean_Expr_const___override(x_77, x_28);
lean_inc(x_34);
x_79 = l_Lean_Expr_app___override(x_78, x_34);
x_80 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_81 = l_Lean_Expr_app___override(x_79, x_80);
x_82 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_28);
x_83 = l_Lean_Expr_const___override(x_82, x_28);
lean_inc(x_34);
x_84 = l_Lean_Expr_app___override(x_83, x_34);
x_85 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_28);
x_86 = l_Lean_Expr_const___override(x_85, x_28);
lean_inc(x_34);
x_87 = l_Lean_Expr_app___override(x_86, x_34);
x_88 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_28);
x_89 = l_Lean_Expr_const___override(x_88, x_28);
lean_inc(x_34);
x_90 = l_Lean_Expr_app___override(x_89, x_34);
x_91 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_28);
x_92 = l_Lean_Expr_const___override(x_91, x_28);
lean_inc(x_34);
x_93 = l_Lean_Expr_app___override(x_92, x_34);
x_94 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_28);
x_95 = l_Lean_Expr_const___override(x_94, x_28);
lean_inc(x_34);
x_96 = l_Lean_Expr_app___override(x_95, x_34);
x_97 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_28);
x_98 = l_Lean_Expr_const___override(x_97, x_28);
lean_inc(x_34);
x_99 = l_Lean_Expr_app___override(x_98, x_34);
x_100 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_28);
x_101 = l_Lean_Expr_const___override(x_100, x_28);
lean_inc(x_34);
x_102 = l_Lean_Expr_app___override(x_101, x_34);
x_103 = l_CancelDenoms_mkProdPrf___lambda__9___closed__21;
x_104 = l_Lean_Expr_const___override(x_103, x_28);
x_105 = l_Lean_Expr_app___override(x_104, x_34);
x_106 = l_Lean_Expr_app___override(x_105, x_71);
x_107 = l_Lean_Expr_app___override(x_102, x_106);
x_108 = l_Lean_Expr_app___override(x_99, x_107);
x_109 = l_Lean_Expr_app___override(x_96, x_108);
x_110 = l_Lean_Expr_app___override(x_93, x_109);
x_111 = l_Lean_Expr_app___override(x_90, x_110);
x_112 = l_Lean_Expr_app___override(x_87, x_111);
x_113 = l_Lean_Expr_app___override(x_84, x_112);
x_114 = l_Lean_Expr_app___override(x_81, x_113);
lean_inc(x_114);
x_115 = l_Lean_Expr_app___override(x_76, x_114);
lean_inc(x_75);
x_116 = l_Lean_Expr_app___override(x_75, x_60);
lean_inc(x_114);
x_117 = l_Lean_Expr_app___override(x_116, x_114);
x_118 = l_Lean_Expr_app___override(x_75, x_66);
x_119 = l_Lean_Expr_app___override(x_118, x_114);
lean_ctor_set(x_45, 1, x_119);
lean_ctor_set(x_45, 0, x_117);
lean_ctor_set(x_21, 1, x_45);
lean_ctor_set(x_21, 0, x_115);
x_120 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_37, x_49, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_72);
return x_120;
}
else
{
uint8_t x_121; 
lean_dec(x_66);
lean_dec(x_60);
lean_dec(x_55);
lean_free_object(x_45);
lean_dec(x_49);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_121 = !lean_is_exclusive(x_70);
if (x_121 == 0)
{
return x_70;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_70, 0);
x_123 = lean_ctor_get(x_70, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_70);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_36);
lean_free_object(x_27);
x_125 = lean_ctor_get(x_62, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_62, 1);
lean_inc(x_126);
lean_dec(x_62);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_CancelDenoms_cancelDenominatorsInType___closed__4;
lean_inc(x_28);
x_129 = l_Lean_Expr_const___override(x_128, x_28);
lean_inc(x_34);
x_130 = l_Lean_Expr_app___override(x_129, x_34);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_131 = l_Qq_synthInstanceQ___rarg(x_130, x_2, x_3, x_4, x_5, x_126);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
x_134 = l_CancelDenoms_cancelDenominatorsInType___closed__5;
lean_inc(x_28);
x_135 = l_Lean_Expr_const___override(x_134, x_28);
lean_inc(x_34);
x_136 = l_Lean_Expr_app___override(x_135, x_34);
x_137 = l_CancelDenoms_cancelDenominatorsInType___closed__8;
lean_inc(x_28);
x_138 = l_Lean_Expr_const___override(x_137, x_28);
lean_inc(x_34);
x_139 = l_Lean_Expr_app___override(x_138, x_34);
x_140 = l_CancelDenoms_cancelDenominatorsInType___closed__11;
lean_inc(x_28);
x_141 = l_Lean_Expr_const___override(x_140, x_28);
lean_inc(x_34);
x_142 = l_Lean_Expr_app___override(x_141, x_34);
x_143 = l_CancelDenoms_cancelDenominatorsInType___closed__14;
lean_inc(x_28);
x_144 = l_Lean_Expr_const___override(x_143, x_28);
lean_inc(x_34);
x_145 = l_Lean_Expr_app___override(x_144, x_34);
x_146 = l_CancelDenoms_cancelDenominatorsInType___closed__17;
lean_inc(x_28);
x_147 = l_Lean_Expr_const___override(x_146, x_28);
lean_inc(x_34);
x_148 = l_Lean_Expr_app___override(x_147, x_34);
x_149 = l_CancelDenoms_cancelDenominatorsInType___closed__20;
lean_inc(x_28);
x_150 = l_Lean_Expr_const___override(x_149, x_28);
lean_inc(x_34);
x_151 = l_Lean_Expr_app___override(x_150, x_34);
x_152 = l_CancelDenoms_cancelDenominatorsInType___closed__23;
lean_inc(x_28);
x_153 = l_Lean_Expr_const___override(x_152, x_28);
lean_inc(x_34);
x_154 = l_Lean_Expr_app___override(x_153, x_34);
x_155 = l_CancelDenoms_cancelDenominatorsInType___closed__25;
lean_inc(x_28);
x_156 = l_Lean_Expr_const___override(x_155, x_28);
lean_inc(x_34);
x_157 = l_Lean_Expr_app___override(x_156, x_34);
x_158 = l_Lean_Expr_app___override(x_157, x_132);
lean_inc(x_158);
x_159 = l_Lean_Expr_app___override(x_154, x_158);
x_160 = l_Lean_Expr_app___override(x_151, x_159);
x_161 = l_Lean_Expr_app___override(x_148, x_160);
x_162 = l_Lean_Expr_app___override(x_145, x_161);
x_163 = l_Lean_Expr_app___override(x_142, x_162);
x_164 = l_Lean_Expr_app___override(x_139, x_163);
x_165 = l_Lean_Expr_app___override(x_136, x_164);
x_166 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_28);
x_167 = l_Lean_Expr_const___override(x_166, x_28);
lean_inc(x_34);
x_168 = l_Lean_Expr_app___override(x_167, x_34);
x_169 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_170 = l_Lean_Expr_app___override(x_168, x_169);
x_171 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_28);
x_172 = l_Lean_Expr_const___override(x_171, x_28);
lean_inc(x_34);
x_173 = l_Lean_Expr_app___override(x_172, x_34);
x_174 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_28);
x_175 = l_Lean_Expr_const___override(x_174, x_28);
lean_inc(x_34);
x_176 = l_Lean_Expr_app___override(x_175, x_34);
x_177 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_28);
x_178 = l_Lean_Expr_const___override(x_177, x_28);
lean_inc(x_34);
x_179 = l_Lean_Expr_app___override(x_178, x_34);
x_180 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_28);
x_181 = l_Lean_Expr_const___override(x_180, x_28);
lean_inc(x_34);
x_182 = l_Lean_Expr_app___override(x_181, x_34);
x_183 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_28);
x_184 = l_Lean_Expr_const___override(x_183, x_28);
lean_inc(x_34);
x_185 = l_Lean_Expr_app___override(x_184, x_34);
x_186 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_28);
x_187 = l_Lean_Expr_const___override(x_186, x_28);
lean_inc(x_34);
x_188 = l_Lean_Expr_app___override(x_187, x_34);
x_189 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_28);
x_190 = l_Lean_Expr_const___override(x_189, x_28);
lean_inc(x_34);
x_191 = l_Lean_Expr_app___override(x_190, x_34);
x_192 = l_CancelDenoms_cancelDenominatorsInType___closed__27;
lean_inc(x_28);
x_193 = l_Lean_Expr_const___override(x_192, x_28);
lean_inc(x_34);
x_194 = l_Lean_Expr_app___override(x_193, x_34);
x_195 = l_CancelDenoms_cancelDenominatorsInType___closed__29;
x_196 = l_Lean_Expr_const___override(x_195, x_28);
x_197 = l_Lean_Expr_app___override(x_196, x_34);
x_198 = l_Lean_Expr_app___override(x_197, x_158);
x_199 = l_Lean_Expr_app___override(x_194, x_198);
x_200 = l_Lean_Expr_app___override(x_191, x_199);
x_201 = l_Lean_Expr_app___override(x_188, x_200);
x_202 = l_Lean_Expr_app___override(x_185, x_201);
x_203 = l_Lean_Expr_app___override(x_182, x_202);
x_204 = l_Lean_Expr_app___override(x_179, x_203);
x_205 = l_Lean_Expr_app___override(x_176, x_204);
x_206 = l_Lean_Expr_app___override(x_173, x_205);
x_207 = l_Lean_Expr_app___override(x_170, x_206);
x_208 = l_Lean_Expr_app___override(x_165, x_207);
lean_inc(x_208);
x_209 = l_Lean_Expr_app___override(x_208, x_55);
lean_inc(x_208);
x_210 = l_Lean_Expr_app___override(x_208, x_60);
x_211 = l_Lean_Expr_app___override(x_208, x_127);
lean_ctor_set(x_45, 1, x_211);
lean_ctor_set(x_45, 0, x_210);
lean_ctor_set(x_21, 1, x_45);
lean_ctor_set(x_21, 0, x_209);
x_212 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_37, x_49, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_133);
return x_212;
}
else
{
uint8_t x_213; 
lean_dec(x_127);
lean_dec(x_60);
lean_dec(x_55);
lean_free_object(x_45);
lean_dec(x_49);
lean_dec(x_28);
lean_dec(x_34);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_213 = !lean_is_exclusive(x_131);
if (x_213 == 0)
{
return x_131;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_131, 0);
x_215 = lean_ctor_get(x_131, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_131);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
}
else
{
uint8_t x_217; 
lean_dec(x_60);
lean_dec(x_55);
lean_free_object(x_45);
lean_dec(x_49);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_217 = !lean_is_exclusive(x_62);
if (x_217 == 0)
{
return x_62;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_62, 0);
x_219 = lean_ctor_get(x_62, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_62);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
}
else
{
uint8_t x_221; 
lean_dec(x_55);
lean_dec(x_50);
lean_free_object(x_45);
lean_dec(x_49);
lean_dec(x_42);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_221 = !lean_is_exclusive(x_57);
if (x_221 == 0)
{
return x_57;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_57, 0);
x_223 = lean_ctor_get(x_57, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_57);
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
lean_dec(x_50);
lean_free_object(x_45);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_42);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_225 = !lean_is_exclusive(x_52);
if (x_225 == 0)
{
return x_52;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_52, 0);
x_227 = lean_ctor_get(x_52, 1);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_52);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set(x_228, 1, x_227);
return x_228;
}
}
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_229 = lean_ctor_get(x_45, 0);
x_230 = lean_ctor_get(x_45, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_45);
x_231 = lean_nat_gcd(x_24, x_229);
x_232 = l_Lean_mkRawNatLit(x_24);
lean_inc(x_42);
lean_inc(x_34);
lean_inc(x_31);
x_233 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_34, x_42, x_232, x_2, x_3, x_4, x_5, x_46);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = lean_ctor_get(x_234, 0);
lean_inc(x_236);
lean_dec(x_234);
x_237 = l_Lean_mkRawNatLit(x_229);
lean_inc(x_42);
lean_inc(x_34);
lean_inc(x_31);
x_238 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_34, x_42, x_237, x_2, x_3, x_4, x_5, x_235);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
lean_dec(x_239);
x_242 = l_Lean_mkRawNatLit(x_231);
lean_inc(x_34);
x_243 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_34, x_42, x_242, x_2, x_3, x_4, x_5, x_240);
if (lean_obj_tag(x_243) == 0)
{
uint8_t x_244; 
x_244 = lean_unbox(x_19);
lean_dec(x_19);
if (x_244 == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_245 = lean_ctor_get(x_243, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_243, 1);
lean_inc(x_246);
lean_dec(x_243);
x_247 = lean_ctor_get(x_245, 0);
lean_inc(x_247);
lean_dec(x_245);
x_248 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_28);
x_249 = l_Lean_Expr_const___override(x_248, x_28);
lean_inc(x_34);
x_250 = l_Lean_Expr_app___override(x_249, x_34);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_251 = l_Qq_synthInstanceQ___rarg(x_250, x_2, x_3, x_4, x_5, x_246);
if (lean_obj_tag(x_251) == 0)
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_252 = lean_ctor_get(x_251, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_251, 1);
lean_inc(x_253);
lean_dec(x_251);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 1, x_37);
lean_ctor_set(x_27, 0, x_36);
x_254 = l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
x_255 = l_Lean_Expr_const___override(x_254, x_27);
lean_inc(x_34);
x_256 = l_Lean_Expr_app___override(x_255, x_34);
lean_inc(x_256);
x_257 = l_Lean_Expr_app___override(x_256, x_236);
x_258 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_28);
x_259 = l_Lean_Expr_const___override(x_258, x_28);
lean_inc(x_34);
x_260 = l_Lean_Expr_app___override(x_259, x_34);
x_261 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_262 = l_Lean_Expr_app___override(x_260, x_261);
x_263 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_28);
x_264 = l_Lean_Expr_const___override(x_263, x_28);
lean_inc(x_34);
x_265 = l_Lean_Expr_app___override(x_264, x_34);
x_266 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_28);
x_267 = l_Lean_Expr_const___override(x_266, x_28);
lean_inc(x_34);
x_268 = l_Lean_Expr_app___override(x_267, x_34);
x_269 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_28);
x_270 = l_Lean_Expr_const___override(x_269, x_28);
lean_inc(x_34);
x_271 = l_Lean_Expr_app___override(x_270, x_34);
x_272 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_28);
x_273 = l_Lean_Expr_const___override(x_272, x_28);
lean_inc(x_34);
x_274 = l_Lean_Expr_app___override(x_273, x_34);
x_275 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_28);
x_276 = l_Lean_Expr_const___override(x_275, x_28);
lean_inc(x_34);
x_277 = l_Lean_Expr_app___override(x_276, x_34);
x_278 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_28);
x_279 = l_Lean_Expr_const___override(x_278, x_28);
lean_inc(x_34);
x_280 = l_Lean_Expr_app___override(x_279, x_34);
x_281 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_28);
x_282 = l_Lean_Expr_const___override(x_281, x_28);
lean_inc(x_34);
x_283 = l_Lean_Expr_app___override(x_282, x_34);
x_284 = l_CancelDenoms_mkProdPrf___lambda__9___closed__21;
x_285 = l_Lean_Expr_const___override(x_284, x_28);
x_286 = l_Lean_Expr_app___override(x_285, x_34);
x_287 = l_Lean_Expr_app___override(x_286, x_252);
x_288 = l_Lean_Expr_app___override(x_283, x_287);
x_289 = l_Lean_Expr_app___override(x_280, x_288);
x_290 = l_Lean_Expr_app___override(x_277, x_289);
x_291 = l_Lean_Expr_app___override(x_274, x_290);
x_292 = l_Lean_Expr_app___override(x_271, x_291);
x_293 = l_Lean_Expr_app___override(x_268, x_292);
x_294 = l_Lean_Expr_app___override(x_265, x_293);
x_295 = l_Lean_Expr_app___override(x_262, x_294);
lean_inc(x_295);
x_296 = l_Lean_Expr_app___override(x_257, x_295);
lean_inc(x_256);
x_297 = l_Lean_Expr_app___override(x_256, x_241);
lean_inc(x_295);
x_298 = l_Lean_Expr_app___override(x_297, x_295);
x_299 = l_Lean_Expr_app___override(x_256, x_247);
x_300 = l_Lean_Expr_app___override(x_299, x_295);
x_301 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_301, 0, x_298);
lean_ctor_set(x_301, 1, x_300);
lean_ctor_set(x_21, 1, x_301);
lean_ctor_set(x_21, 0, x_296);
x_302 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_37, x_230, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_253);
return x_302;
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_247);
lean_dec(x_241);
lean_dec(x_236);
lean_dec(x_230);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_303 = lean_ctor_get(x_251, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_251, 1);
lean_inc(x_304);
if (lean_is_exclusive(x_251)) {
 lean_ctor_release(x_251, 0);
 lean_ctor_release(x_251, 1);
 x_305 = x_251;
} else {
 lean_dec_ref(x_251);
 x_305 = lean_box(0);
}
if (lean_is_scalar(x_305)) {
 x_306 = lean_alloc_ctor(1, 2, 0);
} else {
 x_306 = x_305;
}
lean_ctor_set(x_306, 0, x_303);
lean_ctor_set(x_306, 1, x_304);
return x_306;
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
lean_dec(x_36);
lean_free_object(x_27);
x_307 = lean_ctor_get(x_243, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_243, 1);
lean_inc(x_308);
lean_dec(x_243);
x_309 = lean_ctor_get(x_307, 0);
lean_inc(x_309);
lean_dec(x_307);
x_310 = l_CancelDenoms_cancelDenominatorsInType___closed__4;
lean_inc(x_28);
x_311 = l_Lean_Expr_const___override(x_310, x_28);
lean_inc(x_34);
x_312 = l_Lean_Expr_app___override(x_311, x_34);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_313 = l_Qq_synthInstanceQ___rarg(x_312, x_2, x_3, x_4, x_5, x_308);
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
x_316 = l_CancelDenoms_cancelDenominatorsInType___closed__5;
lean_inc(x_28);
x_317 = l_Lean_Expr_const___override(x_316, x_28);
lean_inc(x_34);
x_318 = l_Lean_Expr_app___override(x_317, x_34);
x_319 = l_CancelDenoms_cancelDenominatorsInType___closed__8;
lean_inc(x_28);
x_320 = l_Lean_Expr_const___override(x_319, x_28);
lean_inc(x_34);
x_321 = l_Lean_Expr_app___override(x_320, x_34);
x_322 = l_CancelDenoms_cancelDenominatorsInType___closed__11;
lean_inc(x_28);
x_323 = l_Lean_Expr_const___override(x_322, x_28);
lean_inc(x_34);
x_324 = l_Lean_Expr_app___override(x_323, x_34);
x_325 = l_CancelDenoms_cancelDenominatorsInType___closed__14;
lean_inc(x_28);
x_326 = l_Lean_Expr_const___override(x_325, x_28);
lean_inc(x_34);
x_327 = l_Lean_Expr_app___override(x_326, x_34);
x_328 = l_CancelDenoms_cancelDenominatorsInType___closed__17;
lean_inc(x_28);
x_329 = l_Lean_Expr_const___override(x_328, x_28);
lean_inc(x_34);
x_330 = l_Lean_Expr_app___override(x_329, x_34);
x_331 = l_CancelDenoms_cancelDenominatorsInType___closed__20;
lean_inc(x_28);
x_332 = l_Lean_Expr_const___override(x_331, x_28);
lean_inc(x_34);
x_333 = l_Lean_Expr_app___override(x_332, x_34);
x_334 = l_CancelDenoms_cancelDenominatorsInType___closed__23;
lean_inc(x_28);
x_335 = l_Lean_Expr_const___override(x_334, x_28);
lean_inc(x_34);
x_336 = l_Lean_Expr_app___override(x_335, x_34);
x_337 = l_CancelDenoms_cancelDenominatorsInType___closed__25;
lean_inc(x_28);
x_338 = l_Lean_Expr_const___override(x_337, x_28);
lean_inc(x_34);
x_339 = l_Lean_Expr_app___override(x_338, x_34);
x_340 = l_Lean_Expr_app___override(x_339, x_314);
lean_inc(x_340);
x_341 = l_Lean_Expr_app___override(x_336, x_340);
x_342 = l_Lean_Expr_app___override(x_333, x_341);
x_343 = l_Lean_Expr_app___override(x_330, x_342);
x_344 = l_Lean_Expr_app___override(x_327, x_343);
x_345 = l_Lean_Expr_app___override(x_324, x_344);
x_346 = l_Lean_Expr_app___override(x_321, x_345);
x_347 = l_Lean_Expr_app___override(x_318, x_346);
x_348 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_28);
x_349 = l_Lean_Expr_const___override(x_348, x_28);
lean_inc(x_34);
x_350 = l_Lean_Expr_app___override(x_349, x_34);
x_351 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_352 = l_Lean_Expr_app___override(x_350, x_351);
x_353 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_28);
x_354 = l_Lean_Expr_const___override(x_353, x_28);
lean_inc(x_34);
x_355 = l_Lean_Expr_app___override(x_354, x_34);
x_356 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_28);
x_357 = l_Lean_Expr_const___override(x_356, x_28);
lean_inc(x_34);
x_358 = l_Lean_Expr_app___override(x_357, x_34);
x_359 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_28);
x_360 = l_Lean_Expr_const___override(x_359, x_28);
lean_inc(x_34);
x_361 = l_Lean_Expr_app___override(x_360, x_34);
x_362 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_28);
x_363 = l_Lean_Expr_const___override(x_362, x_28);
lean_inc(x_34);
x_364 = l_Lean_Expr_app___override(x_363, x_34);
x_365 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_28);
x_366 = l_Lean_Expr_const___override(x_365, x_28);
lean_inc(x_34);
x_367 = l_Lean_Expr_app___override(x_366, x_34);
x_368 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_28);
x_369 = l_Lean_Expr_const___override(x_368, x_28);
lean_inc(x_34);
x_370 = l_Lean_Expr_app___override(x_369, x_34);
x_371 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_28);
x_372 = l_Lean_Expr_const___override(x_371, x_28);
lean_inc(x_34);
x_373 = l_Lean_Expr_app___override(x_372, x_34);
x_374 = l_CancelDenoms_cancelDenominatorsInType___closed__27;
lean_inc(x_28);
x_375 = l_Lean_Expr_const___override(x_374, x_28);
lean_inc(x_34);
x_376 = l_Lean_Expr_app___override(x_375, x_34);
x_377 = l_CancelDenoms_cancelDenominatorsInType___closed__29;
x_378 = l_Lean_Expr_const___override(x_377, x_28);
x_379 = l_Lean_Expr_app___override(x_378, x_34);
x_380 = l_Lean_Expr_app___override(x_379, x_340);
x_381 = l_Lean_Expr_app___override(x_376, x_380);
x_382 = l_Lean_Expr_app___override(x_373, x_381);
x_383 = l_Lean_Expr_app___override(x_370, x_382);
x_384 = l_Lean_Expr_app___override(x_367, x_383);
x_385 = l_Lean_Expr_app___override(x_364, x_384);
x_386 = l_Lean_Expr_app___override(x_361, x_385);
x_387 = l_Lean_Expr_app___override(x_358, x_386);
x_388 = l_Lean_Expr_app___override(x_355, x_387);
x_389 = l_Lean_Expr_app___override(x_352, x_388);
x_390 = l_Lean_Expr_app___override(x_347, x_389);
lean_inc(x_390);
x_391 = l_Lean_Expr_app___override(x_390, x_236);
lean_inc(x_390);
x_392 = l_Lean_Expr_app___override(x_390, x_241);
x_393 = l_Lean_Expr_app___override(x_390, x_309);
x_394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_394, 0, x_392);
lean_ctor_set(x_394, 1, x_393);
lean_ctor_set(x_21, 1, x_394);
lean_ctor_set(x_21, 0, x_391);
x_395 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_37, x_230, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_315);
return x_395;
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
lean_dec(x_309);
lean_dec(x_241);
lean_dec(x_236);
lean_dec(x_230);
lean_dec(x_28);
lean_dec(x_34);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_396 = lean_ctor_get(x_313, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_313, 1);
lean_inc(x_397);
if (lean_is_exclusive(x_313)) {
 lean_ctor_release(x_313, 0);
 lean_ctor_release(x_313, 1);
 x_398 = x_313;
} else {
 lean_dec_ref(x_313);
 x_398 = lean_box(0);
}
if (lean_is_scalar(x_398)) {
 x_399 = lean_alloc_ctor(1, 2, 0);
} else {
 x_399 = x_398;
}
lean_ctor_set(x_399, 0, x_396);
lean_ctor_set(x_399, 1, x_397);
return x_399;
}
}
}
else
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
lean_dec(x_241);
lean_dec(x_236);
lean_dec(x_230);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_400 = lean_ctor_get(x_243, 0);
lean_inc(x_400);
x_401 = lean_ctor_get(x_243, 1);
lean_inc(x_401);
if (lean_is_exclusive(x_243)) {
 lean_ctor_release(x_243, 0);
 lean_ctor_release(x_243, 1);
 x_402 = x_243;
} else {
 lean_dec_ref(x_243);
 x_402 = lean_box(0);
}
if (lean_is_scalar(x_402)) {
 x_403 = lean_alloc_ctor(1, 2, 0);
} else {
 x_403 = x_402;
}
lean_ctor_set(x_403, 0, x_400);
lean_ctor_set(x_403, 1, x_401);
return x_403;
}
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
lean_dec(x_236);
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_42);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_404 = lean_ctor_get(x_238, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_238, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_238)) {
 lean_ctor_release(x_238, 0);
 lean_ctor_release(x_238, 1);
 x_406 = x_238;
} else {
 lean_dec_ref(x_238);
 x_406 = lean_box(0);
}
if (lean_is_scalar(x_406)) {
 x_407 = lean_alloc_ctor(1, 2, 0);
} else {
 x_407 = x_406;
}
lean_ctor_set(x_407, 0, x_404);
lean_ctor_set(x_407, 1, x_405);
return x_407;
}
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_42);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_408 = lean_ctor_get(x_233, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_233, 1);
lean_inc(x_409);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_410 = x_233;
} else {
 lean_dec_ref(x_233);
 x_410 = lean_box(0);
}
if (lean_is_scalar(x_410)) {
 x_411 = lean_alloc_ctor(1, 2, 0);
} else {
 x_411 = x_410;
}
lean_ctor_set(x_411, 0, x_408);
lean_ctor_set(x_411, 1, x_409);
return x_411;
}
}
}
else
{
uint8_t x_412; 
lean_dec(x_42);
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_412 = !lean_is_exclusive(x_44);
if (x_412 == 0)
{
return x_44;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_413 = lean_ctor_get(x_44, 0);
x_414 = lean_ctor_get(x_44, 1);
lean_inc(x_414);
lean_inc(x_413);
lean_dec(x_44);
x_415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_415, 0, x_413);
lean_ctor_set(x_415, 1, x_414);
return x_415;
}
}
}
else
{
uint8_t x_416; 
lean_dec(x_28);
lean_dec(x_36);
lean_dec(x_34);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_416 = !lean_is_exclusive(x_41);
if (x_416 == 0)
{
return x_41;
}
else
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_417 = lean_ctor_get(x_41, 0);
x_418 = lean_ctor_get(x_41, 1);
lean_inc(x_418);
lean_inc(x_417);
lean_dec(x_41);
x_419 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_419, 0, x_417);
lean_ctor_set(x_419, 1, x_418);
return x_419;
}
}
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_420 = lean_ctor_get(x_28, 0);
lean_inc(x_420);
lean_dec(x_28);
lean_inc(x_31);
x_421 = l_Lean_Level_succ___override(x_31);
x_422 = lean_box(0);
lean_inc(x_31);
x_423 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_423, 0, x_31);
lean_ctor_set(x_423, 1, x_422);
x_424 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_423);
x_425 = l_Lean_Expr_const___override(x_424, x_423);
lean_inc(x_420);
x_426 = l_Lean_Expr_app___override(x_425, x_420);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_427 = l_Qq_synthInstanceQ___rarg(x_426, x_2, x_3, x_4, x_5, x_29);
if (lean_obj_tag(x_427) == 0)
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; 
x_428 = lean_ctor_get(x_427, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_427, 1);
lean_inc(x_429);
lean_dec(x_427);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_430 = l_CancelDenoms_derive(x_17, x_2, x_3, x_4, x_5, x_429);
if (lean_obj_tag(x_430) == 0)
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
x_431 = lean_ctor_get(x_430, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_430, 1);
lean_inc(x_432);
lean_dec(x_430);
x_433 = lean_ctor_get(x_431, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_431, 1);
lean_inc(x_434);
if (lean_is_exclusive(x_431)) {
 lean_ctor_release(x_431, 0);
 lean_ctor_release(x_431, 1);
 x_435 = x_431;
} else {
 lean_dec_ref(x_431);
 x_435 = lean_box(0);
}
x_436 = lean_nat_gcd(x_24, x_433);
x_437 = l_Lean_mkRawNatLit(x_24);
lean_inc(x_428);
lean_inc(x_420);
lean_inc(x_31);
x_438 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_420, x_428, x_437, x_2, x_3, x_4, x_5, x_432);
if (lean_obj_tag(x_438) == 0)
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; 
x_439 = lean_ctor_get(x_438, 0);
lean_inc(x_439);
x_440 = lean_ctor_get(x_438, 1);
lean_inc(x_440);
lean_dec(x_438);
x_441 = lean_ctor_get(x_439, 0);
lean_inc(x_441);
lean_dec(x_439);
x_442 = l_Lean_mkRawNatLit(x_433);
lean_inc(x_428);
lean_inc(x_420);
lean_inc(x_31);
x_443 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_420, x_428, x_442, x_2, x_3, x_4, x_5, x_440);
if (lean_obj_tag(x_443) == 0)
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_444 = lean_ctor_get(x_443, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_443, 1);
lean_inc(x_445);
lean_dec(x_443);
x_446 = lean_ctor_get(x_444, 0);
lean_inc(x_446);
lean_dec(x_444);
x_447 = l_Lean_mkRawNatLit(x_436);
lean_inc(x_420);
x_448 = l_Mathlib_Meta_NormNum_mkOfNat(x_31, x_420, x_428, x_447, x_2, x_3, x_4, x_5, x_445);
if (lean_obj_tag(x_448) == 0)
{
uint8_t x_449; 
x_449 = lean_unbox(x_19);
lean_dec(x_19);
if (x_449 == 0)
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; 
x_450 = lean_ctor_get(x_448, 0);
lean_inc(x_450);
x_451 = lean_ctor_get(x_448, 1);
lean_inc(x_451);
lean_dec(x_448);
x_452 = lean_ctor_get(x_450, 0);
lean_inc(x_452);
lean_dec(x_450);
x_453 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_423);
x_454 = l_Lean_Expr_const___override(x_453, x_423);
lean_inc(x_420);
x_455 = l_Lean_Expr_app___override(x_454, x_420);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_456 = l_Qq_synthInstanceQ___rarg(x_455, x_2, x_3, x_4, x_5, x_451);
if (lean_obj_tag(x_456) == 0)
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; 
x_457 = lean_ctor_get(x_456, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_456, 1);
lean_inc(x_458);
lean_dec(x_456);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 1, x_422);
lean_ctor_set(x_27, 0, x_421);
x_459 = l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
x_460 = l_Lean_Expr_const___override(x_459, x_27);
lean_inc(x_420);
x_461 = l_Lean_Expr_app___override(x_460, x_420);
lean_inc(x_461);
x_462 = l_Lean_Expr_app___override(x_461, x_441);
x_463 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_423);
x_464 = l_Lean_Expr_const___override(x_463, x_423);
lean_inc(x_420);
x_465 = l_Lean_Expr_app___override(x_464, x_420);
x_466 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_467 = l_Lean_Expr_app___override(x_465, x_466);
x_468 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_423);
x_469 = l_Lean_Expr_const___override(x_468, x_423);
lean_inc(x_420);
x_470 = l_Lean_Expr_app___override(x_469, x_420);
x_471 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_423);
x_472 = l_Lean_Expr_const___override(x_471, x_423);
lean_inc(x_420);
x_473 = l_Lean_Expr_app___override(x_472, x_420);
x_474 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_423);
x_475 = l_Lean_Expr_const___override(x_474, x_423);
lean_inc(x_420);
x_476 = l_Lean_Expr_app___override(x_475, x_420);
x_477 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_423);
x_478 = l_Lean_Expr_const___override(x_477, x_423);
lean_inc(x_420);
x_479 = l_Lean_Expr_app___override(x_478, x_420);
x_480 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_423);
x_481 = l_Lean_Expr_const___override(x_480, x_423);
lean_inc(x_420);
x_482 = l_Lean_Expr_app___override(x_481, x_420);
x_483 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_423);
x_484 = l_Lean_Expr_const___override(x_483, x_423);
lean_inc(x_420);
x_485 = l_Lean_Expr_app___override(x_484, x_420);
x_486 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_423);
x_487 = l_Lean_Expr_const___override(x_486, x_423);
lean_inc(x_420);
x_488 = l_Lean_Expr_app___override(x_487, x_420);
x_489 = l_CancelDenoms_mkProdPrf___lambda__9___closed__21;
x_490 = l_Lean_Expr_const___override(x_489, x_423);
x_491 = l_Lean_Expr_app___override(x_490, x_420);
x_492 = l_Lean_Expr_app___override(x_491, x_457);
x_493 = l_Lean_Expr_app___override(x_488, x_492);
x_494 = l_Lean_Expr_app___override(x_485, x_493);
x_495 = l_Lean_Expr_app___override(x_482, x_494);
x_496 = l_Lean_Expr_app___override(x_479, x_495);
x_497 = l_Lean_Expr_app___override(x_476, x_496);
x_498 = l_Lean_Expr_app___override(x_473, x_497);
x_499 = l_Lean_Expr_app___override(x_470, x_498);
x_500 = l_Lean_Expr_app___override(x_467, x_499);
lean_inc(x_500);
x_501 = l_Lean_Expr_app___override(x_462, x_500);
lean_inc(x_461);
x_502 = l_Lean_Expr_app___override(x_461, x_446);
lean_inc(x_500);
x_503 = l_Lean_Expr_app___override(x_502, x_500);
x_504 = l_Lean_Expr_app___override(x_461, x_452);
x_505 = l_Lean_Expr_app___override(x_504, x_500);
if (lean_is_scalar(x_435)) {
 x_506 = lean_alloc_ctor(0, 2, 0);
} else {
 x_506 = x_435;
}
lean_ctor_set(x_506, 0, x_503);
lean_ctor_set(x_506, 1, x_505);
lean_ctor_set(x_21, 1, x_506);
lean_ctor_set(x_21, 0, x_501);
x_507 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_422, x_434, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_458);
return x_507;
}
else
{
lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; 
lean_dec(x_452);
lean_dec(x_446);
lean_dec(x_441);
lean_dec(x_435);
lean_dec(x_434);
lean_dec(x_423);
lean_dec(x_421);
lean_dec(x_420);
lean_free_object(x_27);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_508 = lean_ctor_get(x_456, 0);
lean_inc(x_508);
x_509 = lean_ctor_get(x_456, 1);
lean_inc(x_509);
if (lean_is_exclusive(x_456)) {
 lean_ctor_release(x_456, 0);
 lean_ctor_release(x_456, 1);
 x_510 = x_456;
} else {
 lean_dec_ref(x_456);
 x_510 = lean_box(0);
}
if (lean_is_scalar(x_510)) {
 x_511 = lean_alloc_ctor(1, 2, 0);
} else {
 x_511 = x_510;
}
lean_ctor_set(x_511, 0, x_508);
lean_ctor_set(x_511, 1, x_509);
return x_511;
}
}
else
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; 
lean_dec(x_421);
lean_free_object(x_27);
x_512 = lean_ctor_get(x_448, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_448, 1);
lean_inc(x_513);
lean_dec(x_448);
x_514 = lean_ctor_get(x_512, 0);
lean_inc(x_514);
lean_dec(x_512);
x_515 = l_CancelDenoms_cancelDenominatorsInType___closed__4;
lean_inc(x_423);
x_516 = l_Lean_Expr_const___override(x_515, x_423);
lean_inc(x_420);
x_517 = l_Lean_Expr_app___override(x_516, x_420);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_518 = l_Qq_synthInstanceQ___rarg(x_517, x_2, x_3, x_4, x_5, x_513);
if (lean_obj_tag(x_518) == 0)
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; 
x_519 = lean_ctor_get(x_518, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_518, 1);
lean_inc(x_520);
lean_dec(x_518);
x_521 = l_CancelDenoms_cancelDenominatorsInType___closed__5;
lean_inc(x_423);
x_522 = l_Lean_Expr_const___override(x_521, x_423);
lean_inc(x_420);
x_523 = l_Lean_Expr_app___override(x_522, x_420);
x_524 = l_CancelDenoms_cancelDenominatorsInType___closed__8;
lean_inc(x_423);
x_525 = l_Lean_Expr_const___override(x_524, x_423);
lean_inc(x_420);
x_526 = l_Lean_Expr_app___override(x_525, x_420);
x_527 = l_CancelDenoms_cancelDenominatorsInType___closed__11;
lean_inc(x_423);
x_528 = l_Lean_Expr_const___override(x_527, x_423);
lean_inc(x_420);
x_529 = l_Lean_Expr_app___override(x_528, x_420);
x_530 = l_CancelDenoms_cancelDenominatorsInType___closed__14;
lean_inc(x_423);
x_531 = l_Lean_Expr_const___override(x_530, x_423);
lean_inc(x_420);
x_532 = l_Lean_Expr_app___override(x_531, x_420);
x_533 = l_CancelDenoms_cancelDenominatorsInType___closed__17;
lean_inc(x_423);
x_534 = l_Lean_Expr_const___override(x_533, x_423);
lean_inc(x_420);
x_535 = l_Lean_Expr_app___override(x_534, x_420);
x_536 = l_CancelDenoms_cancelDenominatorsInType___closed__20;
lean_inc(x_423);
x_537 = l_Lean_Expr_const___override(x_536, x_423);
lean_inc(x_420);
x_538 = l_Lean_Expr_app___override(x_537, x_420);
x_539 = l_CancelDenoms_cancelDenominatorsInType___closed__23;
lean_inc(x_423);
x_540 = l_Lean_Expr_const___override(x_539, x_423);
lean_inc(x_420);
x_541 = l_Lean_Expr_app___override(x_540, x_420);
x_542 = l_CancelDenoms_cancelDenominatorsInType___closed__25;
lean_inc(x_423);
x_543 = l_Lean_Expr_const___override(x_542, x_423);
lean_inc(x_420);
x_544 = l_Lean_Expr_app___override(x_543, x_420);
x_545 = l_Lean_Expr_app___override(x_544, x_519);
lean_inc(x_545);
x_546 = l_Lean_Expr_app___override(x_541, x_545);
x_547 = l_Lean_Expr_app___override(x_538, x_546);
x_548 = l_Lean_Expr_app___override(x_535, x_547);
x_549 = l_Lean_Expr_app___override(x_532, x_548);
x_550 = l_Lean_Expr_app___override(x_529, x_549);
x_551 = l_Lean_Expr_app___override(x_526, x_550);
x_552 = l_Lean_Expr_app___override(x_523, x_551);
x_553 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_423);
x_554 = l_Lean_Expr_const___override(x_553, x_423);
lean_inc(x_420);
x_555 = l_Lean_Expr_app___override(x_554, x_420);
x_556 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_557 = l_Lean_Expr_app___override(x_555, x_556);
x_558 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_423);
x_559 = l_Lean_Expr_const___override(x_558, x_423);
lean_inc(x_420);
x_560 = l_Lean_Expr_app___override(x_559, x_420);
x_561 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_423);
x_562 = l_Lean_Expr_const___override(x_561, x_423);
lean_inc(x_420);
x_563 = l_Lean_Expr_app___override(x_562, x_420);
x_564 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_423);
x_565 = l_Lean_Expr_const___override(x_564, x_423);
lean_inc(x_420);
x_566 = l_Lean_Expr_app___override(x_565, x_420);
x_567 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_423);
x_568 = l_Lean_Expr_const___override(x_567, x_423);
lean_inc(x_420);
x_569 = l_Lean_Expr_app___override(x_568, x_420);
x_570 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_423);
x_571 = l_Lean_Expr_const___override(x_570, x_423);
lean_inc(x_420);
x_572 = l_Lean_Expr_app___override(x_571, x_420);
x_573 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_423);
x_574 = l_Lean_Expr_const___override(x_573, x_423);
lean_inc(x_420);
x_575 = l_Lean_Expr_app___override(x_574, x_420);
x_576 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_423);
x_577 = l_Lean_Expr_const___override(x_576, x_423);
lean_inc(x_420);
x_578 = l_Lean_Expr_app___override(x_577, x_420);
x_579 = l_CancelDenoms_cancelDenominatorsInType___closed__27;
lean_inc(x_423);
x_580 = l_Lean_Expr_const___override(x_579, x_423);
lean_inc(x_420);
x_581 = l_Lean_Expr_app___override(x_580, x_420);
x_582 = l_CancelDenoms_cancelDenominatorsInType___closed__29;
x_583 = l_Lean_Expr_const___override(x_582, x_423);
x_584 = l_Lean_Expr_app___override(x_583, x_420);
x_585 = l_Lean_Expr_app___override(x_584, x_545);
x_586 = l_Lean_Expr_app___override(x_581, x_585);
x_587 = l_Lean_Expr_app___override(x_578, x_586);
x_588 = l_Lean_Expr_app___override(x_575, x_587);
x_589 = l_Lean_Expr_app___override(x_572, x_588);
x_590 = l_Lean_Expr_app___override(x_569, x_589);
x_591 = l_Lean_Expr_app___override(x_566, x_590);
x_592 = l_Lean_Expr_app___override(x_563, x_591);
x_593 = l_Lean_Expr_app___override(x_560, x_592);
x_594 = l_Lean_Expr_app___override(x_557, x_593);
x_595 = l_Lean_Expr_app___override(x_552, x_594);
lean_inc(x_595);
x_596 = l_Lean_Expr_app___override(x_595, x_441);
lean_inc(x_595);
x_597 = l_Lean_Expr_app___override(x_595, x_446);
x_598 = l_Lean_Expr_app___override(x_595, x_514);
if (lean_is_scalar(x_435)) {
 x_599 = lean_alloc_ctor(0, 2, 0);
} else {
 x_599 = x_435;
}
lean_ctor_set(x_599, 0, x_597);
lean_ctor_set(x_599, 1, x_598);
lean_ctor_set(x_21, 1, x_599);
lean_ctor_set(x_21, 0, x_596);
x_600 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_422, x_434, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_520);
return x_600;
}
else
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; 
lean_dec(x_514);
lean_dec(x_446);
lean_dec(x_441);
lean_dec(x_435);
lean_dec(x_434);
lean_dec(x_423);
lean_dec(x_420);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_601 = lean_ctor_get(x_518, 0);
lean_inc(x_601);
x_602 = lean_ctor_get(x_518, 1);
lean_inc(x_602);
if (lean_is_exclusive(x_518)) {
 lean_ctor_release(x_518, 0);
 lean_ctor_release(x_518, 1);
 x_603 = x_518;
} else {
 lean_dec_ref(x_518);
 x_603 = lean_box(0);
}
if (lean_is_scalar(x_603)) {
 x_604 = lean_alloc_ctor(1, 2, 0);
} else {
 x_604 = x_603;
}
lean_ctor_set(x_604, 0, x_601);
lean_ctor_set(x_604, 1, x_602);
return x_604;
}
}
}
else
{
lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; 
lean_dec(x_446);
lean_dec(x_441);
lean_dec(x_435);
lean_dec(x_434);
lean_dec(x_423);
lean_dec(x_421);
lean_dec(x_420);
lean_free_object(x_27);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_605 = lean_ctor_get(x_448, 0);
lean_inc(x_605);
x_606 = lean_ctor_get(x_448, 1);
lean_inc(x_606);
if (lean_is_exclusive(x_448)) {
 lean_ctor_release(x_448, 0);
 lean_ctor_release(x_448, 1);
 x_607 = x_448;
} else {
 lean_dec_ref(x_448);
 x_607 = lean_box(0);
}
if (lean_is_scalar(x_607)) {
 x_608 = lean_alloc_ctor(1, 2, 0);
} else {
 x_608 = x_607;
}
lean_ctor_set(x_608, 0, x_605);
lean_ctor_set(x_608, 1, x_606);
return x_608;
}
}
else
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; 
lean_dec(x_441);
lean_dec(x_436);
lean_dec(x_435);
lean_dec(x_434);
lean_dec(x_428);
lean_dec(x_423);
lean_dec(x_421);
lean_dec(x_420);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_609 = lean_ctor_get(x_443, 0);
lean_inc(x_609);
x_610 = lean_ctor_get(x_443, 1);
lean_inc(x_610);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 x_611 = x_443;
} else {
 lean_dec_ref(x_443);
 x_611 = lean_box(0);
}
if (lean_is_scalar(x_611)) {
 x_612 = lean_alloc_ctor(1, 2, 0);
} else {
 x_612 = x_611;
}
lean_ctor_set(x_612, 0, x_609);
lean_ctor_set(x_612, 1, x_610);
return x_612;
}
}
else
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; 
lean_dec(x_436);
lean_dec(x_435);
lean_dec(x_434);
lean_dec(x_433);
lean_dec(x_428);
lean_dec(x_423);
lean_dec(x_421);
lean_dec(x_420);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_613 = lean_ctor_get(x_438, 0);
lean_inc(x_613);
x_614 = lean_ctor_get(x_438, 1);
lean_inc(x_614);
if (lean_is_exclusive(x_438)) {
 lean_ctor_release(x_438, 0);
 lean_ctor_release(x_438, 1);
 x_615 = x_438;
} else {
 lean_dec_ref(x_438);
 x_615 = lean_box(0);
}
if (lean_is_scalar(x_615)) {
 x_616 = lean_alloc_ctor(1, 2, 0);
} else {
 x_616 = x_615;
}
lean_ctor_set(x_616, 0, x_613);
lean_ctor_set(x_616, 1, x_614);
return x_616;
}
}
else
{
lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; 
lean_dec(x_428);
lean_dec(x_423);
lean_dec(x_421);
lean_dec(x_420);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_617 = lean_ctor_get(x_430, 0);
lean_inc(x_617);
x_618 = lean_ctor_get(x_430, 1);
lean_inc(x_618);
if (lean_is_exclusive(x_430)) {
 lean_ctor_release(x_430, 0);
 lean_ctor_release(x_430, 1);
 x_619 = x_430;
} else {
 lean_dec_ref(x_430);
 x_619 = lean_box(0);
}
if (lean_is_scalar(x_619)) {
 x_620 = lean_alloc_ctor(1, 2, 0);
} else {
 x_620 = x_619;
}
lean_ctor_set(x_620, 0, x_617);
lean_ctor_set(x_620, 1, x_618);
return x_620;
}
}
else
{
lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; 
lean_dec(x_423);
lean_dec(x_421);
lean_dec(x_420);
lean_free_object(x_27);
lean_dec(x_31);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_621 = lean_ctor_get(x_427, 0);
lean_inc(x_621);
x_622 = lean_ctor_get(x_427, 1);
lean_inc(x_622);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 x_623 = x_427;
} else {
 lean_dec_ref(x_427);
 x_623 = lean_box(0);
}
if (lean_is_scalar(x_623)) {
 x_624 = lean_alloc_ctor(1, 2, 0);
} else {
 x_624 = x_623;
}
lean_ctor_set(x_624, 0, x_621);
lean_ctor_set(x_624, 1, x_622);
return x_624;
}
}
}
else
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; 
x_625 = lean_ctor_get(x_27, 0);
lean_inc(x_625);
lean_dec(x_27);
x_626 = lean_ctor_get(x_28, 0);
lean_inc(x_626);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_627 = x_28;
} else {
 lean_dec_ref(x_28);
 x_627 = lean_box(0);
}
lean_inc(x_625);
x_628 = l_Lean_Level_succ___override(x_625);
x_629 = lean_box(0);
lean_inc(x_625);
if (lean_is_scalar(x_627)) {
 x_630 = lean_alloc_ctor(1, 2, 0);
} else {
 x_630 = x_627;
 lean_ctor_set_tag(x_630, 1);
}
lean_ctor_set(x_630, 0, x_625);
lean_ctor_set(x_630, 1, x_629);
x_631 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_630);
x_632 = l_Lean_Expr_const___override(x_631, x_630);
lean_inc(x_626);
x_633 = l_Lean_Expr_app___override(x_632, x_626);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_634 = l_Qq_synthInstanceQ___rarg(x_633, x_2, x_3, x_4, x_5, x_29);
if (lean_obj_tag(x_634) == 0)
{
lean_object* x_635; lean_object* x_636; lean_object* x_637; 
x_635 = lean_ctor_get(x_634, 0);
lean_inc(x_635);
x_636 = lean_ctor_get(x_634, 1);
lean_inc(x_636);
lean_dec(x_634);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_637 = l_CancelDenoms_derive(x_17, x_2, x_3, x_4, x_5, x_636);
if (lean_obj_tag(x_637) == 0)
{
lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; 
x_638 = lean_ctor_get(x_637, 0);
lean_inc(x_638);
x_639 = lean_ctor_get(x_637, 1);
lean_inc(x_639);
lean_dec(x_637);
x_640 = lean_ctor_get(x_638, 0);
lean_inc(x_640);
x_641 = lean_ctor_get(x_638, 1);
lean_inc(x_641);
if (lean_is_exclusive(x_638)) {
 lean_ctor_release(x_638, 0);
 lean_ctor_release(x_638, 1);
 x_642 = x_638;
} else {
 lean_dec_ref(x_638);
 x_642 = lean_box(0);
}
x_643 = lean_nat_gcd(x_24, x_640);
x_644 = l_Lean_mkRawNatLit(x_24);
lean_inc(x_635);
lean_inc(x_626);
lean_inc(x_625);
x_645 = l_Mathlib_Meta_NormNum_mkOfNat(x_625, x_626, x_635, x_644, x_2, x_3, x_4, x_5, x_639);
if (lean_obj_tag(x_645) == 0)
{
lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; 
x_646 = lean_ctor_get(x_645, 0);
lean_inc(x_646);
x_647 = lean_ctor_get(x_645, 1);
lean_inc(x_647);
lean_dec(x_645);
x_648 = lean_ctor_get(x_646, 0);
lean_inc(x_648);
lean_dec(x_646);
x_649 = l_Lean_mkRawNatLit(x_640);
lean_inc(x_635);
lean_inc(x_626);
lean_inc(x_625);
x_650 = l_Mathlib_Meta_NormNum_mkOfNat(x_625, x_626, x_635, x_649, x_2, x_3, x_4, x_5, x_647);
if (lean_obj_tag(x_650) == 0)
{
lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; 
x_651 = lean_ctor_get(x_650, 0);
lean_inc(x_651);
x_652 = lean_ctor_get(x_650, 1);
lean_inc(x_652);
lean_dec(x_650);
x_653 = lean_ctor_get(x_651, 0);
lean_inc(x_653);
lean_dec(x_651);
x_654 = l_Lean_mkRawNatLit(x_643);
lean_inc(x_626);
x_655 = l_Mathlib_Meta_NormNum_mkOfNat(x_625, x_626, x_635, x_654, x_2, x_3, x_4, x_5, x_652);
if (lean_obj_tag(x_655) == 0)
{
uint8_t x_656; 
x_656 = lean_unbox(x_19);
lean_dec(x_19);
if (x_656 == 0)
{
lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; 
x_657 = lean_ctor_get(x_655, 0);
lean_inc(x_657);
x_658 = lean_ctor_get(x_655, 1);
lean_inc(x_658);
lean_dec(x_655);
x_659 = lean_ctor_get(x_657, 0);
lean_inc(x_659);
lean_dec(x_657);
x_660 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_630);
x_661 = l_Lean_Expr_const___override(x_660, x_630);
lean_inc(x_626);
x_662 = l_Lean_Expr_app___override(x_661, x_626);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_663 = l_Qq_synthInstanceQ___rarg(x_662, x_2, x_3, x_4, x_5, x_658);
if (lean_obj_tag(x_663) == 0)
{
lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; 
x_664 = lean_ctor_get(x_663, 0);
lean_inc(x_664);
x_665 = lean_ctor_get(x_663, 1);
lean_inc(x_665);
lean_dec(x_663);
x_666 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_666, 0, x_628);
lean_ctor_set(x_666, 1, x_629);
x_667 = l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
x_668 = l_Lean_Expr_const___override(x_667, x_666);
lean_inc(x_626);
x_669 = l_Lean_Expr_app___override(x_668, x_626);
lean_inc(x_669);
x_670 = l_Lean_Expr_app___override(x_669, x_648);
x_671 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_630);
x_672 = l_Lean_Expr_const___override(x_671, x_630);
lean_inc(x_626);
x_673 = l_Lean_Expr_app___override(x_672, x_626);
x_674 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_675 = l_Lean_Expr_app___override(x_673, x_674);
x_676 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_630);
x_677 = l_Lean_Expr_const___override(x_676, x_630);
lean_inc(x_626);
x_678 = l_Lean_Expr_app___override(x_677, x_626);
x_679 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_630);
x_680 = l_Lean_Expr_const___override(x_679, x_630);
lean_inc(x_626);
x_681 = l_Lean_Expr_app___override(x_680, x_626);
x_682 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_630);
x_683 = l_Lean_Expr_const___override(x_682, x_630);
lean_inc(x_626);
x_684 = l_Lean_Expr_app___override(x_683, x_626);
x_685 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_630);
x_686 = l_Lean_Expr_const___override(x_685, x_630);
lean_inc(x_626);
x_687 = l_Lean_Expr_app___override(x_686, x_626);
x_688 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_630);
x_689 = l_Lean_Expr_const___override(x_688, x_630);
lean_inc(x_626);
x_690 = l_Lean_Expr_app___override(x_689, x_626);
x_691 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_630);
x_692 = l_Lean_Expr_const___override(x_691, x_630);
lean_inc(x_626);
x_693 = l_Lean_Expr_app___override(x_692, x_626);
x_694 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_630);
x_695 = l_Lean_Expr_const___override(x_694, x_630);
lean_inc(x_626);
x_696 = l_Lean_Expr_app___override(x_695, x_626);
x_697 = l_CancelDenoms_mkProdPrf___lambda__9___closed__21;
x_698 = l_Lean_Expr_const___override(x_697, x_630);
x_699 = l_Lean_Expr_app___override(x_698, x_626);
x_700 = l_Lean_Expr_app___override(x_699, x_664);
x_701 = l_Lean_Expr_app___override(x_696, x_700);
x_702 = l_Lean_Expr_app___override(x_693, x_701);
x_703 = l_Lean_Expr_app___override(x_690, x_702);
x_704 = l_Lean_Expr_app___override(x_687, x_703);
x_705 = l_Lean_Expr_app___override(x_684, x_704);
x_706 = l_Lean_Expr_app___override(x_681, x_705);
x_707 = l_Lean_Expr_app___override(x_678, x_706);
x_708 = l_Lean_Expr_app___override(x_675, x_707);
lean_inc(x_708);
x_709 = l_Lean_Expr_app___override(x_670, x_708);
lean_inc(x_669);
x_710 = l_Lean_Expr_app___override(x_669, x_653);
lean_inc(x_708);
x_711 = l_Lean_Expr_app___override(x_710, x_708);
x_712 = l_Lean_Expr_app___override(x_669, x_659);
x_713 = l_Lean_Expr_app___override(x_712, x_708);
if (lean_is_scalar(x_642)) {
 x_714 = lean_alloc_ctor(0, 2, 0);
} else {
 x_714 = x_642;
}
lean_ctor_set(x_714, 0, x_711);
lean_ctor_set(x_714, 1, x_713);
lean_ctor_set(x_21, 1, x_714);
lean_ctor_set(x_21, 0, x_709);
x_715 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_629, x_641, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_665);
return x_715;
}
else
{
lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; 
lean_dec(x_659);
lean_dec(x_653);
lean_dec(x_648);
lean_dec(x_642);
lean_dec(x_641);
lean_dec(x_630);
lean_dec(x_628);
lean_dec(x_626);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_716 = lean_ctor_get(x_663, 0);
lean_inc(x_716);
x_717 = lean_ctor_get(x_663, 1);
lean_inc(x_717);
if (lean_is_exclusive(x_663)) {
 lean_ctor_release(x_663, 0);
 lean_ctor_release(x_663, 1);
 x_718 = x_663;
} else {
 lean_dec_ref(x_663);
 x_718 = lean_box(0);
}
if (lean_is_scalar(x_718)) {
 x_719 = lean_alloc_ctor(1, 2, 0);
} else {
 x_719 = x_718;
}
lean_ctor_set(x_719, 0, x_716);
lean_ctor_set(x_719, 1, x_717);
return x_719;
}
}
else
{
lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; 
lean_dec(x_628);
x_720 = lean_ctor_get(x_655, 0);
lean_inc(x_720);
x_721 = lean_ctor_get(x_655, 1);
lean_inc(x_721);
lean_dec(x_655);
x_722 = lean_ctor_get(x_720, 0);
lean_inc(x_722);
lean_dec(x_720);
x_723 = l_CancelDenoms_cancelDenominatorsInType___closed__4;
lean_inc(x_630);
x_724 = l_Lean_Expr_const___override(x_723, x_630);
lean_inc(x_626);
x_725 = l_Lean_Expr_app___override(x_724, x_626);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_726 = l_Qq_synthInstanceQ___rarg(x_725, x_2, x_3, x_4, x_5, x_721);
if (lean_obj_tag(x_726) == 0)
{
lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; 
x_727 = lean_ctor_get(x_726, 0);
lean_inc(x_727);
x_728 = lean_ctor_get(x_726, 1);
lean_inc(x_728);
lean_dec(x_726);
x_729 = l_CancelDenoms_cancelDenominatorsInType___closed__5;
lean_inc(x_630);
x_730 = l_Lean_Expr_const___override(x_729, x_630);
lean_inc(x_626);
x_731 = l_Lean_Expr_app___override(x_730, x_626);
x_732 = l_CancelDenoms_cancelDenominatorsInType___closed__8;
lean_inc(x_630);
x_733 = l_Lean_Expr_const___override(x_732, x_630);
lean_inc(x_626);
x_734 = l_Lean_Expr_app___override(x_733, x_626);
x_735 = l_CancelDenoms_cancelDenominatorsInType___closed__11;
lean_inc(x_630);
x_736 = l_Lean_Expr_const___override(x_735, x_630);
lean_inc(x_626);
x_737 = l_Lean_Expr_app___override(x_736, x_626);
x_738 = l_CancelDenoms_cancelDenominatorsInType___closed__14;
lean_inc(x_630);
x_739 = l_Lean_Expr_const___override(x_738, x_630);
lean_inc(x_626);
x_740 = l_Lean_Expr_app___override(x_739, x_626);
x_741 = l_CancelDenoms_cancelDenominatorsInType___closed__17;
lean_inc(x_630);
x_742 = l_Lean_Expr_const___override(x_741, x_630);
lean_inc(x_626);
x_743 = l_Lean_Expr_app___override(x_742, x_626);
x_744 = l_CancelDenoms_cancelDenominatorsInType___closed__20;
lean_inc(x_630);
x_745 = l_Lean_Expr_const___override(x_744, x_630);
lean_inc(x_626);
x_746 = l_Lean_Expr_app___override(x_745, x_626);
x_747 = l_CancelDenoms_cancelDenominatorsInType___closed__23;
lean_inc(x_630);
x_748 = l_Lean_Expr_const___override(x_747, x_630);
lean_inc(x_626);
x_749 = l_Lean_Expr_app___override(x_748, x_626);
x_750 = l_CancelDenoms_cancelDenominatorsInType___closed__25;
lean_inc(x_630);
x_751 = l_Lean_Expr_const___override(x_750, x_630);
lean_inc(x_626);
x_752 = l_Lean_Expr_app___override(x_751, x_626);
x_753 = l_Lean_Expr_app___override(x_752, x_727);
lean_inc(x_753);
x_754 = l_Lean_Expr_app___override(x_749, x_753);
x_755 = l_Lean_Expr_app___override(x_746, x_754);
x_756 = l_Lean_Expr_app___override(x_743, x_755);
x_757 = l_Lean_Expr_app___override(x_740, x_756);
x_758 = l_Lean_Expr_app___override(x_737, x_757);
x_759 = l_Lean_Expr_app___override(x_734, x_758);
x_760 = l_Lean_Expr_app___override(x_731, x_759);
x_761 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_630);
x_762 = l_Lean_Expr_const___override(x_761, x_630);
lean_inc(x_626);
x_763 = l_Lean_Expr_app___override(x_762, x_626);
x_764 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_765 = l_Lean_Expr_app___override(x_763, x_764);
x_766 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_630);
x_767 = l_Lean_Expr_const___override(x_766, x_630);
lean_inc(x_626);
x_768 = l_Lean_Expr_app___override(x_767, x_626);
x_769 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_630);
x_770 = l_Lean_Expr_const___override(x_769, x_630);
lean_inc(x_626);
x_771 = l_Lean_Expr_app___override(x_770, x_626);
x_772 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_630);
x_773 = l_Lean_Expr_const___override(x_772, x_630);
lean_inc(x_626);
x_774 = l_Lean_Expr_app___override(x_773, x_626);
x_775 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_630);
x_776 = l_Lean_Expr_const___override(x_775, x_630);
lean_inc(x_626);
x_777 = l_Lean_Expr_app___override(x_776, x_626);
x_778 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_630);
x_779 = l_Lean_Expr_const___override(x_778, x_630);
lean_inc(x_626);
x_780 = l_Lean_Expr_app___override(x_779, x_626);
x_781 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_630);
x_782 = l_Lean_Expr_const___override(x_781, x_630);
lean_inc(x_626);
x_783 = l_Lean_Expr_app___override(x_782, x_626);
x_784 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_630);
x_785 = l_Lean_Expr_const___override(x_784, x_630);
lean_inc(x_626);
x_786 = l_Lean_Expr_app___override(x_785, x_626);
x_787 = l_CancelDenoms_cancelDenominatorsInType___closed__27;
lean_inc(x_630);
x_788 = l_Lean_Expr_const___override(x_787, x_630);
lean_inc(x_626);
x_789 = l_Lean_Expr_app___override(x_788, x_626);
x_790 = l_CancelDenoms_cancelDenominatorsInType___closed__29;
x_791 = l_Lean_Expr_const___override(x_790, x_630);
x_792 = l_Lean_Expr_app___override(x_791, x_626);
x_793 = l_Lean_Expr_app___override(x_792, x_753);
x_794 = l_Lean_Expr_app___override(x_789, x_793);
x_795 = l_Lean_Expr_app___override(x_786, x_794);
x_796 = l_Lean_Expr_app___override(x_783, x_795);
x_797 = l_Lean_Expr_app___override(x_780, x_796);
x_798 = l_Lean_Expr_app___override(x_777, x_797);
x_799 = l_Lean_Expr_app___override(x_774, x_798);
x_800 = l_Lean_Expr_app___override(x_771, x_799);
x_801 = l_Lean_Expr_app___override(x_768, x_800);
x_802 = l_Lean_Expr_app___override(x_765, x_801);
x_803 = l_Lean_Expr_app___override(x_760, x_802);
lean_inc(x_803);
x_804 = l_Lean_Expr_app___override(x_803, x_648);
lean_inc(x_803);
x_805 = l_Lean_Expr_app___override(x_803, x_653);
x_806 = l_Lean_Expr_app___override(x_803, x_722);
if (lean_is_scalar(x_642)) {
 x_807 = lean_alloc_ctor(0, 2, 0);
} else {
 x_807 = x_642;
}
lean_ctor_set(x_807, 0, x_805);
lean_ctor_set(x_807, 1, x_806);
lean_ctor_set(x_21, 1, x_807);
lean_ctor_set(x_21, 0, x_804);
x_808 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_629, x_641, x_25, x_18, x_21, x_2, x_3, x_4, x_5, x_728);
return x_808;
}
else
{
lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; 
lean_dec(x_722);
lean_dec(x_653);
lean_dec(x_648);
lean_dec(x_642);
lean_dec(x_641);
lean_dec(x_630);
lean_dec(x_626);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_809 = lean_ctor_get(x_726, 0);
lean_inc(x_809);
x_810 = lean_ctor_get(x_726, 1);
lean_inc(x_810);
if (lean_is_exclusive(x_726)) {
 lean_ctor_release(x_726, 0);
 lean_ctor_release(x_726, 1);
 x_811 = x_726;
} else {
 lean_dec_ref(x_726);
 x_811 = lean_box(0);
}
if (lean_is_scalar(x_811)) {
 x_812 = lean_alloc_ctor(1, 2, 0);
} else {
 x_812 = x_811;
}
lean_ctor_set(x_812, 0, x_809);
lean_ctor_set(x_812, 1, x_810);
return x_812;
}
}
}
else
{
lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; 
lean_dec(x_653);
lean_dec(x_648);
lean_dec(x_642);
lean_dec(x_641);
lean_dec(x_630);
lean_dec(x_628);
lean_dec(x_626);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_813 = lean_ctor_get(x_655, 0);
lean_inc(x_813);
x_814 = lean_ctor_get(x_655, 1);
lean_inc(x_814);
if (lean_is_exclusive(x_655)) {
 lean_ctor_release(x_655, 0);
 lean_ctor_release(x_655, 1);
 x_815 = x_655;
} else {
 lean_dec_ref(x_655);
 x_815 = lean_box(0);
}
if (lean_is_scalar(x_815)) {
 x_816 = lean_alloc_ctor(1, 2, 0);
} else {
 x_816 = x_815;
}
lean_ctor_set(x_816, 0, x_813);
lean_ctor_set(x_816, 1, x_814);
return x_816;
}
}
else
{
lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; 
lean_dec(x_648);
lean_dec(x_643);
lean_dec(x_642);
lean_dec(x_641);
lean_dec(x_635);
lean_dec(x_630);
lean_dec(x_628);
lean_dec(x_626);
lean_dec(x_625);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_817 = lean_ctor_get(x_650, 0);
lean_inc(x_817);
x_818 = lean_ctor_get(x_650, 1);
lean_inc(x_818);
if (lean_is_exclusive(x_650)) {
 lean_ctor_release(x_650, 0);
 lean_ctor_release(x_650, 1);
 x_819 = x_650;
} else {
 lean_dec_ref(x_650);
 x_819 = lean_box(0);
}
if (lean_is_scalar(x_819)) {
 x_820 = lean_alloc_ctor(1, 2, 0);
} else {
 x_820 = x_819;
}
lean_ctor_set(x_820, 0, x_817);
lean_ctor_set(x_820, 1, x_818);
return x_820;
}
}
else
{
lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; 
lean_dec(x_643);
lean_dec(x_642);
lean_dec(x_641);
lean_dec(x_640);
lean_dec(x_635);
lean_dec(x_630);
lean_dec(x_628);
lean_dec(x_626);
lean_dec(x_625);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_821 = lean_ctor_get(x_645, 0);
lean_inc(x_821);
x_822 = lean_ctor_get(x_645, 1);
lean_inc(x_822);
if (lean_is_exclusive(x_645)) {
 lean_ctor_release(x_645, 0);
 lean_ctor_release(x_645, 1);
 x_823 = x_645;
} else {
 lean_dec_ref(x_645);
 x_823 = lean_box(0);
}
if (lean_is_scalar(x_823)) {
 x_824 = lean_alloc_ctor(1, 2, 0);
} else {
 x_824 = x_823;
}
lean_ctor_set(x_824, 0, x_821);
lean_ctor_set(x_824, 1, x_822);
return x_824;
}
}
else
{
lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; 
lean_dec(x_635);
lean_dec(x_630);
lean_dec(x_628);
lean_dec(x_626);
lean_dec(x_625);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_825 = lean_ctor_get(x_637, 0);
lean_inc(x_825);
x_826 = lean_ctor_get(x_637, 1);
lean_inc(x_826);
if (lean_is_exclusive(x_637)) {
 lean_ctor_release(x_637, 0);
 lean_ctor_release(x_637, 1);
 x_827 = x_637;
} else {
 lean_dec_ref(x_637);
 x_827 = lean_box(0);
}
if (lean_is_scalar(x_827)) {
 x_828 = lean_alloc_ctor(1, 2, 0);
} else {
 x_828 = x_827;
}
lean_ctor_set(x_828, 0, x_825);
lean_ctor_set(x_828, 1, x_826);
return x_828;
}
}
else
{
lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; 
lean_dec(x_630);
lean_dec(x_628);
lean_dec(x_626);
lean_dec(x_625);
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_829 = lean_ctor_get(x_634, 0);
lean_inc(x_829);
x_830 = lean_ctor_get(x_634, 1);
lean_inc(x_830);
if (lean_is_exclusive(x_634)) {
 lean_ctor_release(x_634, 0);
 lean_ctor_release(x_634, 1);
 x_831 = x_634;
} else {
 lean_dec_ref(x_634);
 x_831 = lean_box(0);
}
if (lean_is_scalar(x_831)) {
 x_832 = lean_alloc_ctor(1, 2, 0);
} else {
 x_832 = x_831;
}
lean_ctor_set(x_832, 0, x_829);
lean_ctor_set(x_832, 1, x_830);
return x_832;
}
}
}
else
{
uint8_t x_833; 
lean_free_object(x_21);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_833 = !lean_is_exclusive(x_26);
if (x_833 == 0)
{
return x_26;
}
else
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; 
x_834 = lean_ctor_get(x_26, 0);
x_835 = lean_ctor_get(x_26, 1);
lean_inc(x_835);
lean_inc(x_834);
lean_dec(x_26);
x_836 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_836, 0, x_834);
lean_ctor_set(x_836, 1, x_835);
return x_836;
}
}
}
else
{
lean_object* x_837; lean_object* x_838; lean_object* x_839; 
x_837 = lean_ctor_get(x_21, 0);
x_838 = lean_ctor_get(x_21, 1);
lean_inc(x_838);
lean_inc(x_837);
lean_dec(x_21);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_839 = l_Qq_inferTypeQ_x27(x_16, x_2, x_3, x_4, x_5, x_22);
if (lean_obj_tag(x_839) == 0)
{
lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; 
x_840 = lean_ctor_get(x_839, 0);
lean_inc(x_840);
x_841 = lean_ctor_get(x_840, 1);
lean_inc(x_841);
x_842 = lean_ctor_get(x_839, 1);
lean_inc(x_842);
lean_dec(x_839);
x_843 = lean_ctor_get(x_840, 0);
lean_inc(x_843);
if (lean_is_exclusive(x_840)) {
 lean_ctor_release(x_840, 0);
 lean_ctor_release(x_840, 1);
 x_844 = x_840;
} else {
 lean_dec_ref(x_840);
 x_844 = lean_box(0);
}
x_845 = lean_ctor_get(x_841, 0);
lean_inc(x_845);
if (lean_is_exclusive(x_841)) {
 lean_ctor_release(x_841, 0);
 lean_ctor_release(x_841, 1);
 x_846 = x_841;
} else {
 lean_dec_ref(x_841);
 x_846 = lean_box(0);
}
lean_inc(x_843);
x_847 = l_Lean_Level_succ___override(x_843);
x_848 = lean_box(0);
lean_inc(x_843);
if (lean_is_scalar(x_846)) {
 x_849 = lean_alloc_ctor(1, 2, 0);
} else {
 x_849 = x_846;
 lean_ctor_set_tag(x_849, 1);
}
lean_ctor_set(x_849, 0, x_843);
lean_ctor_set(x_849, 1, x_848);
x_850 = l_CancelDenoms_mkProdPrf___closed__1;
lean_inc(x_849);
x_851 = l_Lean_Expr_const___override(x_850, x_849);
lean_inc(x_845);
x_852 = l_Lean_Expr_app___override(x_851, x_845);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_853 = l_Qq_synthInstanceQ___rarg(x_852, x_2, x_3, x_4, x_5, x_842);
if (lean_obj_tag(x_853) == 0)
{
lean_object* x_854; lean_object* x_855; lean_object* x_856; 
x_854 = lean_ctor_get(x_853, 0);
lean_inc(x_854);
x_855 = lean_ctor_get(x_853, 1);
lean_inc(x_855);
lean_dec(x_853);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_856 = l_CancelDenoms_derive(x_17, x_2, x_3, x_4, x_5, x_855);
if (lean_obj_tag(x_856) == 0)
{
lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; 
x_857 = lean_ctor_get(x_856, 0);
lean_inc(x_857);
x_858 = lean_ctor_get(x_856, 1);
lean_inc(x_858);
lean_dec(x_856);
x_859 = lean_ctor_get(x_857, 0);
lean_inc(x_859);
x_860 = lean_ctor_get(x_857, 1);
lean_inc(x_860);
if (lean_is_exclusive(x_857)) {
 lean_ctor_release(x_857, 0);
 lean_ctor_release(x_857, 1);
 x_861 = x_857;
} else {
 lean_dec_ref(x_857);
 x_861 = lean_box(0);
}
x_862 = lean_nat_gcd(x_837, x_859);
x_863 = l_Lean_mkRawNatLit(x_837);
lean_inc(x_854);
lean_inc(x_845);
lean_inc(x_843);
x_864 = l_Mathlib_Meta_NormNum_mkOfNat(x_843, x_845, x_854, x_863, x_2, x_3, x_4, x_5, x_858);
if (lean_obj_tag(x_864) == 0)
{
lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; 
x_865 = lean_ctor_get(x_864, 0);
lean_inc(x_865);
x_866 = lean_ctor_get(x_864, 1);
lean_inc(x_866);
lean_dec(x_864);
x_867 = lean_ctor_get(x_865, 0);
lean_inc(x_867);
lean_dec(x_865);
x_868 = l_Lean_mkRawNatLit(x_859);
lean_inc(x_854);
lean_inc(x_845);
lean_inc(x_843);
x_869 = l_Mathlib_Meta_NormNum_mkOfNat(x_843, x_845, x_854, x_868, x_2, x_3, x_4, x_5, x_866);
if (lean_obj_tag(x_869) == 0)
{
lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; 
x_870 = lean_ctor_get(x_869, 0);
lean_inc(x_870);
x_871 = lean_ctor_get(x_869, 1);
lean_inc(x_871);
lean_dec(x_869);
x_872 = lean_ctor_get(x_870, 0);
lean_inc(x_872);
lean_dec(x_870);
x_873 = l_Lean_mkRawNatLit(x_862);
lean_inc(x_845);
x_874 = l_Mathlib_Meta_NormNum_mkOfNat(x_843, x_845, x_854, x_873, x_2, x_3, x_4, x_5, x_871);
if (lean_obj_tag(x_874) == 0)
{
uint8_t x_875; 
x_875 = lean_unbox(x_19);
lean_dec(x_19);
if (x_875 == 0)
{
lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; 
x_876 = lean_ctor_get(x_874, 0);
lean_inc(x_876);
x_877 = lean_ctor_get(x_874, 1);
lean_inc(x_877);
lean_dec(x_874);
x_878 = lean_ctor_get(x_876, 0);
lean_inc(x_878);
lean_dec(x_876);
x_879 = l_CancelDenoms_derive___lambda__3___closed__1;
lean_inc(x_849);
x_880 = l_Lean_Expr_const___override(x_879, x_849);
lean_inc(x_845);
x_881 = l_Lean_Expr_app___override(x_880, x_845);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_882 = l_Qq_synthInstanceQ___rarg(x_881, x_2, x_3, x_4, x_5, x_877);
if (lean_obj_tag(x_882) == 0)
{
lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; 
x_883 = lean_ctor_get(x_882, 0);
lean_inc(x_883);
x_884 = lean_ctor_get(x_882, 1);
lean_inc(x_884);
lean_dec(x_882);
if (lean_is_scalar(x_844)) {
 x_885 = lean_alloc_ctor(1, 2, 0);
} else {
 x_885 = x_844;
 lean_ctor_set_tag(x_885, 1);
}
lean_ctor_set(x_885, 0, x_847);
lean_ctor_set(x_885, 1, x_848);
x_886 = l_CancelDenoms_mkProdPrf___lambda__9___closed__32;
x_887 = l_Lean_Expr_const___override(x_886, x_885);
lean_inc(x_845);
x_888 = l_Lean_Expr_app___override(x_887, x_845);
lean_inc(x_888);
x_889 = l_Lean_Expr_app___override(x_888, x_867);
x_890 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_849);
x_891 = l_Lean_Expr_const___override(x_890, x_849);
lean_inc(x_845);
x_892 = l_Lean_Expr_app___override(x_891, x_845);
x_893 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_894 = l_Lean_Expr_app___override(x_892, x_893);
x_895 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_849);
x_896 = l_Lean_Expr_const___override(x_895, x_849);
lean_inc(x_845);
x_897 = l_Lean_Expr_app___override(x_896, x_845);
x_898 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_849);
x_899 = l_Lean_Expr_const___override(x_898, x_849);
lean_inc(x_845);
x_900 = l_Lean_Expr_app___override(x_899, x_845);
x_901 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_849);
x_902 = l_Lean_Expr_const___override(x_901, x_849);
lean_inc(x_845);
x_903 = l_Lean_Expr_app___override(x_902, x_845);
x_904 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_849);
x_905 = l_Lean_Expr_const___override(x_904, x_849);
lean_inc(x_845);
x_906 = l_Lean_Expr_app___override(x_905, x_845);
x_907 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_849);
x_908 = l_Lean_Expr_const___override(x_907, x_849);
lean_inc(x_845);
x_909 = l_Lean_Expr_app___override(x_908, x_845);
x_910 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_849);
x_911 = l_Lean_Expr_const___override(x_910, x_849);
lean_inc(x_845);
x_912 = l_Lean_Expr_app___override(x_911, x_845);
x_913 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_849);
x_914 = l_Lean_Expr_const___override(x_913, x_849);
lean_inc(x_845);
x_915 = l_Lean_Expr_app___override(x_914, x_845);
x_916 = l_CancelDenoms_mkProdPrf___lambda__9___closed__21;
x_917 = l_Lean_Expr_const___override(x_916, x_849);
x_918 = l_Lean_Expr_app___override(x_917, x_845);
x_919 = l_Lean_Expr_app___override(x_918, x_883);
x_920 = l_Lean_Expr_app___override(x_915, x_919);
x_921 = l_Lean_Expr_app___override(x_912, x_920);
x_922 = l_Lean_Expr_app___override(x_909, x_921);
x_923 = l_Lean_Expr_app___override(x_906, x_922);
x_924 = l_Lean_Expr_app___override(x_903, x_923);
x_925 = l_Lean_Expr_app___override(x_900, x_924);
x_926 = l_Lean_Expr_app___override(x_897, x_925);
x_927 = l_Lean_Expr_app___override(x_894, x_926);
lean_inc(x_927);
x_928 = l_Lean_Expr_app___override(x_889, x_927);
lean_inc(x_888);
x_929 = l_Lean_Expr_app___override(x_888, x_872);
lean_inc(x_927);
x_930 = l_Lean_Expr_app___override(x_929, x_927);
x_931 = l_Lean_Expr_app___override(x_888, x_878);
x_932 = l_Lean_Expr_app___override(x_931, x_927);
if (lean_is_scalar(x_861)) {
 x_933 = lean_alloc_ctor(0, 2, 0);
} else {
 x_933 = x_861;
}
lean_ctor_set(x_933, 0, x_930);
lean_ctor_set(x_933, 1, x_932);
x_934 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_934, 0, x_928);
lean_ctor_set(x_934, 1, x_933);
x_935 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_848, x_860, x_838, x_18, x_934, x_2, x_3, x_4, x_5, x_884);
return x_935;
}
else
{
lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; 
lean_dec(x_878);
lean_dec(x_872);
lean_dec(x_867);
lean_dec(x_861);
lean_dec(x_860);
lean_dec(x_849);
lean_dec(x_847);
lean_dec(x_845);
lean_dec(x_844);
lean_dec(x_838);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_936 = lean_ctor_get(x_882, 0);
lean_inc(x_936);
x_937 = lean_ctor_get(x_882, 1);
lean_inc(x_937);
if (lean_is_exclusive(x_882)) {
 lean_ctor_release(x_882, 0);
 lean_ctor_release(x_882, 1);
 x_938 = x_882;
} else {
 lean_dec_ref(x_882);
 x_938 = lean_box(0);
}
if (lean_is_scalar(x_938)) {
 x_939 = lean_alloc_ctor(1, 2, 0);
} else {
 x_939 = x_938;
}
lean_ctor_set(x_939, 0, x_936);
lean_ctor_set(x_939, 1, x_937);
return x_939;
}
}
else
{
lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; 
lean_dec(x_847);
lean_dec(x_844);
x_940 = lean_ctor_get(x_874, 0);
lean_inc(x_940);
x_941 = lean_ctor_get(x_874, 1);
lean_inc(x_941);
lean_dec(x_874);
x_942 = lean_ctor_get(x_940, 0);
lean_inc(x_942);
lean_dec(x_940);
x_943 = l_CancelDenoms_cancelDenominatorsInType___closed__4;
lean_inc(x_849);
x_944 = l_Lean_Expr_const___override(x_943, x_849);
lean_inc(x_845);
x_945 = l_Lean_Expr_app___override(x_944, x_845);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_946 = l_Qq_synthInstanceQ___rarg(x_945, x_2, x_3, x_4, x_5, x_941);
if (lean_obj_tag(x_946) == 0)
{
lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; 
x_947 = lean_ctor_get(x_946, 0);
lean_inc(x_947);
x_948 = lean_ctor_get(x_946, 1);
lean_inc(x_948);
lean_dec(x_946);
x_949 = l_CancelDenoms_cancelDenominatorsInType___closed__5;
lean_inc(x_849);
x_950 = l_Lean_Expr_const___override(x_949, x_849);
lean_inc(x_845);
x_951 = l_Lean_Expr_app___override(x_950, x_845);
x_952 = l_CancelDenoms_cancelDenominatorsInType___closed__8;
lean_inc(x_849);
x_953 = l_Lean_Expr_const___override(x_952, x_849);
lean_inc(x_845);
x_954 = l_Lean_Expr_app___override(x_953, x_845);
x_955 = l_CancelDenoms_cancelDenominatorsInType___closed__11;
lean_inc(x_849);
x_956 = l_Lean_Expr_const___override(x_955, x_849);
lean_inc(x_845);
x_957 = l_Lean_Expr_app___override(x_956, x_845);
x_958 = l_CancelDenoms_cancelDenominatorsInType___closed__14;
lean_inc(x_849);
x_959 = l_Lean_Expr_const___override(x_958, x_849);
lean_inc(x_845);
x_960 = l_Lean_Expr_app___override(x_959, x_845);
x_961 = l_CancelDenoms_cancelDenominatorsInType___closed__17;
lean_inc(x_849);
x_962 = l_Lean_Expr_const___override(x_961, x_849);
lean_inc(x_845);
x_963 = l_Lean_Expr_app___override(x_962, x_845);
x_964 = l_CancelDenoms_cancelDenominatorsInType___closed__20;
lean_inc(x_849);
x_965 = l_Lean_Expr_const___override(x_964, x_849);
lean_inc(x_845);
x_966 = l_Lean_Expr_app___override(x_965, x_845);
x_967 = l_CancelDenoms_cancelDenominatorsInType___closed__23;
lean_inc(x_849);
x_968 = l_Lean_Expr_const___override(x_967, x_849);
lean_inc(x_845);
x_969 = l_Lean_Expr_app___override(x_968, x_845);
x_970 = l_CancelDenoms_cancelDenominatorsInType___closed__25;
lean_inc(x_849);
x_971 = l_Lean_Expr_const___override(x_970, x_849);
lean_inc(x_845);
x_972 = l_Lean_Expr_app___override(x_971, x_845);
x_973 = l_Lean_Expr_app___override(x_972, x_947);
lean_inc(x_973);
x_974 = l_Lean_Expr_app___override(x_969, x_973);
x_975 = l_Lean_Expr_app___override(x_966, x_974);
x_976 = l_Lean_Expr_app___override(x_963, x_975);
x_977 = l_Lean_Expr_app___override(x_960, x_976);
x_978 = l_Lean_Expr_app___override(x_957, x_977);
x_979 = l_Lean_Expr_app___override(x_954, x_978);
x_980 = l_Lean_Expr_app___override(x_951, x_979);
x_981 = l_CancelDenoms_mkProdPrf___lambda__9___closed__35;
lean_inc(x_849);
x_982 = l_Lean_Expr_const___override(x_981, x_849);
lean_inc(x_845);
x_983 = l_Lean_Expr_app___override(x_982, x_845);
x_984 = l_CancelDenoms_mkProdPrf___lambda__9___closed__37;
x_985 = l_Lean_Expr_app___override(x_983, x_984);
x_986 = l_CancelDenoms_mkProdPrf___lambda__9___closed__40;
lean_inc(x_849);
x_987 = l_Lean_Expr_const___override(x_986, x_849);
lean_inc(x_845);
x_988 = l_Lean_Expr_app___override(x_987, x_845);
x_989 = l_CancelDenoms_mkProdPrf___lambda__9___closed__43;
lean_inc(x_849);
x_990 = l_Lean_Expr_const___override(x_989, x_849);
lean_inc(x_845);
x_991 = l_Lean_Expr_app___override(x_990, x_845);
x_992 = l_CancelDenoms_mkProdPrf___lambda__9___closed__45;
lean_inc(x_849);
x_993 = l_Lean_Expr_const___override(x_992, x_849);
lean_inc(x_845);
x_994 = l_Lean_Expr_app___override(x_993, x_845);
x_995 = l_CancelDenoms_mkProdPrf___lambda__9___closed__10;
lean_inc(x_849);
x_996 = l_Lean_Expr_const___override(x_995, x_849);
lean_inc(x_845);
x_997 = l_Lean_Expr_app___override(x_996, x_845);
x_998 = l_CancelDenoms_mkProdPrf___lambda__9___closed__13;
lean_inc(x_849);
x_999 = l_Lean_Expr_const___override(x_998, x_849);
lean_inc(x_845);
x_1000 = l_Lean_Expr_app___override(x_999, x_845);
x_1001 = l_CancelDenoms_mkProdPrf___lambda__9___closed__16;
lean_inc(x_849);
x_1002 = l_Lean_Expr_const___override(x_1001, x_849);
lean_inc(x_845);
x_1003 = l_Lean_Expr_app___override(x_1002, x_845);
x_1004 = l_CancelDenoms_mkProdPrf___lambda__9___closed__19;
lean_inc(x_849);
x_1005 = l_Lean_Expr_const___override(x_1004, x_849);
lean_inc(x_845);
x_1006 = l_Lean_Expr_app___override(x_1005, x_845);
x_1007 = l_CancelDenoms_cancelDenominatorsInType___closed__27;
lean_inc(x_849);
x_1008 = l_Lean_Expr_const___override(x_1007, x_849);
lean_inc(x_845);
x_1009 = l_Lean_Expr_app___override(x_1008, x_845);
x_1010 = l_CancelDenoms_cancelDenominatorsInType___closed__29;
x_1011 = l_Lean_Expr_const___override(x_1010, x_849);
x_1012 = l_Lean_Expr_app___override(x_1011, x_845);
x_1013 = l_Lean_Expr_app___override(x_1012, x_973);
x_1014 = l_Lean_Expr_app___override(x_1009, x_1013);
x_1015 = l_Lean_Expr_app___override(x_1006, x_1014);
x_1016 = l_Lean_Expr_app___override(x_1003, x_1015);
x_1017 = l_Lean_Expr_app___override(x_1000, x_1016);
x_1018 = l_Lean_Expr_app___override(x_997, x_1017);
x_1019 = l_Lean_Expr_app___override(x_994, x_1018);
x_1020 = l_Lean_Expr_app___override(x_991, x_1019);
x_1021 = l_Lean_Expr_app___override(x_988, x_1020);
x_1022 = l_Lean_Expr_app___override(x_985, x_1021);
x_1023 = l_Lean_Expr_app___override(x_980, x_1022);
lean_inc(x_1023);
x_1024 = l_Lean_Expr_app___override(x_1023, x_867);
lean_inc(x_1023);
x_1025 = l_Lean_Expr_app___override(x_1023, x_872);
x_1026 = l_Lean_Expr_app___override(x_1023, x_942);
if (lean_is_scalar(x_861)) {
 x_1027 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1027 = x_861;
}
lean_ctor_set(x_1027, 0, x_1025);
lean_ctor_set(x_1027, 1, x_1026);
x_1028 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1028, 0, x_1024);
lean_ctor_set(x_1028, 1, x_1027);
x_1029 = l_CancelDenoms_cancelDenominatorsInType___lambda__1(x_848, x_860, x_838, x_18, x_1028, x_2, x_3, x_4, x_5, x_948);
return x_1029;
}
else
{
lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; 
lean_dec(x_942);
lean_dec(x_872);
lean_dec(x_867);
lean_dec(x_861);
lean_dec(x_860);
lean_dec(x_849);
lean_dec(x_845);
lean_dec(x_838);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1030 = lean_ctor_get(x_946, 0);
lean_inc(x_1030);
x_1031 = lean_ctor_get(x_946, 1);
lean_inc(x_1031);
if (lean_is_exclusive(x_946)) {
 lean_ctor_release(x_946, 0);
 lean_ctor_release(x_946, 1);
 x_1032 = x_946;
} else {
 lean_dec_ref(x_946);
 x_1032 = lean_box(0);
}
if (lean_is_scalar(x_1032)) {
 x_1033 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1033 = x_1032;
}
lean_ctor_set(x_1033, 0, x_1030);
lean_ctor_set(x_1033, 1, x_1031);
return x_1033;
}
}
}
else
{
lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; 
lean_dec(x_872);
lean_dec(x_867);
lean_dec(x_861);
lean_dec(x_860);
lean_dec(x_849);
lean_dec(x_847);
lean_dec(x_845);
lean_dec(x_844);
lean_dec(x_838);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1034 = lean_ctor_get(x_874, 0);
lean_inc(x_1034);
x_1035 = lean_ctor_get(x_874, 1);
lean_inc(x_1035);
if (lean_is_exclusive(x_874)) {
 lean_ctor_release(x_874, 0);
 lean_ctor_release(x_874, 1);
 x_1036 = x_874;
} else {
 lean_dec_ref(x_874);
 x_1036 = lean_box(0);
}
if (lean_is_scalar(x_1036)) {
 x_1037 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1037 = x_1036;
}
lean_ctor_set(x_1037, 0, x_1034);
lean_ctor_set(x_1037, 1, x_1035);
return x_1037;
}
}
else
{
lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; 
lean_dec(x_867);
lean_dec(x_862);
lean_dec(x_861);
lean_dec(x_860);
lean_dec(x_854);
lean_dec(x_849);
lean_dec(x_847);
lean_dec(x_845);
lean_dec(x_844);
lean_dec(x_843);
lean_dec(x_838);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1038 = lean_ctor_get(x_869, 0);
lean_inc(x_1038);
x_1039 = lean_ctor_get(x_869, 1);
lean_inc(x_1039);
if (lean_is_exclusive(x_869)) {
 lean_ctor_release(x_869, 0);
 lean_ctor_release(x_869, 1);
 x_1040 = x_869;
} else {
 lean_dec_ref(x_869);
 x_1040 = lean_box(0);
}
if (lean_is_scalar(x_1040)) {
 x_1041 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1041 = x_1040;
}
lean_ctor_set(x_1041, 0, x_1038);
lean_ctor_set(x_1041, 1, x_1039);
return x_1041;
}
}
else
{
lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; 
lean_dec(x_862);
lean_dec(x_861);
lean_dec(x_860);
lean_dec(x_859);
lean_dec(x_854);
lean_dec(x_849);
lean_dec(x_847);
lean_dec(x_845);
lean_dec(x_844);
lean_dec(x_843);
lean_dec(x_838);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1042 = lean_ctor_get(x_864, 0);
lean_inc(x_1042);
x_1043 = lean_ctor_get(x_864, 1);
lean_inc(x_1043);
if (lean_is_exclusive(x_864)) {
 lean_ctor_release(x_864, 0);
 lean_ctor_release(x_864, 1);
 x_1044 = x_864;
} else {
 lean_dec_ref(x_864);
 x_1044 = lean_box(0);
}
if (lean_is_scalar(x_1044)) {
 x_1045 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1045 = x_1044;
}
lean_ctor_set(x_1045, 0, x_1042);
lean_ctor_set(x_1045, 1, x_1043);
return x_1045;
}
}
else
{
lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; 
lean_dec(x_854);
lean_dec(x_849);
lean_dec(x_847);
lean_dec(x_845);
lean_dec(x_844);
lean_dec(x_843);
lean_dec(x_838);
lean_dec(x_837);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1046 = lean_ctor_get(x_856, 0);
lean_inc(x_1046);
x_1047 = lean_ctor_get(x_856, 1);
lean_inc(x_1047);
if (lean_is_exclusive(x_856)) {
 lean_ctor_release(x_856, 0);
 lean_ctor_release(x_856, 1);
 x_1048 = x_856;
} else {
 lean_dec_ref(x_856);
 x_1048 = lean_box(0);
}
if (lean_is_scalar(x_1048)) {
 x_1049 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1049 = x_1048;
}
lean_ctor_set(x_1049, 0, x_1046);
lean_ctor_set(x_1049, 1, x_1047);
return x_1049;
}
}
else
{
lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; 
lean_dec(x_849);
lean_dec(x_847);
lean_dec(x_845);
lean_dec(x_844);
lean_dec(x_843);
lean_dec(x_838);
lean_dec(x_837);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1050 = lean_ctor_get(x_853, 0);
lean_inc(x_1050);
x_1051 = lean_ctor_get(x_853, 1);
lean_inc(x_1051);
if (lean_is_exclusive(x_853)) {
 lean_ctor_release(x_853, 0);
 lean_ctor_release(x_853, 1);
 x_1052 = x_853;
} else {
 lean_dec_ref(x_853);
 x_1052 = lean_box(0);
}
if (lean_is_scalar(x_1052)) {
 x_1053 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1053 = x_1052;
}
lean_ctor_set(x_1053, 0, x_1050);
lean_ctor_set(x_1053, 1, x_1051);
return x_1053;
}
}
else
{
lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; 
lean_dec(x_838);
lean_dec(x_837);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1054 = lean_ctor_get(x_839, 0);
lean_inc(x_1054);
x_1055 = lean_ctor_get(x_839, 1);
lean_inc(x_1055);
if (lean_is_exclusive(x_839)) {
 lean_ctor_release(x_839, 0);
 lean_ctor_release(x_839, 1);
 x_1056 = x_839;
} else {
 lean_dec_ref(x_839);
 x_1056 = lean_box(0);
}
if (lean_is_scalar(x_1056)) {
 x_1057 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1057 = x_1056;
}
lean_ctor_set(x_1057, 0, x_1054);
lean_ctor_set(x_1057, 1, x_1055);
return x_1057;
}
}
}
else
{
uint8_t x_1058; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1058 = !lean_is_exclusive(x_20);
if (x_1058 == 0)
{
return x_20;
}
else
{
lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; 
x_1059 = lean_ctor_get(x_20, 0);
x_1060 = lean_ctor_get(x_20, 1);
lean_inc(x_1060);
lean_inc(x_1059);
lean_dec(x_20);
x_1061 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1061, 0, x_1059);
lean_ctor_set(x_1061, 1, x_1060);
return x_1061;
}
}
}
}
else
{
uint8_t x_1062; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1062 = !lean_is_exclusive(x_7);
if (x_1062 == 0)
{
return x_7;
}
else
{
lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; 
x_1063 = lean_ctor_get(x_7, 0);
x_1064 = lean_ctor_get(x_7, 1);
lean_inc(x_1064);
lean_inc(x_1063);
lean_dec(x_7);
x_1065 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1065, 0, x_1063);
lean_ctor_set(x_1065, 1, x_1064);
return x_1065;
}
}
}
}
static lean_object* _init_l_cancelDenoms___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancelDenoms", 12, 12);
return x_1;
}
}
static lean_object* _init_l_cancelDenoms___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_cancelDenoms___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_cancelDenoms___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_cancelDenoms___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_cancelDenoms___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_cancelDenoms___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancel_denoms", 13, 13);
return x_1;
}
}
static lean_object* _init_l_cancelDenoms___closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_cancelDenoms___closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_cancelDenoms___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optional", 8, 8);
return x_1;
}
}
static lean_object* _init_l_cancelDenoms___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_cancelDenoms___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_cancelDenoms___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_cancelDenoms___closed__8;
x_2 = l_Lean_Parser_Tactic_location;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_cancelDenoms___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_cancelDenoms___closed__4;
x_2 = l_cancelDenoms___closed__6;
x_3 = l_cancelDenoms___closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_cancelDenoms___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_cancelDenoms___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_cancelDenoms___closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_cancelDenoms() {
_start:
{
lean_object* x_1; 
x_1 = l_cancelDenoms___closed__11;
return x_1;
}
}
LEAN_EXPORT lean_object* l_cancelDenominatorsAt___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Tactic_Replace_0__Lean_Meta_replaceLocalDeclCore(x_4, x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
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
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
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
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_cancelDenominatorsAt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_6);
lean_inc(x_1);
x_11 = l_Lean_FVarId_getDecl(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_LocalDecl_type(x_12);
lean_dec(x_12);
x_15 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_18 = l_CancelDenoms_cancelDenominatorsInType(x_16, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_closure((void*)(l_cancelDenominatorsAt___lambda__1), 9, 3);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_21);
lean_closure_set(x_23, 2, x_22);
x_24 = l_Lean_Elab_Tactic_liftMetaTactic_x27(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
return x_11;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_11, 0);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_cancelDenominatorsTarget___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_MVarId_replaceTargetEq(x_3, x_1, x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_cancelDenominatorsTarget(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_getMainTarget(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_CancelDenoms_cancelDenominatorsInType(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_closure((void*)(l_cancelDenominatorsTarget___lambda__1), 8, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_Tactic_liftMetaTactic_x27(x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
static lean_object* _init_l_cancelDenominators___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to cancel any denominators", 33, 33);
return x_1;
}
}
static lean_object* _init_l_cancelDenominators___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_cancelDenominators___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_cancelDenominators___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_cancelDenominators___lambda__1___closed__2;
x_12 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
static lean_object* _init_l_cancelDenominators___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_cancelDenominatorsAt), 10, 0);
return x_1;
}
}
static lean_object* _init_l_cancelDenominators___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_cancelDenominatorsTarget), 9, 0);
return x_1;
}
}
static lean_object* _init_l_cancelDenominators___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_cancelDenominators___lambda__1___boxed), 10, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_cancelDenominators(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_cancelDenominators___closed__1;
x_12 = l_cancelDenominators___closed__2;
x_13 = l_cancelDenominators___closed__3;
x_14 = l_Lean_Elab_Tactic_withLocation(x_1, x_11, x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_cancelDenominators___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_cancelDenominators___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_cancelDenominators___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_cancelDenominators(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l_tacticCancel__denoms_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticCancel_denoms_", 20, 20);
return x_1;
}
}
static lean_object* _init_l_tacticCancel__denoms_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticCancel__denoms_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticCancel__denoms_____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticCancel__denoms_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_cancelDenoms___closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticCancel__denoms__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticCancel__denoms_____closed__3;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticTry_", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__4;
x_2 = l_CancelDenoms_synthesizeUsingNormNum___closed__5;
x_3 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_4 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("try", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__4;
x_2 = l_CancelDenoms_synthesizeUsingNormNum___closed__5;
x_3 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_4 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__4;
x_2 = l_CancelDenoms_synthesizeUsingNormNum___closed__5;
x_3 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_4 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__6;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simpArgs", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__4;
x_2 = l_CancelDenoms_synthesizeUsingNormNum___closed__5;
x_3 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_4 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__8;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simpLemma", 9, 9);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__4;
x_2 = l_CancelDenoms_synthesizeUsingNormNum___closed__5;
x_3 = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9;
x_4 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__11;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("patternIgnore", 13, 13);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("token", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("← ", 4, 2);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__15;
x_2 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__16;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("←", 3, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mul_assoc", 9, 9);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__19;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__19;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__22;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CancelDenoms_synthesizeUsingNormNum___closed__10;
x_2 = l_Array_append___rarg(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_156; uint8_t x_157; 
x_156 = l_tacticCancel__denoms_____closed__2;
lean_inc(x_1);
x_157 = l_Lean_Syntax_isOfKind(x_1, x_156);
if (x_157 == 0)
{
lean_object* x_158; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_158 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__PermuteGoals______elabRules__Batteries__Tactic__tacticPick__goal_x2d____1___spec__1___rarg(x_10);
return x_158;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_unsigned_to_nat(1u);
x_160 = l_Lean_Syntax_getArg(x_1, x_159);
lean_dec(x_1);
x_161 = l_Lean_Syntax_getOptional_x3f(x_160);
lean_dec(x_160);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; 
x_162 = lean_box(0);
x_11 = x_162;
goto block_155;
}
else
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_161);
if (x_163 == 0)
{
x_11 = x_161;
goto block_155;
}
else
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_161, 0);
lean_inc(x_164);
lean_dec(x_161);
x_165 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_165, 0, x_164);
x_11 = x_165;
goto block_155;
}
}
}
block_155:
{
lean_object* x_12; 
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_152; 
x_152 = lean_box(0);
x_12 = x_152;
goto block_151;
}
else
{
lean_object* x_153; lean_object* x_154; 
x_153 = lean_ctor_get(x_11, 0);
lean_inc(x_153);
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_153);
x_12 = x_154;
goto block_151;
}
block_151:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_mkOptionalNode(x_12);
lean_dec(x_12);
x_14 = l_Lean_Elab_Tactic_expandOptLocation(x_13);
lean_dec(x_13);
x_15 = l_cancelDenominators___closed__1;
x_16 = l_cancelDenominators___closed__2;
x_17 = l_cancelDenominators___closed__3;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_18 = l_Lean_Elab_Tactic_withLocation(x_14, x_15, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_8, 5);
lean_inc(x_20);
x_21 = 0;
x_22 = l_Lean_SourceInfo_fromRef(x_20, x_21);
lean_dec(x_20);
x_23 = lean_ctor_get(x_8, 10);
lean_inc(x_23);
x_24 = lean_st_ref_get(x_9, x_19);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Environment_mainModule(x_28);
lean_dec(x_28);
x_30 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__3;
lean_inc(x_22);
lean_ctor_set_tag(x_24, 2);
lean_ctor_set(x_24, 1, x_30);
lean_ctor_set(x_24, 0, x_22);
x_31 = l_CancelDenoms_synthesizeUsingNormNum___closed__3;
lean_inc(x_22);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_CancelDenoms_synthesizeUsingNormNum___closed__9;
x_34 = l_CancelDenoms_synthesizeUsingNormNum___closed__10;
lean_inc(x_22);
x_35 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_34);
x_36 = l_CancelDenoms_synthesizeUsingNormNum___closed__7;
lean_inc(x_35);
lean_inc(x_22);
x_37 = l_Lean_Syntax_node1(x_22, x_36, x_35);
x_38 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__10;
lean_inc(x_22);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_38);
x_40 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__18;
lean_inc(x_22);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_22);
lean_ctor_set(x_41, 1, x_40);
x_42 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__17;
lean_inc(x_22);
x_43 = l_Lean_Syntax_node1(x_22, x_42, x_41);
x_44 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__14;
lean_inc(x_22);
x_45 = l_Lean_Syntax_node1(x_22, x_44, x_43);
lean_inc(x_22);
x_46 = l_Lean_Syntax_node1(x_22, x_33, x_45);
x_47 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21;
x_48 = l_Lean_addMacroScope(x_29, x_47, x_23);
x_49 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__20;
x_50 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__23;
lean_inc(x_22);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_22);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_50);
x_52 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__12;
lean_inc(x_35);
lean_inc(x_22);
x_53 = l_Lean_Syntax_node3(x_22, x_52, x_35, x_46, x_51);
lean_inc(x_22);
x_54 = l_Lean_Syntax_node1(x_22, x_33, x_53);
x_55 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__24;
lean_inc(x_22);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_22);
lean_ctor_set(x_56, 1, x_55);
x_57 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__9;
lean_inc(x_22);
x_58 = l_Lean_Syntax_node3(x_22, x_57, x_39, x_54, x_56);
lean_inc(x_22);
x_59 = l_Lean_Syntax_node1(x_22, x_33, x_58);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_60 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__25;
lean_inc(x_22);
x_61 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_61, 0, x_22);
lean_ctor_set(x_61, 1, x_33);
lean_ctor_set(x_61, 2, x_60);
x_62 = l_CancelDenoms_synthesizeUsingNormNum___closed__2;
lean_inc(x_22);
x_63 = l_Lean_Syntax_node5(x_22, x_62, x_32, x_37, x_35, x_59, x_61);
lean_inc(x_22);
x_64 = l_Lean_Syntax_node1(x_22, x_33, x_63);
x_65 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7;
lean_inc(x_22);
x_66 = l_Lean_Syntax_node1(x_22, x_65, x_64);
x_67 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5;
lean_inc(x_22);
x_68 = l_Lean_Syntax_node1(x_22, x_67, x_66);
x_69 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2;
x_70 = l_Lean_Syntax_node2(x_22, x_69, x_24, x_68);
x_71 = l_Lean_Elab_Tactic_evalTactic(x_70, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_27);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_72 = lean_ctor_get(x_11, 0);
lean_inc(x_72);
lean_dec(x_11);
x_73 = l_Array_mkArray1___rarg(x_72);
x_74 = l_Array_append___rarg(x_34, x_73);
lean_dec(x_73);
lean_inc(x_22);
x_75 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_75, 0, x_22);
lean_ctor_set(x_75, 1, x_33);
lean_ctor_set(x_75, 2, x_74);
x_76 = l_CancelDenoms_synthesizeUsingNormNum___closed__2;
lean_inc(x_22);
x_77 = l_Lean_Syntax_node5(x_22, x_76, x_32, x_37, x_35, x_59, x_75);
lean_inc(x_22);
x_78 = l_Lean_Syntax_node1(x_22, x_33, x_77);
x_79 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7;
lean_inc(x_22);
x_80 = l_Lean_Syntax_node1(x_22, x_79, x_78);
x_81 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5;
lean_inc(x_22);
x_82 = l_Lean_Syntax_node1(x_22, x_81, x_80);
x_83 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2;
x_84 = l_Lean_Syntax_node2(x_22, x_83, x_24, x_82);
x_85 = l_Lean_Elab_Tactic_evalTactic(x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_27);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_86 = lean_ctor_get(x_24, 0);
x_87 = lean_ctor_get(x_24, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_24);
x_88 = lean_ctor_get(x_86, 0);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_Environment_mainModule(x_88);
lean_dec(x_88);
x_90 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__3;
lean_inc(x_22);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_22);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_CancelDenoms_synthesizeUsingNormNum___closed__3;
lean_inc(x_22);
x_93 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_93, 0, x_22);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_CancelDenoms_synthesizeUsingNormNum___closed__9;
x_95 = l_CancelDenoms_synthesizeUsingNormNum___closed__10;
lean_inc(x_22);
x_96 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_96, 0, x_22);
lean_ctor_set(x_96, 1, x_94);
lean_ctor_set(x_96, 2, x_95);
x_97 = l_CancelDenoms_synthesizeUsingNormNum___closed__7;
lean_inc(x_96);
lean_inc(x_22);
x_98 = l_Lean_Syntax_node1(x_22, x_97, x_96);
x_99 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__10;
lean_inc(x_22);
x_100 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_100, 0, x_22);
lean_ctor_set(x_100, 1, x_99);
x_101 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__18;
lean_inc(x_22);
x_102 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_102, 0, x_22);
lean_ctor_set(x_102, 1, x_101);
x_103 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__17;
lean_inc(x_22);
x_104 = l_Lean_Syntax_node1(x_22, x_103, x_102);
x_105 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__14;
lean_inc(x_22);
x_106 = l_Lean_Syntax_node1(x_22, x_105, x_104);
lean_inc(x_22);
x_107 = l_Lean_Syntax_node1(x_22, x_94, x_106);
x_108 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21;
x_109 = l_Lean_addMacroScope(x_89, x_108, x_23);
x_110 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__20;
x_111 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__23;
lean_inc(x_22);
x_112 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_112, 0, x_22);
lean_ctor_set(x_112, 1, x_110);
lean_ctor_set(x_112, 2, x_109);
lean_ctor_set(x_112, 3, x_111);
x_113 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__12;
lean_inc(x_96);
lean_inc(x_22);
x_114 = l_Lean_Syntax_node3(x_22, x_113, x_96, x_107, x_112);
lean_inc(x_22);
x_115 = l_Lean_Syntax_node1(x_22, x_94, x_114);
x_116 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__24;
lean_inc(x_22);
x_117 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_117, 0, x_22);
lean_ctor_set(x_117, 1, x_116);
x_118 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__9;
lean_inc(x_22);
x_119 = l_Lean_Syntax_node3(x_22, x_118, x_100, x_115, x_117);
lean_inc(x_22);
x_120 = l_Lean_Syntax_node1(x_22, x_94, x_119);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_121 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__25;
lean_inc(x_22);
x_122 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_122, 0, x_22);
lean_ctor_set(x_122, 1, x_94);
lean_ctor_set(x_122, 2, x_121);
x_123 = l_CancelDenoms_synthesizeUsingNormNum___closed__2;
lean_inc(x_22);
x_124 = l_Lean_Syntax_node5(x_22, x_123, x_93, x_98, x_96, x_120, x_122);
lean_inc(x_22);
x_125 = l_Lean_Syntax_node1(x_22, x_94, x_124);
x_126 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7;
lean_inc(x_22);
x_127 = l_Lean_Syntax_node1(x_22, x_126, x_125);
x_128 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5;
lean_inc(x_22);
x_129 = l_Lean_Syntax_node1(x_22, x_128, x_127);
x_130 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2;
x_131 = l_Lean_Syntax_node2(x_22, x_130, x_91, x_129);
x_132 = l_Lean_Elab_Tactic_evalTactic(x_131, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_87);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_133 = lean_ctor_get(x_11, 0);
lean_inc(x_133);
lean_dec(x_11);
x_134 = l_Array_mkArray1___rarg(x_133);
x_135 = l_Array_append___rarg(x_95, x_134);
lean_dec(x_134);
lean_inc(x_22);
x_136 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_136, 0, x_22);
lean_ctor_set(x_136, 1, x_94);
lean_ctor_set(x_136, 2, x_135);
x_137 = l_CancelDenoms_synthesizeUsingNormNum___closed__2;
lean_inc(x_22);
x_138 = l_Lean_Syntax_node5(x_22, x_137, x_93, x_98, x_96, x_120, x_136);
lean_inc(x_22);
x_139 = l_Lean_Syntax_node1(x_22, x_94, x_138);
x_140 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7;
lean_inc(x_22);
x_141 = l_Lean_Syntax_node1(x_22, x_140, x_139);
x_142 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5;
lean_inc(x_22);
x_143 = l_Lean_Syntax_node1(x_22, x_142, x_141);
x_144 = l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2;
x_145 = l_Lean_Syntax_node2(x_22, x_144, x_91, x_143);
x_146 = l_Lean_Elab_Tactic_evalTactic(x_145, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_87);
return x_146;
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_147 = !lean_is_exclusive(x_18);
if (x_147 == 0)
{
return x_18;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_18, 0);
x_149 = lean_ctor_get(x_18, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_18);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Tree_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum_Core(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_SynthesizeUsing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_Qq(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_CancelDenoms_Core(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Tree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum_Core(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_SynthesizeUsing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_Qq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__1);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__2);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__3 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__3();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__3);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__4 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__4();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__4);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__5 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__5();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__5);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__6 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__6();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__6);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__7 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__7();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__7);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__8 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__8();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__8);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__9);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__10 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__10();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__10);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__11 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__11();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__11);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__12 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__12();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__12);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__13 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__13();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__13);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__14 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__14();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__14);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__15 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__15();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__15);
l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__16 = _init_l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__16();
lean_mark_persistent(l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4____closed__16);
res = l_initFn____x40_Mathlib_Tactic_CancelDenoms_Core___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CancelDenoms_findCancelFactor___closed__1 = _init_l_CancelDenoms_findCancelFactor___closed__1();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__1);
l_CancelDenoms_findCancelFactor___closed__2 = _init_l_CancelDenoms_findCancelFactor___closed__2();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__2);
l_CancelDenoms_findCancelFactor___closed__3 = _init_l_CancelDenoms_findCancelFactor___closed__3();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__3);
l_CancelDenoms_findCancelFactor___closed__4 = _init_l_CancelDenoms_findCancelFactor___closed__4();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__4);
l_CancelDenoms_findCancelFactor___closed__5 = _init_l_CancelDenoms_findCancelFactor___closed__5();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__5);
l_CancelDenoms_findCancelFactor___closed__6 = _init_l_CancelDenoms_findCancelFactor___closed__6();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__6);
l_CancelDenoms_findCancelFactor___closed__7 = _init_l_CancelDenoms_findCancelFactor___closed__7();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__7);
l_CancelDenoms_findCancelFactor___closed__8 = _init_l_CancelDenoms_findCancelFactor___closed__8();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__8);
l_CancelDenoms_findCancelFactor___closed__9 = _init_l_CancelDenoms_findCancelFactor___closed__9();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__9);
l_CancelDenoms_findCancelFactor___closed__10 = _init_l_CancelDenoms_findCancelFactor___closed__10();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__10);
l_CancelDenoms_findCancelFactor___closed__11 = _init_l_CancelDenoms_findCancelFactor___closed__11();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__11);
l_CancelDenoms_findCancelFactor___closed__12 = _init_l_CancelDenoms_findCancelFactor___closed__12();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__12);
l_CancelDenoms_findCancelFactor___closed__13 = _init_l_CancelDenoms_findCancelFactor___closed__13();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__13);
l_CancelDenoms_findCancelFactor___closed__14 = _init_l_CancelDenoms_findCancelFactor___closed__14();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__14);
l_CancelDenoms_findCancelFactor___closed__15 = _init_l_CancelDenoms_findCancelFactor___closed__15();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__15);
l_CancelDenoms_findCancelFactor___closed__16 = _init_l_CancelDenoms_findCancelFactor___closed__16();
lean_mark_persistent(l_CancelDenoms_findCancelFactor___closed__16);
l_CancelDenoms_synthesizeUsingNormNum___closed__1 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__1();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__1);
l_CancelDenoms_synthesizeUsingNormNum___closed__2 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__2();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__2);
l_CancelDenoms_synthesizeUsingNormNum___closed__3 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__3();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__3);
l_CancelDenoms_synthesizeUsingNormNum___closed__4 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__4();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__4);
l_CancelDenoms_synthesizeUsingNormNum___closed__5 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__5();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__5);
l_CancelDenoms_synthesizeUsingNormNum___closed__6 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__6();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__6);
l_CancelDenoms_synthesizeUsingNormNum___closed__7 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__7();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__7);
l_CancelDenoms_synthesizeUsingNormNum___closed__8 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__8();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__8);
l_CancelDenoms_synthesizeUsingNormNum___closed__9 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__9();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__9);
l_CancelDenoms_synthesizeUsingNormNum___closed__10 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__10();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__10);
l_CancelDenoms_synthesizeUsingNormNum___closed__11 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__11();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__11);
l_CancelDenoms_synthesizeUsingNormNum___closed__12 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__12();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__12);
l_CancelDenoms_synthesizeUsingNormNum___closed__13 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__13();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__13);
l_CancelDenoms_synthesizeUsingNormNum___closed__14 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__14();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__14);
l_CancelDenoms_synthesizeUsingNormNum___closed__15 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__15();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__15);
l_CancelDenoms_synthesizeUsingNormNum___closed__16 = _init_l_CancelDenoms_synthesizeUsingNormNum___closed__16();
lean_mark_persistent(l_CancelDenoms_synthesizeUsingNormNum___closed__16);
l_CancelDenoms_mkProdPrf___lambda__1___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__1);
l_CancelDenoms_mkProdPrf___lambda__1___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__2);
l_CancelDenoms_mkProdPrf___lambda__1___closed__3 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__3);
l_CancelDenoms_mkProdPrf___lambda__1___closed__4 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__4);
l_CancelDenoms_mkProdPrf___lambda__1___closed__5 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__5);
l_CancelDenoms_mkProdPrf___lambda__1___closed__6 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__6);
l_CancelDenoms_mkProdPrf___lambda__1___closed__7 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__7();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__7);
l_CancelDenoms_mkProdPrf___lambda__1___closed__8 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__8();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__8);
l_CancelDenoms_mkProdPrf___lambda__1___closed__9 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__9();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__9);
l_CancelDenoms_mkProdPrf___lambda__1___closed__10 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__10();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__10);
l_CancelDenoms_mkProdPrf___lambda__1___closed__11 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__11();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__11);
l_CancelDenoms_mkProdPrf___lambda__1___closed__12 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__12();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__12);
l_CancelDenoms_mkProdPrf___lambda__1___closed__13 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__13();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__13);
l_CancelDenoms_mkProdPrf___lambda__1___closed__14 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__14();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__14);
l_CancelDenoms_mkProdPrf___lambda__1___closed__15 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__15();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__15);
l_CancelDenoms_mkProdPrf___lambda__1___closed__16 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__16();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__16);
l_CancelDenoms_mkProdPrf___lambda__1___closed__17 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__17();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__17);
l_CancelDenoms_mkProdPrf___lambda__1___closed__18 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__18();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__18);
l_CancelDenoms_mkProdPrf___lambda__1___closed__19 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__19();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__1___closed__19);
l_CancelDenoms_mkProdPrf___lambda__1___closed__20 = _init_l_CancelDenoms_mkProdPrf___lambda__1___closed__20();
l_CancelDenoms_mkProdPrf___lambda__2___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__2___closed__1);
l_CancelDenoms_mkProdPrf___lambda__2___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__2___closed__2);
l_CancelDenoms_mkProdPrf___lambda__2___closed__3 = _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__2___closed__3);
l_CancelDenoms_mkProdPrf___lambda__2___closed__4 = _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__2___closed__4);
l_CancelDenoms_mkProdPrf___lambda__2___closed__5 = _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__2___closed__5);
l_CancelDenoms_mkProdPrf___lambda__2___closed__6 = _init_l_CancelDenoms_mkProdPrf___lambda__2___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__2___closed__6);
l_CancelDenoms_mkProdPrf___lambda__3___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__1);
l_CancelDenoms_mkProdPrf___lambda__3___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__2);
l_CancelDenoms_mkProdPrf___lambda__3___closed__3 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__3);
l_CancelDenoms_mkProdPrf___lambda__3___closed__4 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__4);
l_CancelDenoms_mkProdPrf___lambda__3___closed__5 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__5);
l_CancelDenoms_mkProdPrf___lambda__3___closed__6 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__6);
l_CancelDenoms_mkProdPrf___lambda__3___closed__7 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__7();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__7);
l_CancelDenoms_mkProdPrf___lambda__3___closed__8 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__8();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__8);
l_CancelDenoms_mkProdPrf___lambda__3___closed__9 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__9();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__9);
l_CancelDenoms_mkProdPrf___lambda__3___closed__10 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__10();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__10);
l_CancelDenoms_mkProdPrf___lambda__3___closed__11 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__11();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__11);
l_CancelDenoms_mkProdPrf___lambda__3___closed__12 = _init_l_CancelDenoms_mkProdPrf___lambda__3___closed__12();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__3___closed__12);
l_CancelDenoms_mkProdPrf___lambda__4___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__1);
l_CancelDenoms_mkProdPrf___lambda__4___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__2);
l_CancelDenoms_mkProdPrf___lambda__4___closed__3 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__3);
l_CancelDenoms_mkProdPrf___lambda__4___closed__4 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__4);
l_CancelDenoms_mkProdPrf___lambda__4___closed__5 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__5);
l_CancelDenoms_mkProdPrf___lambda__4___closed__6 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__6);
l_CancelDenoms_mkProdPrf___lambda__4___closed__7 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__7();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__7);
l_CancelDenoms_mkProdPrf___lambda__4___closed__8 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__8();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__8);
l_CancelDenoms_mkProdPrf___lambda__4___closed__9 = _init_l_CancelDenoms_mkProdPrf___lambda__4___closed__9();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__4___closed__9);
l_CancelDenoms_mkProdPrf___lambda__5___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__1);
l_CancelDenoms_mkProdPrf___lambda__5___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__2);
l_CancelDenoms_mkProdPrf___lambda__5___closed__3 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__3);
l_CancelDenoms_mkProdPrf___lambda__5___closed__4 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__4);
l_CancelDenoms_mkProdPrf___lambda__5___closed__5 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__5);
l_CancelDenoms_mkProdPrf___lambda__5___closed__6 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__6);
l_CancelDenoms_mkProdPrf___lambda__5___closed__7 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__7();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__7);
l_CancelDenoms_mkProdPrf___lambda__5___closed__8 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__8();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__8);
l_CancelDenoms_mkProdPrf___lambda__5___closed__9 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__9();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__9);
l_CancelDenoms_mkProdPrf___lambda__5___closed__10 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__10();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__10);
l_CancelDenoms_mkProdPrf___lambda__5___closed__11 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__11();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__11);
l_CancelDenoms_mkProdPrf___lambda__5___closed__12 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__12();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__12);
l_CancelDenoms_mkProdPrf___lambda__5___closed__13 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__13();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__13);
l_CancelDenoms_mkProdPrf___lambda__5___closed__14 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__14();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__14);
l_CancelDenoms_mkProdPrf___lambda__5___closed__15 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__15();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__15);
l_CancelDenoms_mkProdPrf___lambda__5___closed__16 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__16();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__16);
l_CancelDenoms_mkProdPrf___lambda__5___closed__17 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__17();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__17);
l_CancelDenoms_mkProdPrf___lambda__5___closed__18 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__18();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__18);
l_CancelDenoms_mkProdPrf___lambda__5___closed__19 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__19();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__19);
l_CancelDenoms_mkProdPrf___lambda__5___closed__20 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__20();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__20);
l_CancelDenoms_mkProdPrf___lambda__5___closed__21 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__21();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__21);
l_CancelDenoms_mkProdPrf___lambda__5___closed__22 = _init_l_CancelDenoms_mkProdPrf___lambda__5___closed__22();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__5___closed__22);
l_CancelDenoms_mkProdPrf___lambda__7___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__1);
l_CancelDenoms_mkProdPrf___lambda__7___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__2);
l_CancelDenoms_mkProdPrf___lambda__7___closed__3 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__3);
l_CancelDenoms_mkProdPrf___lambda__7___closed__4 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__4);
l_CancelDenoms_mkProdPrf___lambda__7___closed__5 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__5);
l_CancelDenoms_mkProdPrf___lambda__7___closed__6 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__6);
l_CancelDenoms_mkProdPrf___lambda__7___closed__7 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__7();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__7);
l_CancelDenoms_mkProdPrf___lambda__7___closed__8 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__8();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__8);
l_CancelDenoms_mkProdPrf___lambda__7___closed__9 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__9();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__9);
l_CancelDenoms_mkProdPrf___lambda__7___closed__10 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__10();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__10);
l_CancelDenoms_mkProdPrf___lambda__7___closed__11 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__11();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__11);
l_CancelDenoms_mkProdPrf___lambda__7___closed__12 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__12();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__12);
l_CancelDenoms_mkProdPrf___lambda__7___closed__13 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__13();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__13);
l_CancelDenoms_mkProdPrf___lambda__7___closed__14 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__14();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__14);
l_CancelDenoms_mkProdPrf___lambda__7___closed__15 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__15();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__15);
l_CancelDenoms_mkProdPrf___lambda__7___closed__16 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__16();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__16);
l_CancelDenoms_mkProdPrf___lambda__7___closed__17 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__17();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__17);
l_CancelDenoms_mkProdPrf___lambda__7___closed__18 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__18();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__18);
l_CancelDenoms_mkProdPrf___lambda__7___closed__19 = _init_l_CancelDenoms_mkProdPrf___lambda__7___closed__19();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__7___closed__19);
l_CancelDenoms_mkProdPrf___lambda__8___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__8___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__8___closed__1);
l_CancelDenoms_mkProdPrf___lambda__8___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__8___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__8___closed__2);
l_CancelDenoms_mkProdPrf___lambda__9___closed__1 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__1);
l_CancelDenoms_mkProdPrf___lambda__9___closed__2 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__2);
l_CancelDenoms_mkProdPrf___lambda__9___closed__3 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__3);
l_CancelDenoms_mkProdPrf___lambda__9___closed__4 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__4);
l_CancelDenoms_mkProdPrf___lambda__9___closed__5 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__5);
l_CancelDenoms_mkProdPrf___lambda__9___closed__6 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__6);
l_CancelDenoms_mkProdPrf___lambda__9___closed__7 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__7();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__7);
l_CancelDenoms_mkProdPrf___lambda__9___closed__8 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__8();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__8);
l_CancelDenoms_mkProdPrf___lambda__9___closed__9 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__9();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__9);
l_CancelDenoms_mkProdPrf___lambda__9___closed__10 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__10();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__10);
l_CancelDenoms_mkProdPrf___lambda__9___closed__11 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__11();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__11);
l_CancelDenoms_mkProdPrf___lambda__9___closed__12 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__12();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__12);
l_CancelDenoms_mkProdPrf___lambda__9___closed__13 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__13();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__13);
l_CancelDenoms_mkProdPrf___lambda__9___closed__14 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__14();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__14);
l_CancelDenoms_mkProdPrf___lambda__9___closed__15 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__15();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__15);
l_CancelDenoms_mkProdPrf___lambda__9___closed__16 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__16();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__16);
l_CancelDenoms_mkProdPrf___lambda__9___closed__17 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__17();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__17);
l_CancelDenoms_mkProdPrf___lambda__9___closed__18 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__18();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__18);
l_CancelDenoms_mkProdPrf___lambda__9___closed__19 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__19();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__19);
l_CancelDenoms_mkProdPrf___lambda__9___closed__20 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__20();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__20);
l_CancelDenoms_mkProdPrf___lambda__9___closed__21 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__21();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__21);
l_CancelDenoms_mkProdPrf___lambda__9___closed__22 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__22();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__22);
l_CancelDenoms_mkProdPrf___lambda__9___closed__23 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__23();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__23);
l_CancelDenoms_mkProdPrf___lambda__9___closed__24 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__24();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__24);
l_CancelDenoms_mkProdPrf___lambda__9___closed__25 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__25();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__25);
l_CancelDenoms_mkProdPrf___lambda__9___closed__26 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__26();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__26);
l_CancelDenoms_mkProdPrf___lambda__9___closed__27 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__27();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__27);
l_CancelDenoms_mkProdPrf___lambda__9___closed__28 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__28();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__28);
l_CancelDenoms_mkProdPrf___lambda__9___closed__29 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__29();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__29);
l_CancelDenoms_mkProdPrf___lambda__9___closed__30 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__30();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__30);
l_CancelDenoms_mkProdPrf___lambda__9___closed__31 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__31();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__31);
l_CancelDenoms_mkProdPrf___lambda__9___closed__32 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__32();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__32);
l_CancelDenoms_mkProdPrf___lambda__9___closed__33 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__33();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__33);
l_CancelDenoms_mkProdPrf___lambda__9___closed__34 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__34();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__34);
l_CancelDenoms_mkProdPrf___lambda__9___closed__35 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__35();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__35);
l_CancelDenoms_mkProdPrf___lambda__9___closed__36 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__36();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__36);
l_CancelDenoms_mkProdPrf___lambda__9___closed__37 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__37();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__37);
l_CancelDenoms_mkProdPrf___lambda__9___closed__38 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__38();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__38);
l_CancelDenoms_mkProdPrf___lambda__9___closed__39 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__39();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__39);
l_CancelDenoms_mkProdPrf___lambda__9___closed__40 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__40();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__40);
l_CancelDenoms_mkProdPrf___lambda__9___closed__41 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__41();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__41);
l_CancelDenoms_mkProdPrf___lambda__9___closed__42 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__42();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__42);
l_CancelDenoms_mkProdPrf___lambda__9___closed__43 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__43();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__43);
l_CancelDenoms_mkProdPrf___lambda__9___closed__44 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__44();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__44);
l_CancelDenoms_mkProdPrf___lambda__9___closed__45 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__45();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__45);
l_CancelDenoms_mkProdPrf___lambda__9___closed__46 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__46();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__46);
l_CancelDenoms_mkProdPrf___lambda__9___closed__47 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__47();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__47);
l_CancelDenoms_mkProdPrf___lambda__9___closed__48 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__48();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__48);
l_CancelDenoms_mkProdPrf___lambda__9___closed__49 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__49();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__49);
l_CancelDenoms_mkProdPrf___lambda__9___closed__50 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__50();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__50);
l_CancelDenoms_mkProdPrf___lambda__9___closed__51 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__51();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__51);
l_CancelDenoms_mkProdPrf___lambda__9___closed__52 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__52();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__52);
l_CancelDenoms_mkProdPrf___lambda__9___closed__53 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__53();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__53);
l_CancelDenoms_mkProdPrf___lambda__9___closed__54 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__54();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__54);
l_CancelDenoms_mkProdPrf___lambda__9___closed__55 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__55();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__55);
l_CancelDenoms_mkProdPrf___lambda__9___closed__56 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__56();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__56);
l_CancelDenoms_mkProdPrf___lambda__9___closed__57 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__57();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__57);
l_CancelDenoms_mkProdPrf___lambda__9___closed__58 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__58();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__58);
l_CancelDenoms_mkProdPrf___lambda__9___closed__59 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__59();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__59);
l_CancelDenoms_mkProdPrf___lambda__9___closed__60 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__60();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__60);
l_CancelDenoms_mkProdPrf___lambda__9___closed__61 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__61();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__61);
l_CancelDenoms_mkProdPrf___lambda__9___closed__62 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__62();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__62);
l_CancelDenoms_mkProdPrf___lambda__9___closed__63 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__63();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__63);
l_CancelDenoms_mkProdPrf___lambda__9___closed__64 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__64();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__64);
l_CancelDenoms_mkProdPrf___lambda__9___closed__65 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__65();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__65);
l_CancelDenoms_mkProdPrf___lambda__9___closed__66 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__66();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__66);
l_CancelDenoms_mkProdPrf___lambda__9___closed__67 = _init_l_CancelDenoms_mkProdPrf___lambda__9___closed__67();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___lambda__9___closed__67);
l_CancelDenoms_mkProdPrf___closed__1 = _init_l_CancelDenoms_mkProdPrf___closed__1();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__1);
l_CancelDenoms_mkProdPrf___closed__2 = _init_l_CancelDenoms_mkProdPrf___closed__2();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__2);
l_CancelDenoms_mkProdPrf___closed__3 = _init_l_CancelDenoms_mkProdPrf___closed__3();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__3);
l_CancelDenoms_mkProdPrf___closed__4 = _init_l_CancelDenoms_mkProdPrf___closed__4();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__4);
l_CancelDenoms_mkProdPrf___closed__5 = _init_l_CancelDenoms_mkProdPrf___closed__5();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__5);
l_CancelDenoms_mkProdPrf___closed__6 = _init_l_CancelDenoms_mkProdPrf___closed__6();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__6);
l_CancelDenoms_mkProdPrf___closed__7 = _init_l_CancelDenoms_mkProdPrf___closed__7();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__7);
l_CancelDenoms_mkProdPrf___closed__8 = _init_l_CancelDenoms_mkProdPrf___closed__8();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__8);
l_CancelDenoms_mkProdPrf___closed__9 = _init_l_CancelDenoms_mkProdPrf___closed__9();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__9);
l_CancelDenoms_mkProdPrf___closed__10 = _init_l_CancelDenoms_mkProdPrf___closed__10();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__10);
l_CancelDenoms_mkProdPrf___closed__11 = _init_l_CancelDenoms_mkProdPrf___closed__11();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__11);
l_CancelDenoms_mkProdPrf___closed__12 = _init_l_CancelDenoms_mkProdPrf___closed__12();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__12);
l_CancelDenoms_mkProdPrf___closed__13 = _init_l_CancelDenoms_mkProdPrf___closed__13();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__13);
l_CancelDenoms_mkProdPrf___closed__14 = _init_l_CancelDenoms_mkProdPrf___closed__14();
lean_mark_persistent(l_CancelDenoms_mkProdPrf___closed__14);
l_CancelDenoms_deriveThms___closed__1 = _init_l_CancelDenoms_deriveThms___closed__1();
lean_mark_persistent(l_CancelDenoms_deriveThms___closed__1);
l_CancelDenoms_deriveThms___closed__2 = _init_l_CancelDenoms_deriveThms___closed__2();
lean_mark_persistent(l_CancelDenoms_deriveThms___closed__2);
l_CancelDenoms_deriveThms___closed__3 = _init_l_CancelDenoms_deriveThms___closed__3();
lean_mark_persistent(l_CancelDenoms_deriveThms___closed__3);
l_CancelDenoms_deriveThms___closed__4 = _init_l_CancelDenoms_deriveThms___closed__4();
lean_mark_persistent(l_CancelDenoms_deriveThms___closed__4);
l_CancelDenoms_deriveThms___closed__5 = _init_l_CancelDenoms_deriveThms___closed__5();
lean_mark_persistent(l_CancelDenoms_deriveThms___closed__5);
l_CancelDenoms_deriveThms___closed__6 = _init_l_CancelDenoms_deriveThms___closed__6();
lean_mark_persistent(l_CancelDenoms_deriveThms___closed__6);
l_CancelDenoms_deriveThms = _init_l_CancelDenoms_deriveThms();
lean_mark_persistent(l_CancelDenoms_deriveThms);
l_CancelDenoms_derive___lambda__2___closed__1 = _init_l_CancelDenoms_derive___lambda__2___closed__1();
lean_mark_persistent(l_CancelDenoms_derive___lambda__2___closed__1);
l_CancelDenoms_derive___lambda__2___closed__2 = _init_l_CancelDenoms_derive___lambda__2___closed__2();
lean_mark_persistent(l_CancelDenoms_derive___lambda__2___closed__2);
l_CancelDenoms_derive___lambda__2___closed__3 = _init_l_CancelDenoms_derive___lambda__2___closed__3();
lean_mark_persistent(l_CancelDenoms_derive___lambda__2___closed__3);
l_CancelDenoms_derive___lambda__2___closed__4 = _init_l_CancelDenoms_derive___lambda__2___closed__4();
lean_mark_persistent(l_CancelDenoms_derive___lambda__2___closed__4);
l_CancelDenoms_derive___lambda__3___closed__1 = _init_l_CancelDenoms_derive___lambda__3___closed__1();
lean_mark_persistent(l_CancelDenoms_derive___lambda__3___closed__1);
l_CancelDenoms_derive___lambda__3___closed__2 = _init_l_CancelDenoms_derive___lambda__3___closed__2();
lean_mark_persistent(l_CancelDenoms_derive___lambda__3___closed__2);
l_CancelDenoms_derive___lambda__3___closed__3 = _init_l_CancelDenoms_derive___lambda__3___closed__3();
lean_mark_persistent(l_CancelDenoms_derive___lambda__3___closed__3);
l_CancelDenoms_derive___lambda__3___closed__4 = _init_l_CancelDenoms_derive___lambda__3___closed__4();
lean_mark_persistent(l_CancelDenoms_derive___lambda__3___closed__4);
l_CancelDenoms_derive___lambda__3___closed__5 = _init_l_CancelDenoms_derive___lambda__3___closed__5();
lean_mark_persistent(l_CancelDenoms_derive___lambda__3___closed__5);
l_CancelDenoms_derive___lambda__3___closed__6 = _init_l_CancelDenoms_derive___lambda__3___closed__6();
lean_mark_persistent(l_CancelDenoms_derive___lambda__3___closed__6);
l_CancelDenoms_derive___lambda__3___closed__7 = _init_l_CancelDenoms_derive___lambda__3___closed__7();
lean_mark_persistent(l_CancelDenoms_derive___lambda__3___closed__7);
l_CancelDenoms_derive___lambda__4___closed__1 = _init_l_CancelDenoms_derive___lambda__4___closed__1();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__1);
l_CancelDenoms_derive___lambda__4___closed__2 = _init_l_CancelDenoms_derive___lambda__4___closed__2();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__2);
l_CancelDenoms_derive___lambda__4___closed__3 = _init_l_CancelDenoms_derive___lambda__4___closed__3();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__3);
l_CancelDenoms_derive___lambda__4___closed__4 = _init_l_CancelDenoms_derive___lambda__4___closed__4();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__4);
l_CancelDenoms_derive___lambda__4___closed__5 = _init_l_CancelDenoms_derive___lambda__4___closed__5();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__5);
l_CancelDenoms_derive___lambda__4___closed__6 = _init_l_CancelDenoms_derive___lambda__4___closed__6();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__6);
l_CancelDenoms_derive___lambda__4___closed__7 = _init_l_CancelDenoms_derive___lambda__4___closed__7();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__7);
l_CancelDenoms_derive___lambda__4___closed__8 = _init_l_CancelDenoms_derive___lambda__4___closed__8();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__8);
l_CancelDenoms_derive___lambda__4___closed__9 = _init_l_CancelDenoms_derive___lambda__4___closed__9();
lean_mark_persistent(l_CancelDenoms_derive___lambda__4___closed__9);
l_CancelDenoms_derive___lambda__5___closed__1 = _init_l_CancelDenoms_derive___lambda__5___closed__1();
lean_mark_persistent(l_CancelDenoms_derive___lambda__5___closed__1);
l_CancelDenoms_derive___lambda__5___closed__2 = _init_l_CancelDenoms_derive___lambda__5___closed__2();
lean_mark_persistent(l_CancelDenoms_derive___lambda__5___closed__2);
l_CancelDenoms_derive___closed__1 = _init_l_CancelDenoms_derive___closed__1();
lean_mark_persistent(l_CancelDenoms_derive___closed__1);
l_CancelDenoms_derive___closed__2 = _init_l_CancelDenoms_derive___closed__2();
lean_mark_persistent(l_CancelDenoms_derive___closed__2);
l_CancelDenoms_findCompLemma___closed__1 = _init_l_CancelDenoms_findCompLemma___closed__1();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__1);
l_CancelDenoms_findCompLemma___closed__2 = _init_l_CancelDenoms_findCompLemma___closed__2();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__2);
l_CancelDenoms_findCompLemma___closed__3 = _init_l_CancelDenoms_findCompLemma___closed__3();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__3);
l_CancelDenoms_findCompLemma___closed__4 = _init_l_CancelDenoms_findCompLemma___closed__4();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__4);
l_CancelDenoms_findCompLemma___closed__5 = _init_l_CancelDenoms_findCompLemma___closed__5();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__5);
l_CancelDenoms_findCompLemma___closed__6 = _init_l_CancelDenoms_findCompLemma___closed__6();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__6);
l_CancelDenoms_findCompLemma___closed__7 = _init_l_CancelDenoms_findCompLemma___closed__7();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__7);
l_CancelDenoms_findCompLemma___closed__8 = _init_l_CancelDenoms_findCompLemma___closed__8();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__8);
l_CancelDenoms_findCompLemma___closed__9 = _init_l_CancelDenoms_findCompLemma___closed__9();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__9);
l_CancelDenoms_findCompLemma___closed__10 = _init_l_CancelDenoms_findCompLemma___closed__10();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__10);
l_CancelDenoms_findCompLemma___closed__11 = _init_l_CancelDenoms_findCompLemma___closed__11();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__11);
l_CancelDenoms_findCompLemma___closed__12 = _init_l_CancelDenoms_findCompLemma___closed__12();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__12);
l_CancelDenoms_findCompLemma___closed__13 = _init_l_CancelDenoms_findCompLemma___closed__13();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__13);
l_CancelDenoms_findCompLemma___closed__14 = _init_l_CancelDenoms_findCompLemma___closed__14();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__14);
l_CancelDenoms_findCompLemma___closed__15 = _init_l_CancelDenoms_findCompLemma___closed__15();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__15);
l_CancelDenoms_findCompLemma___closed__16 = _init_l_CancelDenoms_findCompLemma___closed__16();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__16);
l_CancelDenoms_findCompLemma___closed__17 = _init_l_CancelDenoms_findCompLemma___closed__17();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__17);
l_CancelDenoms_findCompLemma___closed__18 = _init_l_CancelDenoms_findCompLemma___closed__18();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__18);
l_CancelDenoms_findCompLemma___closed__19 = _init_l_CancelDenoms_findCompLemma___closed__19();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__19);
l_CancelDenoms_findCompLemma___closed__20 = _init_l_CancelDenoms_findCompLemma___closed__20();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__20);
l_CancelDenoms_findCompLemma___closed__21 = _init_l_CancelDenoms_findCompLemma___closed__21();
lean_mark_persistent(l_CancelDenoms_findCompLemma___closed__21);
l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1 = _init_l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___lambda__1___closed__1);
l_CancelDenoms_cancelDenominatorsInType___closed__1 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__1();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__1);
l_CancelDenoms_cancelDenominatorsInType___closed__2 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__2();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__2);
l_CancelDenoms_cancelDenominatorsInType___closed__3 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__3();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__3);
l_CancelDenoms_cancelDenominatorsInType___closed__4 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__4();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__4);
l_CancelDenoms_cancelDenominatorsInType___closed__5 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__5();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__5);
l_CancelDenoms_cancelDenominatorsInType___closed__6 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__6();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__6);
l_CancelDenoms_cancelDenominatorsInType___closed__7 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__7();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__7);
l_CancelDenoms_cancelDenominatorsInType___closed__8 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__8();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__8);
l_CancelDenoms_cancelDenominatorsInType___closed__9 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__9();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__9);
l_CancelDenoms_cancelDenominatorsInType___closed__10 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__10();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__10);
l_CancelDenoms_cancelDenominatorsInType___closed__11 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__11();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__11);
l_CancelDenoms_cancelDenominatorsInType___closed__12 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__12();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__12);
l_CancelDenoms_cancelDenominatorsInType___closed__13 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__13();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__13);
l_CancelDenoms_cancelDenominatorsInType___closed__14 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__14();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__14);
l_CancelDenoms_cancelDenominatorsInType___closed__15 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__15();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__15);
l_CancelDenoms_cancelDenominatorsInType___closed__16 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__16();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__16);
l_CancelDenoms_cancelDenominatorsInType___closed__17 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__17();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__17);
l_CancelDenoms_cancelDenominatorsInType___closed__18 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__18();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__18);
l_CancelDenoms_cancelDenominatorsInType___closed__19 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__19();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__19);
l_CancelDenoms_cancelDenominatorsInType___closed__20 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__20();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__20);
l_CancelDenoms_cancelDenominatorsInType___closed__21 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__21();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__21);
l_CancelDenoms_cancelDenominatorsInType___closed__22 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__22();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__22);
l_CancelDenoms_cancelDenominatorsInType___closed__23 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__23();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__23);
l_CancelDenoms_cancelDenominatorsInType___closed__24 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__24();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__24);
l_CancelDenoms_cancelDenominatorsInType___closed__25 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__25();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__25);
l_CancelDenoms_cancelDenominatorsInType___closed__26 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__26();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__26);
l_CancelDenoms_cancelDenominatorsInType___closed__27 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__27();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__27);
l_CancelDenoms_cancelDenominatorsInType___closed__28 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__28();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__28);
l_CancelDenoms_cancelDenominatorsInType___closed__29 = _init_l_CancelDenoms_cancelDenominatorsInType___closed__29();
lean_mark_persistent(l_CancelDenoms_cancelDenominatorsInType___closed__29);
l_cancelDenoms___closed__1 = _init_l_cancelDenoms___closed__1();
lean_mark_persistent(l_cancelDenoms___closed__1);
l_cancelDenoms___closed__2 = _init_l_cancelDenoms___closed__2();
lean_mark_persistent(l_cancelDenoms___closed__2);
l_cancelDenoms___closed__3 = _init_l_cancelDenoms___closed__3();
lean_mark_persistent(l_cancelDenoms___closed__3);
l_cancelDenoms___closed__4 = _init_l_cancelDenoms___closed__4();
lean_mark_persistent(l_cancelDenoms___closed__4);
l_cancelDenoms___closed__5 = _init_l_cancelDenoms___closed__5();
lean_mark_persistent(l_cancelDenoms___closed__5);
l_cancelDenoms___closed__6 = _init_l_cancelDenoms___closed__6();
lean_mark_persistent(l_cancelDenoms___closed__6);
l_cancelDenoms___closed__7 = _init_l_cancelDenoms___closed__7();
lean_mark_persistent(l_cancelDenoms___closed__7);
l_cancelDenoms___closed__8 = _init_l_cancelDenoms___closed__8();
lean_mark_persistent(l_cancelDenoms___closed__8);
l_cancelDenoms___closed__9 = _init_l_cancelDenoms___closed__9();
lean_mark_persistent(l_cancelDenoms___closed__9);
l_cancelDenoms___closed__10 = _init_l_cancelDenoms___closed__10();
lean_mark_persistent(l_cancelDenoms___closed__10);
l_cancelDenoms___closed__11 = _init_l_cancelDenoms___closed__11();
lean_mark_persistent(l_cancelDenoms___closed__11);
l_cancelDenoms = _init_l_cancelDenoms();
lean_mark_persistent(l_cancelDenoms);
l_cancelDenominators___lambda__1___closed__1 = _init_l_cancelDenominators___lambda__1___closed__1();
lean_mark_persistent(l_cancelDenominators___lambda__1___closed__1);
l_cancelDenominators___lambda__1___closed__2 = _init_l_cancelDenominators___lambda__1___closed__2();
lean_mark_persistent(l_cancelDenominators___lambda__1___closed__2);
l_cancelDenominators___closed__1 = _init_l_cancelDenominators___closed__1();
lean_mark_persistent(l_cancelDenominators___closed__1);
l_cancelDenominators___closed__2 = _init_l_cancelDenominators___closed__2();
lean_mark_persistent(l_cancelDenominators___closed__2);
l_cancelDenominators___closed__3 = _init_l_cancelDenominators___closed__3();
lean_mark_persistent(l_cancelDenominators___closed__3);
l_tacticCancel__denoms_____closed__1 = _init_l_tacticCancel__denoms_____closed__1();
lean_mark_persistent(l_tacticCancel__denoms_____closed__1);
l_tacticCancel__denoms_____closed__2 = _init_l_tacticCancel__denoms_____closed__2();
lean_mark_persistent(l_tacticCancel__denoms_____closed__2);
l_tacticCancel__denoms_____closed__3 = _init_l_tacticCancel__denoms_____closed__3();
lean_mark_persistent(l_tacticCancel__denoms_____closed__3);
l_tacticCancel__denoms__ = _init_l_tacticCancel__denoms__();
lean_mark_persistent(l_tacticCancel__denoms__);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__1 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__1);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__2);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__3 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__3);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__4 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__4);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__5);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__6 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__6);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__7);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__8 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__8();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__8);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__9 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__9();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__9);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__10 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__10();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__10);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__11 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__11();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__11);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__12 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__12();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__12);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__13 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__13();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__13);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__14 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__14();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__14);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__15 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__15();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__15);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__16 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__16();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__16);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__17 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__17();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__17);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__18 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__18();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__18);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__19 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__19();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__19);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__20 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__20();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__20);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__21);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__22 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__22();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__22);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__23 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__23();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__23);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__24 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__24();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__24);
l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__25 = _init_l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__25();
lean_mark_persistent(l___aux__Mathlib__Tactic__CancelDenoms__Core______elabRules__tacticCancel__denoms____1___closed__25);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
