// Lean compiler output
// Module: Mathlib.Algebra.Equiv.TransferInstance
// Imports: Init Mathlib.Algebra.Algebra.Equiv Mathlib.Algebra.Field.Basic Mathlib.Logic.Equiv.Defs Mathlib.Logic.Small.Defs
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
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_semiring___spec__2(lean_object*, lean_object*);
lean_object* l_DivisionRing_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Equiv_linearEquiv___spec__1___closed__1;
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_distribMulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_divisionRing___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocSemiring___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_semiring___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commSemiring___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ringEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulOneClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocRing___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algebra___spec__1(lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addZeroClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_field(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addEquiv___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algEquiv___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_distribMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_field___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_group___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ratCast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algebra___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_nonAssocRing___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ring___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semigroupWithZero___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_field___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_monoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_ring___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_module___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sub___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_module___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_commRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commSemiring___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commSemiring___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commRing___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
lean_object* l_DivInvMonoid_toZPow___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocRing_toAddCommGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Neg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_monoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addSemigroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_linearEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addZeroClass(lean_object*, lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nnratCast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoidWithOne___rarg(lean_object*, lean_object*);
lean_object* l_Monoid_toNatPow___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semigroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_field___spec__3(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_field___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commRing___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algebra___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commSemigroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_SemigroupWithZero_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Neg___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_commRing___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algebra___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addSemigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ringEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_divisionRing___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divisionRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algEquiv___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulZeroOneClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Inv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_nonAssocRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_monoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_semiring___spec__1(lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ringEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ring___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddCommGroupWithOne_toAddGroupWithOne___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulEquiv___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semigroupWithZero___rarg(lean_object*, lean_object*);
lean_object* l_Semifield_toCommGroupWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sub___rarg(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commSemigroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algEquiv___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commMonoid___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semiring___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Inv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algebra___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semigroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_ring___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_group___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Neg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commSemiring___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___elambda__1(lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semigroupWithZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_zero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_distribMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_semiring___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_one___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonAssocSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_group(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulZeroClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commSemiring(lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_monoid___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_field___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocRing___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_module(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nnratCast___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Semifield_toDivisionSemiring___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulOneClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addCommSemigroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_div(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoidWithOne___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_divisionRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ratCast___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_field___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_module___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_zero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commMonoid___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_module___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommGroupWithZero_toDivisionCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_module(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_distribMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonAssocSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_module___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algebra___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_semiring___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_add___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Neg___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulZeroClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_ring___spec__1(lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_add___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_monoid___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_ring___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commSemiring___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_DivisionRing_toDivInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commRing___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_ring___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_ring___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoidWithOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commRing___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algEquiv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_smul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_field___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Equiv_linearEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Equiv_linearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_algEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_semiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_divisionRing___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_commSemiring___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_one(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addCommSemigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_div___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mulZeroOneClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_ring___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_addMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ring___rarg(lean_object*, lean_object*);
lean_object* l_AddCommGroupWithOne_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sub(lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_one___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_symm___elambda__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_one(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_one___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_zero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_symm___elambda__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_zero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_zero___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_5, x_4);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_mul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_mul___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_add___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_5, x_4);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_add___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_add___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_add___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_div___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_5, x_4);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_div(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_div___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_sub___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_5, x_4);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_sub___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_sub___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_sub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_sub___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Inv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_1(x_2, x_5);
x_7 = l_Equiv_symm___elambda__2___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Inv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Inv___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Neg___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_1(x_2, x_5);
x_7 = l_Equiv_symm___elambda__2___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Neg___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Neg___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Neg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Neg___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_apply_2(x_3, x_4, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_smul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_smul___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_3, x_7, x_5);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_mulEquiv___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_mulEquiv___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_addEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addEquiv___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_addEquiv___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_ringEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_ringEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_ringEquiv___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_ringEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_ringEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_semigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_5, x_4);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_semigroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_semigroup___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addSemigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addSemigroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addSemigroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_semigroupWithZero___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_5, x_4);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_semigroupWithZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_3 = l_SemigroupWithZero_toMulZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Equiv_symm___elambda__2___rarg(x_1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_semigroupWithZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_commSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_5, x_4);
x_8 = lean_apply_2(x_2, x_6, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_commSemigroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_commSemigroup___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addCommSemigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addCommSemigroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addCommSemigroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulZeroClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Equiv_symm___elambda__2___rarg(x_1, x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulZeroClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_mulZeroClass___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulOneClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Equiv_symm___elambda__2___rarg(x_1, x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulOneClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_mulOneClass___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addZeroClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Equiv_symm___elambda__2___rarg(x_1, x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_addZeroClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addZeroClass___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulZeroOneClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_3 = l_MulZeroOneClass_toMulZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_1);
x_8 = l_Equiv_symm___elambda__2___rarg(x_1, x_7);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulZeroOneClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_mulZeroOneClass___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_monoid___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_monoid___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_monoid___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_monoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_pow___elambda__1___rarg(x_1, lean_box(0), x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_monoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_Monoid_toMulOneClass___rarg(x_2);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_5);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_monoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_AddMonoid_toAddZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_5);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commMonoid___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_commMonoid___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_commMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_Monoid_toMulOneClass___rarg(x_2);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_5);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_commMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_commMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_AddMonoid_toAddZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_5);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_addCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_group___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_group___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_group___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_group___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_1(x_2, x_5);
x_7 = l_Equiv_symm___elambda__2___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_group___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_3 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_Monoid_toMulOneClass___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_group___rarg___lambda__1), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_14, 0, x_6);
x_15 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_15, 0, x_2);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_5);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_15);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Equiv_group(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_group___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_addGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_3 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_AddMonoid_toAddZeroClass___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_14, 0, x_6);
lean_closure_set(x_14, 1, x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_addGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_15, 0, x_2);
lean_closure_set(x_15, 1, x_1);
x_16 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_5);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_15);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Equiv_addGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_commGroup___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commGroup___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_commGroup___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_commGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_3 = l_DivInvOneMonoid_toInvOneClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_Monoid_toMulOneClass___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_group___rarg___lambda__1), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_14, 0, x_6);
x_15 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_15, 0, x_2);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_5);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_15);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Equiv_commGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_commGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_3 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_AddMonoid_toAddZeroClass___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_14, 0, x_6);
lean_closure_set(x_14, 1, x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_addGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_15, 0, x_2);
lean_closure_set(x_15, 1, x_1);
x_16 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_5);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_15);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Equiv_addCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_5);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonUnitalNonAssocSemiring___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_5);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonUnitalSemiring___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoidWithOne___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoidWithOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_1);
x_10 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
lean_ctor_set(x_11, 2, x_10);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_1);
x_13 = l_Equiv_symm___elambda__2___rarg(x_1, x_12);
x_14 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_1);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Equiv_addMonoidWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 4);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_4);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_inc(x_1);
x_7 = l_Equiv_symm___elambda__2___rarg(x_1, x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_7);
lean_ctor_set(x_12, 2, x_11);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_1);
x_14 = l_Equiv_symm___elambda__2___rarg(x_1, x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_15, 0, x_3);
lean_closure_set(x_15, 1, x_1);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_14);
x_17 = l_AddGroupWithOne_toAddGroup___rarg(x_2);
x_18 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_ctor_get(x_17, 2);
lean_inc(x_21);
lean_dec(x_17);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_21);
lean_inc(x_1);
lean_inc(x_2);
x_23 = lean_alloc_closure((void*)(l_Equiv_addGroupWithOne___rarg___lambda__1), 4, 2);
lean_closure_set(x_23, 0, x_2);
lean_closure_set(x_23, 1, x_1);
x_24 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_24, 0, x_23);
x_25 = lean_alloc_closure((void*)(l_Equiv_addGroupWithOne___rarg___lambda__2), 3, 2);
lean_closure_set(x_25, 0, x_2);
lean_closure_set(x_25, 1, x_1);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_16);
lean_ctor_set(x_26, 2, x_20);
lean_ctor_set(x_26, 3, x_22);
lean_ctor_set(x_26, 4, x_24);
return x_26;
}
}
LEAN_EXPORT lean_object* l_Equiv_addGroupWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_addGroupWithOne___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_nonAssocSemiring___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonAssocSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_2);
lean_dec(x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = l_AddMonoid_toAddZeroClass___rarg(x_7);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_Equiv_symm___elambda__2___rarg(x_1, x_9);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_13, 0, x_7);
lean_closure_set(x_13, 1, x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_ctor_get(x_6, 2);
lean_inc(x_15);
lean_inc(x_1);
x_16 = l_Equiv_symm___elambda__2___rarg(x_1, x_15);
x_17 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_14);
x_18 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_nonAssocSemiring___spec__1___rarg), 3, 2);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_6);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_10);
lean_ctor_set(x_19, 2, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_5);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
lean_ctor_set(x_21, 2, x_18);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonAssocSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonAssocSemiring___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_semiring___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_semiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_semiring___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_semiring___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_semiring___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_semiring___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_semiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_3);
lean_dec(x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = l_AddMonoid_toAddZeroClass___rarg(x_8);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_inc(x_1);
x_11 = l_Equiv_symm___elambda__2___rarg(x_1, x_10);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_14, 0, x_8);
lean_closure_set(x_14, 1, x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_ctor_get(x_7, 2);
lean_inc(x_16);
lean_inc(x_1);
x_17 = l_Equiv_symm___elambda__2___rarg(x_1, x_16);
x_18 = l_Semiring_toMonoidWithZero___rarg(x_2);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_15);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_semiring___spec__2___rarg), 3, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_7);
x_23 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_20);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_11);
lean_ctor_set(x_24, 2, x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_6);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
return x_26;
}
}
LEAN_EXPORT lean_object* l_Equiv_semiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_semiring___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_semiring___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_semiring___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_semiring___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_semiring___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
x_6 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_5);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonUnitalCommSemiring___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_commSemiring___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commSemiring___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commSemiring___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_commSemiring___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_commSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_3);
lean_dec(x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = l_AddMonoid_toAddZeroClass___rarg(x_8);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_inc(x_1);
x_11 = l_Equiv_symm___elambda__2___rarg(x_1, x_10);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_14, 0, x_8);
lean_closure_set(x_14, 1, x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_ctor_get(x_7, 2);
lean_inc(x_16);
lean_inc(x_1);
x_17 = l_Equiv_symm___elambda__2___rarg(x_1, x_16);
x_18 = l_Semiring_toMonoidWithZero___rarg(x_2);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_15);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_commSemiring___spec__2___rarg), 3, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_7);
x_23 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_20);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_11);
lean_ctor_set(x_24, 2, x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_6);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
return x_26;
}
}
LEAN_EXPORT lean_object* l_Equiv_commSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_commSemiring___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commSemiring___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_commSemiring___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_commSemiring___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_commSemiring___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_2);
x_3 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_2);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_1);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
x_7 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_3);
lean_dec(x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_ctor_get(x_12, 2);
lean_inc(x_16);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_16);
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_1);
x_20 = lean_alloc_closure((void*)(l_Equiv_addGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_20, 0, x_12);
lean_closure_set(x_20, 1, x_1);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_19);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_9);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_23, 0, x_20);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_17);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalNonAssocRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonUnitalNonAssocRing___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_2);
x_3 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_2);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_1);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
x_7 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_3);
lean_dec(x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_ctor_get(x_12, 2);
lean_inc(x_16);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_16);
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_1);
x_20 = lean_alloc_closure((void*)(l_Equiv_addGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_20, 0, x_12);
lean_closure_set(x_20, 1, x_1);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_19);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_9);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_23, 0, x_20);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_17);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonUnitalRing___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocRing___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_nonAssocRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_nonAssocRing___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_nonAssocRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 3);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_nonAssocRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_nonAssocRing___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = l_AddCommGroupWithOne_toAddGroupWithOne___elambda__1___rarg(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_3 = l_NonAssocRing_toAddCommGroupWithOne___rarg(x_2);
lean_inc(x_3);
x_4 = l_AddCommGroupWithOne_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = l_AddMonoid_toAddZeroClass___rarg(x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_inc(x_1);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_12, 0, x_6);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
lean_inc(x_13);
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_ctor_get(x_5, 2);
lean_inc(x_15);
lean_inc(x_1);
x_16 = l_Equiv_symm___elambda__2___rarg(x_1, x_15);
lean_inc(x_1);
lean_inc(x_5);
x_17 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_17, 0, x_5);
lean_closure_set(x_17, 1, x_1);
lean_inc(x_16);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 2, x_16);
x_19 = l_AddGroupWithOne_toAddGroup___rarg(x_4);
lean_dec(x_4);
x_20 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_ctor_get(x_19, 2);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_1);
x_24 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_23);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Equiv_nonAssocRing___rarg___lambda__1), 4, 2);
lean_closure_set(x_25, 0, x_3);
lean_closure_set(x_25, 1, x_1);
x_26 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_26, 0, x_25);
lean_inc(x_1);
lean_inc(x_2);
x_27 = lean_alloc_closure((void*)(l_Equiv_nonAssocRing___rarg___lambda__2), 3, 2);
lean_closure_set(x_27, 0, x_2);
lean_closure_set(x_27, 1, x_1);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_18);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_24);
lean_ctor_set(x_28, 4, x_26);
x_29 = lean_ctor_get(x_2, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_30);
x_32 = l_AddGroupWithOne_toAddGroup___rarg(x_28);
lean_dec(x_28);
x_33 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_32);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_36 = lean_ctor_get(x_33, 0);
x_37 = lean_ctor_get(x_33, 1);
x_38 = lean_ctor_get(x_32, 3);
x_39 = lean_ctor_get(x_32, 1);
lean_dec(x_39);
x_40 = lean_ctor_get(x_32, 0);
lean_dec(x_40);
x_41 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_41, 0, x_13);
lean_inc(x_1);
x_42 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_nonAssocRing___spec__1___rarg), 3, 2);
lean_closure_set(x_42, 0, x_1);
lean_closure_set(x_42, 1, x_5);
x_43 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_43, 0, x_38);
x_44 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_nonAssocRing___spec__2___rarg), 3, 2);
lean_closure_set(x_44, 0, x_1);
lean_closure_set(x_44, 1, x_2);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_11);
lean_ctor_set(x_45, 1, x_36);
lean_ctor_set(x_45, 2, x_41);
lean_ctor_set(x_32, 3, x_43);
lean_ctor_set(x_32, 1, x_37);
lean_ctor_set(x_32, 0, x_45);
lean_ctor_set(x_33, 1, x_31);
lean_ctor_set(x_33, 0, x_32);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_33);
lean_ctor_set(x_46, 1, x_16);
lean_ctor_set(x_46, 2, x_42);
lean_ctor_set(x_46, 3, x_44);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_47 = lean_ctor_get(x_33, 0);
x_48 = lean_ctor_get(x_33, 1);
x_49 = lean_ctor_get(x_32, 2);
x_50 = lean_ctor_get(x_32, 3);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_32);
x_51 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_51, 0, x_13);
lean_inc(x_1);
x_52 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_nonAssocRing___spec__1___rarg), 3, 2);
lean_closure_set(x_52, 0, x_1);
lean_closure_set(x_52, 1, x_5);
x_53 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_53, 0, x_50);
x_54 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_nonAssocRing___spec__2___rarg), 3, 2);
lean_closure_set(x_54, 0, x_1);
lean_closure_set(x_54, 1, x_2);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_11);
lean_ctor_set(x_55, 1, x_47);
lean_ctor_set(x_55, 2, x_51);
x_56 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_48);
lean_ctor_set(x_56, 2, x_49);
lean_ctor_set(x_56, 3, x_53);
lean_ctor_set(x_33, 1, x_31);
lean_ctor_set(x_33, 0, x_56);
x_57 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_57, 0, x_33);
lean_ctor_set(x_57, 1, x_16);
lean_ctor_set(x_57, 2, x_52);
lean_ctor_set(x_57, 3, x_54);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_58 = lean_ctor_get(x_33, 0);
x_59 = lean_ctor_get(x_33, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_33);
x_60 = lean_ctor_get(x_32, 2);
lean_inc(x_60);
x_61 = lean_ctor_get(x_32, 3);
lean_inc(x_61);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 lean_ctor_release(x_32, 2);
 lean_ctor_release(x_32, 3);
 x_62 = x_32;
} else {
 lean_dec_ref(x_32);
 x_62 = lean_box(0);
}
x_63 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_63, 0, x_13);
lean_inc(x_1);
x_64 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_nonAssocRing___spec__1___rarg), 3, 2);
lean_closure_set(x_64, 0, x_1);
lean_closure_set(x_64, 1, x_5);
x_65 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_65, 0, x_61);
x_66 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_nonAssocRing___spec__2___rarg), 3, 2);
lean_closure_set(x_66, 0, x_1);
lean_closure_set(x_66, 1, x_2);
x_67 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_67, 0, x_11);
lean_ctor_set(x_67, 1, x_58);
lean_ctor_set(x_67, 2, x_63);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 4, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_59);
lean_ctor_set(x_68, 2, x_60);
lean_ctor_set(x_68, 3, x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_31);
x_70 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_16);
lean_ctor_set(x_70, 2, x_64);
lean_ctor_set(x_70, 3, x_66);
return x_70;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_nonAssocRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonAssocRing___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_ring___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Semiring_toMonoidWithZero___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_ring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_ring___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_ring___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_ring___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_ring___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_ring___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 4);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_ring___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_ring___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_ring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_4);
x_7 = l_Ring_toAddGroupWithOne___elambda__1___rarg(x_2, x_3, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_ring___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 4);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_ring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_2);
x_3 = l_Ring_toNonAssocRing___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
lean_inc(x_2);
x_7 = l_Ring_toAddGroupWithOne___rarg(x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = l_AddMonoid_toAddZeroClass___rarg(x_9);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_inc(x_1);
x_12 = l_Equiv_symm___elambda__2___rarg(x_1, x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_1);
x_16 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
lean_inc(x_16);
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_ctor_get(x_8, 2);
lean_inc(x_18);
lean_inc(x_1);
x_19 = l_Equiv_symm___elambda__2___rarg(x_1, x_18);
lean_inc(x_1);
lean_inc(x_8);
x_20 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_20, 0, x_8);
lean_closure_set(x_20, 1, x_1);
lean_inc(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_19);
x_22 = l_AddGroupWithOne_toAddGroup___rarg(x_7);
lean_dec(x_7);
x_23 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_22, 2);
lean_inc(x_26);
lean_dec(x_22);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_26);
lean_inc(x_2);
lean_inc(x_1);
x_28 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__1), 4, 2);
lean_closure_set(x_28, 0, x_1);
lean_closure_set(x_28, 1, x_2);
x_29 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
lean_inc(x_1);
lean_inc(x_2);
x_30 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__2), 3, 2);
lean_closure_set(x_30, 0, x_2);
lean_closure_set(x_30, 1, x_1);
x_31 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_25);
lean_ctor_set(x_31, 3, x_27);
lean_ctor_set(x_31, 4, x_29);
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
x_33 = l_Semiring_toMonoidWithZero___rarg(x_32);
lean_dec(x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = l_AddGroupWithOne_toAddGroup___rarg(x_31);
lean_dec(x_31);
x_37 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_36);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_40 = lean_ctor_get(x_37, 0);
x_41 = lean_ctor_get(x_37, 1);
x_42 = lean_ctor_get(x_36, 2);
x_43 = lean_ctor_get(x_36, 3);
x_44 = lean_ctor_get(x_36, 1);
lean_dec(x_44);
x_45 = lean_ctor_get(x_36, 0);
lean_dec(x_45);
x_46 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_46, 0, x_16);
x_47 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_47, 0, x_43);
lean_inc(x_1);
x_48 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_ring___spec__2___rarg), 3, 2);
lean_closure_set(x_48, 0, x_1);
lean_closure_set(x_48, 1, x_8);
lean_inc(x_1);
x_49 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_ring___spec__3___rarg), 3, 2);
lean_closure_set(x_49, 0, x_1);
lean_closure_set(x_49, 1, x_2);
x_50 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_50, 0, x_1);
lean_closure_set(x_50, 1, x_35);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_14);
lean_ctor_set(x_51, 1, x_40);
lean_ctor_set(x_51, 2, x_46);
lean_ctor_set(x_37, 1, x_6);
lean_ctor_set(x_37, 0, x_51);
lean_ctor_set(x_36, 3, x_50);
lean_ctor_set(x_36, 2, x_48);
lean_ctor_set(x_36, 1, x_19);
lean_ctor_set(x_36, 0, x_37);
x_52 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_52, 0, x_36);
lean_ctor_set(x_52, 1, x_41);
lean_ctor_set(x_52, 2, x_42);
lean_ctor_set(x_52, 3, x_47);
lean_ctor_set(x_52, 4, x_49);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_53 = lean_ctor_get(x_37, 0);
x_54 = lean_ctor_get(x_37, 1);
x_55 = lean_ctor_get(x_36, 2);
x_56 = lean_ctor_get(x_36, 3);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_36);
x_57 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_57, 0, x_16);
x_58 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_58, 0, x_56);
lean_inc(x_1);
x_59 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_ring___spec__2___rarg), 3, 2);
lean_closure_set(x_59, 0, x_1);
lean_closure_set(x_59, 1, x_8);
lean_inc(x_1);
x_60 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_ring___spec__3___rarg), 3, 2);
lean_closure_set(x_60, 0, x_1);
lean_closure_set(x_60, 1, x_2);
x_61 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_61, 0, x_1);
lean_closure_set(x_61, 1, x_35);
x_62 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_62, 0, x_14);
lean_ctor_set(x_62, 1, x_53);
lean_ctor_set(x_62, 2, x_57);
lean_ctor_set(x_37, 1, x_6);
lean_ctor_set(x_37, 0, x_62);
x_63 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_63, 0, x_37);
lean_ctor_set(x_63, 1, x_19);
lean_ctor_set(x_63, 2, x_59);
lean_ctor_set(x_63, 3, x_61);
x_64 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_54);
lean_ctor_set(x_64, 2, x_55);
lean_ctor_set(x_64, 3, x_58);
lean_ctor_set(x_64, 4, x_60);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_65 = lean_ctor_get(x_37, 0);
x_66 = lean_ctor_get(x_37, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_37);
x_67 = lean_ctor_get(x_36, 2);
lean_inc(x_67);
x_68 = lean_ctor_get(x_36, 3);
lean_inc(x_68);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 lean_ctor_release(x_36, 2);
 lean_ctor_release(x_36, 3);
 x_69 = x_36;
} else {
 lean_dec_ref(x_36);
 x_69 = lean_box(0);
}
x_70 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_70, 0, x_16);
x_71 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_71, 0, x_68);
lean_inc(x_1);
x_72 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_ring___spec__2___rarg), 3, 2);
lean_closure_set(x_72, 0, x_1);
lean_closure_set(x_72, 1, x_8);
lean_inc(x_1);
x_73 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_ring___spec__3___rarg), 3, 2);
lean_closure_set(x_73, 0, x_1);
lean_closure_set(x_73, 1, x_2);
x_74 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_74, 0, x_1);
lean_closure_set(x_74, 1, x_35);
x_75 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_75, 0, x_14);
lean_ctor_set(x_75, 1, x_65);
lean_ctor_set(x_75, 2, x_70);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_6);
if (lean_is_scalar(x_69)) {
 x_77 = lean_alloc_ctor(0, 4, 0);
} else {
 x_77 = x_69;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_19);
