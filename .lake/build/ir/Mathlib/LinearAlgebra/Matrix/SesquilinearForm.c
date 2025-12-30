// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.SesquilinearForm
// Imports: Init Mathlib.Algebra.GroupWithZero.Action.Opposite Mathlib.LinearAlgebra.Finsupp.VectorSpace Mathlib.LinearAlgebra.Matrix.Basis Mathlib.LinearAlgebra.Matrix.Nondegenerate Mathlib.LinearAlgebra.Matrix.NonsingularInverse Mathlib.LinearAlgebra.Matrix.ToLinearEquiv Mathlib.LinearAlgebra.SesquilinearForm Mathlib.LinearAlgebra.Basis.Bilinear
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
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u209b_u2097_u2082_x27___rarg___boxed(lean_object**);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_skewAdjointMatricesSubmodule___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__22___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u209b_u2097_u2082_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_skewAdjointMatricesSubmodule___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_selfAdjointMatricesSubmodule(lean_object*, lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u209b_u2097_u2082_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_skewAdjointMatricesSubmodule___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_selfAdjointMatricesSubmodule___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_skewAdjointMatricesSubmodule___spec__7___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_skewAdjointMatricesSubmodule___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_skewAdjointMatricesSubmodule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3___rarg), 6, 0);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_9);
x_10 = lean_apply_1(x_1, x_9);
x_11 = lean_apply_1(x_2, x_10);
lean_inc(x_4);
x_12 = lean_apply_1(x_3, x_4);
x_13 = lean_apply_1(x_5, x_12);
x_14 = lean_apply_2(x_6, x_4, x_9);
x_15 = lean_apply_2(x_7, x_13, x_14);
x_16 = lean_apply_2(x_8, x_11, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__1), 9, 8);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_10);
lean_closure_set(x_11, 4, x_4);
lean_closure_set(x_11, 5, x_5);
lean_closure_set(x_11, 6, x_6);
lean_closure_set(x_11, 7, x_7);
x_12 = l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__1___rarg(x_8, x_9, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
x_11 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__2), 10, 9);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_9);
lean_closure_set(x_11, 3, x_2);
lean_closure_set(x_11, 4, x_3);
lean_closure_set(x_11, 5, x_4);
lean_closure_set(x_11, 6, x_5);
lean_closure_set(x_11, 7, x_6);
lean_closure_set(x_11, 8, x_7);
x_12 = l_Finset_sum___at_Matrix_toLinearMap_u2082_x27Aux___spec__2___rarg(x_6, x_8, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27Aux___rarg___lambda__3), 10, 8);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_11);
lean_closure_set(x_14, 2, x_13);
lean_closure_set(x_14, 3, x_6);
lean_closure_set(x_14, 4, x_7);
lean_closure_set(x_14, 5, x_5);
lean_closure_set(x_14, 6, x_10);
lean_closure_set(x_14, 7, x_9);
x_15 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3___rarg), 6, 5);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, lean_box(0));
lean_closure_set(x_15, 2, lean_box(0));
lean_closure_set(x_15, 3, lean_box(0));
lean_closure_set(x_15, 4, lean_box(0));
return x_15;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27Aux___rarg___boxed), 13, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3___boxed(lean_object** _args) {
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
x_20 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_Matrix_toLinearMap_u2082_x27Aux___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
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
return x_20;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27Aux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Matrix_toLinearMap_u2082_x27Aux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
static lean_object* _init_l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_apply_1(x_2, x_5);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28) {
_start:
{
lean_object* x_29; 
x_29 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___rarg), 5, 0);
return x_29;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___boxed(lean_object** _args) {
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
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
_start:
{
lean_object* x_29; 
x_29 = l_LinearMap_toMatrix_u2082Aux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_29;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Matrix_toLinearMap_u2082_x27Aux___rarg(x_2, x_4, x_3, x_5, x_1, x_6, x_7, lean_box(0), x_11, x_12, x_9, x_10, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed), 13, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_apply_1(x_2, x_5);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24) {
_start:
{
lean_object* x_25; 
x_25 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6___rarg), 5, 0);
return x_25;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg(x_2, x_3, x_4, x_7, x_5);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3___rarg(x_2, x_3, x_4, x_7, x_5);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_23, 0, x_19);
lean_closure_set(x_23, 1, x_17);
lean_closure_set(x_23, 2, x_20);
x_24 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__2___boxed), 5, 3);
lean_closure_set(x_24, 0, x_21);
lean_closure_set(x_24, 1, x_18);
lean_closure_set(x_24, 2, x_22);
x_25 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6___rarg), 5, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed), 13, 12);
lean_closure_set(x_26, 0, x_2);
lean_closure_set(x_26, 1, x_4);
lean_closure_set(x_26, 2, x_5);
lean_closure_set(x_26, 3, x_6);
lean_closure_set(x_26, 4, x_7);
lean_closure_set(x_26, 5, x_8);
lean_closure_set(x_26, 6, x_9);
lean_closure_set(x_26, 7, lean_box(0));
lean_closure_set(x_26, 8, x_13);
lean_closure_set(x_26, 9, x_14);
lean_closure_set(x_26, 10, x_15);
lean_closure_set(x_26, 11, x_16);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___boxed), 18, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6___boxed(lean_object** _args) {
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
lean_object* x_24 = _args[23];
_start:
{
lean_object* x_25; 
x_25 = l_LinearMap_toMatrix_u2082Aux___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_25;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_19; 
x_19 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_3);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_15);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_4, x_5, x_6, x_7, lean_box(0), lean_box(0), lean_box(0), x_15, x_15, x_11, x_12, x_13, x_14);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082_x27___rarg___boxed), 14, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082_x27___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearMap_toMatrix_u2082_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27) {
_start:
{
lean_object* x_28; 
x_28 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___rarg___boxed), 3, 0);
return x_28;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29) {
_start:
{
lean_object* x_30; 
x_30 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5___rarg), 1, 0);
return x_30;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5___rarg(x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4___rarg___boxed), 20, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5___rarg(x_20);
x_23 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2___rarg___boxed), 20, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u209b_u2097_u2082_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_25 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, lean_box(0), lean_box(0), lean_box(0), x_13, x_14, x_15, x_16, x_17, x_18);
x_26 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_27 = l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, lean_box(0), lean_box(0), x_13, x_14, x_21, x_24, x_26, x_26, lean_box(0), lean_box(0), x_25);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_27;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u209b_u2097_u2082_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u209b_u2097_u2082_x27___rarg___boxed), 18, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3___boxed(lean_object** _args) {
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
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
_start:
{
lean_object* x_28; 
x_28 = l_LinearMap_inverse___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_28;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5___boxed(lean_object** _args) {
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
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
_start:
{
lean_object* x_30; 
x_30 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_30;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_21; 
x_21 = l_LinearEquiv_symm___at_Matrix_toLinearMap_u209b_u2097_u2082_x27___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u209b_u2097_u2082_x27___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_19; 
x_19 = l_Matrix_toLinearMap_u209b_u2097_u2082_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_3);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___rarg___boxed), 3, 0);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
lean_object* x_24; 
x_24 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7___rarg), 1, 0);
return x_24;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7___rarg(x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6___rarg___boxed), 16, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7___rarg(x_16);
x_19 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4___rarg___boxed), 16, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_21 = l_LinearMap_toMatrix_u2082_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, lean_box(0), lean_box(0), lean_box(0), x_11, x_12, x_13, x_14);
x_22 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_23 = l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, lean_box(0), lean_box(0), x_17, x_20, x_22, x_22, lean_box(0), lean_box(0), x_21);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27___rarg___boxed), 14, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearMap_u2082_x27___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_22; 
x_22 = l_LinearMap_inverse___at_Matrix_toLinearMap_u2082_x27___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7___boxed(lean_object** _args) {
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
x_24 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMap_u2082_x27___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_24;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearEquiv_toEquiv___at_Matrix_toLinearMap_u2082_x27___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
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
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_LinearEquiv_symm___at_Matrix_toLinearMap_u2082_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
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
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Matrix_toLinearMap_u2082_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_8);
x_10 = lean_apply_2(x_4, x_9, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_6);
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_apply_1(x_2, x_5);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14___rarg), 5, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11___rarg(x_2, x_3, x_4, x_7, x_5);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Semiring_toModule___rarg(x_6);
x_8 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_9 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_12);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14___rarg), 5, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_13);
lean_inc(x_2);
lean_inc(x_7);
lean_inc_n(x_6, 3);
x_15 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed), 13, 12);
lean_closure_set(x_15, 0, x_10);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_6);
lean_closure_set(x_15, 4, x_6);
lean_closure_set(x_15, 5, x_7);
lean_closure_set(x_15, 6, x_7);
lean_closure_set(x_15, 7, lean_box(0));
lean_closure_set(x_15, 8, x_4);
lean_closure_set(x_15, 9, x_5);
lean_closure_set(x_15, 10, x_2);
lean_closure_set(x_15, 11, x_2);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_4);
x_5 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg(x_1, x_2, x_3, x_4, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__8___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___rarg___boxed), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19___rarg(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19___rarg(x_8);
x_11 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_1);
x_8 = l_LinearMap_toMatrix_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__8___rarg(x_1, x_2, x_3);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16___rarg(x_1, x_4, x_7, x_9, x_9, lean_box(0), lean_box(0), x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__6___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ring_toAddCommGroup___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg(x_1, x_2, x_5);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_1);
x_12 = l_Matrix_toLinearMap_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__6___rarg(x_1, x_2, x_5);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_13);
x_14 = lean_apply_1(x_13, x_3);
x_15 = lean_apply_1(x_13, x_4);
x_16 = l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg(x_1, x_9, x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_18 = l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22___rarg(x_1, x_9, x_17, lean_box(0), x_11, x_16);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_pairSelfAdjointMatricesSubmodule___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_toMatrix_x27___at_pairSelfAdjointMatricesSubmodule___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__9(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_pairSelfAdjointMatricesSubmodule___spec__12___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_pairSelfAdjointMatricesSubmodule___spec__11___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__15___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__15(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_toMatrix_u2082Aux___at_pairSelfAdjointMatricesSubmodule___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_pairSelfAdjointMatricesSubmodule___spec__10___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_inverse___at_pairSelfAdjointMatricesSubmodule___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_pairSelfAdjointMatricesSubmodule___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_toEquiv___at_pairSelfAdjointMatricesSubmodule___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_symm___at_pairSelfAdjointMatricesSubmodule___spec__16___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_pairSelfAdjointMatricesSubmodule___spec__21(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_isPairSelfAdjointSubmodule___at_pairSelfAdjointMatricesSubmodule___spec__20___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_pairSelfAdjointMatricesSubmodule___spec__22___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_selfAdjointMatricesSubmodule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_pairSelfAdjointMatricesSubmodule___rarg(x_1, x_2, x_3, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_selfAdjointMatricesSubmodule(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_selfAdjointMatricesSubmodule___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_skewAdjointMatricesSubmodule___spec__6___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_skewAdjointMatricesSubmodule___spec__6___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_8);
x_10 = lean_apply_2(x_4, x_9, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg___lambda__1___boxed), 6, 3);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_6);
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_2(x_1, x_5, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_apply_1(x_2, x_5);
return x_8;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_skewAdjointMatricesSubmodule___spec__13___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_u209b_u2097_u2082_x27___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_skewAdjointMatricesSubmodule___spec__13___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_apply_1(x_2, x_5);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15___rarg), 5, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12___rarg(x_2, x_3, x_4, x_7, x_5);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Semiring_toModule___rarg(x_6);
x_8 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_9 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_12);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15___rarg), 5, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_13);
lean_inc(x_2);
lean_inc(x_7);
lean_inc_n(x_6, 3);
x_15 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed), 13, 12);
lean_closure_set(x_15, 0, x_10);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_6);
lean_closure_set(x_15, 4, x_6);
lean_closure_set(x_15, 5, x_7);
lean_closure_set(x_15, 6, x_7);
lean_closure_set(x_15, 7, lean_box(0));
lean_closure_set(x_15, 8, x_4);
lean_closure_set(x_15, 9, x_5);
lean_closure_set(x_15, 10, x_2);
lean_closure_set(x_15, 11, x_2);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_skewAdjointMatricesSubmodule___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_4);
x_5 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg(x_1, x_2, x_3, x_4, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_skewAdjointMatricesSubmodule___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082_x27___at_skewAdjointMatricesSubmodule___spec__9___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___rarg___boxed), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20___rarg(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20___rarg(x_8);
x_11 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_skewAdjointMatricesSubmodule___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_1);
x_8 = l_LinearMap_toMatrix_u2082_x27___at_skewAdjointMatricesSubmodule___spec__9___rarg(x_1, x_2, x_3);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17___rarg(x_1, x_4, x_7, x_9, x_9, lean_box(0), lean_box(0), x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_skewAdjointMatricesSubmodule___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27___at_skewAdjointMatricesSubmodule___spec__7___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_6 = lean_alloc_closure((void*)(l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_6, 0, x_5);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg(x_1, x_2, x_4);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_1);
x_14 = l_Matrix_toLinearMap_u2082_x27___at_skewAdjointMatricesSubmodule___spec__7___rarg(x_1, x_2, x_4);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_15);
x_16 = lean_apply_1(x_15, x_7);
x_17 = lean_apply_1(x_15, x_3);
x_18 = l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21___rarg(x_1, x_11, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_20 = l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23___rarg(x_1, x_11, x_19, lean_box(0), x_13, x_18);
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_1);
return x_20;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_skewAdjointMatricesSubmodule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Ring_toAddCommGroup___rarg(x_1);
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg(x_1, x_2, x_3, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_skewAdjointMatricesSubmodule(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_skewAdjointMatricesSubmodule___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_skewAdjointMatricesSubmodule___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_skewAdjointMatricesSubmodule___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_toMatrix_x27___at_skewAdjointMatricesSubmodule___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__10(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_skewAdjointMatricesSubmodule___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_skewAdjointMatricesSubmodule___spec__13___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_skewAdjointMatricesSubmodule___spec__12___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__14(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__16___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__16(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_toMatrix_u2082Aux___at_skewAdjointMatricesSubmodule___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_skewAdjointMatricesSubmodule___spec__11___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_inverse___at_skewAdjointMatricesSubmodule___spec__18(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_skewAdjointMatricesSubmodule___spec__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_toEquiv___at_skewAdjointMatricesSubmodule___spec__19___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_symm___at_skewAdjointMatricesSubmodule___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__22___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_skewAdjointMatricesSubmodule___spec__22(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_isPairSelfAdjointSubmodule___at_skewAdjointMatricesSubmodule___spec__21___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_map___at_skewAdjointMatricesSubmodule___spec__23___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_pairSelfAdjointMatricesSubmodule___at_skewAdjointMatricesSubmodule___spec__1___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Action_Opposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Finsupp_VectorSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Basis(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Nondegenerate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_NonsingularInverse(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_ToLinearEquiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_SesquilinearForm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Basis_Bilinear(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_SesquilinearForm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Action_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Finsupp_VectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Basis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Nondegenerate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_NonsingularInverse(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_ToLinearEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_SesquilinearForm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_Bilinear(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1 = _init_l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_LinearMap_toMatrix_u2082Aux___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
