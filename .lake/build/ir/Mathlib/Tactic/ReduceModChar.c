// Lean compiler output
// Module: Mathlib.Tactic.ReduceModChar
// Imports: Init Mathlib.Data.ZMod.Basic Mathlib.RingTheory.Polynomial.Basic Mathlib.Tactic.NormNum.DivMod Mathlib.Tactic.NormNum.PowMod Mathlib.Tactic.ReduceModChar.Ext
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
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__46;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__5;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__20;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__3;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__4;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__7;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__9;
static lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__6;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__3;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__9;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__34;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__7___closed__4;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__57;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__4;
lean_object* l_Mathlib_Meta_NormNum_discharge___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normIntNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Meta_NormNum_derive(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Meta_NormNum_evalIntMod_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__36;
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__2;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__58;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__46;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__1;
static lean_object* l_Tactic_ReduceModChar_normNegCoeffMul___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_location;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__3;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__8;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__21;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___lambda__1___closed__1;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__16;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Meta_NormNum_Result_toSimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__12;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_derive___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_LeanSearchClient_leanSearchTacticImpl___spec__1___rarg(lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__7;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__5;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__72;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__6;
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__37;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assign___at_Lean_MVarId_renameInaccessibleFVars___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__28;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__2;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__38;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__8;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__21;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__9;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__19;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__60;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__11;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__15;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__20;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__41;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__12;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__13;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__45;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__8;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__49;
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__27;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__12;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normPow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__23;
lean_object* l_Mathlib_Meta_NormNum_Result_isInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__56;
lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__27;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__22;
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__1;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__26;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__2;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__16;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__19;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__54;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___rarg(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__8;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__18;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__50;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__29;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__28;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__29;
static lean_object* l_Tactic_ReduceModChar_normNegCoeffMul___closed__3;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduce__mod__char_x21;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__64;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__75;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__7;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__35;
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__1;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__67;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__3;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__4;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_postDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNegCoeffMul___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__52;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__12;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__47;
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__9;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__1___closed__1;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__4;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__24;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__24;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__30;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__6;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__68;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__6;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__47;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__15;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__17;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNegCoeffMul___closed__6;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__29;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__28;
lean_object* l_Qq_trySynthInstanceQ___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__9;
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__62;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__55;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_matchAndNorm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__17;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__48;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__6;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__18;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__10;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__32;
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__39;
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__5;
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__14;
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__14;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__15;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__42;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__30;
lean_object* l_Mathlib_Meta_NormNum_evalNatPowMod(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__26;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__62;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__7___closed__3;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__11;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__13;
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__10;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_derive___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Meta_NormNum_Result_toInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__51;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__21;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__24;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__70;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__40;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__38;
static lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__5;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__6;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_instInhabitedTypeToCharPResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__4;
static lean_object* l_Tactic_ReduceModChar_normNegCoeffMul___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__54;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__56;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__42;
lean_object* l_Lean_Meta_Simp_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Meta_NormNum_deriveNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkOptionalNode(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__10;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__74;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__6;
lean_object* l_Lean_Meta_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__16;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__43;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__63;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__11;
static lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___closed__1;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__49;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_matchAndNorm(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__2;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__51;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__37;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__19;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__31;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__3;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__5;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__45;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__7___closed__2;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__36;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__65;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpExtension_getTheorems(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__31;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__5;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__20;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__15;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__2;
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__9;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduce__mod__char;
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__61;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normNeg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__23;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__23;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__1;
static lean_object* l_Tactic_ReduceModChar_derive___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__8;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__11;
static lean_object* l_Tactic_ReduceModChar_normNegCoeffMul___closed__4;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__1;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__53;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__26;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__66;
lean_object* l_Lean_Meta_applySimpResultToLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__48;
lean_object* l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__53;
lean_object* l_Lean_MessageData_ofLevel(lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__44;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__13;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__8;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__43;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__18;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_instInhabitedTypeToCharPResult___boxed(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__10;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__71;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__50;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__25;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__5;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__33;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__5;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__58;
lean_object* l_Lean_Meta_getSimpExtension_x3f(lean_object*, lean_object*);
lean_object* l_Qq_mkFreshExprMVarQ___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__4;
static lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__2;
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__35;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__13;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__19;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__25;
lean_object* l_Lean_LocalDecl_type(lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__14;
uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__41;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normIntNumeral_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__33;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normBareNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__32;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__2;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__18;
static lean_object* l_Tactic_ReduceModChar_typeToCharP___closed__10;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__3;
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__3;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_preDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__34;
size_t lean_usize_add(size_t, size_t);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__22;
extern lean_object* l_Lean_Meta_Simp_defaultMaxSteps;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__69;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__17;
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__22;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__39;
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__1;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__59;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__12;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__55;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Meta_NormNum_mkOfNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__9;
static lean_object* l_Tactic_ReduceModChar_normPow___closed__11;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__44;
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__4;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__17;
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__10;
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__8;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__73;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__14;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normNegCoeffMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Qq_findLocalDeclWithTypeQ_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Meta_monadLiftOptionMetaM___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_derive___lambda__7___closed__5;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__52;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__25;
lean_object* l_Lean_Meta_applySimpResultToTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__57;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__59;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__61;
static lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__1;
lean_object* l_Lean_Expr_consumeMData(lean_object*);
static lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__3;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__1;
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_matchAndNorm___closed__6;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__27;
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normBareNumeral___closed__60;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__6___closed__4;
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_ReduceModChar_normPow___closed__16;
static lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___closed__1;
static lean_object* l_Tactic_ReduceModChar_derive___lambda__7___closed__1;
static lean_object* l_Tactic_ReduceModChar_normNeg___closed__40;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Int", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__2;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instRing", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__1;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__6;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Meta", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NormNum", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("IsInt", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("raw_refl", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__8;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__9;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__10;
x_4 = l_Tactic_ReduceModChar_normBareNumeral___closed__11;
x_5 = l_Tactic_ReduceModChar_normBareNumeral___closed__12;
x_6 = l_Lean_Name_mkStr5(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__13;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Nat", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cast", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__15;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__16;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__17;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__18;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddMonoidWithOne", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNatCast", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__20;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__21;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__22;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__23;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instAddMonoidWithOne", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__8;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__9;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__10;
x_4 = l_Tactic_ReduceModChar_normBareNumeral___closed__25;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__26;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__27;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__28;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__7;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__24;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__29;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__19;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__30;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("isNat_natCast", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__8;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__9;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__10;
x_4 = l_Tactic_ReduceModChar_normBareNumeral___closed__32;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__33;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__34;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__35;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__29;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__37() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("IsNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__8;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__9;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__10;
x_4 = l_Tactic_ReduceModChar_normBareNumeral___closed__37;
x_5 = l_Tactic_ReduceModChar_normBareNumeral___closed__12;
x_6 = l_Lean_Name_mkStr5(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__38;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HMod", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__41() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hMod", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__40;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__41;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__43;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__42;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__44;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__45;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__46;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__47;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__49() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHMod", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__49;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__50;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__51;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__53() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instMod", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__1;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__53;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__54;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__52;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__55;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__48;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__56;
x_3 = l_Lean_Expr_app___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__58() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__59() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ReduceModChar", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__60() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CharP", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__61() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("isInt_of_mod", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normBareNumeral___closed__62() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__58;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__59;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__60;
x_4 = l_Tactic_ReduceModChar_normBareNumeral___closed__61;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normBareNumeral(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Mathlib_Meta_NormNum_derive(x_1, x_2, x_6, x_14, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_box(0);
lean_inc(x_1);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_20 = l_Mathlib_Meta_NormNum_Result_toInt(x_1, x_2, x_6, x_7, x_16);
x_21 = l_Mathlib_Meta_monadLiftOptionMetaM___elambda__1___rarg(x_20, x_9, x_10, x_11, x_12, x_17);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = l_Tactic_ReduceModChar_normBareNumeral___closed__14;
lean_inc(x_26);
x_29 = l_Lean_Expr_app___override(x_28, x_26);
x_30 = l_Tactic_ReduceModChar_normBareNumeral___closed__31;
lean_inc(x_4);
x_31 = l_Lean_Expr_app___override(x_30, x_4);
x_32 = l_Tactic_ReduceModChar_normBareNumeral___closed__36;
lean_inc(x_4);
x_33 = l_Lean_Expr_app___override(x_32, x_4);
lean_inc(x_4);
x_34 = l_Lean_Expr_app___override(x_33, x_4);
x_35 = l_Tactic_ReduceModChar_normBareNumeral___closed__39;
lean_inc(x_4);
x_36 = l_Lean_Expr_app___override(x_35, x_4);
x_37 = l_Lean_Expr_app___override(x_34, x_36);
x_38 = l_Tactic_ReduceModChar_normBareNumeral___closed__29;
lean_inc(x_4);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_4);
lean_ctor_set(x_39, 2, x_37);
lean_inc(x_31);
lean_inc_n(x_26, 2);
x_40 = l_Mathlib_Meta_NormNum_evalIntMod_go(x_26, x_26, x_25, x_29, x_31, x_39);
lean_dec(x_25);
x_41 = l_Mathlib_Meta_monadLiftOptionMetaM___elambda__1___rarg(x_40, x_9, x_10, x_11, x_12, x_24);
lean_dec(x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Tactic_ReduceModChar_normBareNumeral___closed__57;
lean_inc(x_26);
x_45 = l_Lean_Expr_app___override(x_44, x_26);
x_46 = l_Lean_Expr_app___override(x_45, x_31);
x_47 = lean_box(0);
x_48 = l_Tactic_ReduceModChar_normBareNumeral___closed__3;
x_49 = l_Tactic_ReduceModChar_normBareNumeral___closed__7;
x_50 = l_Mathlib_Meta_NormNum_Result_toInt(x_47, x_48, x_46, x_49, x_42);
x_51 = l_Mathlib_Meta_monadLiftOptionMetaM___elambda__1___rarg(x_50, x_9, x_10, x_11, x_12, x_43);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_55 = lean_ctor_get(x_51, 0);
lean_dec(x_55);
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_ctor_get(x_53, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
lean_dec(x_53);
x_59 = l_Tactic_ReduceModChar_normBareNumeral___closed__62;
x_60 = l_Lean_Expr_const___override(x_59, x_19);
x_61 = l_Lean_Expr_app___override(x_60, x_26);
lean_inc(x_57);
x_62 = l_Lean_Expr_app___override(x_61, x_57);
lean_inc(x_2);
x_63 = l_Lean_Expr_app___override(x_62, x_2);
lean_inc(x_7);
x_64 = l_Lean_Expr_app___override(x_63, x_7);
x_65 = l_Lean_Expr_app___override(x_64, x_3);
x_66 = l_Lean_Expr_app___override(x_65, x_4);
x_67 = l_Lean_Expr_app___override(x_66, x_8);
lean_inc(x_6);
x_68 = l_Lean_Expr_app___override(x_67, x_6);
x_69 = l_Lean_Expr_app___override(x_68, x_27);
x_70 = l_Lean_Expr_app___override(x_69, x_5);
x_71 = l_Lean_Expr_app___override(x_70, x_58);
x_72 = l_Mathlib_Meta_NormNum_Result_isInt(x_1, x_2, x_6, x_7, x_57, x_56, x_71);
lean_dec(x_56);
lean_dec(x_57);
lean_ctor_set(x_51, 0, x_72);
return x_51;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_73 = lean_ctor_get(x_51, 1);
lean_inc(x_73);
lean_dec(x_51);
x_74 = lean_ctor_get(x_52, 0);
lean_inc(x_74);
lean_dec(x_52);
x_75 = lean_ctor_get(x_53, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_53, 1);
lean_inc(x_76);
lean_dec(x_53);
x_77 = l_Tactic_ReduceModChar_normBareNumeral___closed__62;
x_78 = l_Lean_Expr_const___override(x_77, x_19);
x_79 = l_Lean_Expr_app___override(x_78, x_26);
lean_inc(x_75);
x_80 = l_Lean_Expr_app___override(x_79, x_75);
lean_inc(x_2);
x_81 = l_Lean_Expr_app___override(x_80, x_2);
lean_inc(x_7);
x_82 = l_Lean_Expr_app___override(x_81, x_7);
x_83 = l_Lean_Expr_app___override(x_82, x_3);
x_84 = l_Lean_Expr_app___override(x_83, x_4);
x_85 = l_Lean_Expr_app___override(x_84, x_8);
lean_inc(x_6);
x_86 = l_Lean_Expr_app___override(x_85, x_6);
x_87 = l_Lean_Expr_app___override(x_86, x_27);
x_88 = l_Lean_Expr_app___override(x_87, x_5);
x_89 = l_Lean_Expr_app___override(x_88, x_76);
x_90 = l_Mathlib_Meta_NormNum_Result_isInt(x_1, x_2, x_6, x_7, x_75, x_74, x_89);
lean_dec(x_74);
lean_dec(x_75);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_73);
return x_91;
}
}
else
{
uint8_t x_92; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_51);
if (x_92 == 0)
{
return x_51;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_51, 0);
x_94 = lean_ctor_get(x_51, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_51);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_19);
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
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_41);
if (x_96 == 0)
{
return x_41;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_41, 0);
x_98 = lean_ctor_get(x_41, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_41);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_19);
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
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_21);
if (x_100 == 0)
{
return x_21;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_21, 0);
x_102 = lean_ctor_get(x_21, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_21);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
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
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_15);
if (x_104 == 0)
{
return x_15;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_15, 0);
x_106 = lean_ctor_get(x_15, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_15);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___rarg___boxed), 6, 0);
return x_4;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normPow___closed__3;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instAddMonoidWithOneNat", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__8;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__9;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__10;
x_4 = l_Tactic_ReduceModChar_normPow___closed__5;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normPow___closed__6;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HPow", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hPow", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__8;
x_2 = l_Tactic_ReduceModChar_normPow___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHPow", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normPow___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Monoid", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNatPow", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__13;
x_2 = l_Tactic_ReduceModChar_normPow___closed__14;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MonoidWithZero", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toMonoid", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__16;
x_2 = l_Tactic_ReduceModChar_normPow___closed__17;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Semiring", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toMonoidWithZero", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__19;
x_2 = l_Tactic_ReduceModChar_normPow___closed__20;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ring", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSemiring", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__22;
x_2 = l_Tactic_ReduceModChar_normPow___closed__23;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("isNat_pow", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__58;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__59;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__60;
x_4 = l_Tactic_ReduceModChar_normPow___closed__25;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Eq", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("refl", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normPow___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__27;
x_2 = l_Tactic_ReduceModChar_normPow___closed__28;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normPow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_14 = l_Lean_Meta_whnfR(x_6, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
switch (lean_obj_tag(x_15)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Tactic_ReduceModChar_normPow___closed__2;
x_18 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___rarg(x_17, x_9, x_10, x_11, x_12, x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_18;
}
case 1:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = l_Tactic_ReduceModChar_normPow___closed__2;
x_21 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___rarg(x_20, x_9, x_10, x_11, x_12, x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_21;
}
case 2:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Tactic_ReduceModChar_normPow___closed__2;
x_24 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___rarg(x_23, x_9, x_10, x_11, x_12, x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_24;
}
case 3:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_26 = l_Tactic_ReduceModChar_normPow___closed__2;
x_27 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___rarg(x_26, x_9, x_10, x_11, x_12, x_25);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_27;
}
case 4:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_dec(x_14);
x_29 = l_Tactic_ReduceModChar_normPow___closed__2;
x_30 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___rarg(x_29, x_9, x_10, x_11, x_12, x_28);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_30;
}
case 5:
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_15, 0);
lean_inc(x_31);
switch (lean_obj_tag(x_31)) {
case 0:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
x_33 = l_Tactic_ReduceModChar_normPow___closed__2;
x_34 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___rarg(x_33, x_9, x_10, x_11, x_12, x_32);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_34;
}
case 1:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_ctor_get(x_14, 1);
lean_inc(x_35);
lean_dec(x_14);
x_36 = l_Tactic_ReduceModChar_normPow___closed__2;
x_37 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___rarg(x_36, x_9, x_10, x_11, x_12, x_35);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_37;
}
case 2:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = lean_ctor_get(x_14, 1);
lean_inc(x_38);
lean_dec(x_14);
x_39 = l_Tactic_ReduceModChar_normPow___closed__2;
x_40 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___rarg(x_39, x_9, x_10, x_11, x_12, x_38);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_40;
}
case 3:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_ctor_get(x_14, 1);
lean_inc(x_41);
lean_dec(x_14);
x_42 = l_Tactic_ReduceModChar_normPow___closed__2;
x_43 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___rarg(x_42, x_9, x_10, x_11, x_12, x_41);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_43;
}
case 4:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_dec(x_14);
x_45 = l_Tactic_ReduceModChar_normPow___closed__2;
x_46 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___rarg(x_45, x_9, x_10, x_11, x_12, x_44);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_46;
}
case 5:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_dec(x_14);
x_48 = lean_ctor_get(x_15, 1);
lean_inc(x_48);
lean_dec(x_15);
x_49 = lean_ctor_get(x_31, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_31, 1);
lean_inc(x_50);
lean_dec(x_31);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_50);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_51 = l_Tactic_ReduceModChar_normIntNumeral_x27(x_1, x_2, x_3, x_4, x_5, x_50, x_7, x_8, x_9, x_10, x_11, x_12, x_47);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
switch (lean_obj_tag(x_52)) {
case 0:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_52);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Tactic_ReduceModChar_normPow___closed__2;
x_55 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___rarg(x_54, x_9, x_10, x_11, x_12, x_53);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_55;
}
case 1:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_dec(x_51);
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
x_59 = lean_ctor_get(x_52, 2);
lean_inc(x_59);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 lean_ctor_release(x_52, 2);
 x_60 = x_52;
} else {
 lean_dec_ref(x_52);
 x_60 = lean_box(0);
}
x_61 = lean_box(0);
x_62 = lean_box(0);
x_63 = l_Tactic_ReduceModChar_normPow___closed__4;
x_64 = l_Tactic_ReduceModChar_normPow___closed__7;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_48);
x_65 = l_Mathlib_Meta_NormNum_deriveNat(x_62, x_63, x_48, x_64, x_9, x_10, x_11, x_12, x_56);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_68 = x_65;
} else {
 lean_dec_ref(x_65);
 x_68 = lean_box(0);
}
x_69 = !lean_is_exclusive(x_66);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; lean_object* x_167; 
x_70 = lean_ctor_get(x_66, 0);
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_1);
x_72 = l_Lean_Level_succ___override(x_1);
x_73 = lean_box(0);
x_74 = 0;
lean_inc(x_2);
x_75 = l_Lean_Expr_forallE___override(x_73, x_63, x_2, x_74);
lean_inc(x_2);
x_76 = l_Lean_Expr_forallE___override(x_73, x_2, x_75, x_74);
lean_inc(x_1);
lean_ctor_set_tag(x_66, 1);
lean_ctor_set(x_66, 1, x_61);
lean_ctor_set(x_66, 0, x_1);
lean_inc(x_66);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_62);
lean_ctor_set(x_77, 1, x_66);
lean_inc(x_1);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_1);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Tactic_ReduceModChar_normPow___closed__10;
x_80 = l_Lean_Expr_const___override(x_79, x_78);
lean_inc(x_2);
x_81 = l_Lean_Expr_app___override(x_80, x_2);
x_82 = l_Lean_Expr_app___override(x_81, x_63);
lean_inc(x_2);
x_83 = l_Lean_Expr_app___override(x_82, x_2);
x_84 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_1);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Tactic_ReduceModChar_normPow___closed__12;
x_87 = l_Lean_Expr_const___override(x_86, x_85);
lean_inc(x_2);
x_88 = l_Lean_Expr_app___override(x_87, x_2);
x_89 = l_Lean_Expr_app___override(x_88, x_63);
x_90 = l_Tactic_ReduceModChar_normPow___closed__15;
lean_inc(x_66);
x_91 = l_Lean_Expr_const___override(x_90, x_66);
lean_inc(x_2);
x_92 = l_Lean_Expr_app___override(x_91, x_2);
x_93 = l_Tactic_ReduceModChar_normPow___closed__18;
lean_inc(x_66);
x_94 = l_Lean_Expr_const___override(x_93, x_66);
lean_inc(x_2);
x_95 = l_Lean_Expr_app___override(x_94, x_2);
x_96 = l_Tactic_ReduceModChar_normPow___closed__21;
lean_inc(x_66);
x_97 = l_Lean_Expr_const___override(x_96, x_66);
lean_inc(x_2);
x_98 = l_Lean_Expr_app___override(x_97, x_2);
x_99 = l_Tactic_ReduceModChar_normPow___closed__24;
lean_inc(x_66);
x_100 = l_Lean_Expr_const___override(x_99, x_66);
lean_inc(x_2);
x_101 = l_Lean_Expr_app___override(x_100, x_2);
x_102 = l_Lean_Expr_app___override(x_101, x_7);
lean_inc(x_102);
x_160 = l_Lean_Expr_app___override(x_98, x_102);
x_161 = l_Lean_Expr_app___override(x_95, x_160);
x_162 = l_Lean_Expr_app___override(x_92, x_161);
x_163 = l_Lean_Expr_app___override(x_89, x_162);
x_164 = l_Lean_Expr_app___override(x_83, x_163);
lean_inc(x_49);
x_165 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq), 7, 2);
lean_closure_set(x_165, 0, x_49);
lean_closure_set(x_165, 1, x_164);
x_166 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_167 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_165, x_166, x_9, x_10, x_11, x_12, x_67);
if (lean_obj_tag(x_167) == 0)
{
lean_object* x_168; uint8_t x_169; 
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_unbox(x_168);
lean_dec(x_168);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
lean_dec(x_102);
lean_dec(x_66);
lean_dec(x_76);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_68);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_170 = lean_ctor_get(x_167, 1);
lean_inc(x_170);
lean_dec(x_167);
x_171 = l_Tactic_ReduceModChar_normPow___closed__2;
x_172 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_171, x_9, x_10, x_11, x_12, x_170);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_173 = !lean_is_exclusive(x_172);
if (x_173 == 0)
{
return x_172;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_172, 0);
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_172);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
else
{
lean_object* x_177; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_177 = lean_ctor_get(x_167, 1);
lean_inc(x_177);
lean_dec(x_167);
x_103 = x_177;
goto block_159;
}
}
else
{
uint8_t x_178; 
lean_dec(x_102);
lean_dec(x_66);
lean_dec(x_76);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_68);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_178 = !lean_is_exclusive(x_167);
if (x_178 == 0)
{
return x_167;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_167, 0);
x_180 = lean_ctor_get(x_167, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_167);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
block_159:
{
lean_object* x_104; uint8_t x_105; 
lean_inc(x_4);
lean_inc(x_70);
lean_inc(x_58);
x_104 = l_Mathlib_Meta_NormNum_evalNatPowMod(x_58, x_70, x_4);
x_105 = !lean_is_exclusive(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_106 = lean_ctor_get(x_104, 0);
x_107 = lean_ctor_get(x_104, 1);
x_108 = l_Tactic_ReduceModChar_normPow___closed__26;
x_109 = l_Lean_Expr_const___override(x_108, x_66);
x_110 = l_Lean_Expr_app___override(x_109, x_2);
x_111 = l_Lean_Expr_app___override(x_110, x_102);
lean_inc(x_49);
x_112 = l_Lean_Expr_app___override(x_111, x_49);
x_113 = l_Lean_Expr_app___override(x_112, x_50);
x_114 = l_Lean_Expr_app___override(x_113, x_58);
x_115 = l_Lean_Expr_app___override(x_114, x_48);
x_116 = l_Lean_Expr_app___override(x_115, x_70);
lean_inc(x_106);
x_117 = l_Lean_Expr_app___override(x_116, x_106);
x_118 = l_Lean_Expr_app___override(x_117, x_3);
x_119 = l_Lean_Expr_app___override(x_118, x_4);
x_120 = l_Lean_Expr_app___override(x_119, x_8);
lean_ctor_set_tag(x_104, 1);
lean_ctor_set(x_104, 1, x_61);
lean_ctor_set(x_104, 0, x_72);
x_121 = l_Tactic_ReduceModChar_normPow___closed__29;
x_122 = l_Lean_Expr_const___override(x_121, x_104);
x_123 = l_Lean_Expr_app___override(x_122, x_76);
x_124 = l_Lean_Expr_app___override(x_123, x_49);
x_125 = l_Lean_Expr_app___override(x_120, x_124);
x_126 = l_Lean_Expr_app___override(x_125, x_59);
x_127 = l_Lean_Expr_app___override(x_126, x_71);
x_128 = l_Lean_Expr_app___override(x_127, x_5);
x_129 = l_Lean_Expr_app___override(x_128, x_107);
if (lean_is_scalar(x_60)) {
 x_130 = lean_alloc_ctor(1, 3, 0);
} else {
 x_130 = x_60;
}
lean_ctor_set(x_130, 0, x_57);
lean_ctor_set(x_130, 1, x_106);
lean_ctor_set(x_130, 2, x_129);
if (lean_is_scalar(x_68)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_68;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_103);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_132 = lean_ctor_get(x_104, 0);
x_133 = lean_ctor_get(x_104, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_104);
x_134 = l_Tactic_ReduceModChar_normPow___closed__26;
x_135 = l_Lean_Expr_const___override(x_134, x_66);
x_136 = l_Lean_Expr_app___override(x_135, x_2);
x_137 = l_Lean_Expr_app___override(x_136, x_102);
lean_inc(x_49);
x_138 = l_Lean_Expr_app___override(x_137, x_49);
x_139 = l_Lean_Expr_app___override(x_138, x_50);
x_140 = l_Lean_Expr_app___override(x_139, x_58);
x_141 = l_Lean_Expr_app___override(x_140, x_48);
x_142 = l_Lean_Expr_app___override(x_141, x_70);
lean_inc(x_132);
x_143 = l_Lean_Expr_app___override(x_142, x_132);
x_144 = l_Lean_Expr_app___override(x_143, x_3);
x_145 = l_Lean_Expr_app___override(x_144, x_4);
x_146 = l_Lean_Expr_app___override(x_145, x_8);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_72);
lean_ctor_set(x_147, 1, x_61);
x_148 = l_Tactic_ReduceModChar_normPow___closed__29;
x_149 = l_Lean_Expr_const___override(x_148, x_147);
x_150 = l_Lean_Expr_app___override(x_149, x_76);
x_151 = l_Lean_Expr_app___override(x_150, x_49);
x_152 = l_Lean_Expr_app___override(x_146, x_151);
x_153 = l_Lean_Expr_app___override(x_152, x_59);
x_154 = l_Lean_Expr_app___override(x_153, x_71);
x_155 = l_Lean_Expr_app___override(x_154, x_5);
x_156 = l_Lean_Expr_app___override(x_155, x_133);
if (lean_is_scalar(x_60)) {
 x_157 = lean_alloc_ctor(1, 3, 0);
} else {
 x_157 = x_60;
}
lean_ctor_set(x_157, 0, x_57);
lean_ctor_set(x_157, 1, x_132);
lean_ctor_set(x_157, 2, x_156);
if (lean_is_scalar(x_68)) {
 x_158 = lean_alloc_ctor(0, 2, 0);
} else {
 x_158 = x_68;
}
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_103);
return x_158;
}
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; lean_object* x_254; 
x_182 = lean_ctor_get(x_66, 0);
x_183 = lean_ctor_get(x_66, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_66);
lean_inc(x_1);
x_184 = l_Lean_Level_succ___override(x_1);
x_185 = lean_box(0);
x_186 = 0;
lean_inc(x_2);
x_187 = l_Lean_Expr_forallE___override(x_185, x_63, x_2, x_186);
lean_inc(x_2);
x_188 = l_Lean_Expr_forallE___override(x_185, x_2, x_187, x_186);
lean_inc(x_1);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_1);
lean_ctor_set(x_189, 1, x_61);
lean_inc(x_189);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_62);
lean_ctor_set(x_190, 1, x_189);
lean_inc(x_1);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_1);
lean_ctor_set(x_191, 1, x_190);
x_192 = l_Tactic_ReduceModChar_normPow___closed__10;
x_193 = l_Lean_Expr_const___override(x_192, x_191);
lean_inc(x_2);
x_194 = l_Lean_Expr_app___override(x_193, x_2);
x_195 = l_Lean_Expr_app___override(x_194, x_63);
lean_inc(x_2);
x_196 = l_Lean_Expr_app___override(x_195, x_2);
x_197 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_1);
lean_ctor_set(x_198, 1, x_197);
x_199 = l_Tactic_ReduceModChar_normPow___closed__12;
x_200 = l_Lean_Expr_const___override(x_199, x_198);
lean_inc(x_2);
x_201 = l_Lean_Expr_app___override(x_200, x_2);
x_202 = l_Lean_Expr_app___override(x_201, x_63);
x_203 = l_Tactic_ReduceModChar_normPow___closed__15;
lean_inc(x_189);
x_204 = l_Lean_Expr_const___override(x_203, x_189);
lean_inc(x_2);
x_205 = l_Lean_Expr_app___override(x_204, x_2);
x_206 = l_Tactic_ReduceModChar_normPow___closed__18;
lean_inc(x_189);
x_207 = l_Lean_Expr_const___override(x_206, x_189);
lean_inc(x_2);
x_208 = l_Lean_Expr_app___override(x_207, x_2);
x_209 = l_Tactic_ReduceModChar_normPow___closed__21;
lean_inc(x_189);
x_210 = l_Lean_Expr_const___override(x_209, x_189);
lean_inc(x_2);
x_211 = l_Lean_Expr_app___override(x_210, x_2);
x_212 = l_Tactic_ReduceModChar_normPow___closed__24;
lean_inc(x_189);
x_213 = l_Lean_Expr_const___override(x_212, x_189);
lean_inc(x_2);
x_214 = l_Lean_Expr_app___override(x_213, x_2);
x_215 = l_Lean_Expr_app___override(x_214, x_7);
lean_inc(x_215);
x_247 = l_Lean_Expr_app___override(x_211, x_215);
x_248 = l_Lean_Expr_app___override(x_208, x_247);
x_249 = l_Lean_Expr_app___override(x_205, x_248);
x_250 = l_Lean_Expr_app___override(x_202, x_249);
x_251 = l_Lean_Expr_app___override(x_196, x_250);
lean_inc(x_49);
x_252 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq), 7, 2);
lean_closure_set(x_252, 0, x_49);
lean_closure_set(x_252, 1, x_251);
x_253 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_254 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_252, x_253, x_9, x_10, x_11, x_12, x_67);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; uint8_t x_256; 
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_unbox(x_255);
lean_dec(x_255);
if (x_256 == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_215);
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_68);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_257 = lean_ctor_get(x_254, 1);
lean_inc(x_257);
lean_dec(x_254);
x_258 = l_Tactic_ReduceModChar_normPow___closed__2;
x_259 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_258, x_9, x_10, x_11, x_12, x_257);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_260 = lean_ctor_get(x_259, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_259, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_259)) {
 lean_ctor_release(x_259, 0);
 lean_ctor_release(x_259, 1);
 x_262 = x_259;
} else {
 lean_dec_ref(x_259);
 x_262 = lean_box(0);
}
if (lean_is_scalar(x_262)) {
 x_263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_263 = x_262;
}
lean_ctor_set(x_263, 0, x_260);
lean_ctor_set(x_263, 1, x_261);
return x_263;
}
else
{
lean_object* x_264; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_264 = lean_ctor_get(x_254, 1);
lean_inc(x_264);
lean_dec(x_254);
x_216 = x_264;
goto block_246;
}
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_215);
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_68);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_265 = lean_ctor_get(x_254, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_254, 1);
lean_inc(x_266);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_267 = x_254;
} else {
 lean_dec_ref(x_254);
 x_267 = lean_box(0);
}
if (lean_is_scalar(x_267)) {
 x_268 = lean_alloc_ctor(1, 2, 0);
} else {
 x_268 = x_267;
}
lean_ctor_set(x_268, 0, x_265);
lean_ctor_set(x_268, 1, x_266);
return x_268;
}
block_246:
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_inc(x_4);
lean_inc(x_182);
lean_inc(x_58);
x_217 = l_Mathlib_Meta_NormNum_evalNatPowMod(x_58, x_182, x_4);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_220 = x_217;
} else {
 lean_dec_ref(x_217);
 x_220 = lean_box(0);
}
x_221 = l_Tactic_ReduceModChar_normPow___closed__26;
x_222 = l_Lean_Expr_const___override(x_221, x_189);
x_223 = l_Lean_Expr_app___override(x_222, x_2);
x_224 = l_Lean_Expr_app___override(x_223, x_215);
lean_inc(x_49);
x_225 = l_Lean_Expr_app___override(x_224, x_49);
x_226 = l_Lean_Expr_app___override(x_225, x_50);
x_227 = l_Lean_Expr_app___override(x_226, x_58);
x_228 = l_Lean_Expr_app___override(x_227, x_48);
x_229 = l_Lean_Expr_app___override(x_228, x_182);
lean_inc(x_218);
x_230 = l_Lean_Expr_app___override(x_229, x_218);
x_231 = l_Lean_Expr_app___override(x_230, x_3);
x_232 = l_Lean_Expr_app___override(x_231, x_4);
x_233 = l_Lean_Expr_app___override(x_232, x_8);
if (lean_is_scalar(x_220)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_220;
 lean_ctor_set_tag(x_234, 1);
}
lean_ctor_set(x_234, 0, x_184);
lean_ctor_set(x_234, 1, x_61);
x_235 = l_Tactic_ReduceModChar_normPow___closed__29;
x_236 = l_Lean_Expr_const___override(x_235, x_234);
x_237 = l_Lean_Expr_app___override(x_236, x_188);
x_238 = l_Lean_Expr_app___override(x_237, x_49);
x_239 = l_Lean_Expr_app___override(x_233, x_238);
x_240 = l_Lean_Expr_app___override(x_239, x_59);
x_241 = l_Lean_Expr_app___override(x_240, x_183);
x_242 = l_Lean_Expr_app___override(x_241, x_5);
x_243 = l_Lean_Expr_app___override(x_242, x_219);
if (lean_is_scalar(x_60)) {
 x_244 = lean_alloc_ctor(1, 3, 0);
} else {
 x_244 = x_60;
}
lean_ctor_set(x_244, 0, x_57);
lean_ctor_set(x_244, 1, x_218);
lean_ctor_set(x_244, 2, x_243);
if (lean_is_scalar(x_68)) {
 x_245 = lean_alloc_ctor(0, 2, 0);
} else {
 x_245 = x_68;
}
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_216);
return x_245;
}
}
}
else
{
uint8_t x_269; 
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_269 = !lean_is_exclusive(x_65);
if (x_269 == 0)
{
return x_65;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_65, 0);
x_271 = lean_ctor_get(x_65, 1);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_65);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
return x_272;
}
}
}
case 2:
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_52);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_273 = lean_ctor_get(x_51, 1);
lean_inc(x_273);
lean_dec(x_51);
x_274 = l_Tactic_ReduceModChar_normPow___closed__2;
x_275 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___rarg(x_274, x_9, x_10, x_11, x_12, x_273);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_275;
}
default: 
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_52);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_276 = lean_ctor_get(x_51, 1);
lean_inc(x_276);
lean_dec(x_51);
x_277 = l_Tactic_ReduceModChar_normPow___closed__2;
x_278 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___rarg(x_277, x_9, x_10, x_11, x_12, x_276);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_278;
}
}
}
else
{
uint8_t x_279; 
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_279 = !lean_is_exclusive(x_51);
if (x_279 == 0)
{
return x_51;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_51, 0);
x_281 = lean_ctor_get(x_51, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_51);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
return x_282;
}
}
}
case 6:
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_283 = lean_ctor_get(x_14, 1);
lean_inc(x_283);
lean_dec(x_14);
x_284 = l_Tactic_ReduceModChar_normPow___closed__2;
x_285 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___rarg(x_284, x_9, x_10, x_11, x_12, x_283);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_285;
}
case 7:
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_286 = lean_ctor_get(x_14, 1);
lean_inc(x_286);
lean_dec(x_14);
x_287 = l_Tactic_ReduceModChar_normPow___closed__2;
x_288 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___rarg(x_287, x_9, x_10, x_11, x_12, x_286);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_288;
}
case 8:
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_289 = lean_ctor_get(x_14, 1);
lean_inc(x_289);
lean_dec(x_14);
x_290 = l_Tactic_ReduceModChar_normPow___closed__2;
x_291 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___rarg(x_290, x_9, x_10, x_11, x_12, x_289);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_291;
}
case 9:
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_292 = lean_ctor_get(x_14, 1);
lean_inc(x_292);
lean_dec(x_14);
x_293 = l_Tactic_ReduceModChar_normPow___closed__2;
x_294 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___rarg(x_293, x_9, x_10, x_11, x_12, x_292);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_294;
}
case 10:
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_295 = lean_ctor_get(x_14, 1);
lean_inc(x_295);
lean_dec(x_14);
x_296 = l_Tactic_ReduceModChar_normPow___closed__2;
x_297 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___rarg(x_296, x_9, x_10, x_11, x_12, x_295);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_297;
}
default: 
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_298 = lean_ctor_get(x_14, 1);
lean_inc(x_298);
lean_dec(x_14);
x_299 = l_Tactic_ReduceModChar_normPow___closed__2;
x_300 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___rarg(x_299, x_9, x_10, x_11, x_12, x_298);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_300;
}
}
}
case 6:
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_301 = lean_ctor_get(x_14, 1);
lean_inc(x_301);
lean_dec(x_14);
x_302 = l_Tactic_ReduceModChar_normPow___closed__2;
x_303 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___rarg(x_302, x_9, x_10, x_11, x_12, x_301);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_303;
}
case 7:
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_304 = lean_ctor_get(x_14, 1);
lean_inc(x_304);
lean_dec(x_14);
x_305 = l_Tactic_ReduceModChar_normPow___closed__2;
x_306 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___rarg(x_305, x_9, x_10, x_11, x_12, x_304);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_306;
}
case 8:
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_307 = lean_ctor_get(x_14, 1);
lean_inc(x_307);
lean_dec(x_14);
x_308 = l_Tactic_ReduceModChar_normPow___closed__2;
x_309 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___rarg(x_308, x_9, x_10, x_11, x_12, x_307);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_309;
}
case 9:
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_310 = lean_ctor_get(x_14, 1);
lean_inc(x_310);
lean_dec(x_14);
x_311 = l_Tactic_ReduceModChar_normPow___closed__2;
x_312 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___rarg(x_311, x_9, x_10, x_11, x_12, x_310);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_312;
}
case 10:
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_313 = lean_ctor_get(x_14, 1);
lean_inc(x_313);
lean_dec(x_14);
x_314 = l_Tactic_ReduceModChar_normPow___closed__2;
x_315 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___rarg(x_314, x_9, x_10, x_11, x_12, x_313);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_315;
}
default: 
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_316 = lean_ctor_get(x_14, 1);
lean_inc(x_316);
lean_dec(x_14);
x_317 = l_Tactic_ReduceModChar_normPow___closed__2;
x_318 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___rarg(x_317, x_9, x_10, x_11, x_12, x_316);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_318;
}
}
}
else
{
uint8_t x_319; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_319 = !lean_is_exclusive(x_14);
if (x_319 == 0)
{
return x_14;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_320 = lean_ctor_get(x_14, 0);
x_321 = lean_ctor_get(x_14, 1);
lean_inc(x_321);
lean_inc(x_320);
lean_dec(x_14);
x_322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_322, 0, x_320);
lean_ctor_set(x_322, 1, x_321);
return x_322;
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normIntNumeral_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = l_Lean_Meta_saveState___rarg(x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Tactic_ReduceModChar_normPow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_17) == 0)
{
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
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = l_Lean_Exception_isInterrupt(x_19);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Exception_isRuntime(x_19);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_17);
lean_dec(x_19);
x_23 = l_Lean_Meta_SavedState_restore(x_15, x_9, x_10, x_11, x_12, x_20);
lean_dec(x_15);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Tactic_ReduceModChar_normBareNumeral(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_24);
return x_25;
}
else
{
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
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
}
else
{
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
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = l_Lean_Exception_isInterrupt(x_26);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = l_Lean_Exception_isRuntime(x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
x_30 = l_Lean_Meta_SavedState_restore(x_15, x_9, x_10, x_11, x_12, x_27);
lean_dec(x_15);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Tactic_ReduceModChar_normBareNumeral(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_31);
return x_32;
}
else
{
lean_object* x_33; 
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
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_26);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
}
else
{
lean_object* x_34; 
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
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_27);
return x_34;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__8(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__10(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__11(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__12(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__13(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__14(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__15(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__16(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__17(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__18(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__19(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__20(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__21(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__22(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__23(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__24(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Tactic_ReduceModChar_normPow___spec__25(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normIntNumeral(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_box(0);
x_13 = l_Tactic_ReduceModChar_normPow___closed__4;
x_14 = l_Tactic_ReduceModChar_normPow___closed__7;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
x_15 = l_Mathlib_Meta_NormNum_deriveNat(x_12, x_13, x_3, x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Tactic_ReduceModChar_normIntNumeral_x27(x_1, x_2, x_3, x_18, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
return x_20;
}
else
{
uint8_t x_21; 
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
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__1;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NegZeroClass", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNeg", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__4;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubNegZeroMonoid", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNegZeroClass", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__7;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__8;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubtractionMonoid", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSubNegZeroMonoid", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__10;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__11;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubtractionCommMonoid", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSubtractionMonoid", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__13;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__14;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddCommGroup", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDivisionAddCommMonoid", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__16;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__17;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddCommGroup", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__22;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__19;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__21;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__22;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHSub", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normNeg___closed__24;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SubNegMonoid", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSub", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__26;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__27;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddGroup", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toSubNegMonoid", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__29;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__30;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AddGroupWithOne", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddGroup", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__32;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__33;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddGroupWithOne", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__22;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__35;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__37() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toAddMonoidWithOne", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__32;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__37;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__39() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OfNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ofNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__39;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__40;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__42;
x_2 = l_Lean_Expr_lit___override(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("One", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__45() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOfNat1", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__44;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__45;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__47() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOne", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__20;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__47;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__49() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("normNeg: evaluating `", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__49;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__51() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" - 1` should give an integer result", 35, 35);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__51;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__53() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__54() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__53;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__54;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__56() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHMul", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normNeg___closed__56;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__58() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Distrib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__59() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toMul", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__58;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__59;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__61() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NonUnitalNonAssocSemiring", 25, 25);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__62() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDistrib", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__61;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__62;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__64() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NonUnitalNonAssocRing", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__65() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNonUnitalNonAssocSemiring", 27, 27);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__66() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__64;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__65;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__67() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("NonAssocRing", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__68() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNonUnitalNonAssocRing", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__69() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__67;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__68;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__70() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toNonAssocRing", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__71() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normPow___closed__22;
x_2 = l_Tactic_ReduceModChar_normNeg___closed__70;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__72() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg_eq_sub_one_mul", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__73() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__58;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__59;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__60;
x_4 = l_Tactic_ReduceModChar_normNeg___closed__72;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__74() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("normNeg: nothing useful to do in negative characteristic", 56, 56);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNeg___closed__75() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_normNeg___closed__74;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normNeg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l_Lean_Meta_whnfR(x_4, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 5)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_box(0);
lean_inc(x_1);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Tactic_ReduceModChar_normNeg___closed__3;
lean_inc(x_18);
x_20 = l_Lean_Expr_const___override(x_19, x_18);
lean_inc(x_2);
x_21 = l_Lean_Expr_app___override(x_20, x_2);
x_22 = l_Tactic_ReduceModChar_normNeg___closed__6;
lean_inc(x_18);
x_23 = l_Lean_Expr_const___override(x_22, x_18);
lean_inc(x_2);
x_24 = l_Lean_Expr_app___override(x_23, x_2);
x_25 = l_Tactic_ReduceModChar_normNeg___closed__9;
lean_inc(x_18);
x_26 = l_Lean_Expr_const___override(x_25, x_18);
lean_inc(x_2);
x_27 = l_Lean_Expr_app___override(x_26, x_2);
x_28 = l_Tactic_ReduceModChar_normNeg___closed__12;
lean_inc(x_18);
x_29 = l_Lean_Expr_const___override(x_28, x_18);
lean_inc(x_2);
x_30 = l_Lean_Expr_app___override(x_29, x_2);
x_31 = l_Tactic_ReduceModChar_normNeg___closed__15;
lean_inc(x_18);
x_32 = l_Lean_Expr_const___override(x_31, x_18);
lean_inc(x_2);
x_33 = l_Lean_Expr_app___override(x_32, x_2);
x_34 = l_Tactic_ReduceModChar_normNeg___closed__18;
lean_inc(x_18);
x_35 = l_Lean_Expr_const___override(x_34, x_18);
lean_inc(x_2);
x_36 = l_Lean_Expr_app___override(x_35, x_2);
x_37 = l_Tactic_ReduceModChar_normNeg___closed__20;
lean_inc(x_18);
x_38 = l_Lean_Expr_const___override(x_37, x_18);
lean_inc(x_2);
x_39 = l_Lean_Expr_app___override(x_38, x_2);
lean_inc(x_5);
x_40 = l_Lean_Expr_app___override(x_39, x_5);
x_41 = l_Lean_Expr_app___override(x_36, x_40);
x_42 = l_Lean_Expr_app___override(x_33, x_41);
x_43 = l_Lean_Expr_app___override(x_30, x_42);
x_44 = l_Lean_Expr_app___override(x_27, x_43);
x_45 = l_Lean_Expr_app___override(x_24, x_44);
x_46 = l_Lean_Expr_app___override(x_21, x_45);
x_47 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq), 7, 2);
lean_closure_set(x_47, 0, x_15);
lean_closure_set(x_47, 1, x_46);
x_48 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_49 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_47, x_48, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_237; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_237 = lean_unbox(x_50);
lean_dec(x_50);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; uint8_t x_240; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_238 = l_Tactic_ReduceModChar_normPow___closed__2;
x_239 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_238, x_7, x_8, x_9, x_10, x_51);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_240 = !lean_is_exclusive(x_239);
if (x_240 == 0)
{
return x_239;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_239, 0);
x_242 = lean_ctor_get(x_239, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_239);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
}
else
{
x_52 = x_51;
goto block_236;
}
block_236:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_inc(x_18);
lean_inc(x_1);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_1);
lean_ctor_set(x_53, 1, x_18);
lean_inc(x_1);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_1);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Tactic_ReduceModChar_normNeg___closed__23;
lean_inc(x_54);
x_56 = l_Lean_Expr_const___override(x_55, x_54);
lean_inc(x_2);
x_57 = l_Lean_Expr_app___override(x_56, x_2);
lean_inc(x_2);
x_58 = l_Lean_Expr_app___override(x_57, x_2);
lean_inc(x_2);
x_59 = l_Lean_Expr_app___override(x_58, x_2);
x_60 = l_Tactic_ReduceModChar_normNeg___closed__25;
lean_inc(x_18);
x_61 = l_Lean_Expr_const___override(x_60, x_18);
lean_inc(x_2);
x_62 = l_Lean_Expr_app___override(x_61, x_2);
x_63 = l_Tactic_ReduceModChar_normNeg___closed__28;
lean_inc(x_18);
x_64 = l_Lean_Expr_const___override(x_63, x_18);
lean_inc(x_2);
x_65 = l_Lean_Expr_app___override(x_64, x_2);
x_66 = l_Tactic_ReduceModChar_normNeg___closed__31;
lean_inc(x_18);
x_67 = l_Lean_Expr_const___override(x_66, x_18);
lean_inc(x_2);
x_68 = l_Lean_Expr_app___override(x_67, x_2);
x_69 = l_Tactic_ReduceModChar_normNeg___closed__34;
lean_inc(x_18);
x_70 = l_Lean_Expr_const___override(x_69, x_18);
lean_inc(x_2);
x_71 = l_Lean_Expr_app___override(x_70, x_2);
x_72 = l_Tactic_ReduceModChar_normNeg___closed__36;
lean_inc(x_18);
x_73 = l_Lean_Expr_const___override(x_72, x_18);
lean_inc(x_2);
x_74 = l_Lean_Expr_app___override(x_73, x_2);
lean_inc(x_5);
x_75 = l_Lean_Expr_app___override(x_74, x_5);
lean_inc(x_75);
x_76 = l_Lean_Expr_app___override(x_71, x_75);
x_77 = l_Lean_Expr_app___override(x_68, x_76);
x_78 = l_Lean_Expr_app___override(x_65, x_77);
x_79 = l_Lean_Expr_app___override(x_62, x_78);
x_80 = l_Lean_Expr_app___override(x_59, x_79);
x_81 = l_Tactic_ReduceModChar_normBareNumeral___closed__17;
lean_inc(x_18);
x_82 = l_Lean_Expr_const___override(x_81, x_18);
lean_inc(x_2);
x_83 = l_Lean_Expr_app___override(x_82, x_2);
x_84 = l_Tactic_ReduceModChar_normBareNumeral___closed__22;
lean_inc(x_18);
x_85 = l_Lean_Expr_const___override(x_84, x_18);
lean_inc(x_2);
x_86 = l_Lean_Expr_app___override(x_85, x_2);
x_87 = l_Tactic_ReduceModChar_normNeg___closed__38;
lean_inc(x_18);
x_88 = l_Lean_Expr_const___override(x_87, x_18);
lean_inc(x_2);
x_89 = l_Lean_Expr_app___override(x_88, x_2);
x_90 = l_Lean_Expr_app___override(x_89, x_75);
lean_inc(x_90);
x_91 = l_Lean_Expr_app___override(x_86, x_90);
x_92 = l_Lean_Expr_app___override(x_83, x_91);
lean_inc(x_3);
x_93 = l_Lean_Expr_app___override(x_92, x_3);
x_94 = l_Lean_Expr_app___override(x_80, x_93);
x_95 = l_Tactic_ReduceModChar_normNeg___closed__41;
lean_inc(x_18);
x_96 = l_Lean_Expr_const___override(x_95, x_18);
lean_inc(x_2);
x_97 = l_Lean_Expr_app___override(x_96, x_2);
x_98 = l_Tactic_ReduceModChar_normNeg___closed__43;
x_99 = l_Lean_Expr_app___override(x_97, x_98);
x_100 = l_Tactic_ReduceModChar_normNeg___closed__46;
lean_inc(x_18);
x_101 = l_Lean_Expr_const___override(x_100, x_18);
lean_inc(x_2);
x_102 = l_Lean_Expr_app___override(x_101, x_2);
x_103 = l_Tactic_ReduceModChar_normNeg___closed__48;
lean_inc(x_18);
x_104 = l_Lean_Expr_const___override(x_103, x_18);
lean_inc(x_2);
x_105 = l_Lean_Expr_app___override(x_104, x_2);
x_106 = l_Lean_Expr_app___override(x_105, x_90);
x_107 = l_Lean_Expr_app___override(x_102, x_106);
x_108 = l_Lean_Expr_app___override(x_99, x_107);
x_109 = l_Lean_Expr_app___override(x_94, x_108);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_110 = l_Mathlib_Meta_NormNum_derive(x_1, x_2, x_109, x_48, x_7, x_8, x_9, x_10, x_52);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
switch (lean_obj_tag(x_111)) {
case 1:
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_ctor_get(x_111, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
x_115 = lean_ctor_get(x_111, 2);
lean_inc(x_115);
lean_dec(x_111);
lean_inc(x_114);
lean_inc(x_2);
x_116 = l_Mathlib_Meta_NormNum_mkOfNat(x_1, x_2, x_113, x_114, x_7, x_8, x_9, x_10, x_112);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_116) == 0)
{
uint8_t x_117; 
x_117 = !lean_is_exclusive(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; lean_object* x_166; 
x_118 = lean_ctor_get(x_116, 0);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = l_Tactic_ReduceModChar_normNeg___closed__55;
x_122 = l_Lean_Expr_const___override(x_121, x_54);
lean_inc(x_2);
x_123 = l_Lean_Expr_app___override(x_122, x_2);
lean_inc(x_2);
x_124 = l_Lean_Expr_app___override(x_123, x_2);
lean_inc(x_2);
x_125 = l_Lean_Expr_app___override(x_124, x_2);
x_126 = l_Tactic_ReduceModChar_normNeg___closed__57;
lean_inc(x_18);
x_127 = l_Lean_Expr_const___override(x_126, x_18);
lean_inc(x_2);
x_128 = l_Lean_Expr_app___override(x_127, x_2);
x_129 = l_Tactic_ReduceModChar_normNeg___closed__60;
lean_inc(x_18);
x_130 = l_Lean_Expr_const___override(x_129, x_18);
lean_inc(x_2);
x_131 = l_Lean_Expr_app___override(x_130, x_2);
x_132 = l_Tactic_ReduceModChar_normNeg___closed__63;
lean_inc(x_18);
x_133 = l_Lean_Expr_const___override(x_132, x_18);
lean_inc(x_2);
x_134 = l_Lean_Expr_app___override(x_133, x_2);
x_135 = l_Tactic_ReduceModChar_normNeg___closed__66;
lean_inc(x_18);
x_136 = l_Lean_Expr_const___override(x_135, x_18);
lean_inc(x_2);
x_137 = l_Lean_Expr_app___override(x_136, x_2);
x_138 = l_Tactic_ReduceModChar_normNeg___closed__69;
lean_inc(x_18);
x_139 = l_Lean_Expr_const___override(x_138, x_18);
lean_inc(x_2);
x_140 = l_Lean_Expr_app___override(x_139, x_2);
x_141 = l_Tactic_ReduceModChar_normNeg___closed__71;
lean_inc(x_18);
x_142 = l_Lean_Expr_const___override(x_141, x_18);
lean_inc(x_2);
x_143 = l_Lean_Expr_app___override(x_142, x_2);
lean_inc(x_5);
x_144 = l_Lean_Expr_app___override(x_143, x_5);
x_145 = l_Lean_Expr_app___override(x_140, x_144);
x_146 = l_Lean_Expr_app___override(x_137, x_145);
x_147 = l_Lean_Expr_app___override(x_134, x_146);
x_148 = l_Lean_Expr_app___override(x_131, x_147);
x_149 = l_Lean_Expr_app___override(x_128, x_148);
x_150 = l_Lean_Expr_app___override(x_125, x_149);
lean_inc(x_119);
x_151 = l_Lean_Expr_app___override(x_150, x_119);
lean_inc(x_16);
x_152 = l_Lean_Expr_app___override(x_151, x_16);
x_153 = l_Tactic_ReduceModChar_normNeg___closed__73;
x_154 = l_Lean_Expr_const___override(x_153, x_18);
x_155 = l_Lean_Expr_app___override(x_154, x_2);
x_156 = l_Lean_Expr_app___override(x_155, x_5);
x_157 = l_Lean_Expr_app___override(x_156, x_3);
x_158 = l_Lean_Expr_app___override(x_157, x_6);
x_159 = l_Lean_Expr_app___override(x_158, x_16);
x_160 = l_Lean_Expr_app___override(x_159, x_114);
x_161 = l_Lean_Expr_app___override(x_160, x_119);
x_162 = l_Lean_Expr_app___override(x_161, x_115);
x_163 = l_Lean_Expr_app___override(x_162, x_120);
x_164 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_164, 0, x_163);
x_165 = 1;
x_166 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_166, 0, x_152);
lean_ctor_set(x_166, 1, x_164);
lean_ctor_set_uint8(x_166, sizeof(void*)*2, x_165);
lean_ctor_set(x_116, 0, x_166);
return x_116;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; uint8_t x_215; lean_object* x_216; lean_object* x_217; 
x_167 = lean_ctor_get(x_116, 0);
x_168 = lean_ctor_get(x_116, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_116);
x_169 = lean_ctor_get(x_167, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_167, 1);
lean_inc(x_170);
lean_dec(x_167);
x_171 = l_Tactic_ReduceModChar_normNeg___closed__55;
x_172 = l_Lean_Expr_const___override(x_171, x_54);
lean_inc(x_2);
x_173 = l_Lean_Expr_app___override(x_172, x_2);
lean_inc(x_2);
x_174 = l_Lean_Expr_app___override(x_173, x_2);
lean_inc(x_2);
x_175 = l_Lean_Expr_app___override(x_174, x_2);
x_176 = l_Tactic_ReduceModChar_normNeg___closed__57;
lean_inc(x_18);
x_177 = l_Lean_Expr_const___override(x_176, x_18);
lean_inc(x_2);
x_178 = l_Lean_Expr_app___override(x_177, x_2);
x_179 = l_Tactic_ReduceModChar_normNeg___closed__60;
lean_inc(x_18);
x_180 = l_Lean_Expr_const___override(x_179, x_18);
lean_inc(x_2);
x_181 = l_Lean_Expr_app___override(x_180, x_2);
x_182 = l_Tactic_ReduceModChar_normNeg___closed__63;
lean_inc(x_18);
x_183 = l_Lean_Expr_const___override(x_182, x_18);
lean_inc(x_2);
x_184 = l_Lean_Expr_app___override(x_183, x_2);
x_185 = l_Tactic_ReduceModChar_normNeg___closed__66;
lean_inc(x_18);
x_186 = l_Lean_Expr_const___override(x_185, x_18);
lean_inc(x_2);
x_187 = l_Lean_Expr_app___override(x_186, x_2);
x_188 = l_Tactic_ReduceModChar_normNeg___closed__69;
lean_inc(x_18);
x_189 = l_Lean_Expr_const___override(x_188, x_18);
lean_inc(x_2);
x_190 = l_Lean_Expr_app___override(x_189, x_2);
x_191 = l_Tactic_ReduceModChar_normNeg___closed__71;
lean_inc(x_18);
x_192 = l_Lean_Expr_const___override(x_191, x_18);
lean_inc(x_2);
x_193 = l_Lean_Expr_app___override(x_192, x_2);
lean_inc(x_5);
x_194 = l_Lean_Expr_app___override(x_193, x_5);
x_195 = l_Lean_Expr_app___override(x_190, x_194);
x_196 = l_Lean_Expr_app___override(x_187, x_195);
x_197 = l_Lean_Expr_app___override(x_184, x_196);
x_198 = l_Lean_Expr_app___override(x_181, x_197);
x_199 = l_Lean_Expr_app___override(x_178, x_198);
x_200 = l_Lean_Expr_app___override(x_175, x_199);
lean_inc(x_169);
x_201 = l_Lean_Expr_app___override(x_200, x_169);
lean_inc(x_16);
x_202 = l_Lean_Expr_app___override(x_201, x_16);
x_203 = l_Tactic_ReduceModChar_normNeg___closed__73;
x_204 = l_Lean_Expr_const___override(x_203, x_18);
x_205 = l_Lean_Expr_app___override(x_204, x_2);
x_206 = l_Lean_Expr_app___override(x_205, x_5);
x_207 = l_Lean_Expr_app___override(x_206, x_3);
x_208 = l_Lean_Expr_app___override(x_207, x_6);
x_209 = l_Lean_Expr_app___override(x_208, x_16);
x_210 = l_Lean_Expr_app___override(x_209, x_114);
x_211 = l_Lean_Expr_app___override(x_210, x_169);
x_212 = l_Lean_Expr_app___override(x_211, x_115);
x_213 = l_Lean_Expr_app___override(x_212, x_170);
x_214 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_214, 0, x_213);
x_215 = 1;
x_216 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_216, 0, x_202);
lean_ctor_set(x_216, 1, x_214);
lean_ctor_set_uint8(x_216, sizeof(void*)*2, x_215);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_168);
return x_217;
}
}
else
{
uint8_t x_218; 
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_54);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_218 = !lean_is_exclusive(x_116);
if (x_218 == 0)
{
return x_116;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_219 = lean_ctor_get(x_116, 0);
x_220 = lean_ctor_get(x_116, 1);
lean_inc(x_220);
lean_inc(x_219);
lean_dec(x_116);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_219);
lean_ctor_set(x_221, 1, x_220);
return x_221;
}
}
}
case 2:
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
lean_dec(x_111);
lean_dec(x_54);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_222 = lean_ctor_get(x_110, 1);
lean_inc(x_222);
lean_dec(x_110);
x_223 = l_Tactic_ReduceModChar_normNeg___closed__75;
x_224 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_223, x_7, x_8, x_9, x_10, x_222);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_224;
}
default: 
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
lean_dec(x_111);
lean_dec(x_54);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_225 = lean_ctor_get(x_110, 1);
lean_inc(x_225);
lean_dec(x_110);
x_226 = l_Lean_MessageData_ofExpr(x_3);
x_227 = l_Tactic_ReduceModChar_normNeg___closed__50;
x_228 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_226);
x_229 = l_Tactic_ReduceModChar_normNeg___closed__52;
x_230 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
x_231 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_230, x_7, x_8, x_9, x_10, x_225);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_231;
}
}
}
else
{
uint8_t x_232; 
lean_dec(x_54);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_232 = !lean_is_exclusive(x_110);
if (x_232 == 0)
{
return x_110;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_110, 0);
x_234 = lean_ctor_get(x_110, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_110);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
}
}
else
{
uint8_t x_244; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_244 = !lean_is_exclusive(x_49);
if (x_244 == 0)
{
return x_49;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_49, 0);
x_246 = lean_ctor_get(x_49, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_49);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_246);
return x_247;
}
}
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_248 = lean_ctor_get(x_12, 1);
lean_inc(x_248);
lean_dec(x_12);
x_249 = l_Tactic_ReduceModChar_normPow___closed__2;
x_250 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_249, x_7, x_8, x_9, x_10, x_248);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_250;
}
}
else
{
uint8_t x_251; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_251 = !lean_is_exclusive(x_12);
if (x_251 == 0)
{
return x_12;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_252 = lean_ctor_get(x_12, 0);
x_253 = lean_ctor_get(x_12, 1);
lean_inc(x_253);
lean_inc(x_252);
lean_dec(x_12);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_252);
lean_ctor_set(x_254, 1, x_253);
return x_254;
}
}
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("normNegCoeffMul: evaluating `", 29, 29);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_normNegCoeffMul___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg_mul_eq_sub_one_mul", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__58;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__59;
x_3 = l_Tactic_ReduceModChar_normBareNumeral___closed__60;
x_4 = l_Tactic_ReduceModChar_normNegCoeffMul___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("normNegCoeffMul: nothing useful to do in negative characteristic", 64, 64);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_normNegCoeffMul___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_normNegCoeffMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l_Lean_Meta_whnfR(x_4, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 5)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 5)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 5)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_box(0);
lean_inc(x_1);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Tactic_ReduceModChar_normNeg___closed__3;
lean_inc(x_22);
x_24 = l_Lean_Expr_const___override(x_23, x_22);
lean_inc(x_2);
x_25 = l_Lean_Expr_app___override(x_24, x_2);
x_26 = l_Tactic_ReduceModChar_normNeg___closed__6;
lean_inc(x_22);
x_27 = l_Lean_Expr_const___override(x_26, x_22);
lean_inc(x_2);
x_28 = l_Lean_Expr_app___override(x_27, x_2);
x_29 = l_Tactic_ReduceModChar_normNeg___closed__9;
lean_inc(x_22);
x_30 = l_Lean_Expr_const___override(x_29, x_22);
lean_inc(x_2);
x_31 = l_Lean_Expr_app___override(x_30, x_2);
x_32 = l_Tactic_ReduceModChar_normNeg___closed__12;
lean_inc(x_22);
x_33 = l_Lean_Expr_const___override(x_32, x_22);
lean_inc(x_2);
x_34 = l_Lean_Expr_app___override(x_33, x_2);
x_35 = l_Tactic_ReduceModChar_normNeg___closed__15;
lean_inc(x_22);
x_36 = l_Lean_Expr_const___override(x_35, x_22);
lean_inc(x_2);
x_37 = l_Lean_Expr_app___override(x_36, x_2);
x_38 = l_Tactic_ReduceModChar_normNeg___closed__18;
lean_inc(x_22);
x_39 = l_Lean_Expr_const___override(x_38, x_22);
lean_inc(x_2);
x_40 = l_Lean_Expr_app___override(x_39, x_2);
x_41 = l_Tactic_ReduceModChar_normNeg___closed__20;
lean_inc(x_22);
x_42 = l_Lean_Expr_const___override(x_41, x_22);
lean_inc(x_2);
x_43 = l_Lean_Expr_app___override(x_42, x_2);
lean_inc(x_5);
x_44 = l_Lean_Expr_app___override(x_43, x_5);
x_45 = l_Lean_Expr_app___override(x_40, x_44);
x_46 = l_Lean_Expr_app___override(x_37, x_45);
x_47 = l_Lean_Expr_app___override(x_34, x_46);
x_48 = l_Lean_Expr_app___override(x_31, x_47);
x_49 = l_Lean_Expr_app___override(x_28, x_48);
x_50 = l_Lean_Expr_app___override(x_25, x_49);
x_51 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq), 7, 2);
lean_closure_set(x_51, 0, x_17);
lean_closure_set(x_51, 1, x_50);
x_52 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_53 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_51, x_52, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_232; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_232 = lean_unbox(x_54);
lean_dec(x_54);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; uint8_t x_235; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_233 = l_Tactic_ReduceModChar_normPow___closed__2;
x_234 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_233, x_7, x_8, x_9, x_10, x_55);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_235 = !lean_is_exclusive(x_234);
if (x_235 == 0)
{
return x_234;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_234, 0);
x_237 = lean_ctor_get(x_234, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_234);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
}
else
{
x_56 = x_55;
goto block_231;
}
block_231:
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_inc(x_22);
lean_inc(x_1);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_1);
lean_ctor_set(x_57, 1, x_22);
lean_inc(x_1);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Tactic_ReduceModChar_normNeg___closed__55;
lean_inc(x_58);
x_60 = l_Lean_Expr_const___override(x_59, x_58);
lean_inc(x_2);
x_61 = l_Lean_Expr_app___override(x_60, x_2);
lean_inc(x_2);
x_62 = l_Lean_Expr_app___override(x_61, x_2);
lean_inc(x_2);
x_63 = l_Lean_Expr_app___override(x_62, x_2);
x_64 = l_Tactic_ReduceModChar_normNeg___closed__57;
lean_inc(x_22);
x_65 = l_Lean_Expr_const___override(x_64, x_22);
lean_inc(x_2);
x_66 = l_Lean_Expr_app___override(x_65, x_2);
x_67 = l_Tactic_ReduceModChar_normNeg___closed__60;
lean_inc(x_22);
x_68 = l_Lean_Expr_const___override(x_67, x_22);
lean_inc(x_2);
x_69 = l_Lean_Expr_app___override(x_68, x_2);
x_70 = l_Tactic_ReduceModChar_normNeg___closed__63;
lean_inc(x_22);
x_71 = l_Lean_Expr_const___override(x_70, x_22);
lean_inc(x_2);
x_72 = l_Lean_Expr_app___override(x_71, x_2);
x_73 = l_Tactic_ReduceModChar_normNeg___closed__66;
lean_inc(x_22);
x_74 = l_Lean_Expr_const___override(x_73, x_22);
lean_inc(x_2);
x_75 = l_Lean_Expr_app___override(x_74, x_2);
x_76 = l_Tactic_ReduceModChar_normNeg___closed__69;
lean_inc(x_22);
x_77 = l_Lean_Expr_const___override(x_76, x_22);
lean_inc(x_2);
x_78 = l_Lean_Expr_app___override(x_77, x_2);
x_79 = l_Tactic_ReduceModChar_normNeg___closed__71;
lean_inc(x_22);
x_80 = l_Lean_Expr_const___override(x_79, x_22);
lean_inc(x_2);
x_81 = l_Lean_Expr_app___override(x_80, x_2);
lean_inc(x_5);
x_82 = l_Lean_Expr_app___override(x_81, x_5);
x_83 = l_Lean_Expr_app___override(x_78, x_82);
x_84 = l_Lean_Expr_app___override(x_75, x_83);
x_85 = l_Lean_Expr_app___override(x_72, x_84);
x_86 = l_Lean_Expr_app___override(x_69, x_85);
x_87 = l_Lean_Expr_app___override(x_66, x_86);
x_88 = l_Lean_Expr_app___override(x_63, x_87);
lean_inc(x_88);
x_89 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq), 7, 2);
lean_closure_set(x_89, 0, x_19);
lean_closure_set(x_89, 1, x_88);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_90 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_89, x_52, x_7, x_8, x_9, x_10, x_56);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_220; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_220 = lean_unbox(x_91);
lean_dec(x_91);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; 
lean_dec(x_88);
lean_dec(x_58);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_221 = l_Tactic_ReduceModChar_normPow___closed__2;
x_222 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_221, x_7, x_8, x_9, x_10, x_92);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_223 = !lean_is_exclusive(x_222);
if (x_223 == 0)
{
return x_222;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_224 = lean_ctor_get(x_222, 0);
x_225 = lean_ctor_get(x_222, 1);
lean_inc(x_225);
lean_inc(x_224);
lean_dec(x_222);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set(x_226, 1, x_225);
return x_226;
}
}
else
{
x_93 = x_92;
goto block_219;
}
block_219:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_94 = l_Tactic_ReduceModChar_normNeg___closed__23;
x_95 = l_Lean_Expr_const___override(x_94, x_58);
lean_inc(x_2);
x_96 = l_Lean_Expr_app___override(x_95, x_2);
lean_inc(x_2);
x_97 = l_Lean_Expr_app___override(x_96, x_2);
lean_inc(x_2);
x_98 = l_Lean_Expr_app___override(x_97, x_2);
x_99 = l_Tactic_ReduceModChar_normNeg___closed__25;
lean_inc(x_22);
x_100 = l_Lean_Expr_const___override(x_99, x_22);
lean_inc(x_2);
x_101 = l_Lean_Expr_app___override(x_100, x_2);
x_102 = l_Tactic_ReduceModChar_normNeg___closed__28;
lean_inc(x_22);
x_103 = l_Lean_Expr_const___override(x_102, x_22);
lean_inc(x_2);
x_104 = l_Lean_Expr_app___override(x_103, x_2);
x_105 = l_Tactic_ReduceModChar_normNeg___closed__31;
lean_inc(x_22);
x_106 = l_Lean_Expr_const___override(x_105, x_22);
lean_inc(x_2);
x_107 = l_Lean_Expr_app___override(x_106, x_2);
x_108 = l_Tactic_ReduceModChar_normNeg___closed__34;
lean_inc(x_22);
x_109 = l_Lean_Expr_const___override(x_108, x_22);
lean_inc(x_2);
x_110 = l_Lean_Expr_app___override(x_109, x_2);
x_111 = l_Tactic_ReduceModChar_normNeg___closed__36;
lean_inc(x_22);
x_112 = l_Lean_Expr_const___override(x_111, x_22);
lean_inc(x_2);
x_113 = l_Lean_Expr_app___override(x_112, x_2);
lean_inc(x_5);
x_114 = l_Lean_Expr_app___override(x_113, x_5);
lean_inc(x_114);
x_115 = l_Lean_Expr_app___override(x_110, x_114);
x_116 = l_Lean_Expr_app___override(x_107, x_115);
x_117 = l_Lean_Expr_app___override(x_104, x_116);
x_118 = l_Lean_Expr_app___override(x_101, x_117);
x_119 = l_Lean_Expr_app___override(x_98, x_118);
x_120 = l_Tactic_ReduceModChar_normBareNumeral___closed__17;
lean_inc(x_22);
x_121 = l_Lean_Expr_const___override(x_120, x_22);
lean_inc(x_2);
x_122 = l_Lean_Expr_app___override(x_121, x_2);
x_123 = l_Tactic_ReduceModChar_normBareNumeral___closed__22;
lean_inc(x_22);
x_124 = l_Lean_Expr_const___override(x_123, x_22);
lean_inc(x_2);
x_125 = l_Lean_Expr_app___override(x_124, x_2);
x_126 = l_Tactic_ReduceModChar_normNeg___closed__38;
lean_inc(x_22);
x_127 = l_Lean_Expr_const___override(x_126, x_22);
lean_inc(x_2);
x_128 = l_Lean_Expr_app___override(x_127, x_2);
x_129 = l_Lean_Expr_app___override(x_128, x_114);
lean_inc(x_129);
x_130 = l_Lean_Expr_app___override(x_125, x_129);
x_131 = l_Lean_Expr_app___override(x_122, x_130);
lean_inc(x_3);
x_132 = l_Lean_Expr_app___override(x_131, x_3);
x_133 = l_Lean_Expr_app___override(x_119, x_132);
x_134 = l_Tactic_ReduceModChar_normNeg___closed__41;
lean_inc(x_22);
x_135 = l_Lean_Expr_const___override(x_134, x_22);
lean_inc(x_2);
x_136 = l_Lean_Expr_app___override(x_135, x_2);
x_137 = l_Tactic_ReduceModChar_normNeg___closed__43;
x_138 = l_Lean_Expr_app___override(x_136, x_137);
x_139 = l_Tactic_ReduceModChar_normNeg___closed__46;
lean_inc(x_22);
x_140 = l_Lean_Expr_const___override(x_139, x_22);
lean_inc(x_2);
x_141 = l_Lean_Expr_app___override(x_140, x_2);
x_142 = l_Tactic_ReduceModChar_normNeg___closed__48;
lean_inc(x_22);
x_143 = l_Lean_Expr_const___override(x_142, x_22);
lean_inc(x_2);
x_144 = l_Lean_Expr_app___override(x_143, x_2);
x_145 = l_Lean_Expr_app___override(x_144, x_129);
x_146 = l_Lean_Expr_app___override(x_141, x_145);
x_147 = l_Lean_Expr_app___override(x_138, x_146);
x_148 = l_Lean_Expr_app___override(x_133, x_147);
lean_inc(x_88);
x_149 = l_Lean_Expr_app___override(x_88, x_148);
lean_inc(x_20);
x_150 = l_Lean_Expr_app___override(x_149, x_20);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_151 = l_Mathlib_Meta_NormNum_derive(x_1, x_2, x_150, x_52, x_7, x_8, x_9, x_10, x_93);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
switch (lean_obj_tag(x_152)) {
case 1:
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_154 = lean_ctor_get(x_152, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_152, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_152, 2);
lean_inc(x_156);
lean_dec(x_152);
lean_inc(x_155);
lean_inc(x_2);
x_157 = l_Mathlib_Meta_NormNum_mkOfNat(x_1, x_2, x_154, x_155, x_7, x_8, x_9, x_10, x_153);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_157) == 0)
{
uint8_t x_158; 
x_158 = !lean_is_exclusive(x_157);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; 
x_159 = lean_ctor_get(x_157, 0);
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
lean_inc(x_160);
x_162 = l_Lean_Expr_app___override(x_88, x_160);
lean_inc(x_18);
x_163 = l_Lean_Expr_app___override(x_162, x_18);
x_164 = l_Tactic_ReduceModChar_normNegCoeffMul___closed__4;
x_165 = l_Lean_Expr_const___override(x_164, x_22);
x_166 = l_Lean_Expr_app___override(x_165, x_2);
x_167 = l_Lean_Expr_app___override(x_166, x_5);
x_168 = l_Lean_Expr_app___override(x_167, x_3);
x_169 = l_Lean_Expr_app___override(x_168, x_6);
x_170 = l_Lean_Expr_app___override(x_169, x_20);
x_171 = l_Lean_Expr_app___override(x_170, x_18);
x_172 = l_Lean_Expr_app___override(x_171, x_155);
x_173 = l_Lean_Expr_app___override(x_172, x_160);
x_174 = l_Lean_Expr_app___override(x_173, x_156);
x_175 = l_Lean_Expr_app___override(x_174, x_161);
x_176 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_176, 0, x_175);
x_177 = 1;
x_178 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_178, 0, x_163);
lean_ctor_set(x_178, 1, x_176);
lean_ctor_set_uint8(x_178, sizeof(void*)*2, x_177);
lean_ctor_set(x_157, 0, x_178);
return x_157;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; lean_object* x_200; 
x_179 = lean_ctor_get(x_157, 0);
x_180 = lean_ctor_get(x_157, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_157);
x_181 = lean_ctor_get(x_179, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_179, 1);
lean_inc(x_182);
lean_dec(x_179);
lean_inc(x_181);
x_183 = l_Lean_Expr_app___override(x_88, x_181);
lean_inc(x_18);
x_184 = l_Lean_Expr_app___override(x_183, x_18);
x_185 = l_Tactic_ReduceModChar_normNegCoeffMul___closed__4;
x_186 = l_Lean_Expr_const___override(x_185, x_22);
x_187 = l_Lean_Expr_app___override(x_186, x_2);
x_188 = l_Lean_Expr_app___override(x_187, x_5);
x_189 = l_Lean_Expr_app___override(x_188, x_3);
x_190 = l_Lean_Expr_app___override(x_189, x_6);
x_191 = l_Lean_Expr_app___override(x_190, x_20);
x_192 = l_Lean_Expr_app___override(x_191, x_18);
x_193 = l_Lean_Expr_app___override(x_192, x_155);
x_194 = l_Lean_Expr_app___override(x_193, x_181);
x_195 = l_Lean_Expr_app___override(x_194, x_156);
x_196 = l_Lean_Expr_app___override(x_195, x_182);
x_197 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_197, 0, x_196);
x_198 = 1;
x_199 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_199, 0, x_184);
lean_ctor_set(x_199, 1, x_197);
lean_ctor_set_uint8(x_199, sizeof(void*)*2, x_198);
x_200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_180);
return x_200;
}
}
else
{
uint8_t x_201; 
lean_dec(x_156);
lean_dec(x_155);
lean_dec(x_88);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_201 = !lean_is_exclusive(x_157);
if (x_201 == 0)
{
return x_157;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_157, 0);
x_203 = lean_ctor_get(x_157, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_157);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
return x_204;
}
}
}
case 2:
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_152);
lean_dec(x_88);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_205 = lean_ctor_get(x_151, 1);
lean_inc(x_205);
lean_dec(x_151);
x_206 = l_Tactic_ReduceModChar_normNegCoeffMul___closed__6;
x_207 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_206, x_7, x_8, x_9, x_10, x_205);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_207;
}
default: 
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_152);
lean_dec(x_88);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_208 = lean_ctor_get(x_151, 1);
lean_inc(x_208);
lean_dec(x_151);
x_209 = l_Lean_MessageData_ofExpr(x_3);
x_210 = l_Tactic_ReduceModChar_normNegCoeffMul___closed__2;
x_211 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_209);
x_212 = l_Tactic_ReduceModChar_normNeg___closed__52;
x_213 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
x_214 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_213, x_7, x_8, x_9, x_10, x_208);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_214;
}
}
}
else
{
uint8_t x_215; 
lean_dec(x_88);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_215 = !lean_is_exclusive(x_151);
if (x_215 == 0)
{
return x_151;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_151, 0);
x_217 = lean_ctor_get(x_151, 1);
lean_inc(x_217);
lean_inc(x_216);
lean_dec(x_151);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
return x_218;
}
}
}
}
else
{
uint8_t x_227; 
lean_dec(x_88);
lean_dec(x_58);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_227 = !lean_is_exclusive(x_90);
if (x_227 == 0)
{
return x_90;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_90, 0);
x_229 = lean_ctor_get(x_90, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_90);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
return x_230;
}
}
}
}
else
{
uint8_t x_239; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_239 = !lean_is_exclusive(x_53);
if (x_239 == 0)
{
return x_53;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_53, 0);
x_241 = lean_ctor_get(x_53, 1);
lean_inc(x_241);
lean_inc(x_240);
lean_dec(x_53);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_240);
lean_ctor_set(x_242, 1, x_241);
return x_242;
}
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_243 = lean_ctor_get(x_12, 1);
lean_inc(x_243);
lean_dec(x_12);
x_244 = l_Tactic_ReduceModChar_normPow___closed__2;
x_245 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_244, x_7, x_8, x_9, x_10, x_243);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_245;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_246 = lean_ctor_get(x_12, 1);
lean_inc(x_246);
lean_dec(x_12);
x_247 = l_Tactic_ReduceModChar_normPow___closed__2;
x_248 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_247, x_7, x_8, x_9, x_10, x_246);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_248;
}
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_249 = lean_ctor_get(x_12, 1);
lean_inc(x_249);
lean_dec(x_12);
x_250 = l_Tactic_ReduceModChar_normPow___closed__2;
x_251 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_250, x_7, x_8, x_9, x_10, x_249);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_251;
}
}
else
{
uint8_t x_252; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_252 = !lean_is_exclusive(x_12);
if (x_252 == 0)
{
return x_12;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_253 = lean_ctor_get(x_12, 0);
x_254 = lean_ctor_get(x_12, 1);
lean_inc(x_254);
lean_inc(x_253);
lean_dec(x_12);
x_255 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_255, 0, x_253);
lean_ctor_set(x_255, 1, x_254);
return x_255;
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_instInhabitedTypeToCharPResult(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_instInhabitedTypeToCharPResult___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Tactic_ReduceModChar_instInhabitedTypeToCharPResult(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__60;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_11 = l_Qq_trySynthInstanceQ___rarg(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Tactic_ReduceModChar_normPow___closed__3;
x_16 = l_Lean_Expr_const___override(x_15, x_4);
x_17 = 0;
x_18 = lean_box(0);
lean_inc(x_6);
x_19 = l_Qq_mkFreshExprMVarQ___rarg(x_16, x_17, x_18, x_6, x_7, x_8, x_9, x_13);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Tactic_ReduceModChar_typeToCharP___lambda__1___closed__1;
lean_inc(x_5);
x_23 = l_Lean_Expr_const___override(x_22, x_5);
lean_inc(x_3);
x_24 = l_Lean_Expr_app___override(x_23, x_3);
x_25 = l_Tactic_ReduceModChar_normNeg___closed__38;
lean_inc(x_5);
x_26 = l_Lean_Expr_const___override(x_25, x_5);
lean_inc(x_3);
x_27 = l_Lean_Expr_app___override(x_26, x_3);
x_28 = l_Tactic_ReduceModChar_normNeg___closed__36;
x_29 = l_Lean_Expr_const___override(x_28, x_5);
x_30 = l_Lean_Expr_app___override(x_29, x_3);
lean_inc(x_14);
x_31 = l_Lean_Expr_app___override(x_30, x_14);
x_32 = l_Lean_Expr_app___override(x_27, x_31);
x_33 = l_Lean_Expr_app___override(x_24, x_32);
lean_inc(x_20);
x_34 = l_Lean_Expr_app___override(x_33, x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_35 = l_Qq_findLocalDeclWithTypeQ_x3f___rarg(x_34, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_35, 0);
lean_dec(x_38);
x_39 = lean_box(1);
lean_ctor_set(x_35, 0, x_39);
return x_35;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_dec(x_35);
x_41 = lean_box(1);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_ctor_get(x_35, 1);
lean_inc(x_43);
lean_dec(x_35);
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
x_45 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_20, x_6, x_7, x_8, x_9, x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_14);
lean_ctor_set(x_48, 2, x_44);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_14);
lean_ctor_set(x_51, 2, x_44);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_53 = !lean_is_exclusive(x_35);
if (x_53 == 0)
{
return x_35;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_35, 0);
x_55 = lean_ctor_get(x_35, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_35);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_11);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_11, 0);
lean_dec(x_58);
x_59 = lean_box(1);
lean_ctor_set(x_11, 0, x_59);
return x_11;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_11, 1);
lean_inc(x_60);
lean_dec(x_11);
x_61 = lean_box(1);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_63 = !lean_is_exclusive(x_11);
if (x_63 == 0)
{
return x_11;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_11, 0);
x_65 = lean_ctor_get(x_11, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_11);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_normPow___closed__22;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ZMod", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Polynomial", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ring", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_typeToCharP___closed__3;
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instCharP", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_typeToCharP___closed__3;
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__8;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CommRing", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toRing", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_typeToCharP___closed__10;
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__11;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_typeToCharP___closed__12;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__4;
x_3 = l_Lean_Expr_const___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("commRing", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_typeToCharP___closed__2;
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__14;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__15;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("charP", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_typeToCharP___closed__2;
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__17;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_typeToCharP___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_typeToCharP___closed__18;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
x_9 = l_Lean_Expr_getAppFnArgs(x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = l_Tactic_ReduceModChar_typeToCharP___closed__2;
x_17 = lean_string_dec_eq(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Tactic_ReduceModChar_typeToCharP___closed__3;
x_19 = lean_string_dec_eq(x_15, x_18);
lean_dec(x_15);
if (x_19 == 0)
{
lean_dec(x_13);
if (x_2 == 0)
{
lean_object* x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = lean_box(1);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_21 = lean_box(0);
lean_inc(x_1);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_21);
lean_ctor_set(x_9, 0, x_1);
x_22 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_9);
x_23 = l_Lean_Expr_const___override(x_22, x_9);
lean_inc(x_3);
x_24 = l_Lean_Expr_app___override(x_23, x_3);
x_25 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_1);
lean_closure_set(x_25, 2, x_3);
lean_closure_set(x_25, 3, x_21);
lean_closure_set(x_25, 4, x_9);
x_26 = 0;
x_27 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_25, x_26, x_4, x_5, x_6, x_7, x_8);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_array_get_size(x_13);
x_29 = lean_unsigned_to_nat(2u);
x_30 = lean_nat_dec_eq(x_28, x_29);
lean_dec(x_28);
if (x_30 == 0)
{
lean_dec(x_13);
if (x_2 == 0)
{
lean_object* x_31; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = lean_box(1);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 0, x_31);
return x_9;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_32 = lean_box(0);
lean_inc(x_1);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_32);
lean_ctor_set(x_9, 0, x_1);
x_33 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_9);
x_34 = l_Lean_Expr_const___override(x_33, x_9);
lean_inc(x_3);
x_35 = l_Lean_Expr_app___override(x_34, x_3);
x_36 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_36, 0, x_35);
lean_closure_set(x_36, 1, x_1);
lean_closure_set(x_36, 2, x_3);
lean_closure_set(x_36, 3, x_32);
lean_closure_set(x_36, 4, x_9);
x_37 = 0;
x_38 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_36, x_37, x_4, x_5, x_6, x_7, x_8);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_3);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_array_fget(x_13, x_39);
lean_dec(x_13);
lean_inc(x_40);
lean_inc(x_1);
x_41 = l_Tactic_ReduceModChar_typeToCharP(x_1, x_2, x_40, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_41);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_ctor_get(x_41, 0);
lean_dec(x_44);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
x_48 = lean_ctor_get(x_42, 2);
x_49 = lean_box(0);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_49);
lean_ctor_set(x_9, 0, x_1);
x_50 = l_Tactic_ReduceModChar_normPow___closed__24;
lean_inc(x_9);
x_51 = l_Lean_Expr_const___override(x_50, x_9);
lean_inc(x_40);
x_52 = l_Lean_Expr_app___override(x_51, x_40);
lean_inc(x_47);
x_53 = l_Lean_Expr_app___override(x_52, x_47);
x_54 = l_Tactic_ReduceModChar_typeToCharP___closed__5;
lean_inc(x_9);
x_55 = l_Lean_Expr_const___override(x_54, x_9);
lean_inc(x_40);
x_56 = l_Lean_Expr_app___override(x_55, x_40);
x_57 = l_Lean_Expr_app___override(x_56, x_47);
x_58 = l_Tactic_ReduceModChar_typeToCharP___closed__7;
x_59 = l_Lean_Expr_const___override(x_58, x_9);
x_60 = l_Lean_Expr_app___override(x_59, x_40);
x_61 = l_Lean_Expr_app___override(x_60, x_53);
lean_inc(x_46);
x_62 = l_Lean_Expr_app___override(x_61, x_46);
x_63 = l_Lean_Expr_app___override(x_62, x_48);
lean_ctor_set(x_42, 2, x_63);
lean_ctor_set(x_42, 1, x_57);
return x_41;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_64 = lean_ctor_get(x_42, 0);
x_65 = lean_ctor_get(x_42, 1);
x_66 = lean_ctor_get(x_42, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_42);
x_67 = lean_box(0);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_67);
lean_ctor_set(x_9, 0, x_1);
x_68 = l_Tactic_ReduceModChar_normPow___closed__24;
lean_inc(x_9);
x_69 = l_Lean_Expr_const___override(x_68, x_9);
lean_inc(x_40);
x_70 = l_Lean_Expr_app___override(x_69, x_40);
lean_inc(x_65);
x_71 = l_Lean_Expr_app___override(x_70, x_65);
x_72 = l_Tactic_ReduceModChar_typeToCharP___closed__5;
lean_inc(x_9);
x_73 = l_Lean_Expr_const___override(x_72, x_9);
lean_inc(x_40);
x_74 = l_Lean_Expr_app___override(x_73, x_40);
x_75 = l_Lean_Expr_app___override(x_74, x_65);
x_76 = l_Tactic_ReduceModChar_typeToCharP___closed__7;
x_77 = l_Lean_Expr_const___override(x_76, x_9);
x_78 = l_Lean_Expr_app___override(x_77, x_40);
x_79 = l_Lean_Expr_app___override(x_78, x_71);
lean_inc(x_64);
x_80 = l_Lean_Expr_app___override(x_79, x_64);
x_81 = l_Lean_Expr_app___override(x_80, x_66);
x_82 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_82, 0, x_64);
lean_ctor_set(x_82, 1, x_75);
lean_ctor_set(x_82, 2, x_81);
lean_ctor_set(x_41, 0, x_82);
return x_41;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_83 = lean_ctor_get(x_41, 1);
lean_inc(x_83);
lean_dec(x_41);
x_84 = lean_ctor_get(x_42, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_42, 1);
lean_inc(x_85);
x_86 = lean_ctor_get(x_42, 2);
lean_inc(x_86);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 lean_ctor_release(x_42, 2);
 x_87 = x_42;
} else {
 lean_dec_ref(x_42);
 x_87 = lean_box(0);
}
x_88 = lean_box(0);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_88);
lean_ctor_set(x_9, 0, x_1);
x_89 = l_Tactic_ReduceModChar_normPow___closed__24;
lean_inc(x_9);
x_90 = l_Lean_Expr_const___override(x_89, x_9);
lean_inc(x_40);
x_91 = l_Lean_Expr_app___override(x_90, x_40);
lean_inc(x_85);
x_92 = l_Lean_Expr_app___override(x_91, x_85);
x_93 = l_Tactic_ReduceModChar_typeToCharP___closed__5;
lean_inc(x_9);
x_94 = l_Lean_Expr_const___override(x_93, x_9);
lean_inc(x_40);
x_95 = l_Lean_Expr_app___override(x_94, x_40);
x_96 = l_Lean_Expr_app___override(x_95, x_85);
x_97 = l_Tactic_ReduceModChar_typeToCharP___closed__7;
x_98 = l_Lean_Expr_const___override(x_97, x_9);
x_99 = l_Lean_Expr_app___override(x_98, x_40);
x_100 = l_Lean_Expr_app___override(x_99, x_92);
lean_inc(x_84);
x_101 = l_Lean_Expr_app___override(x_100, x_84);
x_102 = l_Lean_Expr_app___override(x_101, x_86);
if (lean_is_scalar(x_87)) {
 x_103 = lean_alloc_ctor(0, 3, 0);
} else {
 x_103 = x_87;
}
lean_ctor_set(x_103, 0, x_84);
lean_ctor_set(x_103, 1, x_96);
lean_ctor_set(x_103, 2, x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_83);
return x_104;
}
}
else
{
uint8_t x_105; 
lean_dec(x_40);
lean_free_object(x_9);
lean_dec(x_1);
x_105 = !lean_is_exclusive(x_41);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_41, 0);
lean_dec(x_106);
x_107 = lean_box(1);
lean_ctor_set(x_41, 0, x_107);
return x_41;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_41, 1);
lean_inc(x_108);
lean_dec(x_41);
x_109 = lean_box(1);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_40);
lean_free_object(x_9);
lean_dec(x_1);
x_111 = !lean_is_exclusive(x_41);
if (x_111 == 0)
{
return x_41;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_41, 0);
x_113 = lean_ctor_get(x_41, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_41);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
}
else
{
lean_object* x_115; lean_object* x_116; uint8_t x_117; 
lean_dec(x_15);
x_115 = lean_array_get_size(x_13);
x_116 = lean_unsigned_to_nat(1u);
x_117 = lean_nat_dec_eq(x_115, x_116);
lean_dec(x_115);
if (x_117 == 0)
{
lean_dec(x_13);
if (x_2 == 0)
{
lean_object* x_118; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_118 = lean_box(1);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 0, x_118);
return x_9;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; 
x_119 = lean_box(0);
lean_inc(x_1);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_119);
lean_ctor_set(x_9, 0, x_1);
x_120 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_9);
x_121 = l_Lean_Expr_const___override(x_120, x_9);
lean_inc(x_3);
x_122 = l_Lean_Expr_app___override(x_121, x_3);
x_123 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_123, 0, x_122);
lean_closure_set(x_123, 1, x_1);
lean_closure_set(x_123, 2, x_3);
lean_closure_set(x_123, 3, x_119);
lean_closure_set(x_123, 4, x_9);
x_124 = 0;
x_125 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_123, x_124, x_4, x_5, x_6, x_7, x_8);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_126 = lean_unsigned_to_nat(0u);
x_127 = lean_array_fget(x_13, x_126);
lean_dec(x_13);
x_128 = l_Tactic_ReduceModChar_typeToCharP___closed__9;
lean_inc(x_127);
x_129 = l_Lean_Expr_app___override(x_128, x_127);
x_130 = l_Tactic_ReduceModChar_typeToCharP___closed__13;
x_131 = l_Lean_Expr_app___override(x_130, x_129);
x_132 = l_Tactic_ReduceModChar_typeToCharP___closed__16;
lean_inc(x_127);
x_133 = l_Lean_Expr_app___override(x_132, x_127);
x_134 = l_Lean_Expr_app___override(x_131, x_133);
x_135 = l_Tactic_ReduceModChar_typeToCharP___closed__19;
lean_inc(x_127);
x_136 = l_Lean_Expr_app___override(x_135, x_127);
x_137 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_137, 0, x_127);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_136);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 0, x_137);
return x_9;
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_138 = lean_ctor_get(x_9, 1);
lean_inc(x_138);
lean_dec(x_9);
x_139 = lean_ctor_get(x_10, 1);
lean_inc(x_139);
lean_dec(x_10);
x_140 = l_Tactic_ReduceModChar_typeToCharP___closed__2;
x_141 = lean_string_dec_eq(x_139, x_140);
if (x_141 == 0)
{
lean_object* x_142; uint8_t x_143; 
x_142 = l_Tactic_ReduceModChar_typeToCharP___closed__3;
x_143 = lean_string_dec_eq(x_139, x_142);
lean_dec(x_139);
if (x_143 == 0)
{
lean_dec(x_138);
if (x_2 == 0)
{
lean_object* x_144; lean_object* x_145; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_144 = lean_box(1);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_8);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; 
x_146 = lean_box(0);
lean_inc(x_1);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_1);
lean_ctor_set(x_147, 1, x_146);
x_148 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_147);
x_149 = l_Lean_Expr_const___override(x_148, x_147);
lean_inc(x_3);
x_150 = l_Lean_Expr_app___override(x_149, x_3);
x_151 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_151, 0, x_150);
lean_closure_set(x_151, 1, x_1);
lean_closure_set(x_151, 2, x_3);
lean_closure_set(x_151, 3, x_146);
lean_closure_set(x_151, 4, x_147);
x_152 = 0;
x_153 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_151, x_152, x_4, x_5, x_6, x_7, x_8);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_154 = lean_array_get_size(x_138);
x_155 = lean_unsigned_to_nat(2u);
x_156 = lean_nat_dec_eq(x_154, x_155);
lean_dec(x_154);
if (x_156 == 0)
{
lean_dec(x_138);
if (x_2 == 0)
{
lean_object* x_157; lean_object* x_158; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_157 = lean_box(1);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_8);
return x_158;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; lean_object* x_166; 
x_159 = lean_box(0);
lean_inc(x_1);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_1);
lean_ctor_set(x_160, 1, x_159);
x_161 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_160);
x_162 = l_Lean_Expr_const___override(x_161, x_160);
lean_inc(x_3);
x_163 = l_Lean_Expr_app___override(x_162, x_3);
x_164 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_164, 0, x_163);
lean_closure_set(x_164, 1, x_1);
lean_closure_set(x_164, 2, x_3);
lean_closure_set(x_164, 3, x_159);
lean_closure_set(x_164, 4, x_160);
x_165 = 0;
x_166 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_164, x_165, x_4, x_5, x_6, x_7, x_8);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_3);
x_167 = lean_unsigned_to_nat(0u);
x_168 = lean_array_fget(x_138, x_167);
lean_dec(x_138);
lean_inc(x_168);
lean_inc(x_1);
x_169 = l_Tactic_ReduceModChar_typeToCharP(x_1, x_2, x_168, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_172 = x_169;
} else {
 lean_dec_ref(x_169);
 x_172 = lean_box(0);
}
x_173 = lean_ctor_get(x_170, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_170, 1);
lean_inc(x_174);
x_175 = lean_ctor_get(x_170, 2);
lean_inc(x_175);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 lean_ctor_release(x_170, 2);
 x_176 = x_170;
} else {
 lean_dec_ref(x_170);
 x_176 = lean_box(0);
}
x_177 = lean_box(0);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_1);
lean_ctor_set(x_178, 1, x_177);
x_179 = l_Tactic_ReduceModChar_normPow___closed__24;
lean_inc(x_178);
x_180 = l_Lean_Expr_const___override(x_179, x_178);
lean_inc(x_168);
x_181 = l_Lean_Expr_app___override(x_180, x_168);
lean_inc(x_174);
x_182 = l_Lean_Expr_app___override(x_181, x_174);
x_183 = l_Tactic_ReduceModChar_typeToCharP___closed__5;
lean_inc(x_178);
x_184 = l_Lean_Expr_const___override(x_183, x_178);
lean_inc(x_168);
x_185 = l_Lean_Expr_app___override(x_184, x_168);
x_186 = l_Lean_Expr_app___override(x_185, x_174);
x_187 = l_Tactic_ReduceModChar_typeToCharP___closed__7;
x_188 = l_Lean_Expr_const___override(x_187, x_178);
x_189 = l_Lean_Expr_app___override(x_188, x_168);
x_190 = l_Lean_Expr_app___override(x_189, x_182);
lean_inc(x_173);
x_191 = l_Lean_Expr_app___override(x_190, x_173);
x_192 = l_Lean_Expr_app___override(x_191, x_175);
if (lean_is_scalar(x_176)) {
 x_193 = lean_alloc_ctor(0, 3, 0);
} else {
 x_193 = x_176;
}
lean_ctor_set(x_193, 0, x_173);
lean_ctor_set(x_193, 1, x_186);
lean_ctor_set(x_193, 2, x_192);
if (lean_is_scalar(x_172)) {
 x_194 = lean_alloc_ctor(0, 2, 0);
} else {
 x_194 = x_172;
}
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_171);
return x_194;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_168);
lean_dec(x_1);
x_195 = lean_ctor_get(x_169, 1);
lean_inc(x_195);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_196 = x_169;
} else {
 lean_dec_ref(x_169);
 x_196 = lean_box(0);
}
x_197 = lean_box(1);
if (lean_is_scalar(x_196)) {
 x_198 = lean_alloc_ctor(0, 2, 0);
} else {
 x_198 = x_196;
}
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_195);
return x_198;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_168);
lean_dec(x_1);
x_199 = lean_ctor_get(x_169, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_169, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_201 = x_169;
} else {
 lean_dec_ref(x_169);
 x_201 = lean_box(0);
}
if (lean_is_scalar(x_201)) {
 x_202 = lean_alloc_ctor(1, 2, 0);
} else {
 x_202 = x_201;
}
lean_ctor_set(x_202, 0, x_199);
lean_ctor_set(x_202, 1, x_200);
return x_202;
}
}
}
}
else
{
lean_object* x_203; lean_object* x_204; uint8_t x_205; 
lean_dec(x_139);
x_203 = lean_array_get_size(x_138);
x_204 = lean_unsigned_to_nat(1u);
x_205 = lean_nat_dec_eq(x_203, x_204);
lean_dec(x_203);
if (x_205 == 0)
{
lean_dec(x_138);
if (x_2 == 0)
{
lean_object* x_206; lean_object* x_207; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_206 = lean_box(1);
x_207 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_8);
return x_207;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; 
x_208 = lean_box(0);
lean_inc(x_1);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_1);
lean_ctor_set(x_209, 1, x_208);
x_210 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_209);
x_211 = l_Lean_Expr_const___override(x_210, x_209);
lean_inc(x_3);
x_212 = l_Lean_Expr_app___override(x_211, x_3);
x_213 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_213, 0, x_212);
lean_closure_set(x_213, 1, x_1);
lean_closure_set(x_213, 2, x_3);
lean_closure_set(x_213, 3, x_208);
lean_closure_set(x_213, 4, x_209);
x_214 = 0;
x_215 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_213, x_214, x_4, x_5, x_6, x_7, x_8);
return x_215;
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_216 = lean_unsigned_to_nat(0u);
x_217 = lean_array_fget(x_138, x_216);
lean_dec(x_138);
x_218 = l_Tactic_ReduceModChar_typeToCharP___closed__9;
lean_inc(x_217);
x_219 = l_Lean_Expr_app___override(x_218, x_217);
x_220 = l_Tactic_ReduceModChar_typeToCharP___closed__13;
x_221 = l_Lean_Expr_app___override(x_220, x_219);
x_222 = l_Tactic_ReduceModChar_typeToCharP___closed__16;
lean_inc(x_217);
x_223 = l_Lean_Expr_app___override(x_222, x_217);
x_224 = l_Lean_Expr_app___override(x_221, x_223);
x_225 = l_Tactic_ReduceModChar_typeToCharP___closed__19;
lean_inc(x_217);
x_226 = l_Lean_Expr_app___override(x_225, x_217);
x_227 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_227, 0, x_217);
lean_ctor_set(x_227, 1, x_224);
lean_ctor_set(x_227, 2, x_226);
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_8);
return x_228;
}
}
}
}
else
{
uint8_t x_229; 
lean_dec(x_11);
lean_dec(x_10);
x_229 = !lean_is_exclusive(x_9);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; 
x_230 = lean_ctor_get(x_9, 1);
lean_dec(x_230);
x_231 = lean_ctor_get(x_9, 0);
lean_dec(x_231);
if (x_2 == 0)
{
lean_object* x_232; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_232 = lean_box(1);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 0, x_232);
return x_9;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; lean_object* x_239; 
x_233 = lean_box(0);
lean_inc(x_1);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_233);
lean_ctor_set(x_9, 0, x_1);
x_234 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_9);
x_235 = l_Lean_Expr_const___override(x_234, x_9);
lean_inc(x_3);
x_236 = l_Lean_Expr_app___override(x_235, x_3);
x_237 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_237, 0, x_236);
lean_closure_set(x_237, 1, x_1);
lean_closure_set(x_237, 2, x_3);
lean_closure_set(x_237, 3, x_233);
lean_closure_set(x_237, 4, x_9);
x_238 = 0;
x_239 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_237, x_238, x_4, x_5, x_6, x_7, x_8);
return x_239;
}
}
else
{
lean_dec(x_9);
if (x_2 == 0)
{
lean_object* x_240; lean_object* x_241; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_240 = lean_box(1);
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_8);
return x_241;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; lean_object* x_249; 
x_242 = lean_box(0);
lean_inc(x_1);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_1);
lean_ctor_set(x_243, 1, x_242);
x_244 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_243);
x_245 = l_Lean_Expr_const___override(x_244, x_243);
lean_inc(x_3);
x_246 = l_Lean_Expr_app___override(x_245, x_3);
x_247 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_247, 0, x_246);
lean_closure_set(x_247, 1, x_1);
lean_closure_set(x_247, 2, x_3);
lean_closure_set(x_247, 3, x_242);
lean_closure_set(x_247, 4, x_243);
x_248 = 0;
x_249 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_247, x_248, x_4, x_5, x_6, x_7, x_8);
return x_249;
}
}
}
}
else
{
uint8_t x_250; 
lean_dec(x_10);
x_250 = !lean_is_exclusive(x_9);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; 
x_251 = lean_ctor_get(x_9, 1);
lean_dec(x_251);
x_252 = lean_ctor_get(x_9, 0);
lean_dec(x_252);
if (x_2 == 0)
{
lean_object* x_253; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_253 = lean_box(1);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 0, x_253);
return x_9;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; lean_object* x_260; 
x_254 = lean_box(0);
lean_inc(x_1);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_254);
lean_ctor_set(x_9, 0, x_1);
x_255 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_9);
x_256 = l_Lean_Expr_const___override(x_255, x_9);
lean_inc(x_3);
x_257 = l_Lean_Expr_app___override(x_256, x_3);
x_258 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_258, 0, x_257);
lean_closure_set(x_258, 1, x_1);
lean_closure_set(x_258, 2, x_3);
lean_closure_set(x_258, 3, x_254);
lean_closure_set(x_258, 4, x_9);
x_259 = 0;
x_260 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_258, x_259, x_4, x_5, x_6, x_7, x_8);
return x_260;
}
}
else
{
lean_dec(x_9);
if (x_2 == 0)
{
lean_object* x_261; lean_object* x_262; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_261 = lean_box(1);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_8);
return x_262;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; uint8_t x_269; lean_object* x_270; 
x_263 = lean_box(0);
lean_inc(x_1);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_1);
lean_ctor_set(x_264, 1, x_263);
x_265 = l_Tactic_ReduceModChar_typeToCharP___closed__1;
lean_inc(x_264);
x_266 = l_Lean_Expr_const___override(x_265, x_264);
lean_inc(x_3);
x_267 = l_Lean_Expr_app___override(x_266, x_3);
x_268 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed), 10, 5);
lean_closure_set(x_268, 0, x_267);
lean_closure_set(x_268, 1, x_1);
lean_closure_set(x_268, 2, x_3);
lean_closure_set(x_268, 3, x_263);
lean_closure_set(x_268, 4, x_264);
x_269 = 0;
x_270 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_268, x_269, x_4, x_5, x_6, x_7, x_8);
return x_270;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Tactic_ReduceModChar_typeToCharP___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_typeToCharP___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_Tactic_ReduceModChar_typeToCharP(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("expected ", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_matchAndNorm___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" to be a `Type _`, not `Sort ", 29, 29);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_matchAndNorm___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_matchAndNorm___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inferred type `", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_matchAndNorm___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` does not have a known characteristic", 38, 38);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_matchAndNorm___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_matchAndNorm___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_matchAndNorm(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_9);
x_11 = l_Lean_Meta_getLevel(x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_14);
x_15 = l_Tactic_ReduceModChar_typeToCharP(x_14, x_1, x_9, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_55; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 2);
lean_inc(x_20);
lean_dec(x_16);
x_21 = l_Lean_Meta_saveState___rarg(x_4, x_5, x_6, x_17);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 x_24 = x_21;
} else {
 lean_dec_ref(x_21);
 x_24 = lean_box(0);
}
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_2);
lean_inc(x_18);
lean_inc(x_9);
lean_inc(x_14);
x_55 = l_Tactic_ReduceModChar_normIntNumeral(x_14, x_9, x_18, x_2, x_19, x_20, x_3, x_4, x_5, x_6, x_23);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_2);
lean_inc(x_9);
lean_inc(x_14);
x_58 = l_Mathlib_Meta_NormNum_Result_toSimpResult(x_14, x_9, x_2, x_56, x_3, x_4, x_5, x_6, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_25 = x_59;
x_26 = x_60;
goto block_54;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_55, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
lean_dec(x_55);
x_25 = x_61;
x_26 = x_62;
goto block_54;
}
block_54:
{
uint8_t x_27; 
x_27 = l_Lean_Exception_isInterrupt(x_25);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = l_Lean_Exception_isRuntime(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_25);
lean_dec(x_24);
x_29 = l_Lean_Meta_SavedState_restore(x_22, x_3, x_4, x_5, x_6, x_26);
lean_dec(x_22);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_Meta_saveState___rarg(x_4, x_5, x_6, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_2);
lean_inc(x_18);
lean_inc(x_9);
lean_inc(x_14);
x_34 = l_Tactic_ReduceModChar_normNegCoeffMul(x_14, x_9, x_18, x_2, x_19, x_20, x_3, x_4, x_5, x_6, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_ctor_get(x_34, 1);
x_38 = l_Lean_Exception_isInterrupt(x_36);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = l_Lean_Exception_isRuntime(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_free_object(x_34);
lean_dec(x_36);
x_40 = l_Lean_Meta_SavedState_restore(x_32, x_3, x_4, x_5, x_6, x_37);
lean_dec(x_32);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Tactic_ReduceModChar_normNeg(x_14, x_9, x_18, x_2, x_19, x_20, x_3, x_4, x_5, x_6, x_41);
return x_42;
}
else
{
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_34;
}
}
else
{
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_34;
}
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_34, 0);
x_44 = lean_ctor_get(x_34, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_34);
x_45 = l_Lean_Exception_isInterrupt(x_43);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = l_Lean_Exception_isRuntime(x_43);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_43);
x_47 = l_Lean_Meta_SavedState_restore(x_32, x_3, x_4, x_5, x_6, x_44);
lean_dec(x_32);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Tactic_ReduceModChar_normNeg(x_14, x_9, x_18, x_2, x_19, x_20, x_3, x_4, x_5, x_6, x_48);
return x_49;
}
else
{
lean_object* x_50; 
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_43);
lean_ctor_set(x_50, 1, x_44);
return x_50;
}
}
else
{
lean_object* x_51; 
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_43);
lean_ctor_set(x_51, 1, x_44);
return x_51;
}
}
}
}
else
{
lean_object* x_52; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_24)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_24;
 lean_ctor_set_tag(x_52, 1);
}
lean_ctor_set(x_52, 0, x_25);
lean_ctor_set(x_52, 1, x_26);
return x_52;
}
}
else
{
lean_object* x_53; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_24)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_24;
 lean_ctor_set_tag(x_53, 1);
}
lean_ctor_set(x_53, 0, x_25);
lean_ctor_set(x_53, 1, x_26);
return x_53;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_14);
lean_dec(x_2);
x_63 = lean_ctor_get(x_15, 1);
lean_inc(x_63);
lean_dec(x_15);
x_64 = l_Lean_MessageData_ofExpr(x_9);
x_65 = l_Tactic_ReduceModChar_matchAndNorm___closed__8;
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = l_Tactic_ReduceModChar_matchAndNorm___closed__10;
x_68 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_68, x_3, x_4, x_5, x_6, x_63);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_69;
}
}
else
{
uint8_t x_70; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_70 = !lean_is_exclusive(x_15);
if (x_70 == 0)
{
return x_15;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_15, 0);
x_72 = lean_ctor_get(x_15, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_15);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_2);
x_74 = lean_ctor_get(x_11, 1);
lean_inc(x_74);
lean_dec(x_11);
x_75 = l_Lean_MessageData_ofExpr(x_9);
x_76 = l_Tactic_ReduceModChar_matchAndNorm___closed__2;
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Tactic_ReduceModChar_matchAndNorm___closed__4;
x_79 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Lean_MessageData_ofLevel(x_12);
x_81 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Tactic_ReduceModChar_matchAndNorm___closed__6;
x_83 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Lean_throwError___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__1(x_83, x_3, x_4, x_5, x_6, x_74);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_84;
}
}
else
{
uint8_t x_85; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_85 = !lean_is_exclusive(x_11);
if (x_85 == 0)
{
return x_11;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_11, 0);
x_87 = lean_ctor_get(x_11, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_11);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_8);
if (x_89 == 0)
{
return x_8;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_8, 0);
x_91 = lean_ctor_get(x_8, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_8);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_matchAndNorm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Tactic_ReduceModChar_matchAndNorm(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_derive___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_Lean_MessageData_ofExpr(x_1);
x_9 = l_Tactic_ReduceModChar_derive___lambda__1___closed__2;
x_10 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Tactic_ReduceModChar_matchAndNorm(x_1, x_3, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
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
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = l_Lean_Exception_isInterrupt(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = l_Lean_Exception_isRuntime(x_21);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set_tag(x_12, 0);
lean_ctor_set(x_12, 0, x_24);
return x_12;
}
else
{
lean_dec(x_2);
return x_12;
}
}
else
{
lean_dec(x_2);
return x_12;
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = l_Lean_Exception_isInterrupt(x_25);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = l_Lean_Exception_isRuntime(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_2);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_26);
return x_30;
}
else
{
lean_object* x_31; 
lean_dec(x_2);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_26);
return x_31;
}
}
else
{
lean_object* x_32; 
lean_dec(x_2);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_26);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_box(x_1);
x_14 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__2___boxed), 11, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_2);
x_15 = l_Lean_Meta_Simp_andThen(x_3, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__6___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_preDefault), 10, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__6___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_postDefault), 10, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__6___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__6___closed__5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__6___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__9() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Tactic_ReduceModChar_derive___lambda__6___closed__8;
x_3 = l_Tactic_ReduceModChar_derive___lambda__6___closed__7;
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
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__6___closed__5;
x_2 = l_Tactic_ReduceModChar_derive___lambda__6___closed__9;
x_3 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__6___closed__6;
x_2 = l_Tactic_ReduceModChar_derive___lambda__6___closed__10;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__5___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_SimpExtension_getTheorems(x_5, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_13 = lean_ctor_get(x_11, 1);
x_14 = lean_box(0);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_14);
x_15 = lean_array_mk(x_11);
x_16 = l_Lean_Meta_Simp_mkContext(x_1, x_15, x_2, x_6, x_7, x_8, x_9, x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_box(x_19);
lean_inc(x_17);
x_21 = lean_alloc_closure((void*)(l_Mathlib_Meta_NormNum_discharge___boxed), 11, 2);
lean_closure_set(x_21, 0, x_17);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_box(0);
lean_inc(x_3);
x_23 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_23, 0, x_3);
lean_ctor_set(x_23, 1, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*2, x_19);
x_24 = l_Tactic_ReduceModChar_derive___lambda__6___closed__2;
x_25 = lean_box(x_4);
x_26 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__3___boxed), 12, 3);
lean_closure_set(x_26, 0, x_25);
lean_closure_set(x_26, 1, x_22);
lean_closure_set(x_26, 2, x_24);
x_27 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__4___boxed), 10, 1);
lean_closure_set(x_27, 0, x_22);
x_28 = l_Tactic_ReduceModChar_derive___lambda__6___closed__3;
x_29 = l_Tactic_ReduceModChar_derive___lambda__6___closed__12;
x_30 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set(x_30, 4, x_21);
lean_ctor_set_uint8(x_30, sizeof(void*)*5, x_19);
x_31 = l_Tactic_ReduceModChar_derive___lambda__6___closed__11;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_32 = l_Lean_Meta_Simp_main(x_3, x_17, x_31, x_30, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Meta_Simp_Result_mkEqTrans(x_23, x_35, x_6, x_7, x_8, x_9, x_34);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_36);
if (x_41 == 0)
{
return x_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_36, 0);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_36);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_45 = !lean_is_exclusive(x_32);
if (x_45 == 0)
{
return x_32;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_32, 0);
x_47 = lean_ctor_get(x_32, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_32);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_49 = lean_ctor_get(x_11, 0);
x_50 = lean_ctor_get(x_11, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_11);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_mk(x_52);
x_54 = l_Lean_Meta_Simp_mkContext(x_1, x_53, x_2, x_6, x_7, x_8, x_9, x_50);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = 1;
x_58 = lean_box(x_57);
lean_inc(x_55);
x_59 = lean_alloc_closure((void*)(l_Mathlib_Meta_NormNum_discharge___boxed), 11, 2);
lean_closure_set(x_59, 0, x_55);
lean_closure_set(x_59, 1, x_58);
x_60 = lean_box(0);
lean_inc(x_3);
x_61 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_61, 0, x_3);
lean_ctor_set(x_61, 1, x_60);
lean_ctor_set_uint8(x_61, sizeof(void*)*2, x_57);
x_62 = l_Tactic_ReduceModChar_derive___lambda__6___closed__2;
x_63 = lean_box(x_4);
x_64 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__3___boxed), 12, 3);
lean_closure_set(x_64, 0, x_63);
lean_closure_set(x_64, 1, x_60);
lean_closure_set(x_64, 2, x_62);
x_65 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__4___boxed), 10, 1);
lean_closure_set(x_65, 0, x_60);
x_66 = l_Tactic_ReduceModChar_derive___lambda__6___closed__3;
x_67 = l_Tactic_ReduceModChar_derive___lambda__6___closed__12;
x_68 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_68, 0, x_64);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_65);
lean_ctor_set(x_68, 3, x_67);
lean_ctor_set(x_68, 4, x_59);
lean_ctor_set_uint8(x_68, sizeof(void*)*5, x_57);
x_69 = l_Tactic_ReduceModChar_derive___lambda__6___closed__11;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_70 = l_Lean_Meta_Simp_main(x_3, x_55, x_69, x_68, x_6, x_7, x_8, x_9, x_56);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_Lean_Meta_Simp_Result_mkEqTrans(x_61, x_73, x_6, x_7, x_8, x_9, x_72);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_74, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_74, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_81 = x_74;
} else {
 lean_dec_ref(x_74);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_61);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_83 = lean_ctor_get(x_70, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_70, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_85 = x_70;
} else {
 lean_dec_ref(x_70);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__1() {
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
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 3, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 4, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 5, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 6, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 7, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 8, x_3);
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
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("reduce_mod_char", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_derive___lambda__7___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("internal error: reduce_mod_char not registered as simp extension", 64, 64);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__7___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__7(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Meta_getSimpCongrTheorems___rarg(x_6, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Tactic_ReduceModChar_derive___lambda__7___closed__3;
x_15 = l_Lean_Meta_getSimpExtension_x3f(x_14, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_12);
lean_dec(x_9);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Tactic_ReduceModChar_derive___lambda__7___closed__5;
x_19 = l_Lean_throwError___at_Tactic_ReduceModChar_derive___spec__1(x_18, x_3, x_4, x_5, x_6, x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_ctor_get(x_16, 0);
lean_inc(x_25);
lean_dec(x_16);
x_26 = l_Tactic_ReduceModChar_derive___lambda__7___closed__1;
x_27 = l_Tactic_ReduceModChar_derive___lambda__6(x_26, x_12, x_9, x_2, x_25, x_3, x_4, x_5, x_6, x_24);
lean_dec(x_25);
return x_27;
}
}
}
static lean_object* _init_l_Tactic_ReduceModChar_derive___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__58;
x_2 = l_Tactic_ReduceModChar_derive___lambda__7___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__1___boxed), 7, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_box(x_1);
x_10 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_derive___lambda__7___boxed), 7, 2);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_9);
x_11 = l_Tactic_ReduceModChar_derive___closed__1;
x_12 = 1;
x_13 = l_Tactic_ReduceModChar_derive___lambda__1___closed__1;
x_14 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_NormCast_splittingProcedure___spec__2(x_11, x_8, x_10, x_12, x_13, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_ReduceModChar_derive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_ReduceModChar_derive___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Tactic_ReduceModChar_derive___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_Tactic_ReduceModChar_derive___lambda__2(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = l_Tactic_ReduceModChar_derive___lambda__3(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Tactic_ReduceModChar_derive___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_ReduceModChar_derive___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = l_Tactic_ReduceModChar_derive___lambda__6(x_1, x_2, x_3, x_11, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Tactic_ReduceModChar_derive___lambda__7(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_derive___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Tactic_ReduceModChar_derive(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("True", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("intro", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__1;
x_2 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__5;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_20; 
x_20 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_21);
x_23 = l_Lean_MVarId_getType(x_21, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_24, x_6, x_7, x_8, x_9, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_27);
x_29 = l_Tactic_ReduceModChar_derive(x_1, x_27, x_6, x_7, x_8, x_9, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
x_33 = l_Lean_Expr_consumeMData(x_32);
lean_dec(x_32);
x_34 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__2;
x_35 = l_Lean_Expr_isConstOf(x_33, x_34);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_36 = l_Lean_Meta_applySimpResultToTarget(x_21, x_27, x_30, x_6, x_7, x_8, x_9, x_31);
lean_dec(x_27);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_37);
x_11 = x_39;
x_12 = x_38;
goto block_19;
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 0);
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_36);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_27);
x_44 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__3;
x_45 = lean_ctor_get(x_30, 1);
lean_inc(x_45);
lean_dec(x_30);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__6;
x_47 = l_Lean_MVarId_assign___at_Lean_MVarId_renameInaccessibleFVars___spec__2(x_21, x_46, x_6, x_7, x_8, x_9, x_31);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_50 = lean_apply_6(x_44, x_48, x_6, x_7, x_8, x_9, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_11 = x_51;
x_12 = x_52;
goto block_19;
}
else
{
uint8_t x_53; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
return x_50;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_50);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_45, 0);
lean_inc(x_57);
lean_dec(x_45);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_58 = l_Lean_Meta_mkOfEqTrue(x_57, x_6, x_7, x_8, x_9, x_31);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_MVarId_assign___at_Lean_MVarId_renameInaccessibleFVars___spec__2(x_21, x_59, x_6, x_7, x_8, x_9, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_64 = lean_apply_6(x_44, x_62, x_6, x_7, x_8, x_9, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_11 = x_65;
x_12 = x_66;
goto block_19;
}
else
{
uint8_t x_67; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_67 = !lean_is_exclusive(x_64);
if (x_67 == 0)
{
return x_64;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_64, 0);
x_69 = lean_ctor_get(x_64, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_64);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_71 = !lean_is_exclusive(x_58);
if (x_71 == 0)
{
return x_58;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_58, 0);
x_73 = lean_ctor_get(x_58, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_58);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_27);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_75 = !lean_is_exclusive(x_29);
if (x_75 == 0)
{
return x_29;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_29, 0);
x_77 = lean_ctor_get(x_29, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_29);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_79 = !lean_is_exclusive(x_23);
if (x_79 == 0)
{
return x_23;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_23, 0);
x_81 = lean_ctor_get(x_23, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_23);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_83 = !lean_is_exclusive(x_20);
if (x_83 == 0)
{
return x_20;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_20, 0);
x_85 = lean_ctor_get(x_20, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_20);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
block_19:
{
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Elab_Tactic_replaceMainGoal(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Elab_Tactic_replaceMainGoal(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_box(x_1);
x_12 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___boxed), 10, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = l_Lean_Elab_Tactic_withMainContext___rarg(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharTarget___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Tactic_ReduceModChar_reduceModCharTarget(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_21; 
x_21 = l_Lean_Elab_Tactic_getMainGoal(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_7);
lean_inc(x_1);
x_24 = l_Lean_FVarId_getDecl(x_1, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_LocalDecl_type(x_25);
lean_dec(x_25);
x_28 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_27, x_7, x_8, x_9, x_10, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_31 = l_Tactic_ReduceModChar_derive(x_2, x_29, x_7, x_8, x_9, x_10, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_35 = l_Lean_Meta_applySimpResultToLocalDecl(x_22, x_1, x_32, x_34, x_7, x_8, x_9, x_10, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_box(0);
x_12 = x_38;
x_13 = x_37;
goto block_20;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 0);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
lean_ctor_set(x_36, 0, x_42);
x_12 = x_36;
x_13 = x_39;
goto block_20;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_36, 0);
lean_inc(x_43);
lean_dec(x_36);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_12 = x_45;
x_13 = x_39;
goto block_20;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_46 = !lean_is_exclusive(x_35);
if (x_46 == 0)
{
return x_35;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_35, 0);
x_48 = lean_ctor_get(x_35, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_35);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_31);
if (x_50 == 0)
{
return x_31;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_31, 0);
x_52 = lean_ctor_get(x_31, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_31);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_24);
if (x_54 == 0)
{
return x_24;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_24, 0);
x_56 = lean_ctor_get(x_24, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_24);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_21);
if (x_58 == 0)
{
return x_21;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_21, 0);
x_60 = lean_ctor_get(x_21, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_21);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
block_20:
{
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Elab_Tactic_replaceMainGoal(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_Tactic_replaceMainGoal(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_box(x_1);
x_13 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar_reduceModCharHyp___lambda__1___boxed), 11, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Elab_Tactic_withMainContext___rarg(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Tactic_ReduceModChar_reduceModCharHyp___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar_reduceModCharHyp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_Tactic_ReduceModChar_reduceModCharHyp(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__58;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__59;
x_3 = l_Tactic_ReduceModChar_derive___lambda__7___closed__2;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_reduce__mod__char___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_derive___lambda__7___closed__2;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optional", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_ReduceModChar_reduce__mod__char___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char___closed__6;
x_2 = l_Lean_Parser_Tactic_location;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char___closed__3;
x_2 = l_Tactic_ReduceModChar_reduce__mod__char___closed__4;
x_3 = l_Tactic_ReduceModChar_reduce__mod__char___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char___closed__1;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Tactic_ReduceModChar_reduce__mod__char___closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char() {
_start:
{
lean_object* x_1; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char___closed__9;
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("reduce_mod_char!", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Tactic_ReduceModChar_normBareNumeral___closed__58;
x_2 = l_Tactic_ReduceModChar_normBareNumeral___closed__59;
x_3 = l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char___closed__3;
x_2 = l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__3;
x_3 = l_Tactic_ReduceModChar_reduce__mod__char___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Tactic_ReduceModChar_reduce__mod__char_x21() {
_start:
{
lean_object* x_1; 
x_1 = l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__5;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_eq(x_2, x_3);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
lean_dec(x_4);
x_15 = lean_array_uget(x_1, x_2);
x_16 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Tactic_ReduceModChar_reduceModCharHyp(x_16, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = lean_usize_add(x_2, x_20);
x_2 = x_21;
x_4 = x_18;
x_13 = x_19;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_4);
lean_ctor_set(x_27, 1, x_13);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_111; 
x_111 = lean_box(0);
x_11 = x_111;
goto block_110;
}
else
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_1);
if (x_112 == 0)
{
x_11 = x_1;
goto block_110;
}
else
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_1, 0);
lean_inc(x_113);
lean_dec(x_1);
x_114 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_11 = x_114;
goto block_110;
}
}
block_110:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_mkOptionalNode(x_11);
lean_dec(x_11);
x_13 = l_Lean_Elab_Tactic_expandOptLocation(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_Lean_MVarId_getNondepPropHyps(x_15, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
if (x_22 == 0)
{
uint8_t x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_18);
x_23 = 0;
x_24 = l_Tactic_ReduceModChar_reduceModCharTarget(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
return x_24;
}
else
{
uint8_t x_25; 
x_25 = lean_nat_dec_le(x_20, x_20);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_20);
lean_dec(x_18);
x_26 = 0;
x_27 = l_Tactic_ReduceModChar_reduceModCharTarget(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
return x_27;
}
else
{
size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 0;
x_29 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_30 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_31 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1(x_18, x_28, x_29, x_30, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
lean_dec(x_18);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = 0;
x_34 = l_Tactic_ReduceModChar_reduceModCharTarget(x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_17);
if (x_39 == 0)
{
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_14);
if (x_43 == 0)
{
return x_14;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_14, 0);
x_45 = lean_ctor_get(x_14, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_14);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; uint8_t x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_13, 0);
lean_inc(x_47);
x_48 = lean_ctor_get_uint8(x_13, sizeof(void*)*1);
lean_dec(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_49 = l_Lean_Elab_Tactic_getFVarIds(x_47, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
x_53 = lean_array_get_size(x_51);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_nat_dec_lt(x_54, x_53);
if (x_55 == 0)
{
lean_dec(x_53);
lean_dec(x_51);
if (x_48 == 0)
{
lean_object* x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_box(0);
lean_ctor_set(x_49, 0, x_56);
return x_49;
}
else
{
uint8_t x_57; lean_object* x_58; 
lean_free_object(x_49);
x_57 = 0;
x_58 = l_Tactic_ReduceModChar_reduceModCharTarget(x_57, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
return x_58;
}
}
else
{
uint8_t x_59; 
x_59 = lean_nat_dec_le(x_53, x_53);
if (x_59 == 0)
{
lean_dec(x_53);
lean_dec(x_51);
if (x_48 == 0)
{
lean_object* x_60; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = lean_box(0);
lean_ctor_set(x_49, 0, x_60);
return x_49;
}
else
{
uint8_t x_61; lean_object* x_62; 
lean_free_object(x_49);
x_61 = 0;
x_62 = l_Tactic_ReduceModChar_reduceModCharTarget(x_61, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
return x_62;
}
}
else
{
size_t x_63; size_t x_64; lean_object* x_65; lean_object* x_66; 
lean_free_object(x_49);
x_63 = 0;
x_64 = lean_usize_of_nat(x_53);
lean_dec(x_53);
x_65 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_66 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1(x_51, x_63, x_64, x_65, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
lean_dec(x_51);
if (lean_obj_tag(x_66) == 0)
{
if (x_48 == 0)
{
uint8_t x_67; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_66, 0);
lean_dec(x_68);
lean_ctor_set(x_66, 0, x_65);
return x_66;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
else
{
lean_object* x_71; uint8_t x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
lean_dec(x_66);
x_72 = 0;
x_73 = l_Tactic_ReduceModChar_reduceModCharTarget(x_72, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_71);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = !lean_is_exclusive(x_66);
if (x_74 == 0)
{
return x_66;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_66, 0);
x_76 = lean_ctor_get(x_66, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_66);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_78 = lean_ctor_get(x_49, 0);
x_79 = lean_ctor_get(x_49, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_49);
x_80 = lean_array_get_size(x_78);
x_81 = lean_unsigned_to_nat(0u);
x_82 = lean_nat_dec_lt(x_81, x_80);
if (x_82 == 0)
{
lean_dec(x_80);
lean_dec(x_78);
if (x_48 == 0)
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_box(0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_79);
return x_84;
}
else
{
uint8_t x_85; lean_object* x_86; 
x_85 = 0;
x_86 = l_Tactic_ReduceModChar_reduceModCharTarget(x_85, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
return x_86;
}
}
else
{
uint8_t x_87; 
x_87 = lean_nat_dec_le(x_80, x_80);
if (x_87 == 0)
{
lean_dec(x_80);
lean_dec(x_78);
if (x_48 == 0)
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_79);
return x_89;
}
else
{
uint8_t x_90; lean_object* x_91; 
x_90 = 0;
x_91 = l_Tactic_ReduceModChar_reduceModCharTarget(x_90, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
return x_91;
}
}
else
{
size_t x_92; size_t x_93; lean_object* x_94; lean_object* x_95; 
x_92 = 0;
x_93 = lean_usize_of_nat(x_80);
lean_dec(x_80);
x_94 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_95 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1(x_78, x_92, x_93, x_94, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
lean_dec(x_78);
if (lean_obj_tag(x_95) == 0)
{
if (x_48 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_94);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
else
{
lean_object* x_99; uint8_t x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_95, 1);
lean_inc(x_99);
lean_dec(x_95);
x_100 = 0;
x_101 = l_Tactic_ReduceModChar_reduceModCharTarget(x_100, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_99);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_102 = lean_ctor_get(x_95, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_95, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_104 = x_95;
} else {
 lean_dec_ref(x_95);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(1, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_102);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_49);
if (x_106 == 0)
{
return x_49;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_49, 0);
x_108 = lean_ctor_get(x_49, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_49);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_16 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1___spec__1(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1_unsafe__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
static lean_object* _init_l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___lambda__1___boxed), 11, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Tactic_ReduceModChar_reduce__mod__char___closed__1;
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
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_LeanSearchClient_leanSearchTacticImpl___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___closed__1;
x_17 = l_Lean_Syntax_isNone(x_15);
if (x_17 == 0)
{
uint8_t x_18; 
lean_inc(x_15);
x_18 = l_Lean_Syntax_matchesNull(x_15, x_14);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at_LeanSearchClient_leanSearchTacticImpl___spec__1___rarg(x_10);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_getArg(x_15, x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_box(0);
x_24 = lean_apply_11(x_16, x_23, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
x_25 = lean_box(0);
x_26 = lean_box(0);
x_27 = lean_apply_11(x_16, x_26, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_eq(x_2, x_3);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
lean_dec(x_4);
x_15 = lean_array_uget(x_1, x_2);
x_16 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Tactic_ReduceModChar_reduceModCharHyp(x_16, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = lean_usize_add(x_2, x_20);
x_2 = x_21;
x_4 = x_18;
x_13 = x_19;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_4);
lean_ctor_set(x_27, 1, x_13);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_111; 
x_111 = lean_box(0);
x_11 = x_111;
goto block_110;
}
else
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_1);
if (x_112 == 0)
{
x_11 = x_1;
goto block_110;
}
else
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_1, 0);
lean_inc(x_113);
lean_dec(x_1);
x_114 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_11 = x_114;
goto block_110;
}
}
block_110:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_mkOptionalNode(x_11);
lean_dec(x_11);
x_13 = l_Lean_Elab_Tactic_expandOptLocation(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_Lean_MVarId_getNondepPropHyps(x_15, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
if (x_22 == 0)
{
uint8_t x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_18);
x_23 = 1;
x_24 = l_Tactic_ReduceModChar_reduceModCharTarget(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
return x_24;
}
else
{
uint8_t x_25; 
x_25 = lean_nat_dec_le(x_20, x_20);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_20);
lean_dec(x_18);
x_26 = 1;
x_27 = l_Tactic_ReduceModChar_reduceModCharTarget(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
return x_27;
}
else
{
size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 0;
x_29 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_30 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_31 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1(x_18, x_28, x_29, x_30, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
lean_dec(x_18);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = 1;
x_34 = l_Tactic_ReduceModChar_reduceModCharTarget(x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_17);
if (x_39 == 0)
{
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_14);
if (x_43 == 0)
{
return x_14;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_14, 0);
x_45 = lean_ctor_get(x_14, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_14);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; uint8_t x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_13, 0);
lean_inc(x_47);
x_48 = lean_ctor_get_uint8(x_13, sizeof(void*)*1);
lean_dec(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_49 = l_Lean_Elab_Tactic_getFVarIds(x_47, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
x_53 = lean_array_get_size(x_51);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_nat_dec_lt(x_54, x_53);
if (x_55 == 0)
{
lean_dec(x_53);
lean_dec(x_51);
if (x_48 == 0)
{
lean_object* x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_box(0);
lean_ctor_set(x_49, 0, x_56);
return x_49;
}
else
{
uint8_t x_57; lean_object* x_58; 
lean_free_object(x_49);
x_57 = 1;
x_58 = l_Tactic_ReduceModChar_reduceModCharTarget(x_57, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
return x_58;
}
}
else
{
uint8_t x_59; 
x_59 = lean_nat_dec_le(x_53, x_53);
if (x_59 == 0)
{
lean_dec(x_53);
lean_dec(x_51);
if (x_48 == 0)
{
lean_object* x_60; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = lean_box(0);
lean_ctor_set(x_49, 0, x_60);
return x_49;
}
else
{
uint8_t x_61; lean_object* x_62; 
lean_free_object(x_49);
x_61 = 1;
x_62 = l_Tactic_ReduceModChar_reduceModCharTarget(x_61, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
return x_62;
}
}
else
{
size_t x_63; size_t x_64; lean_object* x_65; lean_object* x_66; 
lean_free_object(x_49);
x_63 = 0;
x_64 = lean_usize_of_nat(x_53);
lean_dec(x_53);
x_65 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_66 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1(x_51, x_63, x_64, x_65, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
lean_dec(x_51);
if (lean_obj_tag(x_66) == 0)
{
if (x_48 == 0)
{
uint8_t x_67; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_66, 0);
lean_dec(x_68);
lean_ctor_set(x_66, 0, x_65);
return x_66;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
else
{
lean_object* x_71; uint8_t x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
lean_dec(x_66);
x_72 = 1;
x_73 = l_Tactic_ReduceModChar_reduceModCharTarget(x_72, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_71);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = !lean_is_exclusive(x_66);
if (x_74 == 0)
{
return x_66;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_66, 0);
x_76 = lean_ctor_get(x_66, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_66);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_78 = lean_ctor_get(x_49, 0);
x_79 = lean_ctor_get(x_49, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_49);
x_80 = lean_array_get_size(x_78);
x_81 = lean_unsigned_to_nat(0u);
x_82 = lean_nat_dec_lt(x_81, x_80);
if (x_82 == 0)
{
lean_dec(x_80);
lean_dec(x_78);
if (x_48 == 0)
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_box(0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_79);
return x_84;
}
else
{
uint8_t x_85; lean_object* x_86; 
x_85 = 1;
x_86 = l_Tactic_ReduceModChar_reduceModCharTarget(x_85, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
return x_86;
}
}
else
{
uint8_t x_87; 
x_87 = lean_nat_dec_le(x_80, x_80);
if (x_87 == 0)
{
lean_dec(x_80);
lean_dec(x_78);
if (x_48 == 0)
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_79);
return x_89;
}
else
{
uint8_t x_90; lean_object* x_91; 
x_90 = 1;
x_91 = l_Tactic_ReduceModChar_reduceModCharTarget(x_90, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
return x_91;
}
}
else
{
size_t x_92; size_t x_93; lean_object* x_94; lean_object* x_95; 
x_92 = 0;
x_93 = lean_usize_of_nat(x_80);
lean_dec(x_80);
x_94 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_95 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1(x_78, x_92, x_93, x_94, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
lean_dec(x_78);
if (lean_obj_tag(x_95) == 0)
{
if (x_48 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_94);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
else
{
lean_object* x_99; uint8_t x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_95, 1);
lean_inc(x_99);
lean_dec(x_95);
x_100 = 1;
x_101 = l_Tactic_ReduceModChar_reduceModCharTarget(x_100, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_99);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_102 = lean_ctor_get(x_95, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_95, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_104 = x_95;
} else {
 lean_dec_ref(x_95);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(1, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_102);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_49);
if (x_106 == 0)
{
return x_49;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_49, 0);
x_108 = lean_ctor_get(x_49, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_49);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_16 = l_Array_foldlMUnsafe_fold___at_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1___spec__1(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1_unsafe__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
static lean_object* _init_l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___lambda__1___boxed), 11, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__2;
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
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_LeanSearchClient_leanSearchTacticImpl___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___closed__1;
x_17 = l_Lean_Syntax_isNone(x_15);
if (x_17 == 0)
{
uint8_t x_18; 
lean_inc(x_15);
x_18 = l_Lean_Syntax_matchesNull(x_15, x_14);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at_LeanSearchClient_leanSearchTacticImpl___spec__1___rarg(x_10);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_getArg(x_15, x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_box(0);
x_24 = lean_apply_11(x_16, x_23, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
x_25 = lean_box(0);
x_26 = lean_box(0);
x_27 = lean_apply_11(x_16, x_26, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum_DivMod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum_PowMod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ReduceModChar_Ext(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_ReduceModChar(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum_DivMod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum_PowMod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ReduceModChar_Ext(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Tactic_ReduceModChar_normBareNumeral___closed__1 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__1);
l_Tactic_ReduceModChar_normBareNumeral___closed__2 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__2);
l_Tactic_ReduceModChar_normBareNumeral___closed__3 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__3);
l_Tactic_ReduceModChar_normBareNumeral___closed__4 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__4);
l_Tactic_ReduceModChar_normBareNumeral___closed__5 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__5);
l_Tactic_ReduceModChar_normBareNumeral___closed__6 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__6);
l_Tactic_ReduceModChar_normBareNumeral___closed__7 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__7();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__7);
l_Tactic_ReduceModChar_normBareNumeral___closed__8 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__8();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__8);
l_Tactic_ReduceModChar_normBareNumeral___closed__9 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__9();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__9);
l_Tactic_ReduceModChar_normBareNumeral___closed__10 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__10();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__10);
l_Tactic_ReduceModChar_normBareNumeral___closed__11 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__11();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__11);
l_Tactic_ReduceModChar_normBareNumeral___closed__12 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__12();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__12);
l_Tactic_ReduceModChar_normBareNumeral___closed__13 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__13();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__13);
l_Tactic_ReduceModChar_normBareNumeral___closed__14 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__14();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__14);
l_Tactic_ReduceModChar_normBareNumeral___closed__15 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__15();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__15);
l_Tactic_ReduceModChar_normBareNumeral___closed__16 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__16();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__16);
l_Tactic_ReduceModChar_normBareNumeral___closed__17 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__17();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__17);
l_Tactic_ReduceModChar_normBareNumeral___closed__18 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__18();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__18);
l_Tactic_ReduceModChar_normBareNumeral___closed__19 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__19();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__19);
l_Tactic_ReduceModChar_normBareNumeral___closed__20 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__20();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__20);
l_Tactic_ReduceModChar_normBareNumeral___closed__21 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__21();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__21);
l_Tactic_ReduceModChar_normBareNumeral___closed__22 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__22();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__22);
l_Tactic_ReduceModChar_normBareNumeral___closed__23 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__23();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__23);
l_Tactic_ReduceModChar_normBareNumeral___closed__24 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__24();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__24);
l_Tactic_ReduceModChar_normBareNumeral___closed__25 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__25();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__25);
l_Tactic_ReduceModChar_normBareNumeral___closed__26 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__26();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__26);
l_Tactic_ReduceModChar_normBareNumeral___closed__27 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__27();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__27);
l_Tactic_ReduceModChar_normBareNumeral___closed__28 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__28();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__28);
l_Tactic_ReduceModChar_normBareNumeral___closed__29 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__29();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__29);
l_Tactic_ReduceModChar_normBareNumeral___closed__30 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__30();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__30);
l_Tactic_ReduceModChar_normBareNumeral___closed__31 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__31();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__31);
l_Tactic_ReduceModChar_normBareNumeral___closed__32 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__32();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__32);
l_Tactic_ReduceModChar_normBareNumeral___closed__33 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__33();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__33);
l_Tactic_ReduceModChar_normBareNumeral___closed__34 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__34();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__34);
l_Tactic_ReduceModChar_normBareNumeral___closed__35 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__35();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__35);
l_Tactic_ReduceModChar_normBareNumeral___closed__36 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__36();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__36);
l_Tactic_ReduceModChar_normBareNumeral___closed__37 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__37();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__37);
l_Tactic_ReduceModChar_normBareNumeral___closed__38 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__38();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__38);
l_Tactic_ReduceModChar_normBareNumeral___closed__39 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__39();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__39);
l_Tactic_ReduceModChar_normBareNumeral___closed__40 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__40();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__40);
l_Tactic_ReduceModChar_normBareNumeral___closed__41 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__41();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__41);
l_Tactic_ReduceModChar_normBareNumeral___closed__42 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__42();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__42);
l_Tactic_ReduceModChar_normBareNumeral___closed__43 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__43();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__43);
l_Tactic_ReduceModChar_normBareNumeral___closed__44 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__44();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__44);
l_Tactic_ReduceModChar_normBareNumeral___closed__45 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__45();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__45);
l_Tactic_ReduceModChar_normBareNumeral___closed__46 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__46();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__46);
l_Tactic_ReduceModChar_normBareNumeral___closed__47 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__47();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__47);
l_Tactic_ReduceModChar_normBareNumeral___closed__48 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__48();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__48);
l_Tactic_ReduceModChar_normBareNumeral___closed__49 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__49();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__49);
l_Tactic_ReduceModChar_normBareNumeral___closed__50 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__50();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__50);
l_Tactic_ReduceModChar_normBareNumeral___closed__51 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__51();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__51);
l_Tactic_ReduceModChar_normBareNumeral___closed__52 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__52();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__52);
l_Tactic_ReduceModChar_normBareNumeral___closed__53 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__53();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__53);
l_Tactic_ReduceModChar_normBareNumeral___closed__54 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__54();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__54);
l_Tactic_ReduceModChar_normBareNumeral___closed__55 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__55();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__55);
l_Tactic_ReduceModChar_normBareNumeral___closed__56 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__56();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__56);
l_Tactic_ReduceModChar_normBareNumeral___closed__57 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__57();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__57);
l_Tactic_ReduceModChar_normBareNumeral___closed__58 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__58();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__58);
l_Tactic_ReduceModChar_normBareNumeral___closed__59 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__59();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__59);
l_Tactic_ReduceModChar_normBareNumeral___closed__60 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__60();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__60);
l_Tactic_ReduceModChar_normBareNumeral___closed__61 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__61();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__61);
l_Tactic_ReduceModChar_normBareNumeral___closed__62 = _init_l_Tactic_ReduceModChar_normBareNumeral___closed__62();
lean_mark_persistent(l_Tactic_ReduceModChar_normBareNumeral___closed__62);
l_Tactic_ReduceModChar_normPow___closed__1 = _init_l_Tactic_ReduceModChar_normPow___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__1);
l_Tactic_ReduceModChar_normPow___closed__2 = _init_l_Tactic_ReduceModChar_normPow___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__2);
l_Tactic_ReduceModChar_normPow___closed__3 = _init_l_Tactic_ReduceModChar_normPow___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__3);
l_Tactic_ReduceModChar_normPow___closed__4 = _init_l_Tactic_ReduceModChar_normPow___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__4);
l_Tactic_ReduceModChar_normPow___closed__5 = _init_l_Tactic_ReduceModChar_normPow___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__5);
l_Tactic_ReduceModChar_normPow___closed__6 = _init_l_Tactic_ReduceModChar_normPow___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__6);
l_Tactic_ReduceModChar_normPow___closed__7 = _init_l_Tactic_ReduceModChar_normPow___closed__7();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__7);
l_Tactic_ReduceModChar_normPow___closed__8 = _init_l_Tactic_ReduceModChar_normPow___closed__8();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__8);
l_Tactic_ReduceModChar_normPow___closed__9 = _init_l_Tactic_ReduceModChar_normPow___closed__9();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__9);
l_Tactic_ReduceModChar_normPow___closed__10 = _init_l_Tactic_ReduceModChar_normPow___closed__10();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__10);
l_Tactic_ReduceModChar_normPow___closed__11 = _init_l_Tactic_ReduceModChar_normPow___closed__11();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__11);
l_Tactic_ReduceModChar_normPow___closed__12 = _init_l_Tactic_ReduceModChar_normPow___closed__12();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__12);
l_Tactic_ReduceModChar_normPow___closed__13 = _init_l_Tactic_ReduceModChar_normPow___closed__13();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__13);
l_Tactic_ReduceModChar_normPow___closed__14 = _init_l_Tactic_ReduceModChar_normPow___closed__14();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__14);
l_Tactic_ReduceModChar_normPow___closed__15 = _init_l_Tactic_ReduceModChar_normPow___closed__15();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__15);
l_Tactic_ReduceModChar_normPow___closed__16 = _init_l_Tactic_ReduceModChar_normPow___closed__16();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__16);
l_Tactic_ReduceModChar_normPow___closed__17 = _init_l_Tactic_ReduceModChar_normPow___closed__17();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__17);
l_Tactic_ReduceModChar_normPow___closed__18 = _init_l_Tactic_ReduceModChar_normPow___closed__18();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__18);
l_Tactic_ReduceModChar_normPow___closed__19 = _init_l_Tactic_ReduceModChar_normPow___closed__19();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__19);
l_Tactic_ReduceModChar_normPow___closed__20 = _init_l_Tactic_ReduceModChar_normPow___closed__20();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__20);
l_Tactic_ReduceModChar_normPow___closed__21 = _init_l_Tactic_ReduceModChar_normPow___closed__21();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__21);
l_Tactic_ReduceModChar_normPow___closed__22 = _init_l_Tactic_ReduceModChar_normPow___closed__22();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__22);
l_Tactic_ReduceModChar_normPow___closed__23 = _init_l_Tactic_ReduceModChar_normPow___closed__23();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__23);
l_Tactic_ReduceModChar_normPow___closed__24 = _init_l_Tactic_ReduceModChar_normPow___closed__24();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__24);
l_Tactic_ReduceModChar_normPow___closed__25 = _init_l_Tactic_ReduceModChar_normPow___closed__25();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__25);
l_Tactic_ReduceModChar_normPow___closed__26 = _init_l_Tactic_ReduceModChar_normPow___closed__26();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__26);
l_Tactic_ReduceModChar_normPow___closed__27 = _init_l_Tactic_ReduceModChar_normPow___closed__27();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__27);
l_Tactic_ReduceModChar_normPow___closed__28 = _init_l_Tactic_ReduceModChar_normPow___closed__28();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__28);
l_Tactic_ReduceModChar_normPow___closed__29 = _init_l_Tactic_ReduceModChar_normPow___closed__29();
lean_mark_persistent(l_Tactic_ReduceModChar_normPow___closed__29);
l_Tactic_ReduceModChar_normNeg___closed__1 = _init_l_Tactic_ReduceModChar_normNeg___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__1);
l_Tactic_ReduceModChar_normNeg___closed__2 = _init_l_Tactic_ReduceModChar_normNeg___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__2);
l_Tactic_ReduceModChar_normNeg___closed__3 = _init_l_Tactic_ReduceModChar_normNeg___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__3);
l_Tactic_ReduceModChar_normNeg___closed__4 = _init_l_Tactic_ReduceModChar_normNeg___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__4);
l_Tactic_ReduceModChar_normNeg___closed__5 = _init_l_Tactic_ReduceModChar_normNeg___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__5);
l_Tactic_ReduceModChar_normNeg___closed__6 = _init_l_Tactic_ReduceModChar_normNeg___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__6);
l_Tactic_ReduceModChar_normNeg___closed__7 = _init_l_Tactic_ReduceModChar_normNeg___closed__7();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__7);
l_Tactic_ReduceModChar_normNeg___closed__8 = _init_l_Tactic_ReduceModChar_normNeg___closed__8();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__8);
l_Tactic_ReduceModChar_normNeg___closed__9 = _init_l_Tactic_ReduceModChar_normNeg___closed__9();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__9);
l_Tactic_ReduceModChar_normNeg___closed__10 = _init_l_Tactic_ReduceModChar_normNeg___closed__10();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__10);
l_Tactic_ReduceModChar_normNeg___closed__11 = _init_l_Tactic_ReduceModChar_normNeg___closed__11();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__11);
l_Tactic_ReduceModChar_normNeg___closed__12 = _init_l_Tactic_ReduceModChar_normNeg___closed__12();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__12);
l_Tactic_ReduceModChar_normNeg___closed__13 = _init_l_Tactic_ReduceModChar_normNeg___closed__13();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__13);
l_Tactic_ReduceModChar_normNeg___closed__14 = _init_l_Tactic_ReduceModChar_normNeg___closed__14();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__14);
l_Tactic_ReduceModChar_normNeg___closed__15 = _init_l_Tactic_ReduceModChar_normNeg___closed__15();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__15);
l_Tactic_ReduceModChar_normNeg___closed__16 = _init_l_Tactic_ReduceModChar_normNeg___closed__16();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__16);
l_Tactic_ReduceModChar_normNeg___closed__17 = _init_l_Tactic_ReduceModChar_normNeg___closed__17();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__17);
l_Tactic_ReduceModChar_normNeg___closed__18 = _init_l_Tactic_ReduceModChar_normNeg___closed__18();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__18);
l_Tactic_ReduceModChar_normNeg___closed__19 = _init_l_Tactic_ReduceModChar_normNeg___closed__19();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__19);
l_Tactic_ReduceModChar_normNeg___closed__20 = _init_l_Tactic_ReduceModChar_normNeg___closed__20();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__20);
l_Tactic_ReduceModChar_normNeg___closed__21 = _init_l_Tactic_ReduceModChar_normNeg___closed__21();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__21);
l_Tactic_ReduceModChar_normNeg___closed__22 = _init_l_Tactic_ReduceModChar_normNeg___closed__22();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__22);
l_Tactic_ReduceModChar_normNeg___closed__23 = _init_l_Tactic_ReduceModChar_normNeg___closed__23();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__23);
l_Tactic_ReduceModChar_normNeg___closed__24 = _init_l_Tactic_ReduceModChar_normNeg___closed__24();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__24);
l_Tactic_ReduceModChar_normNeg___closed__25 = _init_l_Tactic_ReduceModChar_normNeg___closed__25();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__25);
l_Tactic_ReduceModChar_normNeg___closed__26 = _init_l_Tactic_ReduceModChar_normNeg___closed__26();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__26);
l_Tactic_ReduceModChar_normNeg___closed__27 = _init_l_Tactic_ReduceModChar_normNeg___closed__27();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__27);
l_Tactic_ReduceModChar_normNeg___closed__28 = _init_l_Tactic_ReduceModChar_normNeg___closed__28();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__28);
l_Tactic_ReduceModChar_normNeg___closed__29 = _init_l_Tactic_ReduceModChar_normNeg___closed__29();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__29);
l_Tactic_ReduceModChar_normNeg___closed__30 = _init_l_Tactic_ReduceModChar_normNeg___closed__30();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__30);
l_Tactic_ReduceModChar_normNeg___closed__31 = _init_l_Tactic_ReduceModChar_normNeg___closed__31();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__31);
l_Tactic_ReduceModChar_normNeg___closed__32 = _init_l_Tactic_ReduceModChar_normNeg___closed__32();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__32);
l_Tactic_ReduceModChar_normNeg___closed__33 = _init_l_Tactic_ReduceModChar_normNeg___closed__33();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__33);
l_Tactic_ReduceModChar_normNeg___closed__34 = _init_l_Tactic_ReduceModChar_normNeg___closed__34();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__34);
l_Tactic_ReduceModChar_normNeg___closed__35 = _init_l_Tactic_ReduceModChar_normNeg___closed__35();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__35);
l_Tactic_ReduceModChar_normNeg___closed__36 = _init_l_Tactic_ReduceModChar_normNeg___closed__36();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__36);
l_Tactic_ReduceModChar_normNeg___closed__37 = _init_l_Tactic_ReduceModChar_normNeg___closed__37();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__37);
l_Tactic_ReduceModChar_normNeg___closed__38 = _init_l_Tactic_ReduceModChar_normNeg___closed__38();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__38);
l_Tactic_ReduceModChar_normNeg___closed__39 = _init_l_Tactic_ReduceModChar_normNeg___closed__39();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__39);
l_Tactic_ReduceModChar_normNeg___closed__40 = _init_l_Tactic_ReduceModChar_normNeg___closed__40();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__40);
l_Tactic_ReduceModChar_normNeg___closed__41 = _init_l_Tactic_ReduceModChar_normNeg___closed__41();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__41);
l_Tactic_ReduceModChar_normNeg___closed__42 = _init_l_Tactic_ReduceModChar_normNeg___closed__42();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__42);
l_Tactic_ReduceModChar_normNeg___closed__43 = _init_l_Tactic_ReduceModChar_normNeg___closed__43();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__43);
l_Tactic_ReduceModChar_normNeg___closed__44 = _init_l_Tactic_ReduceModChar_normNeg___closed__44();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__44);
l_Tactic_ReduceModChar_normNeg___closed__45 = _init_l_Tactic_ReduceModChar_normNeg___closed__45();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__45);
l_Tactic_ReduceModChar_normNeg___closed__46 = _init_l_Tactic_ReduceModChar_normNeg___closed__46();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__46);
l_Tactic_ReduceModChar_normNeg___closed__47 = _init_l_Tactic_ReduceModChar_normNeg___closed__47();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__47);
l_Tactic_ReduceModChar_normNeg___closed__48 = _init_l_Tactic_ReduceModChar_normNeg___closed__48();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__48);
l_Tactic_ReduceModChar_normNeg___closed__49 = _init_l_Tactic_ReduceModChar_normNeg___closed__49();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__49);
l_Tactic_ReduceModChar_normNeg___closed__50 = _init_l_Tactic_ReduceModChar_normNeg___closed__50();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__50);
l_Tactic_ReduceModChar_normNeg___closed__51 = _init_l_Tactic_ReduceModChar_normNeg___closed__51();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__51);
l_Tactic_ReduceModChar_normNeg___closed__52 = _init_l_Tactic_ReduceModChar_normNeg___closed__52();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__52);
l_Tactic_ReduceModChar_normNeg___closed__53 = _init_l_Tactic_ReduceModChar_normNeg___closed__53();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__53);
l_Tactic_ReduceModChar_normNeg___closed__54 = _init_l_Tactic_ReduceModChar_normNeg___closed__54();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__54);
l_Tactic_ReduceModChar_normNeg___closed__55 = _init_l_Tactic_ReduceModChar_normNeg___closed__55();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__55);
l_Tactic_ReduceModChar_normNeg___closed__56 = _init_l_Tactic_ReduceModChar_normNeg___closed__56();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__56);
l_Tactic_ReduceModChar_normNeg___closed__57 = _init_l_Tactic_ReduceModChar_normNeg___closed__57();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__57);
l_Tactic_ReduceModChar_normNeg___closed__58 = _init_l_Tactic_ReduceModChar_normNeg___closed__58();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__58);
l_Tactic_ReduceModChar_normNeg___closed__59 = _init_l_Tactic_ReduceModChar_normNeg___closed__59();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__59);
l_Tactic_ReduceModChar_normNeg___closed__60 = _init_l_Tactic_ReduceModChar_normNeg___closed__60();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__60);
l_Tactic_ReduceModChar_normNeg___closed__61 = _init_l_Tactic_ReduceModChar_normNeg___closed__61();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__61);
l_Tactic_ReduceModChar_normNeg___closed__62 = _init_l_Tactic_ReduceModChar_normNeg___closed__62();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__62);
l_Tactic_ReduceModChar_normNeg___closed__63 = _init_l_Tactic_ReduceModChar_normNeg___closed__63();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__63);
l_Tactic_ReduceModChar_normNeg___closed__64 = _init_l_Tactic_ReduceModChar_normNeg___closed__64();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__64);
l_Tactic_ReduceModChar_normNeg___closed__65 = _init_l_Tactic_ReduceModChar_normNeg___closed__65();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__65);
l_Tactic_ReduceModChar_normNeg___closed__66 = _init_l_Tactic_ReduceModChar_normNeg___closed__66();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__66);
l_Tactic_ReduceModChar_normNeg___closed__67 = _init_l_Tactic_ReduceModChar_normNeg___closed__67();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__67);
l_Tactic_ReduceModChar_normNeg___closed__68 = _init_l_Tactic_ReduceModChar_normNeg___closed__68();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__68);
l_Tactic_ReduceModChar_normNeg___closed__69 = _init_l_Tactic_ReduceModChar_normNeg___closed__69();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__69);
l_Tactic_ReduceModChar_normNeg___closed__70 = _init_l_Tactic_ReduceModChar_normNeg___closed__70();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__70);
l_Tactic_ReduceModChar_normNeg___closed__71 = _init_l_Tactic_ReduceModChar_normNeg___closed__71();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__71);
l_Tactic_ReduceModChar_normNeg___closed__72 = _init_l_Tactic_ReduceModChar_normNeg___closed__72();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__72);
l_Tactic_ReduceModChar_normNeg___closed__73 = _init_l_Tactic_ReduceModChar_normNeg___closed__73();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__73);
l_Tactic_ReduceModChar_normNeg___closed__74 = _init_l_Tactic_ReduceModChar_normNeg___closed__74();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__74);
l_Tactic_ReduceModChar_normNeg___closed__75 = _init_l_Tactic_ReduceModChar_normNeg___closed__75();
lean_mark_persistent(l_Tactic_ReduceModChar_normNeg___closed__75);
l_Tactic_ReduceModChar_normNegCoeffMul___closed__1 = _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_normNegCoeffMul___closed__1);
l_Tactic_ReduceModChar_normNegCoeffMul___closed__2 = _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_normNegCoeffMul___closed__2);
l_Tactic_ReduceModChar_normNegCoeffMul___closed__3 = _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_normNegCoeffMul___closed__3);
l_Tactic_ReduceModChar_normNegCoeffMul___closed__4 = _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_normNegCoeffMul___closed__4);
l_Tactic_ReduceModChar_normNegCoeffMul___closed__5 = _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_normNegCoeffMul___closed__5);
l_Tactic_ReduceModChar_normNegCoeffMul___closed__6 = _init_l_Tactic_ReduceModChar_normNegCoeffMul___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_normNegCoeffMul___closed__6);
l_Tactic_ReduceModChar_typeToCharP___lambda__1___closed__1 = _init_l_Tactic_ReduceModChar_typeToCharP___lambda__1___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___lambda__1___closed__1);
l_Tactic_ReduceModChar_typeToCharP___closed__1 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__1);
l_Tactic_ReduceModChar_typeToCharP___closed__2 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__2);
l_Tactic_ReduceModChar_typeToCharP___closed__3 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__3);
l_Tactic_ReduceModChar_typeToCharP___closed__4 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__4);
l_Tactic_ReduceModChar_typeToCharP___closed__5 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__5);
l_Tactic_ReduceModChar_typeToCharP___closed__6 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__6);
l_Tactic_ReduceModChar_typeToCharP___closed__7 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__7();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__7);
l_Tactic_ReduceModChar_typeToCharP___closed__8 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__8();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__8);
l_Tactic_ReduceModChar_typeToCharP___closed__9 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__9();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__9);
l_Tactic_ReduceModChar_typeToCharP___closed__10 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__10();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__10);
l_Tactic_ReduceModChar_typeToCharP___closed__11 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__11();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__11);
l_Tactic_ReduceModChar_typeToCharP___closed__12 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__12();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__12);
l_Tactic_ReduceModChar_typeToCharP___closed__13 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__13();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__13);
l_Tactic_ReduceModChar_typeToCharP___closed__14 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__14();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__14);
l_Tactic_ReduceModChar_typeToCharP___closed__15 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__15();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__15);
l_Tactic_ReduceModChar_typeToCharP___closed__16 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__16();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__16);
l_Tactic_ReduceModChar_typeToCharP___closed__17 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__17();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__17);
l_Tactic_ReduceModChar_typeToCharP___closed__18 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__18();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__18);
l_Tactic_ReduceModChar_typeToCharP___closed__19 = _init_l_Tactic_ReduceModChar_typeToCharP___closed__19();
lean_mark_persistent(l_Tactic_ReduceModChar_typeToCharP___closed__19);
l_Tactic_ReduceModChar_matchAndNorm___closed__1 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__1);
l_Tactic_ReduceModChar_matchAndNorm___closed__2 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__2);
l_Tactic_ReduceModChar_matchAndNorm___closed__3 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__3);
l_Tactic_ReduceModChar_matchAndNorm___closed__4 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__4);
l_Tactic_ReduceModChar_matchAndNorm___closed__5 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__5);
l_Tactic_ReduceModChar_matchAndNorm___closed__6 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__6);
l_Tactic_ReduceModChar_matchAndNorm___closed__7 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__7();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__7);
l_Tactic_ReduceModChar_matchAndNorm___closed__8 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__8();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__8);
l_Tactic_ReduceModChar_matchAndNorm___closed__9 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__9();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__9);
l_Tactic_ReduceModChar_matchAndNorm___closed__10 = _init_l_Tactic_ReduceModChar_matchAndNorm___closed__10();
lean_mark_persistent(l_Tactic_ReduceModChar_matchAndNorm___closed__10);
l_Tactic_ReduceModChar_derive___lambda__1___closed__1 = _init_l_Tactic_ReduceModChar_derive___lambda__1___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__1___closed__1);
l_Tactic_ReduceModChar_derive___lambda__1___closed__2 = _init_l_Tactic_ReduceModChar_derive___lambda__1___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__1___closed__2);
l_Tactic_ReduceModChar_derive___lambda__6___closed__1 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__1);
l_Tactic_ReduceModChar_derive___lambda__6___closed__2 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__2);
l_Tactic_ReduceModChar_derive___lambda__6___closed__3 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__3);
l_Tactic_ReduceModChar_derive___lambda__6___closed__4 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__4);
l_Tactic_ReduceModChar_derive___lambda__6___closed__5 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__5);
l_Tactic_ReduceModChar_derive___lambda__6___closed__6 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__6);
l_Tactic_ReduceModChar_derive___lambda__6___closed__7 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__7();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__7);
l_Tactic_ReduceModChar_derive___lambda__6___closed__8 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__8();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__8);
l_Tactic_ReduceModChar_derive___lambda__6___closed__9 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__9();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__9);
l_Tactic_ReduceModChar_derive___lambda__6___closed__10 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__10();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__10);
l_Tactic_ReduceModChar_derive___lambda__6___closed__11 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__11();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__11);
l_Tactic_ReduceModChar_derive___lambda__6___closed__12 = _init_l_Tactic_ReduceModChar_derive___lambda__6___closed__12();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__6___closed__12);
l_Tactic_ReduceModChar_derive___lambda__7___closed__1 = _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__7___closed__1);
l_Tactic_ReduceModChar_derive___lambda__7___closed__2 = _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__7___closed__2);
l_Tactic_ReduceModChar_derive___lambda__7___closed__3 = _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__7___closed__3);
l_Tactic_ReduceModChar_derive___lambda__7___closed__4 = _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__7___closed__4);
l_Tactic_ReduceModChar_derive___lambda__7___closed__5 = _init_l_Tactic_ReduceModChar_derive___lambda__7___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___lambda__7___closed__5);
l_Tactic_ReduceModChar_derive___closed__1 = _init_l_Tactic_ReduceModChar_derive___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_derive___closed__1);
l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__1 = _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__1);
l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__2 = _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__2);
l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__3 = _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__3);
l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__4 = _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__4);
l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__5 = _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__5);
l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__6 = _init_l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_reduceModCharTarget___lambda__2___closed__6);
l_Tactic_ReduceModChar_reduce__mod__char___closed__1 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__1);
l_Tactic_ReduceModChar_reduce__mod__char___closed__2 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__2);
l_Tactic_ReduceModChar_reduce__mod__char___closed__3 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__3);
l_Tactic_ReduceModChar_reduce__mod__char___closed__4 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__4);
l_Tactic_ReduceModChar_reduce__mod__char___closed__5 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__5);
l_Tactic_ReduceModChar_reduce__mod__char___closed__6 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__6();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__6);
l_Tactic_ReduceModChar_reduce__mod__char___closed__7 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__7();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__7);
l_Tactic_ReduceModChar_reduce__mod__char___closed__8 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__8();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__8);
l_Tactic_ReduceModChar_reduce__mod__char___closed__9 = _init_l_Tactic_ReduceModChar_reduce__mod__char___closed__9();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char___closed__9);
l_Tactic_ReduceModChar_reduce__mod__char = _init_l_Tactic_ReduceModChar_reduce__mod__char();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char);
l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__1 = _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__1);
l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__2 = _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__2();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__2);
l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__3 = _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__3();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__3);
l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__4 = _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__4();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__4);
l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__5 = _init_l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__5();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char_x21___closed__5);
l_Tactic_ReduceModChar_reduce__mod__char_x21 = _init_l_Tactic_ReduceModChar_reduce__mod__char_x21();
lean_mark_persistent(l_Tactic_ReduceModChar_reduce__mod__char_x21);
l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___closed__1 = _init_l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char__1___closed__1);
l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___closed__1 = _init_l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___closed__1();
lean_mark_persistent(l_Tactic_ReduceModChar___aux__Mathlib__Tactic__ReduceModChar______elabRules__Tactic__ReduceModChar__reduce__mod__char_x21__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
