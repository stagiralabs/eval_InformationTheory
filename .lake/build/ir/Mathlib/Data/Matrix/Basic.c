// Lean compiler output
// Module: Mathlib.Data.Matrix.Basic
// Imports: Init Mathlib.Algebra.Algebra.Opposite Mathlib.Algebra.Algebra.Pi Mathlib.Algebra.BigOperators.RingEquiv Mathlib.Data.Finite.Prod Mathlib.Data.Matrix.Mul Mathlib.LinearAlgebra.Pi
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
static lean_object* l_Matrix_ofLinearEquiv___rarg___closed__1;
LEAN_EXPORT lean_object* l_Matrix_entryLinearMap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_instAlgebra___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Matrix_transposeRingEquiv___closed__2;
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_scalar(lean_object*);
static lean_object* l_RingEquiv_mopMatrix___closed__1;
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mapMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mapMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_mapMatrix___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagLinearMap___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_decidableEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Matrix_decidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulOpposite_opEquiv(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeRingEquiv___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Matrix_smul___rarg(lean_object*);
lean_object* l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_mapMatrix___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeRingEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeAddEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MulOpposite_unop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_mapMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom___at_Matrix_diagonalLinearMap___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryAddHom(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Pi_constRingHom___at_Matrix_scalar___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mapMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_mapMatrix___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAlgebra(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Matrix_diagonal___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mapMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryLinearMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgHom_mapMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom___at_Matrix_diagLinearMap___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Matrix_transposeAddEquiv___closed__1;
static lean_object* l_RingEquiv_mopMatrix___lambda__2___closed__1;
static lean_object* l_Matrix_transposeAddEquiv___closed__2;
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_transposeLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryLinearMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_diagAddMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_transposeLinearEquiv___spec__1(lean_object*, lean_object*);
lean_object* l_MulOpposite_op___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_scalar___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_diag___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_mapMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_scalar___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingEquiv_mopMatrix___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_instAlgebra___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_mapMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Fintype_decidablePiFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_mapMatrix___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom___at_Matrix_diagLinearMap___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_scalar___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryAddMonoidHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeRingEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_entryLinearMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_instAlgebra___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalLinearMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_scalar___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgEquiv_mapMatrix___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constRingHom___at_Matrix_scalar___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalLinearMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Matrix_decidableEq___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagLinearMap___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagonalLinearMap___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeAddEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_scalar___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagonalLinearMap___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_RingEquiv_mopMatrix___closed__3;
static lean_object* l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_LinearMap_mapMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_constRingHom___at_Matrix_scalar___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_transpose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingEquiv_mopMatrix___closed__2;
LEAN_EXPORT lean_object* l_Matrix_diagonalLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom___at_Matrix_diagonalLinearMap___spec__1(lean_object*, lean_object*);
static lean_object* l_Matrix_transposeRingEquiv___closed__1;
LEAN_EXPORT lean_object* l_Matrix_entryAddMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_entryLinearMap___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Matrix_decidableEq___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_alloc_closure((void*)(l_Matrix_decidableEq___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_Fintype_decidablePiFintype___rarg(x_6, x_2, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Matrix_decidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_alloc_closure((void*)(l_Matrix_decidableEq___rarg___lambda__2___boxed), 5, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = l_Fintype_decidablePiFintype___rarg(x_6, x_2, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_decidableEq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_decidableEq___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_decidableEq___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Matrix_decidableEq___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_decidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Matrix_decidableEq___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Matrix_instFintypeOfDecidableEq___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(x_2, x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Matrix_instFintypeOfDecidableEq___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_3);
x_8 = l_Fintype_piFinset___at_Pi_instFintype___spec__1___rarg(x_2, x_1, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instFintypeOfDecidableEq___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_instFintypeOfDecidableEq___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instFintypeOfDecidableEq___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_instFintypeOfDecidableEq___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_ofLinearEquiv___elambda__1___rarg), 4, 0);
return x_4;
}
}
static lean_object* _init_l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instFintypeOfDecidableEq___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Pi_addMonoid___rarg(x_3);
return x_4;
}
}
static lean_object* _init_l_Matrix_ofLinearEquiv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = l_Matrix_ofLinearEquiv___rarg___closed__1;
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Matrix_ofLinearEquiv___elambda__1___rarg), 4, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_4, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_4, 0);
lean_dec(x_9);
lean_ctor_set(x_4, 1, x_6);
return x_4;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_ofLinearEquiv___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_ofLinearEquiv___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_ofLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_ofLinearEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_Matrix_diagonal___rarg___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonalAddMonoidHom___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom___at_Matrix_diagonalLinearMap___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_Matrix_diagonal___rarg___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAddMonoidHom___at_Matrix_diagonalLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonalAddMonoidHom___at_Matrix_diagonalLinearMap___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagonalLinearMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_diagonalAddMonoidHom___at_Matrix_diagonalLinearMap___spec__1___rarg(x_1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_diagonalLinearMap___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagonalLinearMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_diagonalLinearMap___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalLinearMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_diagonalLinearMap___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Matrix_diagAddMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Matrix_diag___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_diagAddMonoidHom___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_diagAddMonoidHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom___at_Matrix_diagLinearMap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_diagAddMonoidHom___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagLinearMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diag___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_diagLinearMap___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagAddMonoidHom___at_Matrix_diagLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_diagAddMonoidHom___at_Matrix_diagLinearMap___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_diagLinearMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_diagLinearMap___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_diagLinearMap___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagLinearMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_diagLinearMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Matrix_diagonal___rarg___boxed), 5, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonalRingHom___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_diagonalRingHom___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Matrix_diagonal___rarg___boxed), 5, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_Pi_constRingHom___at_Matrix_scalar___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Pi_constRingHom___at_Matrix_scalar___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constRingHom___at_Matrix_scalar___spec__2___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_scalar___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_scalar___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_RingHom_comp___at_Matrix_scalar___spec__3___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_scalar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1___rarg(x_1, lean_box(0), x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 0);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_scalar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_scalar___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_diagonalRingHom___at_Matrix_scalar___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_constRingHom___at_Matrix_scalar___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_constRingHom___at_Matrix_scalar___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_scalar___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_RingHom_comp___at_Matrix_scalar___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_scalar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_scalar___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_instAlgebra___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_instAlgebra___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingHom_comp___at_Matrix_instAlgebra___spec__1___rarg), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = l_Matrix_smul___rarg(x_6);
x_8 = l_Matrix_scalar___rarg(x_4, lean_box(0), x_2, x_1);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAlgebra(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_instAlgebra___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_comp___at_Matrix_instAlgebra___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHom_comp___at_Matrix_instAlgebra___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_instAlgebra___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Matrix_diagonal___rarg___boxed), 5, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_diagonalAlgHom___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_diagonalAlgHom___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalAlgHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_diagonalAlgHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_entryAddHom___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_entryAddHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_entryAddHom___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_entryAddHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_entryAddMonoidHom___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_entryAddMonoidHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_entryLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Matrix_entryLinearMap___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_entryLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_entryLinearMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_entryLinearMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_entryLinearMap(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Matrix_map___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___elambda__1___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___elambda__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Matrix_map___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___elambda__2___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_mapMatrix___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___elambda__2___rarg), 4, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___elambda__1___rarg), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mapMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_AddMonoidHom_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Matrix_map___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddMonoidHom_mapMatrix___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_mapMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddMonoidHom_mapMatrix(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Matrix_map___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Equiv_symm___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Matrix_map___rarg(x_2, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_AddEquiv_mapMatrix___rarg___lambda__1), 4, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_AddEquiv_mapMatrix___rarg___lambda__2), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddEquiv_mapMatrix___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_mapMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddEquiv_mapMatrix(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_mapMatrix___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mapMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_map___rarg(x_2, x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LinearMap_mapMatrix___rarg), 4, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_mapMatrix___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_mapMatrix___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_mapMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearMap_mapMatrix(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_LinearEquiv_symm___rarg(x_1, x_1, x_2, x_3, x_4, x_5, x_8, x_8, lean_box(0), lean_box(0), x_6);
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_mapMatrix___elambda__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = l_Matrix_map___rarg(x_9, x_13, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LinearEquiv_mapMatrix___elambda__1___rarg___boxed), 11, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_mapMatrix___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_mapMatrix___elambda__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Matrix_map___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_1);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_LinearEquiv_mapMatrix___rarg___lambda__1), 4, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = lean_alloc_closure((void*)(l_LinearEquiv_mapMatrix___elambda__1___rarg___boxed), 11, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LinearEquiv_mapMatrix___rarg), 6, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_mapMatrix___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LinearEquiv_mapMatrix___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearEquiv_mapMatrix___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearEquiv_mapMatrix___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_mapMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_map___rarg(x_2, x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingHom_mapMatrix___rarg), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_mapMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingHom_mapMatrix(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___elambda__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Matrix_map___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Equiv_symm___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_Equiv_mapMatrix___elambda__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Matrix_map___rarg(x_2, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_RingEquiv_mapMatrix___rarg___lambda__1), 4, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_RingEquiv_mapMatrix___rarg___lambda__2), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_RingEquiv_mapMatrix___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mapMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_RingEquiv_mapMatrix(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
static lean_object* _init_l_RingEquiv_mopMatrix___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulOpposite_unop___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Matrix_transpose___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_RingEquiv_mopMatrix___lambda__1___closed__1;
x_4 = lean_alloc_closure((void*)(l_Matrix_map___rarg), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_RingEquiv_mopMatrix___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulOpposite_op___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Matrix_transpose___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_RingEquiv_mopMatrix___lambda__2___closed__1;
x_6 = l_Matrix_map___rarg(x_4, x_5, x_2, x_3);
return x_6;
}
}
static lean_object* _init_l_RingEquiv_mopMatrix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_RingEquiv_mopMatrix___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_RingEquiv_mopMatrix___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_RingEquiv_mopMatrix___lambda__2), 3, 0);
return x_1;
}
}
static lean_object* _init_l_RingEquiv_mopMatrix___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RingEquiv_mopMatrix___closed__1;
x_2 = l_RingEquiv_mopMatrix___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingEquiv_mopMatrix___closed__3;
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_mopMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingEquiv_mopMatrix(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mapMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_map___rarg(x_2, x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_AlgHom_mapMatrix___rarg), 4, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlgHom_mapMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_AlgHom_mapMatrix(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
LEAN_EXPORT lean_object* l_AlgEquiv_mapMatrix___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_RingEquiv_mapMatrix___rarg___lambda__1), 4, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_RingEquiv_mapMatrix___rarg___lambda__2), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_mapMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_AlgEquiv_mapMatrix___rarg), 1, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_AlgEquiv_mapMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_AlgEquiv_mapMatrix(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
static lean_object* _init_l_Matrix_transposeAddEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Matrix_transpose___rarg), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Matrix_transposeAddEquiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Matrix_transposeAddEquiv___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeAddEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_transposeAddEquiv___closed__2;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeAddEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_transposeAddEquiv(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_transposeLinearEquiv___elambda__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_transposeLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Matrix_transposeAddEquiv___closed__2;
x_5 = lean_alloc_closure((void*)(l_Matrix_transposeLinearEquiv___elambda__1___rarg), 4, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Matrix_transposeAddEquiv___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_transposeLinearEquiv___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_transposeLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_transposeLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_transposeLinearEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeRingEquiv___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Matrix_transposeRingEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Matrix_transposeRingEquiv___lambda__1), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Matrix_transposeRingEquiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Matrix_transposeAddEquiv___closed__1;
x_2 = l_Matrix_transposeRingEquiv___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeRingEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_transposeRingEquiv___closed__2;
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeRingEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_transposeRingEquiv(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_MulOpposite_opEquiv(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_MulOpposite_opEquiv(lean_box(0));
x_6 = l_Matrix_transposeAddEquiv___closed__2;
x_7 = l_Equiv_trans___rarg(x_6, x_5);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
x_10 = l_Matrix_transposeAddEquiv___closed__1;
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Matrix_transposeAddEquiv___closed__1;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_transposeAlgEquiv___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddEquiv_trans___at_Matrix_transposeAlgEquiv___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_transposeAlgEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeAlgEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_transposeAlgEquiv(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Opposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_RingEquiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Mul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Matrix_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_RingEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Mul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Matrix_ofLinearEquiv___spec__1___closed__1);
l_Matrix_ofLinearEquiv___rarg___closed__1 = _init_l_Matrix_ofLinearEquiv___rarg___closed__1();
lean_mark_persistent(l_Matrix_ofLinearEquiv___rarg___closed__1);
l_Matrix_diagAddMonoidHom___closed__1 = _init_l_Matrix_diagAddMonoidHom___closed__1();
lean_mark_persistent(l_Matrix_diagAddMonoidHom___closed__1);
l_Pi_constRingHom___at_Matrix_scalar___spec__2___closed__1 = _init_l_Pi_constRingHom___at_Matrix_scalar___spec__2___closed__1();
lean_mark_persistent(l_Pi_constRingHom___at_Matrix_scalar___spec__2___closed__1);
l_RingEquiv_mopMatrix___lambda__1___closed__1 = _init_l_RingEquiv_mopMatrix___lambda__1___closed__1();
lean_mark_persistent(l_RingEquiv_mopMatrix___lambda__1___closed__1);
l_RingEquiv_mopMatrix___lambda__2___closed__1 = _init_l_RingEquiv_mopMatrix___lambda__2___closed__1();
lean_mark_persistent(l_RingEquiv_mopMatrix___lambda__2___closed__1);
l_RingEquiv_mopMatrix___closed__1 = _init_l_RingEquiv_mopMatrix___closed__1();
lean_mark_persistent(l_RingEquiv_mopMatrix___closed__1);
l_RingEquiv_mopMatrix___closed__2 = _init_l_RingEquiv_mopMatrix___closed__2();
lean_mark_persistent(l_RingEquiv_mopMatrix___closed__2);
l_RingEquiv_mopMatrix___closed__3 = _init_l_RingEquiv_mopMatrix___closed__3();
lean_mark_persistent(l_RingEquiv_mopMatrix___closed__3);
l_Matrix_transposeAddEquiv___closed__1 = _init_l_Matrix_transposeAddEquiv___closed__1();
lean_mark_persistent(l_Matrix_transposeAddEquiv___closed__1);
l_Matrix_transposeAddEquiv___closed__2 = _init_l_Matrix_transposeAddEquiv___closed__2();
lean_mark_persistent(l_Matrix_transposeAddEquiv___closed__2);
l_Matrix_transposeRingEquiv___closed__1 = _init_l_Matrix_transposeRingEquiv___closed__1();
lean_mark_persistent(l_Matrix_transposeRingEquiv___closed__1);
l_Matrix_transposeRingEquiv___closed__2 = _init_l_Matrix_transposeRingEquiv___closed__2();
lean_mark_persistent(l_Matrix_transposeRingEquiv___closed__2);
l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___closed__1 = _init_l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___closed__1();
lean_mark_persistent(l_MulOpposite_opAddEquiv___at_Matrix_transposeAlgEquiv___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
