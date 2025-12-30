// Lean compiler output
// Module: Mathlib.Algebra.Algebra.Unitization
// Imports: Init Mathlib.Algebra.Algebra.Defs Mathlib.Algebra.Algebra.NonUnitalHom Mathlib.Algebra.Star.Module Mathlib.Algebra.Star.NonUnitalSubalgebra Mathlib.LinearAlgebra.Prod Mathlib.Tactic.Abel
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
LEAN_EXPORT lean_object* l_Unitization_inrHom___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCommSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStar___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddCommGroup___rarg(lean_object*, lean_object*);
lean_object* l_MulHomClass_toMulHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCommRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAlgebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instSemiring___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStarRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instNonAssocSemiring___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5(lean_object*, lean_object*);
static lean_object* l_Unitization_fstHom___closed__1;
static lean_object* l_RingHom_id___at_Unitization_inrHom___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Unitization_inrHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrRangeEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starMap___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Prod_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_addEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_snd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_castDef___at_Unitization_instNonAssocRing___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starMap(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalRing_toNonUnitalSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommSemiring___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instSMul___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instRing___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instDistribMulAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Unitization_sndHom___closed__1;
LEAN_EXPORT lean_object* l_Unitization_sndHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommRing___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instSemiring___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instSemiring___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instModule___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inlRingHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalCommRing_toNonUnitalCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddZeroClass___rarg(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStarAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStarRing(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCommSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommRing___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMulOneClass___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalAlgHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instSemiring___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrRangeEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instNonAssocRing___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_sndHom___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_sndHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instSemiring___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCoeTCOfZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starMap___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddCommSemigroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instSemiring___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_Unitization_addEquiv___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
static lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
LEAN_EXPORT lean_object* l_Unitization_addEquiv___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStarRing___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_inrHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instNonAssocRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inl___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAdd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStarAddMonoid(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_instAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instRing___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCommRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_addEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddCommSemigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instDistribMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Unitization_instOne___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instMonoid___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instRing___spec__2(lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_Prod_subNegMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_fstHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
static lean_object* l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Unitization_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instRing___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19___rarg(lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instRing___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMulAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStarRing___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMulOneClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrRangeEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulHom_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Unitization_instAlgebra___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommRing___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Unitization_instAlgebra___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_CommSemiring_toCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommRing___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instMonoid___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddZeroClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_fst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instMonoid___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalAlgHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instNonAssocSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instOne(lean_object*, lean_object*);
static lean_object* l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_snd___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___rarg(lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddSemigroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instDistribMulAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instNeg___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instMonoid___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starMap___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommRing___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inlRingHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCoeTCOfZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instNeg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_fst___rarg___boxed(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___rarg___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instSemiring___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommSemiring___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStarAddMonoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_inrHom___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instMonoid___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_sndHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_fst___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_snd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instMulOneClass___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_fstHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instRing___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instMonoid___spec__1(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_instAddZeroClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inlRingHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instAddSemigroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instStar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inlRingHom___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalAlgHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommSemiring___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unitization_instZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Unitization_instAlgebra___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unitization_inl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inl___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inr___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inr___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instCoeTCOfZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Unitization_inr___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unitization_instCoeTCOfZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instCoeTCOfZero___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_fst___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unitization_fst(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_fst___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_fst___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Unitization_fst___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unitization_snd___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unitization_snd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_snd___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_snd___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Unitization_snd___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unitization_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instInhabited___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instZero___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAdd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instAdd___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAdd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAdd___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instNeg___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instNeg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instNeg___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddSemigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instAdd___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddSemigroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAddSemigroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddZeroClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_instAddZeroClass___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddZeroClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAddZeroClass___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_instAddMonoid___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAddMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_subNegMonoid___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAddGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddCommSemigroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instAdd___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddCommSemigroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAddCommSemigroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_instAddMonoid___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAddCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Prod_subNegMonoid___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instAddCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instSMul___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_smul___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Unitization_instSMul___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMulAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_smul___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Unitization_instMulAction___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Unitization_instMulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_instDistribMulAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_smul___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instDistribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Unitization_instDistribMulAction___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Unitization_instDistribMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Unitization_instDistribMulAction(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Unitization_instModule___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_smul___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Unitization_instModule___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Unitization_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Unitization_instModule(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
static lean_object* _init_l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_Unitization_addEquiv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_addEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_refl(lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_addEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_addEquiv___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddEquiv_refl___at_Unitization_addEquiv___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_addEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Unitization_addEquiv___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_Unitization_inrHom___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_inrHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Unitization_inrHom___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Unitization_inr___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inrHom___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_inrHom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Unitization_inrHom___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Unitization_inrHom___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_sndHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Unitization_inrHom___spec__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_Unitization_sndHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Unitization_snd___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Unitization_sndHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_sndHom___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Unitization_sndHom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Unitization_sndHom___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_sndHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_sndHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_instOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instOne___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_apply_2(x_1, x_7, x_8);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_4);
lean_inc(x_10);
x_11 = lean_apply_2(x_4, x_7, x_10);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
lean_inc(x_12);
x_13 = lean_apply_2(x_4, x_8, x_12);
lean_inc(x_2);
x_14 = lean_apply_2(x_2, x_11, x_13);
x_15 = lean_apply_2(x_3, x_12, x_10);
x_16 = lean_apply_2(x_2, x_14, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instMul___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMulOneClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_4 = l_Monoid_toMulOneClass___rarg(x_1);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_alloc_closure((void*)(l_Unitization_instMul___rarg), 6, 4);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_11);
lean_closure_set(x_13, 2, x_12);
lean_closure_set(x_13, 3, x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMulOneClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instMulOneClass___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMulOneClass___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Unitization_instMulOneClass___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_4, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_4, x_13);
lean_inc(x_2);
x_15 = l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg(x_1, x_2, x_3, x_14);
lean_dec(x_14);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_dec(x_6);
x_17 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_16);
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
lean_dec(x_9);
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
lean_dec(x_10);
x_22 = l_Prod_instAdd___elambda__1___rarg(x_20, x_21, x_15, x_17);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_ctor_get(x_9, 0);
lean_inc(x_25);
lean_dec(x_9);
x_26 = lean_ctor_get(x_10, 0);
lean_inc(x_26);
lean_dec(x_10);
x_27 = l_Prod_instAdd___elambda__1___rarg(x_25, x_26, x_15, x_24);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_6);
lean_dec(x_2);
x_28 = lean_ctor_get(x_9, 1);
lean_inc(x_28);
lean_dec(x_9);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_dec(x_10);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instNonAssocSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_4 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Unitization_instMulOneClass___rarg(x_5, x_2, x_3);
lean_dec(x_5);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = l_Prod_instAddMonoid___rarg(x_9, x_10);
x_12 = !lean_is_exclusive(x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_6, 0);
lean_ctor_set(x_6, 0, x_11);
x_14 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg___boxed), 4, 3);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_3);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_6, 0);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_6);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg___boxed), 4, 3);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_3);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Unitization_instNonAssocSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instNonAssocSemiring___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_unaryCast___at_Unitization_instNonAssocSemiring___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_land(x_12, x_7);
x_14 = lean_nat_dec_eq(x_13, x_10);
lean_dec(x_13);
x_15 = lean_nat_shiftr(x_7, x_12);
lean_dec(x_7);
if (x_14 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_16 = l_Monoid_toMulOneClass___rarg(x_4);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_5);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_inc(x_17);
lean_inc_n(x_21, 2);
x_22 = lean_apply_2(x_17, x_21, x_21);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_apply_2(x_3, x_21, x_23);
lean_inc(x_19);
lean_inc(x_24);
x_25 = lean_apply_2(x_19, x_24, x_24);
lean_inc(x_20);
lean_inc_n(x_23, 2);
x_26 = lean_apply_2(x_20, x_23, x_23);
lean_inc(x_19);
x_27 = lean_apply_2(x_19, x_25, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_inc(x_21);
lean_inc(x_29);
x_30 = lean_apply_2(x_17, x_29, x_21);
lean_inc(x_3);
lean_inc(x_23);
x_31 = lean_apply_2(x_3, x_29, x_23);
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_32);
x_33 = lean_apply_2(x_3, x_21, x_32);
lean_inc(x_19);
x_34 = lean_apply_2(x_19, x_31, x_33);
x_35 = lean_apply_2(x_20, x_32, x_23);
x_36 = lean_apply_2(x_19, x_34, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_7 = x_15;
x_8 = x_37;
x_9 = x_28;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_39 = l_Monoid_toMulOneClass___rarg(x_4);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_5);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_5, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_9, 0);
lean_inc(x_44);
lean_inc_n(x_44, 2);
x_45 = lean_apply_2(x_40, x_44, x_44);
x_46 = lean_ctor_get(x_9, 1);
lean_inc(x_46);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_46);
x_47 = lean_apply_2(x_3, x_44, x_46);
lean_inc(x_42);
lean_inc(x_47);
x_48 = lean_apply_2(x_42, x_47, x_47);
lean_inc(x_46);
x_49 = lean_apply_2(x_43, x_46, x_46);
x_50 = lean_apply_2(x_42, x_48, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
x_7 = x_15;
x_9 = x_51;
goto _start;
}
}
else
{
lean_object* x_53; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_53 = lean_apply_2(x_6, x_8, x_9);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instMonoid___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1;
lean_inc(x_2);
x_8 = l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg(x_1, x_2, x_3, x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
lean_inc(x_6);
lean_ctor_set(x_7, 0, x_6);
x_10 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
lean_inc(x_2);
x_11 = l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg(x_1, x_2, x_3, x_1, x_2, x_10, x_4, x_7, x_5);
lean_dec(x_2);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
lean_inc(x_6);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
lean_inc(x_2);
x_15 = l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg(x_1, x_2, x_3, x_1, x_2, x_14, x_4, x_13, x_5);
lean_dec(x_2);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instMonoid___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_Unitization_instMonoid___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowBinRec___at_Unitization_instMonoid___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instMonoid___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instMonoid___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Unitization_instMulOneClass___rarg(x_1, x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instMonoid___spec__1___rarg___boxed), 5, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Unitization_instMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instMonoid___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_binaryRec___at_Unitization_instMonoid___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instMonoid___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowBinRec___at_Unitization_instMonoid___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instMonoid___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowBinRecAuto___at_Unitization_instMonoid___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_instCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_instMonoid___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_instCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instCommMonoid___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_land(x_12, x_7);
x_14 = lean_nat_dec_eq(x_13, x_10);
lean_dec(x_13);
x_15 = lean_nat_shiftr(x_7, x_12);
lean_dec(x_7);
if (x_14 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_16 = l_Monoid_toMulOneClass___rarg(x_5);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_inc(x_17);
lean_inc_n(x_21, 2);
x_22 = lean_apply_2(x_17, x_21, x_21);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_apply_2(x_3, x_21, x_23);
lean_inc(x_19);
lean_inc(x_24);
x_25 = lean_apply_2(x_19, x_24, x_24);
lean_inc(x_20);
lean_inc_n(x_23, 2);
x_26 = lean_apply_2(x_20, x_23, x_23);
lean_inc(x_19);
x_27 = lean_apply_2(x_19, x_25, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_inc(x_21);
lean_inc(x_29);
x_30 = lean_apply_2(x_17, x_29, x_21);
lean_inc(x_3);
lean_inc(x_23);
x_31 = lean_apply_2(x_3, x_29, x_23);
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_32);
x_33 = lean_apply_2(x_3, x_21, x_32);
lean_inc(x_19);
x_34 = lean_apply_2(x_19, x_31, x_33);
x_35 = lean_apply_2(x_20, x_32, x_23);
x_36 = lean_apply_2(x_19, x_34, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_7 = x_15;
x_8 = x_37;
x_9 = x_28;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_39 = l_Monoid_toMulOneClass___rarg(x_5);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_9, 0);
lean_inc(x_44);
lean_inc_n(x_44, 2);
x_45 = lean_apply_2(x_40, x_44, x_44);
x_46 = lean_ctor_get(x_9, 1);
lean_inc(x_46);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_46);
x_47 = lean_apply_2(x_3, x_44, x_46);
lean_inc(x_42);
lean_inc(x_47);
x_48 = lean_apply_2(x_42, x_47, x_47);
lean_inc(x_46);
x_49 = lean_apply_2(x_43, x_46, x_46);
x_50 = lean_apply_2(x_42, x_48, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
x_7 = x_15;
x_9 = x_51;
goto _start;
}
}
else
{
lean_object* x_53; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_53 = lean_apply_2(x_6, x_8, x_9);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instSemiring___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instSemiring___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1;
lean_inc(x_2);
x_9 = l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg(x_1, x_2, x_4, x_2, x_3, x_8, x_5, x_6, x_7);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instSemiring___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instSemiring___spec__3___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instSemiring___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
lean_dec(x_10);
lean_inc(x_7);
lean_ctor_set(x_8, 0, x_7);
x_11 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
lean_inc(x_2);
x_12 = l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg(x_1, x_2, x_4, x_2, x_3, x_11, x_5, x_8, x_6);
lean_dec(x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
lean_inc(x_2);
x_16 = l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg(x_1, x_2, x_4, x_2, x_3, x_15, x_5, x_14, x_6);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instSemiring___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_Unitization_instSemiring___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRec___at_Unitization_instSemiring___spec__2___rarg(x_1, x_2, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = l_CommSemiring_toCommMonoid___rarg(x_1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_6);
x_7 = l_Unitization_instMonoid___rarg(x_6, x_2, x_3, lean_box(0), lean_box(0));
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Unitization_instNonAssocSemiring___rarg(x_1, x_2, x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
lean_ctor_set(x_9, 1, x_13);
lean_inc(x_3);
x_15 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_6);
lean_closure_set(x_15, 4, x_3);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_10);
lean_ctor_set(x_16, 3, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_dec(x_7);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_inc(x_3);
x_21 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_6);
lean_closure_set(x_21, 4, x_3);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_10);
lean_ctor_set(x_22, 3, x_21);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Unitization_instSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instSemiring___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_binaryRec___at_Unitization_instSemiring___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instSemiring___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRec_go___at_Unitization_instSemiring___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instSemiring___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_npowBinRec___at_Unitization_instSemiring___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRecAuto___at_Unitization_instSemiring___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_land(x_12, x_7);
x_14 = lean_nat_dec_eq(x_13, x_10);
lean_dec(x_13);
x_15 = lean_nat_shiftr(x_7, x_12);
lean_dec(x_7);
if (x_14 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_16 = l_Monoid_toMulOneClass___rarg(x_5);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_inc(x_17);
lean_inc_n(x_21, 2);
x_22 = lean_apply_2(x_17, x_21, x_21);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_apply_2(x_3, x_21, x_23);
lean_inc(x_19);
lean_inc(x_24);
x_25 = lean_apply_2(x_19, x_24, x_24);
lean_inc(x_20);
lean_inc_n(x_23, 2);
x_26 = lean_apply_2(x_20, x_23, x_23);
lean_inc(x_19);
x_27 = lean_apply_2(x_19, x_25, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_inc(x_21);
lean_inc(x_29);
x_30 = lean_apply_2(x_17, x_29, x_21);
lean_inc(x_3);
lean_inc(x_23);
x_31 = lean_apply_2(x_3, x_29, x_23);
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_32);
x_33 = lean_apply_2(x_3, x_21, x_32);
lean_inc(x_19);
x_34 = lean_apply_2(x_19, x_31, x_33);
x_35 = lean_apply_2(x_20, x_32, x_23);
x_36 = lean_apply_2(x_19, x_34, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_7 = x_15;
x_8 = x_37;
x_9 = x_28;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_39 = l_Monoid_toMulOneClass___rarg(x_5);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_9, 0);
lean_inc(x_44);
lean_inc_n(x_44, 2);
x_45 = lean_apply_2(x_40, x_44, x_44);
x_46 = lean_ctor_get(x_9, 1);
lean_inc(x_46);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_46);
x_47 = lean_apply_2(x_3, x_44, x_46);
lean_inc(x_42);
lean_inc(x_47);
x_48 = lean_apply_2(x_42, x_47, x_47);
lean_inc(x_46);
x_49 = lean_apply_2(x_43, x_46, x_46);
x_50 = lean_apply_2(x_42, x_48, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
x_7 = x_15;
x_9 = x_51;
goto _start;
}
}
else
{
lean_object* x_53; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_53 = lean_apply_2(x_6, x_8, x_9);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1;
x_10 = l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg(x_1, x_2, x_4, x_5, x_3, x_9, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommSemiring___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_3, 1);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_inc(x_8);
lean_ctor_set(x_9, 0, x_8);
x_12 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
x_13 = l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg(x_1, x_2, x_4, x_5, x_3, x_12, x_6, x_9, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
x_17 = l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg(x_1, x_2, x_4, x_5, x_3, x_16, x_6, x_15, x_7);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommSemiring___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_Unitization_instCommSemiring___spec__2___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_npowBinRec___at_Unitization_instCommSemiring___spec__2___rarg(x_1, x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instCommSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = l_CommSemiring_toCommMonoid___rarg(x_1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_6);
x_7 = l_Unitization_instMonoid___rarg(x_6, x_2, x_3, lean_box(0), lean_box(0));
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Unitization_instNonAssocSemiring___rarg(x_1, x_2, x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
lean_ctor_set(x_9, 1, x_13);
lean_inc(x_3);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg___boxed), 8, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_6);
lean_closure_set(x_15, 4, x_3);
lean_closure_set(x_15, 5, x_2);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_10);
lean_ctor_set(x_16, 3, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_dec(x_7);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_inc(x_3);
lean_inc(x_2);
x_21 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg___boxed), 8, 6);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_6);
lean_closure_set(x_21, 4, x_3);
lean_closure_set(x_21, 5, x_2);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_10);
lean_ctor_set(x_22, 3, x_21);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Unitization_instCommSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instCommSemiring___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_binaryRec___at_Unitization_instCommSemiring___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_npowBinRec_go___at_Unitization_instCommSemiring___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommSemiring___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRec___at_Unitization_instCommSemiring___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_npowBinRecAuto___at_Unitization_instCommSemiring___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_6 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_2);
x_7 = l_Semiring_toMonoidWithZero___rarg(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_4, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_4, x_15);
x_17 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg(x_1, x_2, x_3, x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_dec(x_8);
x_19 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_6);
lean_dec(x_6);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_18);
x_22 = lean_ctor_get(x_11, 0);
lean_inc(x_22);
lean_dec(x_11);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = l_Prod_instAdd___elambda__1___rarg(x_22, x_23, x_17, x_19);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_ctor_get(x_11, 0);
lean_inc(x_27);
lean_dec(x_11);
x_28 = lean_ctor_get(x_12, 0);
lean_inc(x_28);
lean_dec(x_12);
x_29 = l_Prod_instAdd___elambda__1___rarg(x_27, x_28, x_17, x_26);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_dec(x_11);
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_dec(x_12);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Unitization_instNonAssocRing___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_6 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_2);
x_7 = l_Semiring_toMonoidWithZero___rarg(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_4, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_4, x_15);
x_17 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg(x_1, x_2, x_3, x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_dec(x_8);
x_19 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_6);
lean_dec(x_6);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_18);
x_22 = lean_ctor_get(x_11, 0);
lean_inc(x_22);
lean_dec(x_11);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = l_Prod_instAdd___elambda__1___rarg(x_22, x_23, x_17, x_19);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_ctor_get(x_11, 0);
lean_inc(x_27);
lean_dec(x_11);
x_28 = lean_ctor_get(x_12, 0);
lean_inc(x_28);
lean_dec(x_12);
x_29 = l_Prod_instAdd___elambda__1___rarg(x_27, x_28, x_17, x_26);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_dec(x_11);
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_dec(x_12);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_Unitization_instNonAssocRing___spec__4___rarg___boxed), 4, 0);
return x_3;
}
}
static lean_object* _init_l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Ring_toAddCommGroup___rarg(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___closed__1;
x_8 = lean_int_dec_lt(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_nat_abs(x_4);
x_10 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg(x_1, x_2, x_3, x_9);
lean_dec(x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_nat_abs(x_4);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_11, x_12);
lean_dec(x_11);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_dec(x_5);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_nat_add(x_13, x_12);
lean_dec(x_13);
x_17 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg(x_1, x_2, x_3, x_16);
lean_dec(x_16);
x_18 = l_Prod_instNeg___elambda__1___rarg(x_14, x_15, x_17);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_Unitization_instNonAssocRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instNonAssocRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = l_Ring_toAddCommGroup___rarg(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = l_Prod_subNegMonoid___rarg(x_4, x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_2);
lean_inc(x_3);
x_9 = l_Unitization_instNonAssocSemiring___rarg(x_7, x_8, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
lean_ctor_set(x_10, 0, x_6);
x_15 = lean_alloc_closure((void*)(l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___boxed), 4, 3);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_12);
lean_ctor_set(x_16, 3, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_6);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_closure((void*)(l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___boxed), 4, 3);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_3);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_11);
lean_ctor_set(x_20, 2, x_12);
lean_ctor_set(x_20, 3, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Unitization_instNonAssocRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instNonAssocRing___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_cast___at_Unitization_instNonAssocRing___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_unaryCast___at_Unitization_instNonAssocRing___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Unitization_instNonAssocRing___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_cast___at_Unitization_instNonAssocRing___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_land(x_12, x_7);
x_14 = lean_nat_dec_eq(x_13, x_10);
lean_dec(x_13);
x_15 = lean_nat_shiftr(x_7, x_12);
lean_dec(x_7);
if (x_14 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_16 = l_Monoid_toMulOneClass___rarg(x_5);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_inc(x_17);
lean_inc_n(x_21, 2);
x_22 = lean_apply_2(x_17, x_21, x_21);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_apply_2(x_3, x_21, x_23);
lean_inc(x_19);
lean_inc(x_24);
x_25 = lean_apply_2(x_19, x_24, x_24);
lean_inc(x_20);
lean_inc_n(x_23, 2);
x_26 = lean_apply_2(x_20, x_23, x_23);
lean_inc(x_19);
x_27 = lean_apply_2(x_19, x_25, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_inc(x_21);
lean_inc(x_29);
x_30 = lean_apply_2(x_17, x_29, x_21);
lean_inc(x_3);
lean_inc(x_23);
x_31 = lean_apply_2(x_3, x_29, x_23);
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_32);
x_33 = lean_apply_2(x_3, x_21, x_32);
lean_inc(x_19);
x_34 = lean_apply_2(x_19, x_31, x_33);
x_35 = lean_apply_2(x_20, x_32, x_23);
x_36 = lean_apply_2(x_19, x_34, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_7 = x_15;
x_8 = x_37;
x_9 = x_28;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_39 = l_Monoid_toMulOneClass___rarg(x_5);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_9, 0);
lean_inc(x_44);
lean_inc_n(x_44, 2);
x_45 = lean_apply_2(x_40, x_44, x_44);
x_46 = lean_ctor_get(x_9, 1);
lean_inc(x_46);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_46);
x_47 = lean_apply_2(x_3, x_44, x_46);
lean_inc(x_42);
lean_inc(x_47);
x_48 = lean_apply_2(x_42, x_47, x_47);
lean_inc(x_46);
x_49 = lean_apply_2(x_43, x_46, x_46);
x_50 = lean_apply_2(x_42, x_48, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
x_7 = x_15;
x_9 = x_51;
goto _start;
}
}
else
{
lean_object* x_53; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_53 = lean_apply_2(x_6, x_8, x_9);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instRing___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instRing___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1;
lean_inc(x_2);
x_9 = l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg(x_1, x_2, x_4, x_2, x_3, x_8, x_5, x_6, x_7);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instRing___spec__3___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_2);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
lean_dec(x_10);
lean_inc(x_7);
lean_ctor_set(x_8, 0, x_7);
x_11 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
lean_inc(x_2);
x_12 = l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg(x_1, x_2, x_4, x_2, x_3, x_11, x_5, x_8, x_6);
lean_dec(x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
lean_inc(x_2);
x_16 = l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg(x_1, x_2, x_4, x_2, x_3, x_15, x_5, x_14, x_6);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_Unitization_instRing___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_npowBinRec___at_Unitization_instRing___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg___boxed), 6, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_instRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_6 = l_Ring_toAddCommGroup___rarg(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_7);
lean_inc(x_6);
x_8 = l_Prod_subNegMonoid___rarg(x_6, x_7);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_inc(x_2);
x_10 = l_NonUnitalRing_toNonUnitalSemiring___rarg(x_2);
lean_inc(x_3);
lean_inc(x_10);
lean_inc(x_9);
x_11 = l_Unitization_instSemiring___rarg(x_9, x_10, x_3, lean_box(0), lean_box(0));
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_8, 2);
lean_inc(x_15);
lean_dec(x_8);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_11, 3);
lean_dec(x_17);
x_18 = lean_ctor_get(x_11, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_12, 0);
lean_dec(x_20);
lean_ctor_set(x_12, 0, x_13);
x_21 = l_CommSemiring_toCommMonoid___rarg(x_9);
lean_inc(x_3);
x_22 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg___boxed), 6, 4);
lean_closure_set(x_22, 0, x_9);
lean_closure_set(x_22, 1, x_10);
lean_closure_set(x_22, 2, x_21);
lean_closure_set(x_22, 3, x_3);
lean_ctor_set(x_11, 3, x_22);
x_23 = lean_alloc_closure((void*)(l_Prod_subNegMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_23, 0, x_6);
lean_closure_set(x_23, 1, x_7);
x_24 = l_Unitization_instNonAssocRing___rarg(x_1, x_2, x_3);
x_25 = lean_ctor_get(x_24, 3);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_11);
lean_ctor_set(x_26, 1, x_14);
lean_ctor_set(x_26, 2, x_15);
lean_ctor_set(x_26, 3, x_23);
lean_ctor_set(x_26, 4, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_12, 1);
lean_inc(x_27);
lean_dec(x_12);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_13);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_CommSemiring_toCommMonoid___rarg(x_9);
lean_inc(x_3);
x_30 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg___boxed), 6, 4);
lean_closure_set(x_30, 0, x_9);
lean_closure_set(x_30, 1, x_10);
lean_closure_set(x_30, 2, x_29);
lean_closure_set(x_30, 3, x_3);
lean_ctor_set(x_11, 3, x_30);
lean_ctor_set(x_11, 0, x_28);
x_31 = lean_alloc_closure((void*)(l_Prod_subNegMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_31, 0, x_6);
lean_closure_set(x_31, 1, x_7);
x_32 = l_Unitization_instNonAssocRing___rarg(x_1, x_2, x_3);
x_33 = lean_ctor_get(x_32, 3);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_34, 0, x_11);
lean_ctor_set(x_34, 1, x_14);
lean_ctor_set(x_34, 2, x_15);
lean_ctor_set(x_34, 3, x_31);
lean_ctor_set(x_34, 4, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_35 = lean_ctor_get(x_11, 1);
x_36 = lean_ctor_get(x_11, 2);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_11);
x_37 = lean_ctor_get(x_12, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_38 = x_12;
} else {
 lean_dec_ref(x_12);
 x_38 = lean_box(0);
}
if (lean_is_scalar(x_38)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_38;
}
lean_ctor_set(x_39, 0, x_13);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_CommSemiring_toCommMonoid___rarg(x_9);
lean_inc(x_3);
x_41 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg___boxed), 6, 4);
lean_closure_set(x_41, 0, x_9);
lean_closure_set(x_41, 1, x_10);
lean_closure_set(x_41, 2, x_40);
lean_closure_set(x_41, 3, x_3);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_35);
lean_ctor_set(x_42, 2, x_36);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_alloc_closure((void*)(l_Prod_subNegMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_43, 0, x_6);
lean_closure_set(x_43, 1, x_7);
x_44 = l_Unitization_instNonAssocRing___rarg(x_1, x_2, x_3);
x_45 = lean_ctor_get(x_44, 3);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_46, 0, x_42);
lean_ctor_set(x_46, 1, x_14);
lean_ctor_set(x_46, 2, x_15);
lean_ctor_set(x_46, 3, x_43);
lean_ctor_set(x_46, 4, x_45);
return x_46;
}
}
}
LEAN_EXPORT lean_object* l_Unitization_instRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instRing___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_binaryRec___at_Unitization_instRing___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instRing___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRec_go___at_Unitization_instRing___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instRing___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_npowBinRec___at_Unitization_instRing___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_npowBinRecAuto___at_Unitization_instRing___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instRing___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowBinRecAuto___at_Unitization_instRing___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_land(x_12, x_7);
x_14 = lean_nat_dec_eq(x_13, x_10);
lean_dec(x_13);
x_15 = lean_nat_shiftr(x_7, x_12);
lean_dec(x_7);
if (x_14 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_16 = l_Monoid_toMulOneClass___rarg(x_5);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_inc(x_17);
lean_inc_n(x_21, 2);
x_22 = lean_apply_2(x_17, x_21, x_21);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_apply_2(x_3, x_21, x_23);
lean_inc(x_19);
lean_inc(x_24);
x_25 = lean_apply_2(x_19, x_24, x_24);
lean_inc(x_20);
lean_inc_n(x_23, 2);
x_26 = lean_apply_2(x_20, x_23, x_23);
lean_inc(x_19);
x_27 = lean_apply_2(x_19, x_25, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_inc(x_21);
lean_inc(x_29);
x_30 = lean_apply_2(x_17, x_29, x_21);
lean_inc(x_3);
lean_inc(x_23);
x_31 = lean_apply_2(x_3, x_29, x_23);
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_32);
x_33 = lean_apply_2(x_3, x_21, x_32);
lean_inc(x_19);
x_34 = lean_apply_2(x_19, x_31, x_33);
x_35 = lean_apply_2(x_20, x_32, x_23);
x_36 = lean_apply_2(x_19, x_34, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_7 = x_15;
x_8 = x_37;
x_9 = x_28;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_39 = l_Monoid_toMulOneClass___rarg(x_5);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_9, 0);
lean_inc(x_44);
lean_inc_n(x_44, 2);
x_45 = lean_apply_2(x_40, x_44, x_44);
x_46 = lean_ctor_get(x_9, 1);
lean_inc(x_46);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_46);
x_47 = lean_apply_2(x_3, x_44, x_46);
lean_inc(x_42);
lean_inc(x_47);
x_48 = lean_apply_2(x_42, x_47, x_47);
lean_inc(x_46);
x_49 = lean_apply_2(x_43, x_46, x_46);
x_50 = lean_apply_2(x_42, x_48, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
x_7 = x_15;
x_9 = x_51;
goto _start;
}
}
else
{
lean_object* x_53; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_53 = lean_apply_2(x_6, x_8, x_9);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommRing___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommRing___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1;
x_10 = l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg(x_1, x_2, x_4, x_5, x_3, x_9, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instCommRing___spec__3___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_3, 1);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_inc(x_8);
lean_ctor_set(x_9, 0, x_8);
x_12 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
x_13 = l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg(x_1, x_2, x_4, x_5, x_3, x_12, x_6, x_9, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_closure((void*)(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___lambda__1___boxed), 2, 0);
x_17 = l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg(x_1, x_2, x_4, x_5, x_3, x_16, x_6, x_15, x_7);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_Unitization_instCommRing___spec__2___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRec___at_Unitization_instCommRing___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg___boxed), 7, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_instCommRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_6 = l_Ring_toAddCommGroup___rarg(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_7);
lean_inc(x_6);
x_8 = l_Prod_subNegMonoid___rarg(x_6, x_7);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_inc(x_2);
x_10 = l_NonUnitalCommRing_toNonUnitalCommSemiring___rarg(x_2);
lean_inc(x_3);
lean_inc(x_10);
lean_inc(x_9);
x_11 = l_Unitization_instCommSemiring___rarg(x_9, x_10, x_3, lean_box(0), lean_box(0));
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_8, 2);
lean_inc(x_15);
lean_dec(x_8);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_11, 3);
lean_dec(x_17);
x_18 = lean_ctor_get(x_11, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_12, 0);
lean_dec(x_20);
lean_ctor_set(x_12, 0, x_13);
x_21 = l_CommSemiring_toCommMonoid___rarg(x_9);
lean_inc(x_3);
lean_inc(x_10);
x_22 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_22, 0, x_9);
lean_closure_set(x_22, 1, x_10);
lean_closure_set(x_22, 2, x_21);
lean_closure_set(x_22, 3, x_3);
lean_closure_set(x_22, 4, x_10);
lean_ctor_set(x_11, 3, x_22);
x_23 = lean_alloc_closure((void*)(l_Prod_subNegMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_23, 0, x_6);
lean_closure_set(x_23, 1, x_7);
x_24 = l_Unitization_instRing___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0));
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_24, 3);
lean_dec(x_26);
x_27 = lean_ctor_get(x_24, 2);
lean_dec(x_27);
x_28 = lean_ctor_get(x_24, 1);
lean_dec(x_28);
x_29 = lean_ctor_get(x_24, 0);
lean_dec(x_29);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set(x_24, 2, x_15);
lean_ctor_set(x_24, 1, x_14);
lean_ctor_set(x_24, 0, x_11);
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_24, 4);
lean_inc(x_30);
lean_dec(x_24);
x_31 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_31, 0, x_11);
lean_ctor_set(x_31, 1, x_14);
lean_ctor_set(x_31, 2, x_15);
lean_ctor_set(x_31, 3, x_23);
lean_ctor_set(x_31, 4, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_dec(x_12);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_13);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_CommSemiring_toCommMonoid___rarg(x_9);
lean_inc(x_3);
lean_inc(x_10);
x_35 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_35, 0, x_9);
lean_closure_set(x_35, 1, x_10);
lean_closure_set(x_35, 2, x_34);
lean_closure_set(x_35, 3, x_3);
lean_closure_set(x_35, 4, x_10);
lean_ctor_set(x_11, 3, x_35);
lean_ctor_set(x_11, 0, x_33);
x_36 = lean_alloc_closure((void*)(l_Prod_subNegMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_36, 0, x_6);
lean_closure_set(x_36, 1, x_7);
x_37 = l_Unitization_instRing___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0));
x_38 = lean_ctor_get(x_37, 4);
lean_inc(x_38);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 lean_ctor_release(x_37, 4);
 x_39 = x_37;
} else {
 lean_dec_ref(x_37);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 5, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_11);
