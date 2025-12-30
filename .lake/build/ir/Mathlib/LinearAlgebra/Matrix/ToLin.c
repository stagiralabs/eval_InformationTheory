// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.ToLin
// Imports: Init Mathlib.Algebra.Algebra.Subalgebra.Tower Mathlib.Data.Finite.Sum Mathlib.Data.Matrix.Block Mathlib.Data.Matrix.Notation Mathlib.LinearAlgebra.Matrix.StdBasis Mathlib.RingTheory.AlgebraTower Mathlib.RingTheory.Ideal.Span
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
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_endVecRingEquivMatrixEnd___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_algConj(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_vecMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_mulVecLin___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_x27___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_algConj___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixAlgEquiv_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_endVecRingEquivMatrixEnd___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMapRight_x27(lean_object*);
LEAN_EXPORT lean_object* l_endVecAlgEquivMatrixEnd(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecAlgEquivMatrixEnd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_mulVecLin___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixAlgEquiv_x27___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecAlgEquivMatrixEnd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_mulVec___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLin_x27(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixAlgEquiv_x27(lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_algEquivMatrix_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_endVecRingEquivMatrixEnd___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixAlgEquiv_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_endVecRingEquivMatrixEnd___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_endVecRingEquivMatrixEnd___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinAlgEquiv_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_endVecRingEquivMatrixEnd___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_mulVecLin(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27OfInv___spec__1(lean_object*, lean_object*);
lean_object* l_LinearEquiv_arrowCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27OfInv___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_endVecRingEquivMatrixEnd___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearMapRight_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinAlgEquiv_x27(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_x27___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLin_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_vecMulLinear___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_mulVecLin___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_vecMulLinear___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_mulVecLin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_algEquivMatrix_x27(lean_object*);
static lean_object* _init_l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_vecMulLinear___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_vecMul___rarg(x_1, x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_vecMulLinear___rarg___lambda__1), 5, 3);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_vecMulLinear___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_vecMulLinear___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_vecMulLinear___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_vecMulLinear___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_vecMulLinear___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toMatrixRight_x27___elambda__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_3);
x_8 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7___rarg(x_1, x_8, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___boxed), 6, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_6);
lean_closure_set(x_7, 3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___rarg(x_3, x_1, x_4, x_6);
x_11 = lean_apply_1(x_10, x_9);
x_12 = lean_apply_2(x_5, x_11, x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_7 = l_Semiring_toModule___rarg(x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrixRight_x27___rarg___lambda__2___boxed), 7, 4);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_5);
lean_closure_set(x_8, 3, x_7);
x_9 = lean_alloc_closure((void*)(l_LinearMap_toMatrixRight_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, lean_box(0));
lean_closure_set(x_9, 3, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toMatrixRight_x27___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrixRight_x27___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrixRight_x27___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_LinearMap_toMatrixRight_x27___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_single___at_LinearMap_toMatrixRight_x27___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearMap_toMatrixRight_x27___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixRight_x27___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearMap_toMatrixRight_x27___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___rarg___boxed), 3, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7___rarg(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7___rarg(x_9);
x_12 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMapRight_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = l_LinearMap_toMatrixRight_x27___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5);
x_10 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_11 = l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg(x_1, lean_box(0), lean_box(0), x_8, x_10, x_10, lean_box(0), lean_box(0), x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearMapRight_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_toLinearMapRight_x27___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearMapRight_x27___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_inverse___at_Matrix_toLinearMapRight_x27___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearMapRight_x27___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_toEquiv___at_Matrix_toLinearMapRight_x27___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearEquiv_symm___at_Matrix_toLinearMapRight_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_toLinearEquivRight_x27OfInv___elambda__1___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___rarg___boxed), 3, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7___rarg), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7___rarg(x_10);
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___rarg___boxed), 3, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11___rarg), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11___rarg(x_10);
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_12 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_inc(x_1);
x_15 = l_LinearMap_toMatrixRight_x27___rarg(x_1, lean_box(0), lean_box(0), x_6, x_7);
x_16 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_17 = l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg(x_1, lean_box(0), lean_box(0), x_13, x_14, x_16, x_16, lean_box(0), lean_box(0), x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_apply_1(x_18, x_9);
lean_inc(x_1);
x_20 = l_LinearMap_toMatrixRight_x27___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5);
x_21 = l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8___rarg(x_1, lean_box(0), lean_box(0), x_13, x_14, x_16, x_16, lean_box(0), lean_box(0), x_20);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_1);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_apply_1(x_22, x_8);
x_24 = lean_alloc_closure((void*)(l_Matrix_toLinearEquivRight_x27OfInv___elambda__1___rarg), 3, 1);
lean_closure_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_toLinearEquivRight_x27OfInv___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_toLinearEquivRight_x27OfInv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLinearEquivRight_x27OfInv___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_inverse___at_Matrix_toLinearEquivRight_x27OfInv___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearEquiv_toAddEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_Matrix_toLinearEquivRight_x27OfInv___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_symm___at_Matrix_toLinearEquivRight_x27OfInv___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinearEquivRight_x27OfInv___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_toLinearEquivRight_x27OfInv___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_mulVecLin___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_mulVecLin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_mulVec___rarg), 5, 3);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_mulVecLin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_mulVecLin___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_mulVecLin___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_mulVecLin___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_mulVecLin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_mulVecLin___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_mulVecLin___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_x27___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_x27___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_update___at_LinearMap_toMatrix_x27___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Function_update___at_LinearMap_toMatrix_x27___spec__3___rarg(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_8);
x_10 = lean_apply_2(x_4, x_9, x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___rarg___lambda__1___boxed), 6, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, lean_box(0));
lean_closure_set(x_9, 3, x_5);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_toMatrix_x27___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrix_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrix_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_LinearMap_toMatrix_x27___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Function_update___at_LinearMap_toMatrix_x27___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Pi_single___at_LinearMap_toMatrix_x27___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrix_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_toMatrix_x27___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___rarg___boxed), 3, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5___rarg), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5___rarg(x_10);
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLin_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_1);
x_9 = l_LinearMap_toMatrix_x27___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5);
x_10 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_11 = l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2___rarg(x_1, lean_box(0), lean_box(0), x_1, x_8, x_10, x_10, lean_box(0), lean_box(0), x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLin_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_toLin_x27___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLin_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_inverse___at_Matrix_toLin_x27___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearEquiv_toAddEquiv___at_Matrix_toLin_x27___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_Matrix_toLin_x27___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_symm___at_Matrix_toLin_x27___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_toLin_x27OfInv___elambda__1___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27OfInv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_1);
x_12 = l_Matrix_toLin_x27___rarg(x_1, lean_box(0), lean_box(0), x_7, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_9);
x_15 = l_Matrix_toLin_x27___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_1(x_16, x_8);
x_18 = lean_alloc_closure((void*)(l_Matrix_toLin_x27OfInv___elambda__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_toLin_x27OfInv___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLin_x27OfInv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_toLin_x27OfInv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_toLin_x27OfInv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_toLin_x27OfInv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixAlgEquiv_x27___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___rarg___boxed), 3, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6___rarg), 1, 0);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6___rarg(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6___rarg(x_11);
x_14 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_7);
x_10 = lean_alloc_closure((void*)(l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___lambda__1), 4, 1);
lean_closure_set(x_10, 0, x_7);
x_11 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_12 = l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_11, x_11, lean_box(0), lean_box(0), x_7);
lean_dec(x_11);
x_13 = lean_alloc_closure((void*)(l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___lambda__2), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixAlgEquiv_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_LinearMap_toMatrix_x27___rarg(x_1, lean_box(0), lean_box(0), x_3, x_4);
x_9 = l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg(x_1, lean_box(0), x_3, x_4, x_1, x_7, x_8, lean_box(0), lean_box(0));
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearMap_toMatrixAlgEquiv_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_toMatrixAlgEquiv_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_toMatrixAlgEquiv_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_toMatrixAlgEquiv_x27___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearMap_inverse___at_LinearMap_toMatrixAlgEquiv_x27___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LinearEquiv_toAddEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_toEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_symm___at_LinearMap_toMatrixAlgEquiv_x27___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgEquiv_ofLinearEquiv___at_LinearMap_toMatrixAlgEquiv_x27___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___rarg___boxed), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_symm___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinAlgEquiv_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_LinearMap_toMatrixAlgEquiv_x27___rarg(x_1, lean_box(0), x_3, x_4);
x_9 = l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1___rarg(x_1, lean_box(0), x_3, x_4, x_1, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_toLinAlgEquiv_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_toLinAlgEquiv_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_toRingEquiv___at_Matrix_toLinAlgEquiv_x27___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_toMulEquiv___at_Matrix_toLinAlgEquiv_x27___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MulEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_toAddEquiv___at_Matrix_toLinAlgEquiv_x27___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AlgEquiv_symm___at_Matrix_toLinAlgEquiv_x27___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_algEquivMatrix_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_LinearMap_toMatrix_x27___rarg(x_1, lean_box(0), lean_box(0), x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 1);
lean_dec(x_7);
x_8 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, lean_box(0));
lean_closure_set(x_8, 3, x_4);
lean_ctor_set(x_5, 1, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_alloc_closure((void*)(l_LinearMap_toMatrix_x27___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, lean_box(0));
lean_closure_set(x_10, 3, x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_algEquivMatrix_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_algEquivMatrix_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_algConj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_4);
x_9 = l_LinearEquiv_arrowCongr___rarg(x_1, x_4, x_6, x_4, x_6, x_5, x_7, x_5, x_7, x_8, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_algConj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearEquiv_algConj___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_endVecRingEquivMatrixEnd___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_endVecRingEquivMatrixEnd___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_6);
x_7 = lean_apply_2(x_1, x_6, x_4);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_apply_1(x_3, x_6);
return x_9;
}
else
{
lean_dec(x_6);
lean_dec(x_3);
lean_inc(x_5);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Function_update___at_endVecRingEquivMatrixEnd___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_update___at_endVecRingEquivMatrixEnd___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_Pi_single___at_LinearMap_toMatrixRight_x27___spec__6___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_3);
x_8 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_Function_update___at_endVecRingEquivMatrixEnd___spec__3___rarg(x_1, lean_box(0), x_8, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_endVecRingEquivMatrixEnd___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_endVecRingEquivMatrixEnd___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_endVecRingEquivMatrixEnd___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2___rarg___boxed), 6, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_5);
lean_closure_set(x_7, 4, x_6);
x_8 = lean_apply_2(x_3, x_7, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_endVecRingEquivMatrixEnd___rarg___lambda__2), 4, 3);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_5);
x_7 = l_Finset_sum___at_endVecRingEquivMatrixEnd___spec__4___rarg(x_1, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_endVecRingEquivMatrixEnd___rarg___lambda__1), 6, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
x_9 = lean_alloc_closure((void*)(l_endVecRingEquivMatrixEnd___rarg___lambda__3), 5, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_endVecRingEquivMatrixEnd___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_endVecRingEquivMatrixEnd___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_endVecRingEquivMatrixEnd___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_update___at_endVecRingEquivMatrixEnd___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Function_update___at_endVecRingEquivMatrixEnd___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pi_single___at_endVecRingEquivMatrixEnd___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_endVecRingEquivMatrixEnd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_endVecRingEquivMatrixEnd___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_endVecAlgEquivMatrixEnd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_endVecRingEquivMatrixEnd___rarg(x_1, x_2, lean_box(0), x_6, lean_box(0), x_9, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_endVecAlgEquivMatrixEnd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_endVecAlgEquivMatrixEnd___rarg___boxed), 12, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_endVecAlgEquivMatrixEnd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_endVecAlgEquivMatrixEnd___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_13;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Tower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Block(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_StdBasis(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_AlgebraTower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Span(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_ToLin(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Block(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_StdBasis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_AlgebraTower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Span(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1 = _init_l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Matrix_vecMulLinear___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
