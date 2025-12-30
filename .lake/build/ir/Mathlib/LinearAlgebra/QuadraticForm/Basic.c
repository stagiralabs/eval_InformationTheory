// Lean compiler output
// Module: Mathlib.LinearAlgebra.QuadraticForm.Basic
// Imports: Init Mathlib.LinearAlgebra.FiniteDimensional Mathlib.LinearAlgebra.Matrix.Determinant.Basic Mathlib.LinearAlgebra.Matrix.SesquilinearForm Mathlib.LinearAlgebra.Matrix.Symmetric Mathlib.Data.Finset.Sym Mathlib.LinearAlgebra.BilinearMap
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
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_congrQuadraticMap___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16(lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommMonoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_evalAddMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_proj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
LEAN_EXPORT lean_object* l_QuadraticMap_instZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instDistribMulActionOfSMulCommClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instModuleOfSMulCommClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instInvertibleEndOfNat(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__19___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_congrQuadraticMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toQuadraticMap_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_comp___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associated___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_toMatrix_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_QuadraticMap_toMatrix_x27___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_evalAddMonoidHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_polarBilin___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associated_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_coeFnAddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instModuleOfSMulCommClass(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_sq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_sq(lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_detRowAlternating___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMap___elambda__1___spec__1(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_copy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMap___elambda__1___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_proj___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommMonoid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instInvertibleEndOfNat___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instDistribMulActionOfSMulCommClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_QuadraticMap_toMatrix_x27___spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_proj___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_sq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associated(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarSym2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapLinearMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_comp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_comp___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instZero___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulZeroOneClass_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instInvertibleEndOfNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instDistribMulActionOfSMulCommClass(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_eval___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_copy___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_MonoidWithZero_toMulZeroOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_coeFnAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5(lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2___rarg(lean_object*);
static lean_object* l_QuadraticMap_evalAddMonoidHom___rarg___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_toMatrix_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__9___boxed(lean_object*, lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated_x27___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_polarBilin___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearMap_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapLinearMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_discr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_polarBilin___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_discr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_comp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommMonoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_coeFnAddMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_copy___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toQuadraticMap_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_copy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associated_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommGroup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap_x27___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
lean_object* l_Pi_Function_module___rarg(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instZero___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_evalAddMonoidHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapAddMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polarSym2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_instModuleOfSMulCommClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated_x27___spec__2;
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuadraticMap_polar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
x_9 = lean_apply_2(x_8, x_4, x_5);
lean_inc(x_3);
x_10 = lean_apply_1(x_3, x_9);
lean_inc(x_3);
x_11 = lean_apply_1(x_3, x_4);
lean_inc(x_6);
x_12 = lean_apply_2(x_6, x_10, x_11);
x_13 = lean_apply_1(x_3, x_5);
x_14 = lean_apply_2(x_6, x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_polar___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarSym2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_polar___rarg), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = l_Function_uncurry___rarg(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarSym2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_polarSym2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_QuadraticMap_instFunLike___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_instFunLike(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_copy___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_QuadraticMap_copy___rarg___boxed), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_copy___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_QuadraticMap_copy___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_copy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuadraticMap_copy(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_polarBilin___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
x_9 = lean_apply_2(x_8, x_4, x_5);
lean_inc(x_3);
x_10 = lean_apply_1(x_3, x_9);
lean_inc(x_3);
x_11 = lean_apply_1(x_3, x_4);
lean_inc(x_6);
x_12 = lean_apply_2(x_6, x_10, x_11);
x_13 = lean_apply_1(x_3, x_5);
x_14 = lean_apply_2(x_6, x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_polarBilin___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_polar___at_QuadraticMap_polarBilin___spec__1___rarg), 5, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_polarBilin___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5___rarg), 6, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5___rarg), 6, 5);
lean_closure_set(x_12, 0, x_7);
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, lean_box(0));
lean_closure_set(x_12, 3, lean_box(0));
lean_closure_set(x_12, 4, lean_box(0));
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), x_6, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_polar___at_QuadraticMap_polarBilin___spec__1___rarg), 5, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_6);
x_8 = l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, lean_box(0), x_7, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_polarBilin___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_polarBilin___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_mk_u2082_x27___at_QuadraticMap_polarBilin___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_mk_u2082___at_QuadraticMap_polarBilin___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_polarBilin___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_QuadraticMap_ofPolar___rarg___boxed), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuadraticMap_ofPolar___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_ofPolar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_ofPolar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_4, x_5);
x_7 = lean_apply_2(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_QuadraticMap_instSMul___rarg), 5, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuadraticMap_instSMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instZero___rarg___boxed), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuadraticMap_instZero___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_instZero(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instInhabited___rarg___boxed), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuadraticMap_instInhabited___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_instInhabited(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_instAdd___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instAdd___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_QuadraticMap_instAdd___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuadraticMap_instAdd___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_instAdd(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_instAdd___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_instZero___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_QuadraticMap_instSMul___rarg), 5, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
x_7 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommMonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instAddCommMonoid___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommMonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_instAddCommMonoid(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_coeFnAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_coeFnAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_QuadraticMap_coeFnAddMonoidHom___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_coeFnAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_coeFnAddMonoidHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2___rarg), 2, 0);
return x_9;
}
}
static lean_object* _init_l_QuadraticMap_evalAddMonoidHom___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_QuadraticMap_coeFnAddMonoidHom___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_evalAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_QuadraticMap_evalAddMonoidHom___rarg___closed__1;
x_9 = l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2___rarg(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_evalAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_evalAddMonoidHom___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_evalAddMonoidHom___at_QuadraticMap_evalAddMonoidHom___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_AddMonoidHom_comp___at_QuadraticMap_evalAddMonoidHom___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_evalAddMonoidHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_evalAddMonoidHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instDistribMulActionOfSMulCommClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_instSMul___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instDistribMulActionOfSMulCommClass(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_QuadraticMap_instDistribMulActionOfSMulCommClass___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instDistribMulActionOfSMulCommClass___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuadraticMap_instDistribMulActionOfSMulCommClass(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instModuleOfSMulCommClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_instSMul___rarg), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instModuleOfSMulCommClass(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_QuadraticMap_instModuleOfSMulCommClass___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instModuleOfSMulCommClass___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_QuadraticMap_instModuleOfSMulCommClass(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_instNeg___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instNeg___rarg___boxed), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_QuadraticMap_instNeg___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuadraticMap_instNeg___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instNeg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_instNeg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_instSub___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSub(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instSub___rarg___boxed), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_QuadraticMap_instSub___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuadraticMap_instSub___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instSub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_instSub(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_instAdd___rarg___boxed), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_instZero___rarg___boxed), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instSMul___rarg), 5, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, lean_box(0));
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_QuadraticMap_instNeg___rarg___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_QuadraticMap_instSub___rarg___boxed), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_alloc_closure((void*)(l_QuadraticMap_instSMul___rarg), 5, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_7);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_5);
lean_ctor_set(x_13, 2, x_12);
x_14 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_14, 0, x_11);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_8);
lean_ctor_set(x_15, 2, x_9);
lean_ctor_set(x_15, 3, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_instAddCommGroup___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instAddCommGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_instAddCommGroup(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_QuadraticMap_restrictScalars___elambda__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_QuadraticMap_restrictScalars___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_restrictScalars___rarg___boxed), 12, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_restrictScalars___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_restrictScalars___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_QuadraticMap_restrictScalars___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_comp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_comp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_QuadraticMap_comp___elambda__1___rarg), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_comp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_QuadraticMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_comp___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_comp___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_QuadraticMap_comp___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_comp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuadraticMap_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_compQuadraticMap___elambda__1___rarg), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_compQuadraticMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_compQuadraticMap___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_compQuadraticMap___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_compQuadraticMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_restrictScalars___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_LinearMap_compQuadraticMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_LinearMap_compQuadraticMap_x27___rarg), 2, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearMap_compQuadraticMap_x27___boxed(lean_object** _args) {
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
x_19 = l_LinearMap_compQuadraticMap_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
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
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_LinearEquiv_symm___rarg(x_6, x_6, x_1, x_3, x_2, x_4, x_8, x_8, lean_box(0), lean_box(0), x_5);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_alloc_closure((void*)(l_LinearMap_compQuadraticMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LinearEquiv_congrQuadraticMap___elambda__1___rarg___boxed), 9, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_congrQuadraticMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_LinearMap_compQuadraticMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_LinearEquiv_congrQuadraticMap___rarg___lambda__1), 2, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_congrQuadraticMap___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
lean_closure_set(x_12, 3, x_7);
lean_closure_set(x_12, 4, x_8);
lean_closure_set(x_12, 5, x_1);
lean_closure_set(x_12, 6, x_9);
lean_closure_set(x_12, 7, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_congrQuadraticMap___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_congrQuadraticMap___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearEquiv_congrQuadraticMap___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_congrQuadraticMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_congrQuadraticMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_congrQuadraticMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_congrQuadraticMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
lean_inc(x_8);
x_10 = lean_apply_1(x_5, x_8);
x_11 = lean_apply_1(x_6, x_8);
x_12 = lean_apply_2(x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___elambda__1___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___elambda__1___rarg___boxed), 8, 7);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
lean_closure_set(x_11, 4, x_8);
lean_closure_set(x_11, 5, x_9);
lean_closure_set(x_11, 6, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_linMulLin___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuadraticMap_linMulLin___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuadraticMap_linMulLin___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_sq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
lean_inc(x_3);
x_8 = l_QuadraticMap_linMulLin___rarg(x_1, x_2, x_6, x_3, x_3, lean_box(0), lean_box(0), x_7, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_sq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_sq___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_sq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuadraticMap_sq___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_proj___at_QuadraticMap_proj___spec__1___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_proj___at_QuadraticMap_proj___spec__3___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = l_Pi_addMonoid___rarg(x_9);
lean_inc(x_2);
x_11 = l_Pi_Function_module___rarg(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___elambda__1___rarg___boxed), 8, 7);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_10);
lean_closure_set(x_13, 2, x_11);
lean_closure_set(x_13, 3, x_2);
lean_closure_set(x_13, 4, x_7);
lean_closure_set(x_13, 5, x_8);
lean_closure_set(x_13, 6, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_proj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_10, 0, x_7);
x_11 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_11, 0, x_8);
x_12 = l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg(x_2, x_3, lean_box(0), x_9, lean_box(0), lean_box(0), x_10, x_11);
lean_dec(x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_proj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_proj___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_proj___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_proj___at_QuadraticMap_proj___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_proj___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_proj___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_proj___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_proj___at_QuadraticMap_proj___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_proj___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_proj___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMap___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = lean_apply_2(x_1, x_2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___elambda__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMap___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMap___elambda__1___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_BilinMap_toQuadraticMap___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_BilinMap_toQuadraticMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___rarg___boxed), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapAddMonoidHom___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___rarg___boxed), 6, 5);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMapLinearMap___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_BilinMap_toQuadraticMapLinearMap___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMapLinearMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_BilinMap_toQuadraticMapLinearMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
x_6 = lean_alloc_closure((void*)(l_LinearMap_instSMul___rarg), 5, 4);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instInvertibleEndOfNat___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instInvertibleEndOfNat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_instInvertibleEndOfNat___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_cast___at_QuadraticMap_instInvertibleEndOfNat___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_instInvertibleEndOfNat___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_center___at_QuadraticMap_instInvertibleEndOfNat___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_instInvertibleEndOfNat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuadraticMap_instInvertibleEndOfNat(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = l_QuadraticMap_polarBilin___rarg(x_1, x_2, x_4, x_3, x_5, x_11);
x_15 = lean_apply_2(x_14, x_12, x_13);
x_16 = lean_apply_1(x_10, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___rarg___boxed), 13, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_associatedHom___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associatedHom___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_associatedHom___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_QuadraticMap_associatedHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
static lean_object* _init_l_RingHom_id___at_QuadraticMap_associated_x27___spec__2() {
_start:
{
lean_object* x_1; 
x_1 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_QuadraticMap_polarBilin___rarg(x_1, x_2, x_4, x_3, x_5, x_7);
x_11 = lean_apply_2(x_10, x_8, x_9);
x_12 = lean_apply_1(x_6, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associated_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1___rarg___boxed), 9, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associated_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_associated_x27___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_associated_x27___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuadraticMap_associatedHom___at_QuadraticMap_associated_x27___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_QuadraticMap_polarBilin___rarg(x_1, x_2, x_4, x_3, x_5, x_7);
x_11 = lean_apply_2(x_10, x_8, x_9);
x_12 = lean_apply_1(x_6, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associated___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1___rarg___boxed), 9, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associated(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_associated___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_associated___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_associated___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_QuadraticMap_associatedHom___at_QuadraticMap_associated___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_apply_1(x_2, x_5);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10___rarg), 5, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg(x_2, x_3, x_4, x_7, x_5);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_8 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Semiring_toModule___rarg(x_6);
x_11 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_12);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10___rarg), 5, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_13);
lean_inc(x_1);
lean_inc(x_10);
lean_inc_n(x_6, 3);
x_15 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed), 13, 12);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_6);
lean_closure_set(x_15, 4, x_6);
lean_closure_set(x_15, 5, x_10);
lean_closure_set(x_15, 6, x_10);
lean_closure_set(x_15, 7, lean_box(0));
lean_closure_set(x_15, 8, x_4);
lean_closure_set(x_15, 9, x_5);
lean_closure_set(x_15, 10, x_1);
lean_closure_set(x_15, 11, x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_4);
x_5 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg(x_1, x_2, x_3, x_4, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___rarg___boxed), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15___rarg(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15___rarg(x_8);
x_11 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_3);
x_8 = l_LinearMap_toMatrix_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__4___rarg(x_1, x_2, x_3);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12___rarg(x_3, x_4, x_7, x_9, x_9, lean_box(0), lean_box(0), x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMap_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_toLinearMap_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_toQuadraticMap_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Matrix_toLinearMap_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__2___rarg(x_1, x_2, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_alloc_closure((void*)(l_LinearMap_BilinMap_toQuadraticMap___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_toQuadraticMap_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_toQuadraticMap_x27___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_Matrix_toQuadraticMap_x27___spec__8___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__9(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toQuadraticMap_x27___spec__11(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_toMatrix_u2082Aux___at_Matrix_toQuadraticMap_x27___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_Matrix_toQuadraticMap_x27___spec__6___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_inverse___at_Matrix_toQuadraticMap_x27___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_toQuadraticMap_x27___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_toEquiv___at_Matrix_toQuadraticMap_x27___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearEquiv_symm___at_Matrix_toQuadraticMap_x27___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_BilinMap_toQuadraticMap___at_Matrix_toQuadraticMap_x27___spec__16(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_Matrix_toQuadraticMap_x27___spec__7___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_apply_1(x_2, x_5);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8___rarg), 5, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5___rarg(x_2, x_3, x_4, x_7, x_5);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = l_Ring_toAddCommGroup___rarg(x_3);
lean_dec(x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Semiring_toModule___rarg(x_6);
x_10 = l_Semiring_toNonAssocSemiring___rarg(x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_11);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8___rarg), 5, 2);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, x_12);
lean_inc(x_1);
lean_inc(x_9);
lean_inc_n(x_6, 3);
x_14 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___elambda__1___rarg___boxed), 13, 12);
lean_closure_set(x_14, 0, x_8);
lean_closure_set(x_14, 1, x_6);
lean_closure_set(x_14, 2, x_6);
lean_closure_set(x_14, 3, x_6);
lean_closure_set(x_14, 4, x_6);
lean_closure_set(x_14, 5, x_9);
lean_closure_set(x_14, 6, x_9);
lean_closure_set(x_14, 7, lean_box(0));
lean_closure_set(x_14, 8, x_4);
lean_closure_set(x_14, 9, x_5);
lean_closure_set(x_14, 10, x_1);
lean_closure_set(x_14, 11, x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
lean_inc(x_4);
x_5 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_QuadraticMap_toMatrix_x27___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_4);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_4);
lean_inc(x_2);
x_8 = lean_apply_1(x_2, x_7);
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_5);
x_10 = lean_apply_2(x_5, x_8, x_9);
x_11 = lean_apply_1(x_2, x_4);
x_12 = lean_apply_2(x_5, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20___rarg), 6, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20___rarg), 6, 5);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, lean_box(0));
lean_closure_set(x_10, 4, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg(x_1, x_2, x_3, lean_box(0), x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg), 4, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
x_6 = l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg(x_1, x_2, x_3, lean_box(0), x_5, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15___rarg(x_1, x_2, x_3, x_4);
x_10 = lean_apply_2(x_9, x_7, x_8);
x_11 = l_MonoidWithZero_toMulZeroOneClass___rarg(x_5);
x_12 = l_MulZeroOneClass_toMulZeroClass___rarg(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_2(x_13, x_6, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Semiring_toMonoidWithZero___rarg(x_1);
x_8 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__1___boxed), 8, 6);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_4);
lean_closure_set(x_8, 3, x_6);
lean_closure_set(x_8, 4, x_7);
lean_closure_set(x_8, 5, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_toMatrix_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = l_Ring_toAddCommGroup___rarg(x_3);
lean_inc(x_3);
x_9 = l_LinearMap_toMatrix_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__2___rarg(x_1, x_2, x_3);
lean_inc(x_3);
x_10 = l_CommRing_toNonUnitalCommRing___rarg(x_3);
x_11 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg(x_3, x_4, x_8, x_12);
x_14 = lean_apply_1(x_13, x_5);
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_apply_3(x_15, x_14, x_6, x_7);
return x_16;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_toMatrix_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_toMatrix_x27___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_QuadraticMap_toMatrix_x27___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_QuadraticMap_toMatrix_x27___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__9(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_toMatrix_u2082Aux___at_QuadraticMap_toMatrix_x27___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrix_u209b_u2097_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__4___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__11(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_center___at_QuadraticMap_toMatrix_x27___spec__12___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__14(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_QuadraticMap_toMatrix_x27___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_QuadraticMap_toMatrix_x27___spec__13(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_QuadraticMap_polar___at_QuadraticMap_toMatrix_x27___spec__16___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__19___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_toMatrix_x27___spec__19(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_mk_u2082_x27_u209b_u2097___at_QuadraticMap_toMatrix_x27___spec__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_mk_u2082_x27___at_QuadraticMap_toMatrix_x27___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_mk_u2082___at_QuadraticMap_toMatrix_x27___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuadraticMap_polarBilin___at_QuadraticMap_toMatrix_x27___spec__15___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_associatedHom___at_QuadraticMap_toMatrix_x27___spec__10___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_discr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_QuadraticMap_toMatrix_x27___rarg), 7, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
x_7 = l_Matrix_detRowAlternating___rarg(x_3, x_1, lean_box(0), x_2);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_discr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_discr___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Semiring_toModule___rarg(x_1);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___at_QuadraticMap_proj___spec__5___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = l_Pi_addMonoid___rarg(x_10);
lean_inc(x_9);
x_12 = l_Pi_Function_module___rarg(x_9);
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___elambda__1___rarg___boxed), 8, 7);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_11);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_9);
lean_closure_set(x_14, 4, x_7);
lean_closure_set(x_14, 5, x_8);
lean_closure_set(x_14, 6, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_10, 0, x_5);
x_11 = lean_alloc_closure((void*)(l_Function_eval___rarg), 2, 1);
lean_closure_set(x_11, 0, x_6);
x_12 = l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6___rarg(x_1, lean_box(0), x_8, x_9, lean_box(0), lean_box(0), x_10, x_11);
lean_dec(x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_QuadraticMap_instAdd___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_foldrTR___rarg(x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Multiset_map___rarg(x_5, x_4);
x_7 = l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_6 = l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1___rarg(x_1, lean_box(0), lean_box(0), lean_box(0), x_2, x_2);
x_7 = lean_apply_1(x_6, x_5);
x_8 = lean_apply_2(x_3, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_alloc_closure((void*)(l_QuadraticMap_weightedSumSquares___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_QuadraticMap_weightedSumSquares___rarg___lambda__2), 4, 3);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_5);
x_12 = l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7___rarg(x_1, lean_box(0), x_10, x_3, x_11);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_QuadraticMap_weightedSumSquares___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_QuadraticMap_weightedSumSquares___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_proj___at_QuadraticMap_weightedSumSquares___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_QuadraticMap_linMulLin___at_QuadraticMap_weightedSumSquares___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_QuadraticMap_proj___at_QuadraticMap_weightedSumSquares___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_QuadraticMap_weightedSumSquares___spec__8(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_sum___at_QuadraticMap_weightedSumSquares___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuadraticMap_weightedSumSquares___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuadraticMap_weightedSumSquares___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_QuadraticMap_weightedSumSquares___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FiniteDimensional(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_SesquilinearForm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Symmetric(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_BilinearMap(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_QuadraticForm_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FiniteDimensional(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_SesquilinearForm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Symmetric(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_BilinearMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1 = _init_l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1();
lean_mark_persistent(l_RingHom_id___at_QuadraticMap_polarBilin___spec__4___closed__1);
l_QuadraticMap_evalAddMonoidHom___rarg___closed__1 = _init_l_QuadraticMap_evalAddMonoidHom___rarg___closed__1();
lean_mark_persistent(l_QuadraticMap_evalAddMonoidHom___rarg___closed__1);
l_RingHom_id___at_QuadraticMap_associated_x27___spec__2 = _init_l_RingHom_id___at_QuadraticMap_associated_x27___spec__2();
lean_mark_persistent(l_RingHom_id___at_QuadraticMap_associated_x27___spec__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
