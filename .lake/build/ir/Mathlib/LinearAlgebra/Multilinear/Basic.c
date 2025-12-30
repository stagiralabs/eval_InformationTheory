// Lean compiler output
// Module: Mathlib.LinearAlgebra.Multilinear.Basic
// Imports: Init Mathlib.Algebra.Algebra.Defs Mathlib.Algebra.NoZeroSMulDivisors.Pi Mathlib.Algebra.BigOperators.Group.Finset.Powerset Mathlib.Data.Fintype.BigOperators Mathlib.Data.Fintype.Powerset Mathlib.LinearAlgebra.Pi Mathlib.Logic.Equiv.Fintype Mathlib.Tactic.Abel
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
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_prod___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearMap_addCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap_u2097___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_addCommMonoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sort___at_MultilinearMap_restr___elambda__1___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_pi___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sort___at_MultilinearMap_restr___elambda__1___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_pi___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compMultilinearMap_u2097___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_addCommMonoid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap_u2097___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap_u2097(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_mkPiRing___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instFunLikeForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_toLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instFunLikeForall___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv___spec__1(lean_object*, lean_object*);
static lean_object* l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__2;
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_MultilinearMap_mkPiRing___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMap_u2097___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_pi(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___elambda__3___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqFin___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap_u2097___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___at_List_prod___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton___elambda__1___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_coeAddMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_pi___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_MultilinearMap_mkPiRing___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_pi___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piRingEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_piCongrLeft_x27___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_range(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_linearDeriv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_prod___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_pi___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap_u2097(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_MultilinearMap_restr___elambda__1___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instSub___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Nodup_getEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_instLinearOrder(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instSub___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_mkPiRing___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMap_u2097___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_MultilinearMap_piLinearMap___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_MultilinearMap_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_eval___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiRing(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__1;
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_constLinearEquivOfIsEmpty___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Nodup_getEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___spec__1(lean_object*, lean_object*);
static lean_object* l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommSemiring_toCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instFunLikeForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_prod___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_coeAddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_MultilinearMap_restr___elambda__1___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compMultilinearMap_u2097___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_smulRight___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_prod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiRing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_cast___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_linearDeriv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___elambda__3___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_smulRight___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3___rarg(lean_object*, lean_object*);
lean_object* l_LinearMap_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MultilinearMap_restr___elambda__1___rarg___lambda__1___closed__1;
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_addCommMonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiRing___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap_u2097___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_toLinearMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_update___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piRingEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_constLinearEquivOfIsEmpty___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_toLinearMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_piCongrLeft_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instSMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_prod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instZero___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_coeAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_prod___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__3(lean_object*);
static lean_object* l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MultilinearMap_instFunLikeForall___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instFunLikeForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_instFunLikeForall___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instFunLikeForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_instFunLikeForall(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_6);
x_8 = lean_apply_1(x_4, x_6);
x_9 = lean_apply_1(x_5, x_6);
x_10 = lean_apply_2(x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instAdd___rarg___boxed), 6, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instAdd___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instAdd(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instZero___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_instZero___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instZero(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instInhabited___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_instInhabited___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instInhabited(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_4, x_5);
x_7 = lean_apply_2(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_instSMul___rarg), 5, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_instSMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_addCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_instAdd___rarg___boxed), 6, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_instZero___rarg___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instSMul___rarg), 5, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, lean_box(0));
x_8 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_addCommMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_addCommMonoid___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_addCommMonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_addCommMonoid(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_coeAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_coeAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_coeAddMonoidHom___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_coeAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_coeAddMonoidHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
static lean_object* _init_l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_toLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_Function_update___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
lean_closure_set(x_6, 3, x_5);
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_toLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_toLinearMap___rarg), 5, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_toLinearMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_toLinearMap(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_prod___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_prod___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_MultilinearMap_prod___elambda__1___rarg), 3, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_prod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_prod___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_prod___rarg___boxed), 9, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_prod___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_MultilinearMap_prod___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_prod___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_prod___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_pi___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_pi___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_pi___elambda__1___rarg), 3, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_pi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_pi___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_pi(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_pi___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_pi___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_pi___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_pi___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_pi___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__1___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_3, x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__2___rarg), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__2___rarg), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__1___rarg), 2, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_ofSubsingleton___elambda__1___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_ofSubsingleton___elambda__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MultilinearMap_ofSubsingleton___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_ofSubsingleton___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MultilinearMap_ofSubsingleton___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_constOfIsEmpty___elambda__1___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MultilinearMap_constOfIsEmpty___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_constOfIsEmpty___rarg), 1, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_constOfIsEmpty___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constOfIsEmpty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_constOfIsEmpty(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_MultilinearMap_restr___elambda__1___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3___rarg(x_2, lean_box(0), lean_box(0), lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_MultilinearMap_restr___elambda__1___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5___rarg(x_2, x_3, lean_box(0));
return x_5;
}
}
static lean_object* _init_l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___closed__1;
return x_5;
}
}
static lean_object* _init_l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_cast___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_Fin_instLinearOrder(x_1);
lean_inc(x_5);
x_6 = l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3___rarg(x_5, lean_box(0), lean_box(0), lean_box(0), x_2);
x_7 = l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5___rarg(x_5, x_6, lean_box(0));
x_8 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_9 = l_Equiv_trans___rarg(x_7, x_8);
x_10 = l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__2;
x_11 = l_Equiv_trans___rarg(x_10, x_9);
return x_11;
}
}
static lean_object* _init_l_MultilinearMap_restr___elambda__1___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqFin___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_MultilinearMap_restr___elambda__1___rarg___lambda__1___closed__1;
lean_inc(x_1);
lean_inc(x_6);
x_8 = l_Multiset_decidableMem___rarg(x_7, x_6, x_1);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1(x_3, x_1, x_4, lean_box(0));
x_10 = l_Equiv_symm___rarg(x_9);
x_11 = l_Equiv_toEmbedding___elambda__1___rarg(x_10, x_6);
x_12 = lean_apply_1(x_5, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MultilinearMap_restr___elambda__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_1);
lean_closure_set(x_8, 4, x_7);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_restr___elambda__1___rarg), 7, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_restr___elambda__2___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MultilinearMap_restr___elambda__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_MultilinearMap_restr___elambda__1___rarg), 7, 6);
lean_closure_set(x_12, 0, x_6);
lean_closure_set(x_12, 1, x_7);
lean_closure_set(x_12, 2, x_8);
lean_closure_set(x_12, 3, x_9);
lean_closure_set(x_12, 4, lean_box(0));
lean_closure_set(x_12, 5, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_restr___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_sort___at_MultilinearMap_restr___elambda__1___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_MultilinearMap_restr___elambda__1___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Finset_sort___at_MultilinearMap_restr___elambda__1___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_Nodup_getEquiv___at_MultilinearMap_restr___elambda__1___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_MultilinearMap_restr___elambda__1___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Sorted_getIso___at_MultilinearMap_restr___elambda__1___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_restr___elambda__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_restr___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_restr___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_restr___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___elambda__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_restr___elambda__3___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MultilinearMap_restr___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg), 3, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___rarg___boxed), 10, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_MultilinearMap_compLinearMap___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_compLinearMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_codRestrict___elambda__1___rarg___boxed), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_codRestrict___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_codRestrict___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_codRestrict___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_codRestrict___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_codRestrict___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_codRestrict___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_restrictScalars___elambda__1___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_MultilinearMap_restrictScalars___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_restrictScalars___rarg___boxed), 12, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_restrictScalars___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_MultilinearMap_restrictScalars___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_restrictScalars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_restrictScalars(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___elambda__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___elambda__1___rarg), 3, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___elambda__2___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___elambda__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_domDomCongr___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_domDomCongr___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_domDomCongr___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___elambda__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_domDomCongr___elambda__3___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_domDomCongr___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___rarg___boxed), 9, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, lean_box(0));
lean_closure_set(x_9, 6, lean_box(0));
lean_closure_set(x_9, 7, x_8);
x_10 = l_Equiv_symm___rarg(x_8);
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongr___rarg___boxed), 9, 8);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, lean_box(0));
lean_closure_set(x_11, 6, lean_box(0));
lean_closure_set(x_11, 7, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrEquiv___rarg), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_apply_1(x_2, x_4);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict___elambda__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_5);
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict___elambda__1___rarg), 5, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict___elambda__2___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict___elambda__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict___elambda__1___rarg), 5, 4);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, x_8);
lean_closure_set(x_10, 3, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_domDomRestrict___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_domDomRestrict___elambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_domDomRestrict___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_linearDeriv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2___rarg), 2, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_List_foldrTR___rarg(x_5, x_7, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Multiset_map___rarg(x_7, x_6);
x_9 = l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg(x_3, x_4, x_5, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_toLinearMap___rarg), 5, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_10);
x_12 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_12, 0, x_10);
x_13 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_linearDeriv___rarg___lambda__1___boxed), 10, 9);
lean_closure_set(x_11, 0, x_8);
lean_closure_set(x_11, 1, x_6);
lean_closure_set(x_11, 2, x_9);
lean_closure_set(x_11, 3, x_1);
lean_closure_set(x_11, 4, x_2);
lean_closure_set(x_11, 5, x_3);
lean_closure_set(x_11, 6, x_4);
lean_closure_set(x_11, 7, x_5);
lean_closure_set(x_11, 8, x_10);
x_12 = l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_7, x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_linearDeriv___rarg), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_linearDeriv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_linearDeriv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearMap_comp___at_MultilinearMap_linearDeriv___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Multiset_sum___at_MultilinearMap_linearDeriv___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finset_sum___at_MultilinearMap_linearDeriv___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_linearDeriv___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_linearDeriv___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_compMultilinearMap(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_1(x_5, x_6);
x_8 = lean_apply_2(x_1, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_instDistribMulActionOfSMulCommClass___rarg___boxed), 6, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instDistribMulActionOfSMulCommClass___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instDistribMulActionOfSMulCommClass___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_instDistribMulActionOfSMulCommClass(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_4, x_5);
x_7 = lean_apply_2(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_MultilinearMap_instModule___rarg), 5, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MultilinearMap_instModule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compMultilinearMap_u2097___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap_u2097___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap_u2097(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap_u2097___rarg), 1, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_compMultilinearMap_u2097___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_compMultilinearMap_u2097___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap_u2097___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_compMultilinearMap_u2097(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
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
return x_20;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton_u2097___elambda__1___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton___elambda__2___rarg), 3, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton_u2097___elambda__1___rarg), 1, 0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_ofSubsingleton_u2097___rarg___boxed), 10, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MultilinearMap_ofSubsingleton_u2097___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_ofSubsingleton_u2097___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_ofSubsingleton_u2097___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_ofSubsingleton_u2097___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Equiv_piCongrLeft_x27___elambda__2___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Equiv_symm___elambda__2___rarg(x_1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_piCongrLeft_x27___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___lambda__2), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___boxed), 10, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_domDomCongrLinearEquiv_x27___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_domDomCongrLinearEquiv_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg___boxed), 5, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_constLinearEquivOfIsEmpty___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MultilinearMap_constOfIsEmpty___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
lean_closure_set(x_10, 3, x_5);
x_11 = l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___closed__1;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___boxed), 9, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_constLinearEquivOfIsEmpty___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_constLinearEquivOfIsEmpty___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_constLinearEquivOfIsEmpty___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_constLinearEquivOfIsEmpty___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrLinearEquiv___elambda__1___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_MultilinearMap_domDomCongrEquiv___rarg(x_1, x_2, x_5, x_3, x_7, lean_box(0), lean_box(0), x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_inc(x_12);
x_14 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_14, 0, x_12);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_12, 0);
lean_dec(x_17);
lean_ctor_set(x_12, 1, x_14);
return x_12;
}
else
{
lean_object* x_18; 
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_domDomCongrLinearEquiv___rarg___boxed), 11, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_domDomCongrLinearEquiv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_domDomCongrLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomCongrLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MultilinearMap_domDomCongrLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict___elambda__1___rarg), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict_u2097___elambda__1___rarg___boxed), 5, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict_u2097___elambda__2___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict_u2097___elambda__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict_u2097___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_8);
lean_closure_set(x_9, 3, x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_domDomRestrict_u2097___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_domDomRestrict_u2097___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MultilinearMap_domDomRestrict_u2097___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_domDomRestrict_u2097___elambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_domDomRestrict_u2097___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_domDomRestrict_u2097___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMap_u2097___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap_u2097___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap_u2097(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap_u2097___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMap_u2097___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_compLinearMap_u2097___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMap_u2097___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_MultilinearMap_compLinearMap_u2097(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMap_u2097___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMapMultilinear___elambda__1___rarg), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_1, x_5);
x_7 = lean_alloc_closure((void*)(l_LinearMap_instSMul___rarg), 5, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMapMultilinear___elambda__2___rarg___boxed), 5, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___elambda__3___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_6);
x_7 = lean_apply_1(x_3, x_6);
lean_inc(x_6);
x_8 = lean_apply_1(x_1, x_6);
x_9 = lean_apply_1(x_4, x_6);
x_10 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_11 = l_LinearMap_addCommMonoid___rarg(x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMapMultilinear___elambda__3___rarg___boxed), 6, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMapMultilinear___elambda__1___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMapMultilinear___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_MultilinearMap_compLinearMapMultilinear___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_compLinearMapMultilinear___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_compLinearMapMultilinear___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___elambda__3___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___elambda__3___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_compLinearMapMultilinear___elambda__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_compLinearMapMultilinear___elambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_compLinearMapMultilinear___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_compLinearMapMultilinear___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_compLinearMapMultilinear___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4___rarg), 2, 0);
return x_16;
}
}
static lean_object* _init_l_MultilinearMap_piLinearMap___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MultilinearMap_compLinearMapMultilinear___elambda__1___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = l_MultilinearMap_piLinearMap___rarg___lambda__1___closed__1;
x_13 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_10 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_11 = lean_alloc_closure((void*)(l_MultilinearMap_piLinearMap___rarg___lambda__1___boxed), 10, 9);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, x_7);
lean_closure_set(x_11, 6, x_8);
lean_closure_set(x_11, 7, x_9);
lean_closure_set(x_11, 8, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_piLinearMap___rarg), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_piLinearMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piLinearMap___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_piLinearMap___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_apply_u2097___at_MultilinearMap_piLinearMap___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearMap_compMultilinearMap___at_MultilinearMap_piLinearMap___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piLinearMap___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MultilinearMap_piLinearMap___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Monoid_toMulOneClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_CommSemiring_toCommMonoid___rarg(x_1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___elambda__2___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___elambda__3___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_prod___at_MultilinearMap_mkPiAlgebra___elambda__1___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebra___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebra___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_mkPiAlgebra___elambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___elambda__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_mkPiAlgebra___elambda__3___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MultilinearMap_mkPiAlgebra___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_mkPiAlgebra(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_3);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_List_ofFn___rarg(x_1, x_5);
x_10 = l_List_foldrTR___at_List_prod___spec__1___rarg(x_6, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___elambda__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___elambda__3___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed), 5, 4);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_6);
lean_closure_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebraFin___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_mkPiAlgebraFin___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_mkPiAlgebraFin___elambda__2___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_mkPiAlgebraFin___elambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_mkPiAlgebraFin___elambda__3___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_mkPiAlgebraFin___elambda__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebraFin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_mkPiAlgebraFin___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_smulRight___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_apply_2(x_1, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_9 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3___rarg), 5, 4);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_8);
lean_closure_set(x_9, 3, x_7);
x_10 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_smulRight___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_smulRight___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_smulRight___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_id___at_MultilinearMap_smulRight___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_smulRight___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_smulRight___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_smulRight___at_MultilinearMap_smulRight___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_compMultilinearMap___at_MultilinearMap_smulRight___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MultilinearMap_smulRight___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_MultilinearMap_mkPiRing___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiAlgebra___at_MultilinearMap_mkPiRing___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___at_MultilinearMap_mkPiRing___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_mkPiRing___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_apply_2(x_1, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_7 = lean_alloc_closure((void*)(l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5___rarg), 5, 4);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_6);
lean_closure_set(x_7, 3, x_5);
x_8 = lean_alloc_closure((void*)(l_LinearMap_compMultilinearMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiRing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiAlgebra___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
x_7 = l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2___rarg(x_1, x_2, x_3, x_6, x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiRing(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiRing___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_mkPiRing___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_MultilinearMap_mkPiRing___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_id___at_MultilinearMap_mkPiRing___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_mkPiRing___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_mkPiRing___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_compMultilinearMap___at_MultilinearMap_mkPiRing___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_smulRight___at_MultilinearMap_mkPiRing___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_mkPiRing___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_mkPiRing___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_4, x_5);
x_9 = lean_apply_1(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instNeg___rarg___boxed), 5, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MultilinearMap_instNeg___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instNeg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instNeg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instSub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_6);
x_8 = lean_apply_1(x_4, x_6);
x_9 = lean_apply_1(x_5, x_6);
x_10 = lean_apply_2(x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instSub(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instSub___rarg___boxed), 6, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instSub___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instSub___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instSub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instSub(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_3, x_4);
x_7 = lean_apply_2(x_5, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_MultilinearMap_addCommMonoid___rarg(x_4, x_2, x_3);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_instNeg___rarg___boxed), 5, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instSub___rarg___boxed), 6, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
x_8 = lean_alloc_closure((void*)(l_MultilinearMap_instAddCommGroup___rarg___lambda__1), 4, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_instAddCommGroup___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_instAddCommGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_instAddCommGroup(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_MultilinearMap_piRingEquiv___elambda__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_apply_1(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_piRingEquiv___elambda__1___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piRingEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Semiring_toModule___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_MultilinearMap_mkPiRing___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
x_7 = lean_alloc_closure((void*)(l_MultilinearMap_piRingEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MultilinearMap_piRingEquiv___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_piRingEquiv___elambda__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MultilinearMap_piRingEquiv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_MultilinearMap_piRingEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_MultilinearMap_piRingEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_piRingEquiv___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_piRingEquiv___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_map___rarg___boxed), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_map___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_map(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_MultilinearMap_map___at_MultilinearMap_range___spec__1___rarg___boxed), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_range(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MultilinearMap_range___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MultilinearMap_map___at_MultilinearMap_range___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_map___at_MultilinearMap_range___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MultilinearMap_map___at_MultilinearMap_range___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MultilinearMap_range___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MultilinearMap_range___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MultilinearMap_range___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_NoZeroSMulDivisors_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fintype(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Abel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Multilinear_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_NoZeroSMulDivisors_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fintype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Abel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1 = _init_l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_MultilinearMap_toLinearMap___spec__1___closed__1);
l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___closed__1 = _init_l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___closed__1();
lean_mark_persistent(l_OrderIso_setCongr___at_MultilinearMap_restr___elambda__1___spec__6___closed__1);
l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__1 = _init_l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__1();
lean_mark_persistent(l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__1);
l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__2 = _init_l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__2();
lean_mark_persistent(l_Finset_orderIsoOfFin___at_MultilinearMap_restr___elambda__1___spec__1___closed__2);
l_MultilinearMap_restr___elambda__1___rarg___lambda__1___closed__1 = _init_l_MultilinearMap_restr___elambda__1___rarg___lambda__1___closed__1();
lean_mark_persistent(l_MultilinearMap_restr___elambda__1___rarg___lambda__1___closed__1);
l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___closed__1 = _init_l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___closed__1();
lean_mark_persistent(l_MultilinearMap_constLinearEquivOfIsEmpty___rarg___closed__1);
l_MultilinearMap_piLinearMap___rarg___lambda__1___closed__1 = _init_l_MultilinearMap_piLinearMap___rarg___lambda__1___closed__1();
lean_mark_persistent(l_MultilinearMap_piLinearMap___rarg___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