lean_ctor_set(x_77, 2, x_72);
lean_ctor_set(x_77, 3, x_74);
x_78 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_66);
lean_ctor_set(x_78, 2, x_67);
lean_ctor_set(x_78, 3, x_71);
lean_ctor_set(x_78, 4, x_73);
return x_78;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_ring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_ring___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_ring___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_ring___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_2);
x_3 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_2);
x_4 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_1);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
x_7 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_ctor_get(x_12, 2);
lean_inc(x_16);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_16);
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_1);
x_20 = lean_alloc_closure((void*)(l_Equiv_addGroup___rarg___lambda__1), 4, 2);
lean_closure_set(x_20, 0, x_12);
lean_closure_set(x_20, 1, x_1);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_19);
x_22 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_22, 0, x_20);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_6);
lean_ctor_set(x_23, 2, x_21);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_17);
lean_ctor_set(x_24, 3, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Equiv_nonUnitalCommRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nonUnitalCommRing___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commRing___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Semiring_toMonoidWithZero___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_commRing___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_commRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_commRing___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_commRing___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 4);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_commRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_commRing___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_commRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_2);
x_3 = l_CommRing_toNonUnitalCommRing___rarg(x_2);
x_4 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
lean_inc(x_2);
x_7 = l_Ring_toAddGroupWithOne___rarg(x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = l_AddMonoid_toAddZeroClass___rarg(x_9);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_inc(x_1);
x_12 = l_Equiv_symm___elambda__2___rarg(x_1, x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_1);
x_16 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
lean_inc(x_16);
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_ctor_get(x_8, 2);
lean_inc(x_18);
lean_inc(x_1);
x_19 = l_Equiv_symm___elambda__2___rarg(x_1, x_18);
lean_inc(x_1);
lean_inc(x_8);
x_20 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_20, 0, x_8);
lean_closure_set(x_20, 1, x_1);
lean_inc(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_19);
x_22 = l_AddGroupWithOne_toAddGroup___rarg(x_7);
lean_dec(x_7);
x_23 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_22, 2);
lean_inc(x_26);
lean_dec(x_22);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_26);
lean_inc(x_2);
lean_inc(x_1);
x_28 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__1), 4, 2);
lean_closure_set(x_28, 0, x_1);
lean_closure_set(x_28, 1, x_2);
x_29 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_29, 0, x_28);
lean_inc(x_1);
lean_inc(x_2);
x_30 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__2), 3, 2);
lean_closure_set(x_30, 0, x_2);
lean_closure_set(x_30, 1, x_1);
x_31 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_25);
lean_ctor_set(x_31, 3, x_27);
lean_ctor_set(x_31, 4, x_29);
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
x_33 = l_Semiring_toMonoidWithZero___rarg(x_32);
lean_dec(x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_35, 0, x_34);
x_36 = l_AddGroupWithOne_toAddGroup___rarg(x_31);
lean_dec(x_31);
x_37 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_36);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_40 = lean_ctor_get(x_37, 0);
x_41 = lean_ctor_get(x_37, 1);
x_42 = lean_ctor_get(x_36, 2);
x_43 = lean_ctor_get(x_36, 3);
x_44 = lean_ctor_get(x_36, 1);
lean_dec(x_44);
x_45 = lean_ctor_get(x_36, 0);
lean_dec(x_45);
lean_inc(x_1);
x_46 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_46, 0, x_1);
lean_closure_set(x_46, 1, x_35);
x_47 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_47, 0, x_16);
x_48 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_48, 0, x_43);
lean_inc(x_1);
x_49 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_commRing___spec__2___rarg), 3, 2);
lean_closure_set(x_49, 0, x_1);
lean_closure_set(x_49, 1, x_8);
x_50 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_commRing___spec__3___rarg), 3, 2);
lean_closure_set(x_50, 0, x_1);
lean_closure_set(x_50, 1, x_2);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_14);
lean_ctor_set(x_51, 1, x_40);
lean_ctor_set(x_51, 2, x_47);
lean_ctor_set(x_37, 1, x_6);
lean_ctor_set(x_37, 0, x_51);
lean_ctor_set(x_36, 3, x_46);
lean_ctor_set(x_36, 2, x_49);
lean_ctor_set(x_36, 1, x_19);
lean_ctor_set(x_36, 0, x_37);
x_52 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_52, 0, x_36);
lean_ctor_set(x_52, 1, x_41);
lean_ctor_set(x_52, 2, x_42);
lean_ctor_set(x_52, 3, x_48);
lean_ctor_set(x_52, 4, x_50);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_53 = lean_ctor_get(x_37, 0);
x_54 = lean_ctor_get(x_37, 1);
x_55 = lean_ctor_get(x_36, 2);
x_56 = lean_ctor_get(x_36, 3);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_36);
lean_inc(x_1);
x_57 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_57, 0, x_1);
lean_closure_set(x_57, 1, x_35);
x_58 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_58, 0, x_16);
x_59 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_59, 0, x_56);
lean_inc(x_1);
x_60 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_commRing___spec__2___rarg), 3, 2);
lean_closure_set(x_60, 0, x_1);
lean_closure_set(x_60, 1, x_8);
x_61 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_commRing___spec__3___rarg), 3, 2);
lean_closure_set(x_61, 0, x_1);
lean_closure_set(x_61, 1, x_2);
x_62 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_62, 0, x_14);
lean_ctor_set(x_62, 1, x_53);
lean_ctor_set(x_62, 2, x_58);
lean_ctor_set(x_37, 1, x_6);
lean_ctor_set(x_37, 0, x_62);
x_63 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_63, 0, x_37);
lean_ctor_set(x_63, 1, x_19);
lean_ctor_set(x_63, 2, x_60);
lean_ctor_set(x_63, 3, x_57);
x_64 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_54);
lean_ctor_set(x_64, 2, x_55);
lean_ctor_set(x_64, 3, x_59);
lean_ctor_set(x_64, 4, x_61);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_65 = lean_ctor_get(x_37, 0);
x_66 = lean_ctor_get(x_37, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_37);
x_67 = lean_ctor_get(x_36, 2);
lean_inc(x_67);
x_68 = lean_ctor_get(x_36, 3);
lean_inc(x_68);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 lean_ctor_release(x_36, 2);
 lean_ctor_release(x_36, 3);
 x_69 = x_36;
} else {
 lean_dec_ref(x_36);
 x_69 = lean_box(0);
}
lean_inc(x_1);
x_70 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_70, 0, x_1);
lean_closure_set(x_70, 1, x_35);
x_71 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_71, 0, x_16);
x_72 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_72, 0, x_68);
lean_inc(x_1);
x_73 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_commRing___spec__2___rarg), 3, 2);
lean_closure_set(x_73, 0, x_1);
lean_closure_set(x_73, 1, x_8);
x_74 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_commRing___spec__3___rarg), 3, 2);
lean_closure_set(x_74, 0, x_1);
lean_closure_set(x_74, 1, x_2);
x_75 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_75, 0, x_14);
lean_ctor_set(x_75, 1, x_65);
lean_ctor_set(x_75, 2, x_71);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_6);
if (lean_is_scalar(x_69)) {
 x_77 = lean_alloc_ctor(0, 4, 0);
} else {
 x_77 = x_69;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_19);