lean_ctor_set(x_40, 1, x_14);
lean_ctor_set(x_40, 2, x_15);
lean_ctor_set(x_40, 3, x_36);
lean_ctor_set(x_40, 4, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_41 = lean_ctor_get(x_11, 1);
x_42 = lean_ctor_get(x_11, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_11);
x_43 = lean_ctor_get(x_12, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_44 = x_12;
} else {
 lean_dec_ref(x_12);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_13);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_CommSemiring_toCommMonoid___rarg(x_9);
lean_inc(x_3);
lean_inc(x_10);
x_47 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_47, 0, x_9);
lean_closure_set(x_47, 1, x_10);
lean_closure_set(x_47, 2, x_46);
lean_closure_set(x_47, 3, x_3);
lean_closure_set(x_47, 4, x_10);
x_48 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_41);
lean_ctor_set(x_48, 2, x_42);
lean_ctor_set(x_48, 3, x_47);
x_49 = lean_alloc_closure((void*)(l_Prod_subNegMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_49, 0, x_6);
lean_closure_set(x_49, 1, x_7);
x_50 = l_Unitization_instRing___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0));
x_51 = lean_ctor_get(x_50, 4);
lean_inc(x_51);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 lean_ctor_release(x_50, 2);
 lean_ctor_release(x_50, 3);
 lean_ctor_release(x_50, 4);
 x_52 = x_50;
} else {
 lean_dec_ref(x_50);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 5, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_48);
