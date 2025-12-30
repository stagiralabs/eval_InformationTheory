// Lean compiler output
// Module: Mathlib.Combinatorics.Enumerative.IncidenceAlgebra
// Imports: Init Mathlib.Algebra.Algebra.Defs Mathlib.Algebra.BigOperators.Intervals Mathlib.Algebra.BigOperators.Ring.Finset Mathlib.Algebra.Module.BigOperators Mathlib.Algebra.Module.Pi
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
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instMul___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSmulZeroClassRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonAssocSemiring___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg___closed__1;
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3(lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSmulZeroClassRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonAssocSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__2(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instMul___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonUnitalNonAssocSemiring___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Ico___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instFunLike___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_moduleRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSMul___spec__1(lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Icc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_eulerChar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSmulZeroClassRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSMul___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2(lean_object*, lean_object*);
static lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___closed__1;
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instZero___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_eulerChar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Ioc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonUnitalNonAssocSemiring___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instInhabited___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSemiring___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_moduleRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_moduleRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instFunLike___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instFunLike___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IncidenceAlgebra_instFunLike(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instZero___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IncidenceAlgebra_instZero___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instInhabited___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IncidenceAlgebra_instInhabited___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IncidenceAlgebra_instAdd___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IncidenceAlgebra_instAdd___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAdd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IncidenceAlgebra_instAdd___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSmulZeroClassRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_2(x_3, x_4, x_5);
x_7 = lean_apply_2(x_1, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSmulZeroClassRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSmulZeroClassRight___rarg), 5, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSmulZeroClassRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IncidenceAlgebra_instSmulZeroClassRight(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_AddMonoid_toAddZeroClass___rarg(x_1);
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___boxed), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instZero___rarg___boxed), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSmulZeroClassRight___rarg), 5, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAddMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_AddMonoid_toAddZeroClass___rarg(x_1);
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___boxed), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instZero___rarg___boxed), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
x_7 = l_IncidenceAlgebra_instAddMonoid___rarg(x_1, x_2);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAddCommMonoid___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNeg___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNeg___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNeg___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IncidenceAlgebra_instNeg___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IncidenceAlgebra_instNeg___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNeg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IncidenceAlgebra_instNeg___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSub___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSub___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSub___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IncidenceAlgebra_instSub___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IncidenceAlgebra_instSub___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSub___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IncidenceAlgebra_instSub___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_3);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___boxed), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instZero___rarg___boxed), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_2);
lean_inc(x_2);
x_9 = l_IncidenceAlgebra_instAddMonoid___rarg(x_3, x_2);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNeg___rarg___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSub___rarg___boxed), 4, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSmulZeroClassRight___rarg), 5, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_10);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_8);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_14);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_11);
lean_ctor_set(x_18, 2, x_12);
lean_ctor_set(x_18, 3, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAddGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_3);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___boxed), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instZero___rarg___boxed), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_2);
lean_inc(x_2);
x_9 = l_IncidenceAlgebra_instAddMonoid___rarg(x_3, x_2);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNeg___rarg___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSub___rarg___boxed), 4, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
x_13 = l_IncidenceAlgebra_instAddGroup___rarg(x_1, x_2);
x_14 = lean_ctor_get(x_13, 3);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_10);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_8);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_14);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_11);
lean_ctor_set(x_18, 2, x_12);
lean_ctor_set(x_18, 3, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAddCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instOne___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IncidenceAlgebra_instOne___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instOne___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IncidenceAlgebra_instOne(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instMul___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_IncidenceAlgebra_instMul___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_6);
x_7 = lean_apply_2(x_1, x_2, x_6);
x_8 = lean_apply_2(x_3, x_6, x_4);
x_9 = lean_apply_2(x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
x_8 = l_Finset_Icc___rarg(x_1, x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instMul___rarg___lambda__1), 6, 5);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_5);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_3);
x_10 = l_Finset_sum___at_IncidenceAlgebra_instMul___spec__1___rarg(x_2, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instMul___rarg), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IncidenceAlgebra_instMul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonUnitalNonAssocSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Multiset_map___rarg(x_3, x_2);
x_6 = l_Multiset_sum___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonUnitalNonAssocSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_IncidenceAlgebra_instNonUnitalNonAssocSemiring___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
x_8 = l_Finset_Icc___rarg(x_1, x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instMul___rarg___lambda__1), 6, 5);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_4);
x_10 = l_Finset_sum___at_IncidenceAlgebra_instNonUnitalNonAssocSemiring___spec__1___rarg(x_5, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__2), 7, 5);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
lean_closure_set(x_6, 3, x_5);
lean_closure_set(x_6, 4, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_IncidenceAlgebra_instAddCommMonoid___rarg(x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_6, 2);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_dec(x_9);
x_10 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = l_IncidenceAlgebra_instAddMonoid___rarg(x_4, x_5);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
lean_ctor_set(x_6, 2, x_15);
lean_ctor_set(x_6, 1, x_12);
x_16 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__3), 4, 2);
lean_closure_set(x_16, 0, x_3);
lean_closure_set(x_16, 1, x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_6, 0);
lean_inc(x_18);
lean_dec(x_6);
x_19 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_3);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = l_IncidenceAlgebra_instAddMonoid___rarg(x_4, x_5);
x_23 = lean_ctor_get(x_22, 2);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__3), 4, 2);
lean_closure_set(x_26, 0, x_3);
lean_closure_set(x_26, 1, x_2);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonAssocSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Multiset_map___rarg(x_3, x_2);
x_7 = l_Multiset_sum___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instNonAssocSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_IncidenceAlgebra_instNonAssocSemiring___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_7, x_10);
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_2);
x_14 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_6);
x_15 = l_AddMonoid_toAddZeroClass___rarg(x_13);
x_16 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_11);
lean_dec(x_11);
x_18 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
lean_closure_set(x_18, 2, x_14);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_2);
x_19 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_19, 0, x_4);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
x_8 = l_Finset_Icc___rarg(x_1, x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instMul___rarg___lambda__1), 6, 5);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_4);
x_10 = l_Finset_sum___at_IncidenceAlgebra_instNonAssocSemiring___spec__1___rarg(x_5, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonAssocSemiring___rarg___lambda__1), 7, 5);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg(x_1, x_2, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_9 = lean_ctor_get(x_7, 2);
lean_dec(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_dec(x_10);
x_11 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_inc(x_12);
x_14 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_14, 0, x_12);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_inc(x_13);
x_16 = l_IncidenceAlgebra_instAddMonoid___rarg(x_15, x_13);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
lean_ctor_set(x_7, 2, x_18);
lean_ctor_set(x_7, 1, x_14);
lean_inc(x_4);
x_19 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonAssocSemiring___rarg___lambda__2), 5, 3);
lean_closure_set(x_19, 0, x_5);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_4);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_7);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_4);
x_22 = lean_ctor_get(x_21, 2);
lean_inc(x_22);
lean_dec(x_21);
lean_inc(x_22);
lean_inc(x_12);
lean_inc(x_3);
x_23 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_12);
lean_closure_set(x_23, 2, x_22);
x_24 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___boxed), 7, 6);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_3);
lean_closure_set(x_24, 2, x_4);
lean_closure_set(x_24, 3, x_12);
lean_closure_set(x_24, 4, x_13);
lean_closure_set(x_24, 5, x_22);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_26 = lean_ctor_get(x_7, 0);
lean_inc(x_26);
lean_dec(x_7);
x_27 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
lean_inc(x_28);
x_30 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_30, 0, x_28);
x_31 = lean_ctor_get(x_5, 0);
lean_inc(x_31);
lean_inc(x_29);
x_32 = l_IncidenceAlgebra_instAddMonoid___rarg(x_31, x_29);
x_33 = lean_ctor_get(x_32, 2);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_30);
lean_ctor_set(x_35, 2, x_34);
lean_inc(x_4);
x_36 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonAssocSemiring___rarg___lambda__2), 5, 3);
lean_closure_set(x_36, 0, x_5);
lean_closure_set(x_36, 1, x_2);
lean_closure_set(x_36, 2, x_4);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_4);
x_39 = lean_ctor_get(x_38, 2);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_39);
lean_inc(x_28);
lean_inc(x_3);
x_40 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_40, 0, x_3);
lean_closure_set(x_40, 1, x_28);
lean_closure_set(x_40, 2, x_39);
x_41 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___boxed), 7, 6);
lean_closure_set(x_41, 0, x_1);
lean_closure_set(x_41, 1, x_3);
lean_closure_set(x_41, 2, x_4);
lean_closure_set(x_41, 3, x_28);
lean_closure_set(x_41, 4, x_29);
lean_closure_set(x_41, 5, x_39);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_41);
return x_42;
}
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instNonAssocSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonAssocSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Multiset_map___rarg(x_3, x_2);
x_8 = l_Multiset_sum___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_2, x_5);
x_7 = lean_apply_2(x_1, x_5, x_3);
x_8 = lean_apply_2(x_4, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_6);
lean_inc(x_5);
x_7 = l_Finset_Icc___rarg(x_1, x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__1), 5, 4);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_5);
lean_closure_set(x_8, 2, x_6);
lean_closure_set(x_8, 3, x_3);
x_9 = l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg(x_4, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
x_8 = l_Finset_Icc___rarg(x_1, x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instMul___rarg___lambda__1), 6, 5);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_4);
x_10 = l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg(x_5, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_land(x_14, x_9);
x_16 = lean_nat_dec_eq(x_15, x_12);
lean_dec(x_15);
x_17 = lean_nat_shiftr(x_9, x_14);
lean_dec(x_9);
if (x_16 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_inc(x_3);
lean_inc(x_18);
lean_inc(x_11);
lean_inc(x_2);
x_19 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__2___boxed), 6, 4);
lean_closure_set(x_19, 0, x_2);
lean_closure_set(x_19, 1, x_11);
lean_closure_set(x_19, 2, x_18);
lean_closure_set(x_19, 3, x_3);
lean_inc(x_3);
lean_inc(x_2);
x_20 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__3___boxed), 7, 5);
lean_closure_set(x_20, 0, x_2);
lean_closure_set(x_20, 1, x_10);
lean_closure_set(x_20, 2, x_11);
lean_closure_set(x_20, 3, x_18);
lean_closure_set(x_20, 4, x_3);
x_9 = x_17;
x_10 = x_20;
x_11 = x_19;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_3);
lean_inc(x_2);
x_23 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__2___boxed), 6, 4);
lean_closure_set(x_23, 0, x_2);
lean_closure_set(x_23, 1, x_11);
lean_closure_set(x_23, 2, x_22);
lean_closure_set(x_23, 3, x_3);
x_9 = x_17;
x_11 = x_23;
goto _start;
}
}
else
{
lean_object* x_25; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_apply_2(x_8, x_10, x_11);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___closed__1;
x_12 = l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_6);
lean_closure_set(x_13, 2, x_10);
x_14 = lean_alloc_closure((void*)(l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___lambda__1___boxed), 2, 0);
x_15 = l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg(x_1, x_2, x_4, x_5, x_7, x_8, x_9, x_14, x_11, x_13, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg___boxed), 12, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__3___boxed), 7, 5);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_IncidenceAlgebra_instNonAssocSemiring___rarg(x_1, x_2, x_3, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
lean_dec(x_6);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_11 = lean_ctor_get(x_8, 2);
lean_dec(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
x_14 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_inc(x_15);
x_17 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_17, 0, x_15);
x_18 = lean_ctor_get(x_13, 0);
lean_inc(x_18);
lean_inc(x_16);
lean_inc(x_18);
x_19 = l_IncidenceAlgebra_instAddMonoid___rarg(x_18, x_16);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_20);
lean_ctor_set(x_8, 2, x_21);
lean_ctor_set(x_8, 1, x_17);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_13);
x_22 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSemiring___rarg___lambda__1), 5, 3);
lean_closure_set(x_22, 0, x_13);
lean_closure_set(x_22, 1, x_2);
lean_closure_set(x_22, 2, x_4);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_8);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_5);
lean_dec(x_5);
x_25 = lean_ctor_get(x_24, 2);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_25);
lean_inc(x_15);
lean_inc(x_3);
x_26 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_26, 0, x_3);
lean_closure_set(x_26, 1, x_15);
lean_closure_set(x_26, 2, x_25);
lean_inc(x_18);
x_27 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg___boxed), 12, 10);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_2);
lean_closure_set(x_27, 2, x_3);
lean_closure_set(x_27, 3, x_4);
lean_closure_set(x_27, 4, x_13);
lean_closure_set(x_27, 5, x_15);
lean_closure_set(x_27, 6, x_16);
lean_closure_set(x_27, 7, x_18);
lean_closure_set(x_27, 8, x_18);
lean_closure_set(x_27, 9, x_25);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_9);
lean_ctor_set(x_28, 3, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_dec(x_8);
x_30 = lean_ctor_get(x_5, 0);
lean_inc(x_30);
x_31 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_inc(x_32);
x_34 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_34, 0, x_32);
x_35 = lean_ctor_get(x_30, 0);
lean_inc(x_35);
lean_inc(x_33);
lean_inc(x_35);
x_36 = l_IncidenceAlgebra_instAddMonoid___rarg(x_35, x_33);
x_37 = lean_ctor_get(x_36, 2);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_29);
lean_ctor_set(x_39, 1, x_34);
lean_ctor_set(x_39, 2, x_38);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_30);
x_40 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSemiring___rarg___lambda__1), 5, 3);
lean_closure_set(x_40, 0, x_30);
lean_closure_set(x_40, 1, x_2);
lean_closure_set(x_40, 2, x_4);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_5);
lean_dec(x_5);
x_43 = lean_ctor_get(x_42, 2);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_43);
lean_inc(x_32);
lean_inc(x_3);
x_44 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_44, 0, x_3);
lean_closure_set(x_44, 1, x_32);
lean_closure_set(x_44, 2, x_43);
lean_inc(x_35);
x_45 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg___boxed), 12, 10);
lean_closure_set(x_45, 0, x_1);
lean_closure_set(x_45, 1, x_2);
lean_closure_set(x_45, 2, x_3);
lean_closure_set(x_45, 3, x_4);
lean_closure_set(x_45, 4, x_30);
lean_closure_set(x_45, 5, x_32);
lean_closure_set(x_45, 6, x_33);
lean_closure_set(x_45, 7, x_35);
lean_closure_set(x_45, 8, x_35);
lean_closure_set(x_45, 9, x_43);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_44);
lean_ctor_set(x_46, 2, x_9);
lean_ctor_set(x_46, 3, x_45);
return x_46;
}
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_sum___at_IncidenceAlgebra_instSemiring___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Nat_binaryRec___at_IncidenceAlgebra_instSemiring___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_npowBinRec___at_IncidenceAlgebra_instSemiring___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_npowBinRecAuto___at_IncidenceAlgebra_instSemiring___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_7, x_12);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_4);
lean_closure_set(x_16, 2, x_6);
x_17 = l_AddMonoid_toAddZeroClass___rarg(x_15);
lean_dec(x_15);
x_18 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_13);
lean_dec(x_13);
x_20 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
lean_closure_set(x_20, 2, x_16);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
x_21 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_21, 0, x_4);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_1, 0);
x_12 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_7);
lean_dec(x_7);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg(x_1, x_3, x_4, x_10, x_11, x_13, x_5);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_7, x_12);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instNonAssocSemiring___spec__2___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_4);
lean_closure_set(x_16, 2, x_6);
x_17 = l_AddMonoid_toAddZeroClass___rarg(x_15);
lean_dec(x_15);
x_18 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instAdd___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_13);
lean_dec(x_13);
x_20 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
lean_closure_set(x_20, 2, x_16);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
x_21 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNonUnitalNonAssocSemiring___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_21, 0, x_4);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_1, 0);
x_12 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_7);
lean_dec(x_7);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg(x_1, x_3, x_4, x_10, x_11, x_13, x_5);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4___rarg___boxed), 5, 0);
return x_3;
}
}
static lean_object* _init_l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___closed__1;
x_7 = lean_int_dec_lt(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_nat_abs(x_5);
x_9 = l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2___rarg(x_1, x_2, x_3, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_nat_abs(x_5);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_10, x_11);
lean_dec(x_10);
lean_inc(x_4);
x_13 = l_Ring_toNonAssocRing___rarg(x_4);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_nat_add(x_12, x_11);
lean_dec(x_12);
x_17 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_15);
lean_dec(x_15);
x_18 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instNeg___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4___rarg(x_1, x_2, x_3, x_4, x_16);
lean_dec(x_16);
lean_dec(x_4);
x_20 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_IncidenceAlgebra_instSemiring___rarg(x_1, x_2, x_3, x_5);
lean_inc(x_4);
x_7 = l_Ring_toNonAssocRing___rarg(x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_inc(x_9);
x_11 = l_IncidenceAlgebra_instAddGroup___rarg(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_9, 3);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSmulZeroClassRight___rarg), 5, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___boxed), 5, 4);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_2);
lean_closure_set(x_17, 2, x_3);
lean_closure_set(x_17, 3, x_4);
x_18 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_18, 0, x_6);
lean_ctor_set(x_18, 1, x_12);
lean_ctor_set(x_18, 2, x_13);
lean_ctor_set(x_18, 3, x_16);
lean_ctor_set(x_18, 4, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instRing___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_cast___at_IncidenceAlgebra_instRing___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_unaryCast___at_IncidenceAlgebra_instRing___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_cast___at_IncidenceAlgebra_instRing___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSMul___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instSMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_IncidenceAlgebra_instSMul___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
x_9 = l_Finset_Icc___rarg(x_1, x_7, x_8);
x_10 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instMul___rarg___lambda__1), 6, 5);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_8);
lean_closure_set(x_10, 4, x_4);
x_11 = l_Finset_sum___at_IncidenceAlgebra_instSMul___spec__1___rarg(x_3, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSMul___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_IncidenceAlgebra_instSMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IncidenceAlgebra_instSMul(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Multiset_map___rarg(x_3, x_2);
x_8 = l_Multiset_sum___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_9);
lean_inc(x_8);
x_10 = l_Finset_Icc___rarg(x_1, x_8, x_9);
x_11 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instMul___rarg___lambda__1), 6, 5);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, x_8);
lean_closure_set(x_11, 2, x_7);
lean_closure_set(x_11, 3, x_9);
lean_closure_set(x_11, 4, x_5);
x_12 = l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1___rarg(x_4, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instModule___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_sum___at_IncidenceAlgebra_instModule___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_IncidenceAlgebra_instModule___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IncidenceAlgebra_instModule(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_2(x_4, x_5, x_6);
x_8 = lean_apply_2(x_1, x_3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_IncidenceAlgebra_smulWithZeroRight___rarg___boxed), 6, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IncidenceAlgebra_smulWithZeroRight___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_smulWithZeroRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IncidenceAlgebra_smulWithZeroRight(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_moduleRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_2(x_3, x_4, x_5);
x_7 = lean_apply_2(x_1, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_moduleRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_IncidenceAlgebra_moduleRight___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_moduleRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IncidenceAlgebra_moduleRight(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_apply_2(x_1, x_6, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_2(x_10, x_3, x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_apply_2(x_12, x_3, x_5);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_7, x_6);
x_9 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_2);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_IncidenceAlgebra_algebraRight___rarg___lambda__1), 7, 5);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_8);
lean_closure_set(x_11, 3, x_5);
lean_closure_set(x_11, 4, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_IncidenceAlgebra_instSmulZeroClassRight___rarg), 5, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_IncidenceAlgebra_algebraRight___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_13, 0, x_6);
lean_closure_set(x_13, 1, x_7);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_8);
lean_closure_set(x_13, 4, x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IncidenceAlgebra_algebraRight___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IncidenceAlgebra_algebraRight___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_algebraRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IncidenceAlgebra_algebraRight___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_apply_2(x_4, x_5, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_lambda___elambda__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_lambda___elambda__1___rarg___boxed), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_lambda___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_lambda___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IncidenceAlgebra_lambda___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_apply_2(x_4, x_5, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_zeta___elambda__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IncidenceAlgebra_zeta___elambda__1___rarg___boxed), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_zeta___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_zeta___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IncidenceAlgebra_zeta___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Multiset_map___rarg(x_7, x_6);
x_9 = l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
static lean_object* _init_l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_5);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_apply_2(x_5, x_6, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_12 = l_Finset_Ico___rarg(x_4, x_6, x_7);
x_13 = l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg___closed__1;
x_14 = l_Multiset_pmap___rarg(x_13, x_12, lean_box(0));
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_4);
lean_closure_set(x_15, 4, x_5);
lean_closure_set(x_15, 5, x_6);
x_16 = l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1___rarg(x_1, x_3, x_4, x_6, x_7, x_14, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_apply_1(x_11, x_16);
return x_17;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_mu___elambda__1___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_IncidenceAlgebra_mu___elambda__1___rarg), 7, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_mu(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_mu___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_eulerChar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg(x_1, x_2, x_3, x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_eulerChar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IncidenceAlgebra_eulerChar___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___spec__2___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Multiset_map___rarg(x_7, x_6);
x_9 = l_Multiset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__2___rarg(x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_7);
x_8 = lean_apply_2(x_5, x_7, x_6);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_7);
lean_inc(x_4);
x_12 = l_Finset_Ioc___rarg(x_4, x_7, x_6);
x_13 = l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg___closed__1;
x_14 = l_Multiset_pmap___rarg(x_13, x_12, lean_box(0));
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___rarg), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_4);
lean_closure_set(x_15, 4, x_5);
lean_closure_set(x_15, 5, x_6);
x_16 = l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1___rarg(x_1, x_3, x_4, x_6, x_7, x_14, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_apply_1(x_11, x_16);
return x_17;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finset_sum___at___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___elambda__1___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___elambda__1___rarg), 7, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_mu_x27___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_1, x_7, x_8);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_dec(x_5);
x_12 = lean_apply_2(x_2, x_10, x_11);
x_13 = lean_apply_2(x_6, x_9, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_IncidenceAlgebra_prod___elambda__1___rarg), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Ring_toNonAssocRing___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_IncidenceAlgebra_prod___elambda__1___rarg), 5, 3);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_5);
lean_closure_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IncidenceAlgebra_prod___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IncidenceAlgebra_prod___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IncidenceAlgebra_prod___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IncidenceAlgebra_prod___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Intervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Intervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___closed__1 = _init_l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_IncidenceAlgebra_instSemiring___spec__4___rarg___closed__1);
l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___closed__1 = _init_l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___closed__1();
lean_mark_persistent(l_Int_castDef___at_IncidenceAlgebra_instRing___spec__1___rarg___closed__1);
l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg___closed__1 = _init_l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg___closed__1();
lean_mark_persistent(l___private_Mathlib_Combinatorics_Enumerative_IncidenceAlgebra_0__IncidenceAlgebra_muFun___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