lean_ctor_set(x_77, 2, x_73);
lean_ctor_set(x_77, 3, x_70);
x_78 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_66);
lean_ctor_set(x_78, 2, x_67);
lean_ctor_set(x_78, 3, x_72);
lean_ctor_set(x_78, 4, x_74);
return x_78;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_commRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_commRing___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_commRing___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_commRing___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_nnratCast___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_nnratCast(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_nnratCast___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_ratCast___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = l_Equiv_symm___elambda__2___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_ratCast(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_ratCast___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_DivisionRing_toDivisionSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Semiring_toMonoidWithZero___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_divisionRing___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_DivisionRing_toDivInvMonoid___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_divisionRing___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_divisionRing___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_divisionRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_divisionRing___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_divisionRing___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 4);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_divisionRing___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_divisionRing___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_apply_1(x_4, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = l_Equiv_symm___elambda__2___rarg(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 6);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 7);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_divisionRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_3);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = l_AddMonoid_toAddZeroClass___rarg(x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_inc(x_1);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_12, 0, x_6);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
lean_inc(x_13);
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_ctor_get(x_5, 2);
lean_inc(x_15);
lean_inc(x_1);
x_16 = l_Equiv_symm___elambda__2___rarg(x_1, x_15);
lean_inc(x_1);
lean_inc(x_5);
x_17 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_17, 0, x_5);
lean_closure_set(x_17, 1, x_1);
lean_inc(x_16);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 2, x_16);
x_19 = l_AddGroupWithOne_toAddGroup___rarg(x_4);
lean_dec(x_4);
x_20 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_ctor_get(x_19, 2);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_1);
x_24 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_23);
lean_inc(x_3);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__1), 4, 2);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_3);
x_26 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_26, 0, x_25);
lean_inc(x_1);
lean_inc(x_3);
x_27 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__2), 3, 2);
lean_closure_set(x_27, 0, x_3);
lean_closure_set(x_27, 1, x_1);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_18);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_24);
lean_ctor_set(x_28, 4, x_26);
x_29 = l_DivisionRing_toDivisionSemiring___rarg(x_2);
lean_inc(x_1);
lean_inc(x_29);
x_30 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg___lambda__1), 3, 2);
lean_closure_set(x_30, 0, x_29);
lean_closure_set(x_30, 1, x_1);
lean_inc(x_2);
x_31 = l_DivisionRing_toDivInvMonoid___rarg(x_2);
x_32 = lean_ctor_get(x_2, 2);
lean_inc(x_32);
lean_inc(x_1);
x_33 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_33, 0, x_1);
lean_closure_set(x_33, 1, x_32);
lean_inc(x_3);
x_34 = l_Ring_toNonAssocRing___rarg(x_3);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
lean_inc(x_1);
x_37 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_37, 0, x_1);
lean_closure_set(x_37, 1, x_36);
x_38 = lean_ctor_get(x_29, 0);
lean_inc(x_38);
lean_dec(x_29);
x_39 = l_Semiring_toMonoidWithZero___rarg(x_38);
lean_dec(x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_41, 0, x_40);
x_42 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_42, 0, x_31);
x_43 = lean_ctor_get(x_2, 4);
lean_inc(x_43);
lean_inc(x_1);
x_44 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg___lambda__2), 3, 2);
lean_closure_set(x_44, 0, x_43);
lean_closure_set(x_44, 1, x_1);
x_45 = lean_ctor_get(x_2, 5);
lean_inc(x_45);
lean_inc(x_1);
x_46 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg___lambda__2), 3, 2);
lean_closure_set(x_46, 0, x_45);
lean_closure_set(x_46, 1, x_1);
lean_inc(x_1);
lean_inc(x_2);
x_47 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg___lambda__3), 4, 2);
lean_closure_set(x_47, 0, x_2);
lean_closure_set(x_47, 1, x_1);
lean_inc(x_1);
x_48 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg___lambda__4), 4, 2);
lean_closure_set(x_48, 0, x_2);
lean_closure_set(x_48, 1, x_1);
x_49 = l_AddGroupWithOne_toAddGroup___rarg(x_28);
lean_dec(x_28);
x_50 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_49);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_49);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_53 = lean_ctor_get(x_50, 0);
x_54 = lean_ctor_get(x_50, 1);
x_55 = lean_ctor_get(x_49, 2);
x_56 = lean_ctor_get(x_49, 3);
x_57 = lean_ctor_get(x_49, 1);
lean_dec(x_57);
x_58 = lean_ctor_get(x_49, 0);
lean_dec(x_58);
lean_inc(x_1);
x_59 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_59, 0, x_1);
lean_closure_set(x_59, 1, x_41);
lean_inc(x_1);
x_60 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_60, 0, x_1);
lean_closure_set(x_60, 1, x_42);
x_61 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_61, 0, x_13);
lean_inc(x_1);
x_62 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_divisionRing___spec__3___rarg), 3, 2);
lean_closure_set(x_62, 0, x_1);
lean_closure_set(x_62, 1, x_5);
x_63 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_63, 0, x_56);
x_64 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_divisionRing___spec__4___rarg), 3, 2);
lean_closure_set(x_64, 0, x_1);
lean_closure_set(x_64, 1, x_3);
x_65 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_65, 0, x_11);
lean_ctor_set(x_65, 1, x_53);
lean_ctor_set(x_65, 2, x_61);
lean_ctor_set(x_50, 1, x_37);
lean_ctor_set(x_50, 0, x_65);
lean_ctor_set(x_49, 3, x_59);
lean_ctor_set(x_49, 2, x_62);
lean_ctor_set(x_49, 1, x_16);
lean_ctor_set(x_49, 0, x_50);
x_66 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_66, 0, x_49);
lean_ctor_set(x_66, 1, x_54);
lean_ctor_set(x_66, 2, x_55);
lean_ctor_set(x_66, 3, x_63);
lean_ctor_set(x_66, 4, x_64);
x_67 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_30);
lean_ctor_set(x_67, 2, x_33);
lean_ctor_set(x_67, 3, x_60);
lean_ctor_set(x_67, 4, x_44);
lean_ctor_set(x_67, 5, x_46);
lean_ctor_set(x_67, 6, x_47);
lean_ctor_set(x_67, 7, x_48);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_68 = lean_ctor_get(x_50, 0);
x_69 = lean_ctor_get(x_50, 1);
x_70 = lean_ctor_get(x_49, 2);
x_71 = lean_ctor_get(x_49, 3);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_49);
lean_inc(x_1);
x_72 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_72, 0, x_1);
lean_closure_set(x_72, 1, x_41);
lean_inc(x_1);
x_73 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_73, 0, x_1);
lean_closure_set(x_73, 1, x_42);
x_74 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_74, 0, x_13);
lean_inc(x_1);
x_75 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_divisionRing___spec__3___rarg), 3, 2);
lean_closure_set(x_75, 0, x_1);
lean_closure_set(x_75, 1, x_5);
x_76 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_76, 0, x_71);
x_77 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_divisionRing___spec__4___rarg), 3, 2);
lean_closure_set(x_77, 0, x_1);
lean_closure_set(x_77, 1, x_3);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_11);
lean_ctor_set(x_78, 1, x_68);
lean_ctor_set(x_78, 2, x_74);
lean_ctor_set(x_50, 1, x_37);
lean_ctor_set(x_50, 0, x_78);
x_79 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_79, 0, x_50);
lean_ctor_set(x_79, 1, x_16);
lean_ctor_set(x_79, 2, x_75);
lean_ctor_set(x_79, 3, x_72);
x_80 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_69);
lean_ctor_set(x_80, 2, x_70);
lean_ctor_set(x_80, 3, x_76);
lean_ctor_set(x_80, 4, x_77);
x_81 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_30);
lean_ctor_set(x_81, 2, x_33);
lean_ctor_set(x_81, 3, x_73);
lean_ctor_set(x_81, 4, x_44);
lean_ctor_set(x_81, 5, x_46);
lean_ctor_set(x_81, 6, x_47);
lean_ctor_set(x_81, 7, x_48);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_82 = lean_ctor_get(x_50, 0);
x_83 = lean_ctor_get(x_50, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_50);
x_84 = lean_ctor_get(x_49, 2);
lean_inc(x_84);
x_85 = lean_ctor_get(x_49, 3);
lean_inc(x_85);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 lean_ctor_release(x_49, 2);
 lean_ctor_release(x_49, 3);
 x_86 = x_49;
} else {
 lean_dec_ref(x_49);
 x_86 = lean_box(0);
}
lean_inc(x_1);
x_87 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_87, 0, x_1);
lean_closure_set(x_87, 1, x_41);
lean_inc(x_1);
x_88 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_88, 0, x_1);
lean_closure_set(x_88, 1, x_42);
x_89 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_89, 0, x_13);
lean_inc(x_1);
x_90 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_divisionRing___spec__3___rarg), 3, 2);
lean_closure_set(x_90, 0, x_1);
lean_closure_set(x_90, 1, x_5);
x_91 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_91, 0, x_85);
x_92 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_divisionRing___spec__4___rarg), 3, 2);
lean_closure_set(x_92, 0, x_1);
lean_closure_set(x_92, 1, x_3);
x_93 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_93, 0, x_11);
lean_ctor_set(x_93, 1, x_82);
lean_ctor_set(x_93, 2, x_89);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_37);
if (lean_is_scalar(x_86)) {
 x_95 = lean_alloc_ctor(0, 4, 0);
} else {
 x_95 = x_86;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_16);
