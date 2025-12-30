// Lean compiler output
// Module: Mathlib.Algebra.Group.Pointwise.Finset.Basic
// Imports: Init Mathlib.Algebra.Group.Action.Pi Mathlib.Algebra.Group.Pointwise.Set.Finite Mathlib.Algebra.Group.Pointwise.Set.ListOfFn Mathlib.Data.Finset.Density Mathlib.Data.Finset.Max Mathlib.Data.Finset.NAry Mathlib.Data.Set.Pointwise.SMul Mathlib.Data.Finset.Preimage Mathlib.Algebra.BigOperators.Group.Finset.Basic
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
LEAN_EXPORT lean_object* l_Finset_vadd___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonMulHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_npow___elambda__1___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_mul___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_npow___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vadd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Finset_zsmul___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonAddHom___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonOneHom___elambda__1___rarg(lean_object*);
static lean_object* l_Finset_singletonAddMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_Finset_npow___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMulHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sub___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_smul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtractionCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_divisionMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_commSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Set_instFintypeOne(lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zsmul___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Finset_npow___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_decidablePred__mem__vadd__set___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zpow___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vsub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mul___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonAddMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addZeroClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_decidablePred__mem__vadd__set(lean_object*);
LEAN_EXPORT lean_object* l_Finset_vadd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_divisionMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vsub___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_commSemigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_vaddFinset___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addActionFinset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vsub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageOneHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addActionFinset___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_image___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_div___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_npow(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addCommSemigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulActionFinset___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulActionFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonOneHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_vaddFinset___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonMulHom(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_smulFinset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonAddHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zpow___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_zpow(lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtractionMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_nsmul___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_zsmulRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_npow___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_smulFinset___elambda__1(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_monoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_add___elambda__1(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Finset_smulFinset___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_npow___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zsmul(lean_object*);
LEAN_EXPORT lean_object* l_Finset_semigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_smul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zsmul___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_smulFinset___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageOneHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_commMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_vaddFinset___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageOneHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageOneHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zsmul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_instFintypeZero(lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMulHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Finset_zpow___elambda__1___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulActionFinset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMulHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_decidablePred__mem__vadd__set___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vadd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_smulFinset___elambda__1___spec__1(lean_object*);
lean_object* l_Finset_image_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_monoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_vsub___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_divisionMonoid___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonOneHom___boxed(lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulOneClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_neg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addZeroClass(lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonMulHom___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_mul(lean_object*);
LEAN_EXPORT lean_object* l_Finset_zpow___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_inv___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_vaddFinset___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_nsmul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zpow___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonMulHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_monoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_nsmul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtractionCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_nsmul___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sub(lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageOneHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_smul___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulOneClass(lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_npow___elambda__1___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zpow___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_npow___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Finset_divisionMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_add___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addSemigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Finset_zsmul___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_mulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_one___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_neg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_smulFinset___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vaddFinset___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_div___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_div(lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonAddHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonOneHom(lean_object*, lean_object*);
lean_object* l_nsmulRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_singletonMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_Finset_imageZeroHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageOneHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_commMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zpow___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sub___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_div___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_zero(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Finset_zsmul___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonAddHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_add(lean_object*);
LEAN_EXPORT lean_object* l_Finset_divisionCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_monoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vaddFinset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_divisionCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Finset_zpow___elambda__1___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_npow___elambda__1___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_neg___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Set_instFintypeZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zsmul___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Finset_subtractionMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_neg___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zpow___elambda__1___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_addActionFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zpow___elambda__1___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageMulHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_nsmul(lean_object*);
LEAN_EXPORT lean_object* l_Finset_one(lean_object*);
LEAN_EXPORT lean_object* l_Set_instFintypeOne___rarg(lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_addCommSemigroup(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zsmul___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_smul___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_monoid___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Set_fintypeSingleton___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inv(lean_object*);
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_semigroup(lean_object*);
LEAN_EXPORT lean_object* l_Finset_one___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_one(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_one___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_zero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_zero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_zero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonOneHom___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonOneHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_singletonOneHom___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonOneHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_singletonOneHom___elambda__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonOneHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_singletonOneHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_singletonZeroHom___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_singletonZeroHom___elambda__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonZeroHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_singletonZeroHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_imageOneHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_image___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_imageOneHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_imageOneHom___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_imageOneHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_alloc_closure((void*)(l_Finset_imageOneHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageOneHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_imageOneHom___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_imageOneHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_imageOneHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_imageOneHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_imageOneHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_image___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_imageZeroHom___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_alloc_closure((void*)(l_Finset_imageZeroHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageZeroHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_imageZeroHom___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_imageZeroHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_imageZeroHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_imageZeroHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_inv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_image___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_inv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_inv___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_inv___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_inv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_inv___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_neg___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_image___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_neg___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_neg___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_neg___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_neg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_neg___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_smul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image_u2082___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_smul___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_smul___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_smul___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_smul___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_smul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_smul___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_vadd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image_u2082___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_vadd___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vadd___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_vadd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_instHVAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Finset_vadd___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_vadd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vadd___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_smulFinset___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_smulFinset___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_smulFinset___elambda__1___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_smulFinset___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_2, x_3);
x_6 = l_Finset_image___at_Finset_smulFinset___elambda__1___spec__1___rarg(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_smulFinset___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_smulFinset___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_smulFinset___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_smulFinset___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_smulFinset(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_smulFinset___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_vaddFinset___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_vaddFinset___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_vaddFinset___elambda__1___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_vaddFinset___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_instHVAdd___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Finset_image___at_Finset_vaddFinset___elambda__1___spec__1___rarg(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_vaddFinset___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vaddFinset___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_vaddFinset___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vaddFinset___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_vaddFinset(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vaddFinset___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_mul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image_u2082___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_mul___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_mul___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_mul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_mul___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_add___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image_u2082___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_add___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_add___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_add(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_add___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonMulHom___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonMulHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_singletonMulHom___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonMulHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_singletonMulHom___elambda__1___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonMulHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_singletonMulHom(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonAddHom___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonAddHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_singletonAddHom___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_singletonAddHom___elambda__1___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonAddHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_singletonAddHom(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMulHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_image___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMulHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_imageMulHom___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMulHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_alloc_closure((void*)(l_Finset_imageMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMulHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Finset_imageMulHom___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMulHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_imageMulHom(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_image___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_imageAddHom___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_alloc_closure((void*)(l_Finset_imageAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Finset_imageAddHom___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_imageAddHom(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_div___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image_u2082___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_div___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_div___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_div___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_div___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_div(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_div___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sub___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image_u2082___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sub___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sub___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sub___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sub(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sub___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_nsmul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_nsmulRec___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_nsmul___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_nsmul___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_nsmul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Finset_zero___rarg(x_2);
x_5 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_alloc_closure((void*)(l_Finset_nsmul___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_nsmul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_nsmul___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_nsmul___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_nsmul___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_npow___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_npow___elambda__1___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_npow___elambda__1___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_npow___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Multiset_product___rarg(x_3, x_4);
x_7 = l_Finset_image___at_Finset_npow___elambda__1___spec__3___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_npow___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image_u2082___at_Finset_npow___elambda__1___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_9, x_5);
lean_dec(x_9);
x_11 = l_Finset_image_u2082___at_Finset_npow___elambda__1___spec__2___rarg(x_1, x_3, x_10, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Finset_npow___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_npow___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_npow___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_npow___elambda__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_npow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_npow___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_npow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_npow___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_npow___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_npow___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_zsmulRec___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_zsmul___elambda__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zsmul___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zsmul___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_zsmul___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zsmul___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Multiset_product___rarg(x_3, x_4);
x_7 = l_Finset_image___at_Finset_zsmul___spec__3___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zsmul___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image_u2082___at_Finset_zsmul___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Finset_zsmul___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_nsmulRec___at_Finset_zsmul___spec__1___rarg(x_1, x_2, x_3, x_9, x_5);
lean_dec(x_9);
x_11 = l_Finset_image_u2082___at_Finset_zsmul___spec__2___rarg(x_1, x_3, x_10, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Finset_zsmul___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulRec___at_Finset_zsmul___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_zsmul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_nsmulRec___at_Finset_zsmul___spec__1___rarg___boxed), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = lean_alloc_closure((void*)(l_Finset_zsmul___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_zsmul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_zsmul___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_zsmul___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_zsmul___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_zsmul___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Finset_zsmul___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_nsmulRec___at_Finset_zsmul___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zpow___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Finset_zpow___elambda__1___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_Finset_zpow___elambda__1___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zpow___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Multiset_product___rarg(x_3, x_4);
x_7 = l_Finset_image___at_Finset_zpow___elambda__1___spec__3___rarg(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_image_u2082___at_Finset_zpow___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image_u2082___at_Finset_zpow___elambda__1___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_9, x_5);
lean_dec(x_9);
x_11 = l_Finset_image_u2082___at_Finset_zpow___elambda__1___spec__2___rarg(x_1, x_3, x_10, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Finset_zpow___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
static lean_object* _init_l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___closed__1;
x_9 = lean_int_dec_lt(x_6, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_10 = lean_nat_abs(x_6);
x_11 = lean_apply_2(x_5, x_10, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_nat_abs(x_6);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
x_15 = lean_nat_add(x_14, x_13);
lean_dec(x_14);
x_16 = lean_apply_2(x_5, x_15, x_7);
x_17 = l_Finset_image___rarg(x_1, x_4, x_16);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Finset_zpow___elambda__1___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_zpow___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg___boxed), 5, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
x_8 = l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_7, x_6, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_zpow___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_zpow___elambda__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_zpow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_zpow___elambda__1___rarg___boxed), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_zpow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_zpow___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowRec___at_Finset_zpow___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_zpow___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_zpow___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_semigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_semigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_semigroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addSemigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_addSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addSemigroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_commSemigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_commSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_commSemigroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addCommSemigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_addCommSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addCommSemigroup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_mulOneClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Finset_one___rarg(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_mulOneClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_mulOneClass___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addZeroClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Finset_zero___rarg(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_addZeroClass(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addZeroClass___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_singletonMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_singletonMulHom___elambda__1___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_singletonMonoidHom___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_singletonMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Finset_singletonAddMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_singletonAddHom___elambda__1___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_singletonAddMonoidHom___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_singletonAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_singletonAddMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_imageMulHom___rarg(x_4, lean_box(0), x_6, x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_imageMonoidHom___rarg___boxed), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_imageMonoidHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_imageMonoidHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_imageAddHom___rarg(x_4, lean_box(0), x_6, x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_imageAddMonoidHom___rarg___boxed), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_imageAddMonoidHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_imageAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_imageAddMonoidHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_monoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_monoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_monoid___elambda__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_monoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_Monoid_toMulOneClass___rarg(x_2);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_6);
x_7 = l_Finset_one___rarg(x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_closure((void*)(l_Finset_monoid___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_monoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_monoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_monoid___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_monoid___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_addMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_addMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addMonoid___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_2);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_6);
x_7 = l_Finset_zero___rarg(x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Finset_nsmul___rarg(x_1, x_6, x_8);
x_10 = lean_alloc_closure((void*)(l_Finset_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finset_addMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_commMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_Monoid_toMulOneClass___rarg(x_2);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_6);
x_7 = l_Finset_one___rarg(x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_closure((void*)(l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg___boxed), 5, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_commMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_commMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_addCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_2);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_6);
x_7 = l_Finset_zero___rarg(x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Finset_nsmul___rarg(x_1, x_6, x_8);
x_10 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finset_addCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_addCommMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_divisionMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_zpow___elambda__1___rarg(x_1, x_2, x_3, x_4, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_divisionMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_Monoid_toMulOneClass___rarg(x_3);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_7);
x_8 = l_Finset_one___rarg(x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Finset_inv___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Finset_div___elambda__1___rarg), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
x_14 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
lean_dec(x_2);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg___boxed), 5, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_7);
lean_closure_set(x_17, 2, x_9);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_8);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_closure((void*)(l_Finset_divisionMonoid___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_15);
lean_closure_set(x_19, 2, x_9);
lean_closure_set(x_19, 3, x_16);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_11);
lean_ctor_set(x_20, 2, x_13);
lean_ctor_set(x_20, 3, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Finset_divisionMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_divisionMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_divisionMonoid___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_divisionMonoid___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_subtractionMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_AddMonoid_toAddZeroClass___rarg(x_3);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_7);
x_8 = l_Finset_zero___rarg(x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_Finset_nsmul___rarg(x_1, x_7, x_9);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Finset_neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Finset_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
x_15 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_2);
lean_dec(x_2);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Finset_zsmul___rarg(x_1, x_16, x_9, x_17);
x_19 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_19, 0, x_10);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_8);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_18);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_14);
lean_ctor_set(x_22, 3, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Finset_subtractionMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_subtractionMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_divisionCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_mul___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_Monoid_toMulOneClass___rarg(x_3);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_7);
x_8 = l_Finset_one___rarg(x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Finset_inv___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Finset_div___elambda__1___rarg), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
x_14 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
lean_dec(x_2);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_npowRec___at_Finset_npow___elambda__1___spec__1___rarg___boxed), 5, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_7);
lean_closure_set(x_17, 2, x_9);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_8);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_closure((void*)(l_Finset_divisionMonoid___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_15);
lean_closure_set(x_19, 2, x_9);
lean_closure_set(x_19, 3, x_16);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_11);
lean_ctor_set(x_20, 2, x_13);
lean_ctor_set(x_20, 3, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Finset_divisionCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_divisionCommMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_subtractionCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Finset_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_AddMonoid_toAddZeroClass___rarg(x_3);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_7);
x_8 = l_Finset_zero___rarg(x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_Finset_nsmul___rarg(x_1, x_7, x_9);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Finset_neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Finset_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
x_15 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_2);
lean_dec(x_2);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Finset_zsmul___rarg(x_1, x_16, x_9, x_17);
x_19 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_19, 0, x_10);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_8);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_18);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_14);
lean_ctor_set(x_22, 3, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Finset_subtractionCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_subtractionCommMonoid___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_vsub___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_image_u2082___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_vsub___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vsub___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_vsub___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vsub___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_vsub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_vsub___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_mulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_smul___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_mulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_mulAction___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_mulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_mulAction___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_addAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_vadd___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_addAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_addAction___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_addAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_addAction___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_mulActionFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_smulFinset___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_mulActionFinset(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_mulActionFinset___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_mulActionFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_mulActionFinset___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_addActionFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Finset_vaddFinset___elambda__1___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_instHVAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_addActionFinset(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_addActionFinset___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_addActionFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_addActionFinset___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_instFintypeOne___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_fintypeSingleton___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_instFintypeOne(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_instFintypeOne___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_instFintypeZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_fintypeSingleton___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_instFintypeZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_instFintypeZero___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_decidablePred__mem__vadd__set___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_le(x_2, x_3);
if (x_4 == 0)
{
uint8_t x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = 0;
x_6 = lean_box(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_sub(x_3, x_2);
x_8 = lean_apply_1(x_1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Nat_decidablePred__mem__vadd__set(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_decidablePred__mem__vadd__set___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_decidablePred__mem__vadd__set___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_decidablePred__mem__vadd__set___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Set_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Set_ListOfFn(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Density(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Max(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_NAry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pointwise_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Preimage(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Set_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Set_ListOfFn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Density(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Max(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_NAry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pointwise_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Preimage(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___closed__1 = _init_l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___closed__1();
lean_mark_persistent(l_zpowRec___at_Finset_zpow___elambda__1___spec__4___rarg___closed__1);
l_Finset_singletonMonoidHom___closed__1 = _init_l_Finset_singletonMonoidHom___closed__1();
lean_mark_persistent(l_Finset_singletonMonoidHom___closed__1);
l_Finset_singletonAddMonoidHom___closed__1 = _init_l_Finset_singletonAddMonoidHom___closed__1();
lean_mark_persistent(l_Finset_singletonAddMonoidHom___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
