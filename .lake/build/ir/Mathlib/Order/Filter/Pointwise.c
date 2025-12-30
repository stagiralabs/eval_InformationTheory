// Lean compiler output
// Module: Mathlib.Order.Filter.Pointwise
// Imports: Init Mathlib.Algebra.Order.Group.Defs Mathlib.Algebra.Order.Group.OrderIso Mathlib.Data.Set.Pointwise.SMul Mathlib.Order.Filter.AtTopBot.Map Mathlib.Order.Filter.Finite Mathlib.Order.Filter.NAry Mathlib.Order.Filter.Ultrafilter.Defs
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
LEAN_EXPORT lean_object* l_Filter_instSMulFilter___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSub___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_semigroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addSemigroup(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureOneHom___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_subtractionMonoid___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instAdd(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_commSemigroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instInv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureMulHom___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAddFilter___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAdd___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instAdd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Filter_commMonoid___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureAddMonoidHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_commMonoid___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNeg___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addZeroClass___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDiv(lean_object*);
LEAN_EXPORT lean_object* l_Filter_mapAddMonoidHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSMulFilter___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_distribMulActionFilter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureMonoidHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNeg___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mapMonoidHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureOneHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_divisionMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureZeroHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_instZSMul___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDistribNeg___rarg(lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Filter_commMonoid___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSMul___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNPow___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_subtractionMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Filter_commMonoid___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instInvolutiveNeg___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_addCommSemigroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZPow___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureAddMonoidHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instAdd___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureAddHom___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNSMul(lean_object*, lean_object*);
static lean_object* l_Filter_pureMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_Filter_mapAddMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_divisionMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Filter_addCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVSub___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addActionFilter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Filter_commMonoid___spec__2(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulOneClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureZeroHom(lean_object*, lean_object*);
static lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___closed__1;
static lean_object* l_Filter_pureAddMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_Filter_addAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRec___at_Filter_addCommMonoid___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNSMul___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureOneHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instNPow___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulActionFilter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_subtractionMonoid___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_zsmulRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Filter_divisionMonoid___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureMonoidHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureZeroHom___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureAddHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDiv___rarg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_instZSMul___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_monoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mapAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDistribNeg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instMul(lean_object*);
LEAN_EXPORT lean_object* l_Filter_subtractionCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulOneClass___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureMulHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureMulHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_divisionCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Filter_addAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZPow(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVSub___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulOneClass___boxed(lean_object*, lean_object*);
static lean_object* l_Filter_addZeroClass___closed__1;
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_commMonoid___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Filter_addCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instZPow___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_commMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNPow___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Filter_monoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Filter_commMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Filter_distribMulActionFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAddFilter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instAdd___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_mulOneClass___closed__1;
LEAN_EXPORT lean_object* l_Filter_instNeg(lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Filter_divisionMonoid___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addActionFilter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_commSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZPow___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSMulFilter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSub___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addZeroClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instMul___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulActionFilter___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addCommSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Filter_mapMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_commMonoid___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instMul___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addMonoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Filter_addMonoid(lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAddFilter___rarg(lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_binaryRec___at_npowBinRec_go___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNSMul___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instInvolutiveInv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDistribNeg___boxed(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNSMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulDistribMulActionFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instInvolutiveNeg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Filter_commMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNSMul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_subtractionMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAddFilter___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Filter_instSub(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulActionFilter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureZeroHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZSMul(lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAdd___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
static lean_object* l_Filter_monoid___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Filter_instNPow(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSMul___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_nsmulRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZPow___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_monoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instNPow___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureMulHom___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addSemigroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureAddHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_addActionFilter___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Filter_commMonoid___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instZPow___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instInv(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_divisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRec___at_Filter_addCommMonoid___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulDistribMulActionFilter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNeg___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_mapMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_distribMulActionFilter___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_addAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNPow___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureAddHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSub___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZPow___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVSub___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_mulOneClass___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_semigroup(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Filter_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_monoid(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instZero___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_subtractionCommMonoid___rarg(lean_object*);
lean_object* l_Nat_binaryRec___at_nsmulBinRec_go___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_npowBinRec_go___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_pureOneHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instSMulFilter___rarg(lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNPow___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instOne___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instVAdd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_nsmulBinRec___at_Filter_addCommMonoid___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instInvolutiveInv(lean_object*);
static lean_object* l_Filter_mulOneClass___closed__2;
LEAN_EXPORT lean_object* l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instNSMul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instOne___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_instOne(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instZero___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_instZero(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureOneHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureOneHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_pureOneHom___elambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureOneHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureOneHom___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureOneHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureOneHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureZeroHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureZeroHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_pureZeroHom___elambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureZeroHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureZeroHom___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureZeroHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureZeroHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instInv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_map___boxed), 4, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instInv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instNeg___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_instNeg___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instNeg___elambda__1___boxed), 3, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instNeg___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instNeg___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_instNeg___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_instInvolutiveInv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_map___boxed), 4, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instInvolutiveInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instInvolutiveInv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instInvolutiveNeg___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instNeg___elambda__1___boxed), 3, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instInvolutiveNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instInvolutiveNeg___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instMul___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instMul___elambda__1___boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instMul___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instMul___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instMul___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instAdd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instAdd___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instAdd___elambda__1___boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instAdd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instAdd___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instAdd___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instAdd___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_pureMulHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureMulHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_pureMulHom___elambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureMulHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureMulHom___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureMulHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureMulHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureAddHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureAddHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_pureAddHom___elambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureAddHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureAddHom___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureAddHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureAddHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instDiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instDiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instDiv___elambda__1___boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instDiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instDiv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instDiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instDiv___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instSub___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instSub___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instSub___elambda__1___boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instSub(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instSub___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instSub___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instSub___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instNSMul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_nsmulRec___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instNSMul___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instNSMul___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instNSMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
x_3 = lean_alloc_closure((void*)(l_Filter_instAdd___elambda__1___boxed), 4, 2);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_closure((void*)(l_Filter_instNSMul___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_instNSMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instNSMul___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instNSMul___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instNSMul___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instNSMul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_instNSMul(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instNPow___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instNPow___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instNPow___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instNPow___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instNPow___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instNPow___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instNPow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instNPow___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instNPow___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowRec___at_Filter_instNPow___elambda__1___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instNPow___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instNPow___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_zsmulRec___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_instZSMul___elambda__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_instZSMul___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instZSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Filter_instNeg___elambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, lean_box(0));
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_nsmulRec___at_Filter_instZSMul___spec__1___boxed), 5, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
x_6 = lean_alloc_closure((void*)(l_Filter_instZSMul___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instZSMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instZSMul___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instZSMul___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instZSMul___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_instZSMul___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_instZSMul___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_nsmulRec___at_Filter_instZSMul___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instZPow___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
static lean_object* _init_l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1;
x_5 = lean_int_dec_lt(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_nat_abs(x_2);
x_7 = lean_apply_2(x_1, x_6, x_3);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instZPow___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_npowRec___at_Filter_instZPow___elambda__1___spec__1___boxed), 5, 3);
lean_closure_set(x_6, 0, lean_box(0));
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
x_7 = l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg(x_6, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Filter_instZPow___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instZPow___elambda__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instZPow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_instZPow___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_instZPow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instZPow___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Filter_instZPow___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowRec___at_Filter_instZPow___elambda__1___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_zpowRec___at_Filter_instZPow___elambda__1___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instZPow___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_instZPow___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_semigroup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_semigroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_semigroup(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_addSemigroup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_addSemigroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_addSemigroup(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_commSemigroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_semigroup___boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_commSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_commSemigroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addCommSemigroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_addSemigroup___boxed), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addCommSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_addCommSemigroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_mulOneClass___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Filter_mulOneClass___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_mulOneClass___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_mulOneClass___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
x_2 = l_Filter_mulOneClass___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_mulOneClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_mulOneClass___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_mulOneClass___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_mulOneClass___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_mulOneClass___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_mulOneClass(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_addZeroClass___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
x_2 = l_Filter_mulOneClass___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_addZeroClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_addZeroClass___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_addZeroClass___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_addZeroClass(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_mapMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_alloc_closure((void*)(l_Filter_map___boxed), 4, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_mapMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Filter_mapMonoidHom___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_mapMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_mapMonoidHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_mapAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_alloc_closure((void*)(l_Filter_map___boxed), 4, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_mapAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Filter_mapAddMonoidHom___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_mapAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_mapAddMonoidHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
static lean_object* _init_l_Filter_pureMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_pureMulHom___elambda__1___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_pureMonoidHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureMonoidHom___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureMonoidHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureMonoidHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_pureAddMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_pureAddHom___elambda__1___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_pureAddMonoidHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureAddMonoidHom___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_pureAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_pureAddMonoidHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_monoid___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_monoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Filter_monoid___elambda__1___rarg___closed__1;
x_6 = l_Nat_binaryRec___at_npowBinRec_go___spec__1___rarg(x_2, x_5, x_3, x_1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_monoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_monoid___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_monoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Monoid_toMulOneClass___rarg(x_1);
x_3 = l_Filter_mulOneClass(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Filter_monoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Filter_monoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_monoid___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_monoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_monoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Filter_monoid___elambda__1___rarg___closed__1;
x_6 = l_Nat_binaryRec___at_nsmulBinRec_go___spec__1___rarg(x_2, x_5, x_3, x_1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_addMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_addMonoid___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_3 = l_Filter_addZeroClass(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Filter_addMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Filter_addMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_addMonoid___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addMonoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_addMonoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_commMonoid___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_land(x_8, x_3);
x_10 = lean_nat_dec_eq(x_9, x_6);
lean_dec(x_9);
x_11 = lean_nat_shiftr(x_3, x_8);
lean_dec(x_3);
if (x_10 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, lean_box(0));
lean_inc(x_12);
x_3 = x_11;
x_4 = x_12;
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, lean_box(0));
x_3 = x_11;
x_5 = x_14;
goto _start;
}
}
else
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = lean_apply_2(x_2, x_4, x_5);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_commMonoid___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Filter_commMonoid___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Monoid_toMulOneClass___rarg(x_1);
x_6 = l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___closed__1;
x_7 = l_Nat_binaryRec___at_Filter_commMonoid___spec__4___rarg(x_5, x_6, x_2, x_3, x_4);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Filter_commMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Filter_commMonoid___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowBinRec___at_Filter_commMonoid___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Filter_commMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowBinRec___at_Filter_commMonoid___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Filter_commMonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Filter_commMonoid___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_commMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Monoid_toMulOneClass___rarg(x_1);
x_3 = l_Filter_mulOneClass(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Filter_commMonoid___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Filter_commMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_commMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_commMonoid___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_binaryRec___at_Filter_commMonoid___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Filter_commMonoid___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowBinRec___at_Filter_commMonoid___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Filter_commMonoid___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowBinRecAuto___at_Filter_commMonoid___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_land(x_8, x_3);
x_10 = lean_nat_dec_eq(x_9, x_6);
lean_dec(x_9);
x_11 = lean_nat_shiftr(x_3, x_8);
lean_dec(x_3);
if (x_10 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, lean_box(0));
lean_inc(x_12);
x_3 = x_11;
x_4 = x_12;
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, lean_box(0));
x_3 = x_11;
x_5 = x_14;
goto _start;
}
}
else
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = lean_apply_2(x_2, x_4, x_5);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_6 = l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___closed__1;
x_7 = l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4___rarg(x_5, x_6, x_2, x_3, x_4);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRec___at_Filter_addCommMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
x_5 = l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRec___at_Filter_addCommMonoid___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulBinRec___at_Filter_addCommMonoid___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_nsmulBinRec___at_Filter_addCommMonoid___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_3 = l_Filter_addZeroClass(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_closure((void*)(l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Filter_addCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_addCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_binaryRec___at_Filter_addCommMonoid___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_nsmulBinRec_go___at_Filter_addCommMonoid___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRec___at_Filter_addCommMonoid___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_nsmulBinRec___at_Filter_addCommMonoid___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_nsmulBinRecAuto___at_Filter_addCommMonoid___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Filter_divisionMonoid___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1;
x_5 = lean_int_dec_lt(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_nat_abs(x_2);
x_7 = lean_apply_2(x_1, x_6, x_3);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_zpowRec___at_Filter_divisionMonoid___spec__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_divisionMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Filter_monoid___rarg(x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Filter_map___boxed), 4, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_4);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Filter_instDiv___elambda__1___boxed), 4, 2);
lean_closure_set(x_7, 0, lean_box(0));
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_npowRec___at_Filter_divisionMonoid___spec__1___boxed), 4, 2);
lean_closure_set(x_8, 0, lean_box(0));
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_zpowRec___at_Filter_divisionMonoid___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_5);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Filter_divisionMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_divisionMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Filter_divisionMonoid___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_npowRec___at_Filter_divisionMonoid___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_zpowRec___at_Filter_divisionMonoid___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Filter_divisionMonoid___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_zpowRec___at_Filter_divisionMonoid___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_subtractionMonoid___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1;
x_5 = lean_int_dec_lt(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_nat_abs(x_2);
x_7 = lean_apply_2(x_1, x_6, x_3);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_zsmulRec___at_Filter_subtractionMonoid___spec__2___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_subtractionMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Filter_addMonoid___rarg(x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Filter_instNeg___elambda__1___boxed), 3, 2);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Filter_instSub___elambda__1___boxed), 4, 2);
lean_closure_set(x_7, 0, lean_box(0));
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_nsmulRec___at_Filter_subtractionMonoid___spec__1___boxed), 4, 2);
lean_closure_set(x_8, 0, lean_box(0));
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_zsmulRec___at_Filter_subtractionMonoid___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_5);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Filter_subtractionMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_subtractionMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Filter_subtractionMonoid___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_nsmulRec___at_Filter_subtractionMonoid___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_zsmulRec___at_Filter_subtractionMonoid___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Filter_subtractionMonoid___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_zsmulRec___at_Filter_subtractionMonoid___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_divisionCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_divisionMonoid___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_divisionCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_divisionCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_subtractionCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_subtractionMonoid___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_subtractionCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_subtractionCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instDistribNeg___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instNeg___elambda__1___boxed), 3, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instDistribNeg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instDistribNeg___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instDistribNeg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_instDistribNeg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMul___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instSMul___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instSMul___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMul___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_instSMul___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAdd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAdd___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instVAdd___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAdd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instVAdd___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAdd___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_instVAdd___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instVSub___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instVSub___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instVSub___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instVSub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instVSub___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instVSub___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_instVSub___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMulFilter___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMulFilter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instSMulFilter___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMulFilter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instSMulFilter___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instSMulFilter___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_instSMulFilter___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAddFilter___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAddFilter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instVAddFilter___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAddFilter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_instVAddFilter___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instVAddFilter___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_instVAddFilter___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Filter_mulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instSMul___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_mulAction___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_mulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_addAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instVAdd___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_addAction___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_addAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_addAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_mulActionFilter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instSMulFilter___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_mulActionFilter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_mulActionFilter___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_mulActionFilter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_mulActionFilter(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_addActionFilter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instVAddFilter___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_addActionFilter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Filter_addActionFilter___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_addActionFilter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_addActionFilter(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_distribMulActionFilter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_instSMulFilter___elambda__1___boxed), 5, 3);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
lean_closure_set(x_2, 2, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_distribMulActionFilter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Filter_distribMulActionFilter___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_distribMulActionFilter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_distribMulActionFilter(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_mulDistribMulActionFilter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_mulDistribMulActionFilter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Filter_mulDistribMulActionFilter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_OrderIso(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pointwise_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_Map(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_NAry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Ultrafilter_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_Pointwise(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_OrderIso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pointwise_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_Map(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_NAry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Ultrafilter_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1 = _init_l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1();
lean_mark_persistent(l_zpowRec___at_Filter_instZPow___elambda__1___spec__2___rarg___closed__1);
l_Filter_mulOneClass___closed__1 = _init_l_Filter_mulOneClass___closed__1();
lean_mark_persistent(l_Filter_mulOneClass___closed__1);
l_Filter_mulOneClass___closed__2 = _init_l_Filter_mulOneClass___closed__2();
lean_mark_persistent(l_Filter_mulOneClass___closed__2);
l_Filter_addZeroClass___closed__1 = _init_l_Filter_addZeroClass___closed__1();
lean_mark_persistent(l_Filter_addZeroClass___closed__1);
l_Filter_pureMonoidHom___closed__1 = _init_l_Filter_pureMonoidHom___closed__1();
lean_mark_persistent(l_Filter_pureMonoidHom___closed__1);
l_Filter_pureAddMonoidHom___closed__1 = _init_l_Filter_pureAddMonoidHom___closed__1();
lean_mark_persistent(l_Filter_pureAddMonoidHom___closed__1);
l_Filter_monoid___elambda__1___rarg___closed__1 = _init_l_Filter_monoid___elambda__1___rarg___closed__1();
lean_mark_persistent(l_Filter_monoid___elambda__1___rarg___closed__1);
l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___closed__1 = _init_l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_Filter_commMonoid___spec__3___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