lean_ctor_set(x_95, 2, x_90);
lean_ctor_set(x_95, 3, x_87);
x_96 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_83);
lean_ctor_set(x_96, 2, x_84);
lean_ctor_set(x_96, 3, x_91);
lean_ctor_set(x_96, 4, x_92);
x_97 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_30);
lean_ctor_set(x_97, 2, x_33);
lean_ctor_set(x_97, 3, x_88);
lean_ctor_set(x_97, 4, x_44);
lean_ctor_set(x_97, 5, x_46);
lean_ctor_set(x_97, 6, x_47);
lean_ctor_set(x_97, 7, x_48);
return x_97;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_divisionRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_divisionRing___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_divisionRing___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Field_toSemifield___rarg(x_1);
x_4 = l_Semifield_toDivisionSemiring___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Semiring_toMonoidWithZero___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_field___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Field_toDivisionRing___rarg(x_1);
x_4 = l_DivisionRing_toDivInvMonoid___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_field___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_field___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_field___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_field___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_field___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 4);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_Equiv_field___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_field___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_field___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_4);
x_7 = l_Semifield_toDivisionSemiring___elambda__1___rarg(x_2, x_3, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_field___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_4);
x_7 = l_Field_toDivisionRing___elambda__1___rarg(x_2, x_3, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_field___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
lean_inc(x_2);
x_3 = l_Field_toDivisionRing___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_4);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = l_AddMonoid_toAddZeroClass___rarg(x_7);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_Equiv_symm___elambda__2___rarg(x_1, x_9);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Equiv_add___elambda__1___rarg), 4, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Equiv_addMonoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_13, 0, x_7);
lean_closure_set(x_13, 1, x_1);
x_14 = lean_alloc_closure((void*)(l_Equiv_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_14, 0, x_13);
lean_inc(x_14);
lean_inc(x_12);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_10);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_ctor_get(x_6, 2);
lean_inc(x_16);
lean_inc(x_1);
x_17 = l_Equiv_symm___elambda__2___rarg(x_1, x_16);
lean_inc(x_1);
lean_inc(x_6);
x_18 = lean_alloc_closure((void*)(l_Equiv_addMonoidWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_18, 0, x_6);
lean_closure_set(x_18, 1, x_1);
lean_inc(x_17);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_17);
x_20 = l_AddGroupWithOne_toAddGroup___rarg(x_5);
lean_dec(x_5);
x_21 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_22);
x_24 = lean_ctor_get(x_20, 2);
lean_inc(x_24);
lean_dec(x_20);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Equiv_sub___elambda__1___rarg), 4, 2);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_24);
lean_inc(x_4);
lean_inc(x_1);
x_26 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__1), 4, 2);
lean_closure_set(x_26, 0, x_1);
lean_closure_set(x_26, 1, x_4);
x_27 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_27, 0, x_26);
lean_inc(x_1);
lean_inc(x_4);
x_28 = lean_alloc_closure((void*)(l_Equiv_ring___rarg___lambda__2), 3, 2);
lean_closure_set(x_28, 0, x_4);
lean_closure_set(x_28, 1, x_1);
x_29 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
lean_ctor_set(x_29, 2, x_23);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set(x_29, 4, x_27);
x_30 = l_Ring_toAddCommGroup___rarg(x_4);
x_31 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_30);
lean_dec(x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
lean_inc(x_1);
x_33 = lean_alloc_closure((void*)(l_Equiv_Neg___elambda__1___rarg), 3, 2);
lean_closure_set(x_33, 0, x_1);
lean_closure_set(x_33, 1, x_32);
x_34 = l_Field_toSemifield___rarg(x_2);
lean_inc(x_34);
x_35 = l_Semifield_toCommGroupWithZero___rarg(x_34);
x_36 = l_CommGroupWithZero_toDivisionCommMonoid___rarg(x_35);
x_37 = l_DivInvOneMonoid_toInvOneClass___rarg(x_36);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_1);
x_39 = lean_alloc_closure((void*)(l_Equiv_group___rarg___lambda__1), 3, 2);
lean_closure_set(x_39, 0, x_1);
lean_closure_set(x_39, 1, x_38);
x_40 = l_DivisionRing_toDivInvMonoid___rarg(x_3);
x_41 = lean_ctor_get(x_2, 2);
lean_inc(x_41);
lean_inc(x_1);
x_42 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_42, 0, x_1);
lean_closure_set(x_42, 1, x_41);
x_43 = lean_ctor_get(x_2, 0);
lean_inc(x_43);
x_44 = l_CommRing_toNonUnitalCommRing___rarg(x_43);
x_45 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
lean_inc(x_1);
x_47 = lean_alloc_closure((void*)(l_Equiv_semigroupWithZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_47, 0, x_1);
lean_closure_set(x_47, 1, x_46);
lean_inc(x_34);
x_48 = l_Semifield_toDivisionSemiring___rarg(x_34);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec(x_48);
x_50 = l_Semiring_toMonoidWithZero___rarg(x_49);
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_52, 0, x_51);
x_53 = lean_alloc_closure((void*)(l_DivInvMonoid_toZPow___rarg), 3, 1);
lean_closure_set(x_53, 0, x_40);
x_54 = lean_ctor_get(x_2, 4);
lean_inc(x_54);
lean_inc(x_1);
x_55 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg___lambda__2), 3, 2);
lean_closure_set(x_55, 0, x_54);
lean_closure_set(x_55, 1, x_1);
x_56 = lean_ctor_get(x_2, 5);
lean_inc(x_56);
lean_inc(x_1);
x_57 = lean_alloc_closure((void*)(l_Equiv_divisionRing___rarg___lambda__2), 3, 2);
lean_closure_set(x_57, 0, x_56);
lean_closure_set(x_57, 1, x_1);
lean_inc(x_1);
x_58 = lean_alloc_closure((void*)(l_Equiv_field___rarg___lambda__1), 4, 2);
lean_closure_set(x_58, 0, x_1);
lean_closure_set(x_58, 1, x_34);
lean_inc(x_1);
x_59 = lean_alloc_closure((void*)(l_Equiv_field___rarg___lambda__2), 4, 2);
lean_closure_set(x_59, 0, x_1);
lean_closure_set(x_59, 1, x_2);
x_60 = l_AddGroupWithOne_toAddGroup___rarg(x_29);
lean_dec(x_29);
x_61 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_60);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
lean_dec(x_64);
x_65 = !lean_is_exclusive(x_60);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_66 = lean_ctor_get(x_60, 2);
x_67 = lean_ctor_get(x_60, 3);
x_68 = lean_ctor_get(x_60, 1);
lean_dec(x_68);
x_69 = lean_ctor_get(x_60, 0);
lean_dec(x_69);
lean_inc(x_1);
x_70 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_70, 0, x_1);
lean_closure_set(x_70, 1, x_52);
lean_inc(x_1);
x_71 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_71, 0, x_1);
lean_closure_set(x_71, 1, x_53);
x_72 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_72, 0, x_14);
lean_inc(x_1);
x_73 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_field___spec__3___rarg), 3, 2);
lean_closure_set(x_73, 0, x_1);
lean_closure_set(x_73, 1, x_6);
x_74 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_74, 0, x_67);
x_75 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_field___spec__4___rarg), 3, 2);
lean_closure_set(x_75, 0, x_1);
lean_closure_set(x_75, 1, x_4);
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_12);
lean_ctor_set(x_76, 1, x_63);
lean_ctor_set(x_76, 2, x_72);
lean_ctor_set(x_61, 1, x_47);
lean_ctor_set(x_61, 0, x_76);
lean_ctor_set(x_60, 3, x_70);
lean_ctor_set(x_60, 2, x_73);
lean_ctor_set(x_60, 1, x_17);
lean_ctor_set(x_60, 0, x_61);
x_77 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_77, 0, x_60);
lean_ctor_set(x_77, 1, x_33);
lean_ctor_set(x_77, 2, x_66);
lean_ctor_set(x_77, 3, x_74);
lean_ctor_set(x_77, 4, x_75);
x_78 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_39);
lean_ctor_set(x_78, 2, x_42);
lean_ctor_set(x_78, 3, x_71);
lean_ctor_set(x_78, 4, x_55);
lean_ctor_set(x_78, 5, x_57);
lean_ctor_set(x_78, 6, x_58);
lean_ctor_set(x_78, 7, x_59);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_79 = lean_ctor_get(x_60, 2);
x_80 = lean_ctor_get(x_60, 3);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_60);
lean_inc(x_1);
x_81 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_81, 0, x_1);
lean_closure_set(x_81, 1, x_52);
lean_inc(x_1);
x_82 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_82, 0, x_1);
lean_closure_set(x_82, 1, x_53);
x_83 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_83, 0, x_14);
lean_inc(x_1);
x_84 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_field___spec__3___rarg), 3, 2);
lean_closure_set(x_84, 0, x_1);
lean_closure_set(x_84, 1, x_6);
x_85 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_85, 0, x_80);
x_86 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_field___spec__4___rarg), 3, 2);
lean_closure_set(x_86, 0, x_1);
lean_closure_set(x_86, 1, x_4);
x_87 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_87, 0, x_12);
lean_ctor_set(x_87, 1, x_63);
lean_ctor_set(x_87, 2, x_83);
lean_ctor_set(x_61, 1, x_47);
lean_ctor_set(x_61, 0, x_87);
x_88 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_88, 0, x_61);
lean_ctor_set(x_88, 1, x_17);
lean_ctor_set(x_88, 2, x_84);
lean_ctor_set(x_88, 3, x_81);
x_89 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_33);
lean_ctor_set(x_89, 2, x_79);
lean_ctor_set(x_89, 3, x_85);
lean_ctor_set(x_89, 4, x_86);
x_90 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_39);
lean_ctor_set(x_90, 2, x_42);
lean_ctor_set(x_90, 3, x_82);
lean_ctor_set(x_90, 4, x_55);
lean_ctor_set(x_90, 5, x_57);
lean_ctor_set(x_90, 6, x_58);
lean_ctor_set(x_90, 7, x_59);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_91 = lean_ctor_get(x_61, 0);
lean_inc(x_91);
lean_dec(x_61);
x_92 = lean_ctor_get(x_60, 2);
lean_inc(x_92);
x_93 = lean_ctor_get(x_60, 3);
lean_inc(x_93);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 lean_ctor_release(x_60, 2);
 lean_ctor_release(x_60, 3);
 x_94 = x_60;
} else {
 lean_dec_ref(x_60);
 x_94 = lean_box(0);
}
lean_inc(x_1);
x_95 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_95, 0, x_1);
lean_closure_set(x_95, 1, x_52);
lean_inc(x_1);
x_96 = lean_alloc_closure((void*)(l_Equiv_monoid___rarg___lambda__1), 4, 2);
lean_closure_set(x_96, 0, x_1);
lean_closure_set(x_96, 1, x_53);
x_97 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_97, 0, x_14);
lean_inc(x_1);
x_98 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_field___spec__3___rarg), 3, 2);
lean_closure_set(x_98, 0, x_1);
lean_closure_set(x_98, 1, x_6);
x_99 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_99, 0, x_93);
x_100 = lean_alloc_closure((void*)(l_Int_cast___at_Equiv_field___spec__4___rarg), 3, 2);
lean_closure_set(x_100, 0, x_1);
lean_closure_set(x_100, 1, x_4);
x_101 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_101, 0, x_12);
lean_ctor_set(x_101, 1, x_91);
lean_ctor_set(x_101, 2, x_97);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_47);
if (lean_is_scalar(x_94)) {
 x_103 = lean_alloc_ctor(0, 4, 0);
} else {
 x_103 = x_94;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_17);