lean_ctor_set(x_53, 1, x_14);
lean_ctor_set(x_53, 2, x_15);
lean_ctor_set(x_53, 3, x_49);
lean_ctor_set(x_53, 4, x_51);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l_Unitization_instCommRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instCommRing___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_binaryRec___at_Unitization_instCommRing___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_Unitization_instCommRing___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_npowBinRec_go___at_Unitization_instCommRing___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_Unitization_instCommRing___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRec___at_Unitization_instCommRing___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_Unitization_instCommRing___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_npowBinRecAuto___at_Unitization_instCommRing___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_inlRingHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Unitization_inl___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_inlRingHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Unitization_inlRingHom___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_inlRingHom___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Unitization_inlRingHom___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inlRingHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Unitization_inlRingHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_1(x_2, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instStar___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStarAddMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_instStar___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStarAddMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Unitization_instStarAddMonoid___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStarAddMonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Unitization_instStarAddMonoid(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStarRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Unitization_instStar___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStarRing(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Unitization_instStarRing___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStarRing___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_instStarRing___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_instStarRing___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Unitization_instStarRing(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Unitization_instAlgebra___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Unitization_instAlgebra___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingHom_comp___at_Unitization_instAlgebra___spec__1___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_Prod_smul___rarg), 4, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_8);
x_12 = l_Unitization_inlRingHom___rarg(x_3, x_4);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAlgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Unitization_instAlgebra___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Unitization_instAlgebra___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHom_comp___at_Unitization_instAlgebra___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Unitization_instAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Unitization_instAlgebra___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_Unitization_fstHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Unitization_fst___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Unitization_fstHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Unitization_fstHom___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_Unitization_fstHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Unitization_fstHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalAlgHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Unitization_inr___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalAlgHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inrNonUnitalAlgHom___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_inrNonUnitalAlgHom___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalAlgHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inrNonUnitalStarAlgHom___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_inrNonUnitalStarAlgHom___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, lean_box(0));
x_11 = l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0), lean_box(0), x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
x_12 = l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0), x_11, lean_box(0), lean_box(0));
lean_dec(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0), lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8___rarg(x_1, x_3, x_5, lean_box(0), lean_box(0), lean_box(0), x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19___rarg), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___rarg___boxed), 4, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___rarg___boxed), 4, 3);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_10);
lean_closure_set(x_14, 2, lean_box(0));
return x_14;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0), lean_box(0), x_10, x_11, lean_box(0));
return x_13;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___rarg___boxed), 1, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_11);
x_13 = l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_11);
x_14 = l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0), lean_box(0), x_11, x_13, lean_box(0));
x_15 = lean_alloc_closure((void*)(l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___rarg___boxed), 1, 0);
x_16 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_16, 0, x_10);
lean_closure_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrRangeEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_3, x_5);
x_9 = l_Unitization_sndHom___closed__1;
x_10 = l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_9, x_8, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrRangeEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inrRangeEquiv___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_NonUnitalAlgHomClass_toNonUnitalAlgHom___at_Unitization_inrRangeEquiv___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_NonUnitalSubsemiring_map___at_Unitization_inrRangeEquiv___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_NonUnitalSubsemiring_copy___at_Unitization_inrRangeEquiv___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_NonUnitalRingHom_srange___at_Unitization_inrRangeEquiv___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_NonUnitalAlgHom_range___at_Unitization_inrRangeEquiv___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_NonUnitalStarAlgHom_range___at_Unitization_inrRangeEquiv___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_NonUnitalRingHomClass_toNonUnitalRingHom___at_Unitization_inrRangeEquiv___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_NonUnitalRingHom_codRestrict___at_Unitization_inrRangeEquiv___spec__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__21(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_NonUnitalAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_NonUnitalStarAlgHom_codRestrict___at_Unitization_inrRangeEquiv___spec__16___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_inrRangeEquiv___spec__23(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_20; 
x_20 = l_NonUnitalStarSubalgebraClass_subtype___at_Unitization_inrRangeEquiv___spec__22(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_20;
}
}
LEAN_EXPORT lean_object* l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_StarAlgEquiv_ofLeftInverse_x27___at_Unitization_inrRangeEquiv___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrRangeEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Unitization_inrRangeEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_apply_1(x_8, x_9);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_apply_1(x_3, x_11);
x_13 = lean_apply_2(x_7, x_10, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_5 = lean_alloc_closure((void*)(l_NonUnitalAlgHom_toAlgHom___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_NonUnitalAlgHom_toAlgHom___rarg___boxed), 3, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_NonUnitalAlgHom_toAlgHom___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_NonUnitalAlgHom_toAlgHom___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NonUnitalAlgHom_toAlgHom___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_toAlgHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_NonUnitalAlgHom_toAlgHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___rarg___boxed), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5___rarg), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
lean_inc(x_15);
x_16 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_16, 0, x_12);
lean_closure_set(x_16, 1, x_15);
x_17 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_17, 0, x_13);
lean_closure_set(x_17, 1, x_15);
x_18 = lean_alloc_closure((void*)(l_MulHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4___rarg___boxed), 14, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_2, x_3);
x_11 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___rarg___boxed), 1, 0);
x_12 = l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4___rarg(x_1, x_2, x_3, lean_box(0), lean_box(0), lean_box(0), x_7, x_8, x_11, x_11, x_11, x_9, x_10, lean_box(0));
lean_dec(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_lift___elambda__1___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NonUnitalAlgHom_toAlgHom___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Unitization_lift___elambda__2___rarg___boxed), 3, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_Unitization_lift___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_closure((void*)(l_Unitization_lift___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, lean_box(0));
lean_closure_set(x_10, 4, lean_box(0));
lean_closure_set(x_10, 5, lean_box(0));
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_lift___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_lift___elambda__1___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_AlgHom_toNonUnitalAlgHom___at_Unitization_lift___elambda__1___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_Unitization_lift___elambda__1___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHom_comp___at_Unitization_lift___elambda__1___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_NonUnitalAlgHom_comp___at_Unitization_lift___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Unitization_lift___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Unitization_lift___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_lift___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Unitization_lift___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___rarg___boxed), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7___rarg), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8___rarg), 1, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
lean_inc(x_14);
x_15 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_15, 0, x_11);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_16, 0, x_12);
lean_closure_set(x_16, 1, x_14);
x_17 = lean_alloc_closure((void*)(l_MulHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6___rarg___boxed), 13, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___rarg___boxed), 1, 0);
x_14 = l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6___rarg(x_1, x_3, x_5, lean_box(0), lean_box(0), x_8, x_9, x_13, x_13, x_13, x_11, x_12, lean_box(0));
lean_dec(x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4___rarg___boxed), 12, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_3, x_5);
x_13 = l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), lean_box(0), x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Unitization_starLift___elambda__1___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_NonUnitalAlgHom_toAlgHom___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_Unitization_starLift___elambda__2___rarg___boxed), 4, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_12 = lean_alloc_closure((void*)(l_Unitization_starLift___elambda__2___rarg___boxed), 4, 3);
lean_closure_set(x_12, 0, x_8);
lean_closure_set(x_12, 1, x_9);
lean_closure_set(x_12, 2, x_10);
x_13 = lean_alloc_closure((void*)(l_Unitization_starLift___elambda__1___rarg___boxed), 11, 10);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_5);
lean_closure_set(x_13, 5, lean_box(0));
lean_closure_set(x_13, 6, lean_box(0));
lean_closure_set(x_13, 7, x_8);
lean_closure_set(x_13, 8, x_9);
lean_closure_set(x_13, 9, x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Unitization_starLift___rarg), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_StarAlgHom_toNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starLift___elambda__1___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_starLift___elambda__1___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHomClass_toMulHom___at_Unitization_starLift___elambda__1___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MulHom_comp___at_Unitization_starLift___elambda__1___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_NonUnitalAlgHom_comp___at_Unitization_starLift___elambda__1___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_NonUnitalStarAlgHom_comp___at_Unitization_starLift___elambda__1___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Unitization_starLift___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Unitization_starLift___elambda__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Unitization_starLift___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Unitization_starLift___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_starMap___spec__3___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6___rarg), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starMap___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starMap___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulHom_comp___at_Unitization_starMap___spec__7___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___lambda__1), 2, 0);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_alloc_closure((void*)(l_MulHomClass_toMulHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_14, 0, x_10);
lean_closure_set(x_14, 1, x_12);
x_15 = lean_alloc_closure((void*)(l_MulHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_MonoidHom_id___at_Unitization_starMap___spec__3___rarg___boxed), 1, 0);
x_12 = l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4___rarg(x_1, x_3, x_5, x_6, x_8, x_11, x_11, x_11, x_9, x_10, lean_box(0));
lean_dec(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_starMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_1);
x_15 = l_Unitization_instSemiring___rarg(x_1, x_8, x_10, lean_box(0), lean_box(0));
lean_inc(x_1);
x_16 = l_Algebra_id___rarg(x_1);
lean_inc(x_10);
x_17 = l_Unitization_instAlgebra___rarg(x_1, x_1, x_8, x_10, lean_box(0), lean_box(0), x_16, x_10, lean_box(0));
x_18 = l_Unitization_inrNonUnitalAlgHom___rarg(x_1, x_8, x_10);
x_19 = l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_18, x_14);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
x_20 = l_NonUnitalAlgHom_toAlgHom___rarg(x_15, x_17, x_19);
lean_dec(x_15);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Unitization_starMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Unitization_starMap___rarg___boxed), 14, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Unitization_inrNonUnitalStarAlgHom___at_Unitization_starMap___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonoidHom_id___at_Unitization_starMap___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_id___at_Unitization_starMap___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_id___at_Unitization_starMap___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulHomClass_toMulHom___at_Unitization_starMap___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MulHomClass_toMulHom___at_Unitization_starMap___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulHom_comp___at_Unitization_starMap___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulHom_comp___at_Unitization_starMap___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_NonUnitalAlgHom_comp___at_Unitization_starMap___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_NonUnitalStarAlgHom_comp___at_Unitization_starMap___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_Unitization_starMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Unitization_starMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_NonUnitalHom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Star_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Star_NonUnitalSubalgebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Abel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Algebra_Unitization(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_NonUnitalHom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Star_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Star_NonUnitalSubalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Abel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___closed__1 = _init_l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___closed__1();
lean_mark_persistent(l_AddEquiv_refl___at_Unitization_addEquiv___spec__1___closed__1);
l_RingHom_id___at_Unitization_inrHom___spec__1___closed__1 = _init_l_RingHom_id___at_Unitization_inrHom___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Unitization_inrHom___spec__1___closed__1);
l_Unitization_sndHom___closed__1 = _init_l_Unitization_sndHom___closed__1();
lean_mark_persistent(l_Unitization_sndHom___closed__1);
l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1 = _init_l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_Unitization_instMonoid___spec__3___rarg___closed__1);
l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___closed__1 = _init_l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___closed__1();
lean_mark_persistent(l_Int_castDef___at_Unitization_instNonAssocRing___spec__1___rarg___closed__1);
l_Unitization_fstHom___closed__1 = _init_l_Unitization_fstHom___closed__1();
lean_mark_persistent(l_Unitization_fstHom___closed__1);
l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1 = _init_l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1();
lean_mark_persistent(l_MulHomClass_toMulHom___at_Unitization_inrRangeEquiv___spec__6___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