lean_ctor_set(x_103, 2, x_98);
lean_ctor_set(x_103, 3, x_95);
x_104 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_33);
lean_ctor_set(x_104, 2, x_92);
lean_ctor_set(x_104, 3, x_99);
lean_ctor_set(x_104, 4, x_100);
x_105 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_39);
lean_ctor_set(x_105, 2, x_42);
lean_ctor_set(x_105, 3, x_96);
lean_ctor_set(x_105, 4, x_55);
lean_ctor_set(x_105, 5, x_57);
lean_ctor_set(x_105, 6, x_58);
lean_ctor_set(x_105, 7, x_59);
return x_105;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_field(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_field___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_field___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_field___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_4);
x_7 = lean_apply_2(x_2, x_3, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_mulAction___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_mulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_distribMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_apply_2(x_3, x_4, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_distribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_distribMulAction___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_distribMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_distribMulAction___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_distribMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_distribMulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_module___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_apply_2(x_3, x_4, x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_module(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_module___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_module___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_module___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_module___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_module(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_linearEquiv___elambda__1___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_Equiv_linearEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Equiv_linearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Equiv_linearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_4);
x_7 = lean_apply_2(x_2, x_3, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Equiv_linearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
lean_ctor_set(x_2, 1, x_6);
return x_2;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_linearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equiv_linearEquiv___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Equiv_linearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Equiv_linearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_linearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_linearEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algebra___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algebra___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_algebra___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algebra___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algebra___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_algebra___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_algebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_2);
x_7 = lean_apply_2(x_3, x_4, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_algebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_3);
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_2);
x_8 = l_Equiv_symm___elambda__2___rarg(x_2, x_7);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
lean_inc(x_9);
lean_inc(x_2);
x_10 = lean_alloc_closure((void*)(l_Equiv_linearEquiv___rarg___lambda__1), 4, 2);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_closure((void*)(l_Equiv_algebra___rarg___lambda__1), 4, 3);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_8);
lean_closure_set(x_11, 2, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Equiv_algebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Equiv_algebra___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algebra___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_algebra___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_algebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_algebra___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Monoid_toNatPow___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Equiv_pow___elambda__1___rarg), 5, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_pow___at_Equiv_algEquiv___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = l_Equiv_symm___elambda__2___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Equiv_algEquiv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Equiv_algEquiv___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_algEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_algEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_algEquiv___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_pow___at_Equiv_algEquiv___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_pow___at_Equiv_algEquiv___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_algEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_algEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_algEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_algEquiv(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_module___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_4);
x_7 = lean_apply_2(x_1, x_3, x_6);
x_8 = l_Equiv_symm___elambda__2___rarg(x_2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_module(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddEquiv_module___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_module___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddEquiv_module(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Small_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Equiv_TransferInstance(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Small_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Equiv_linearEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_Equiv_linearEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Equiv_linearEquiv___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
