// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.NonsingularInverse
// Imports: Init Mathlib.Data.Matrix.Invertible Mathlib.LinearAlgebra.FiniteDimensional.Defs Mathlib.LinearAlgebra.Matrix.Adjugate Mathlib.LinearAlgebra.Matrix.SemiringInverse Mathlib.LinearAlgebra.Matrix.Trace Mathlib.LinearAlgebra.Matrix.ToLin
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
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfRightInverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfLeftInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfInvertible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfLeftInverse___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unitOfInvertible___at_Matrix_unitOfDetInvertible___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_adjugate___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertible(lean_object*);
lean_object* l_Matrix_submatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_detRowAlternating___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_unitOfDetInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___rarg(lean_object*);
LEAN_EXPORT lean_object* l_unitOfInvertible___at_Matrix_unitOfDetInvertible___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfRightInverse___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_diagonalRingHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__2___rarg(lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfInvertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfRightInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_unitOfDetInvertible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfLeftInverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Matrix_adjugate___rarg(x_2, x_1, x_3, x_4, x_7, x_8);
x_13 = lean_apply_2(x_11, x_6, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleOfDetInvertible___elambda__1___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfDetInvertible___elambda__1___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleOfDetInvertible___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDetInvertible___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_invertibleOfDetInvertible___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfLeftInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Matrix_detRowAlternating___rarg(x_2, x_1, lean_box(0), x_3);
x_8 = lean_apply_1(x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfLeftInverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_detInvertibleOfLeftInverse___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfLeftInverse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_detInvertibleOfLeftInverse___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfRightInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Matrix_detRowAlternating___rarg(x_2, x_1, lean_box(0), x_3);
x_8 = lean_apply_1(x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfRightInverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_detInvertibleOfRightInverse___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfRightInverse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_detInvertibleOfRightInverse___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Matrix_detRowAlternating___rarg(x_2, x_1, lean_box(0), x_3);
x_7 = lean_apply_1(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfInvertible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_detInvertibleOfInvertible___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_detInvertibleOfInvertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_detInvertibleOfInvertible___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_invertibleOfDetInvertible___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivDetInvertible___elambda__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Matrix_detRowAlternating___rarg(x_2, x_1, lean_box(0), x_3);
x_7 = lean_apply_1(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivDetInvertible___elambda__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivDetInvertible___elambda__2___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
x_6 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivDetInvertible___elambda__1___rarg), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleEquivDetInvertible___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleEquivDetInvertible___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_invertibleEquivDetInvertible___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_unitOfInvertible___at_Matrix_unitOfDetInvertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Matrix_invertibleOfDetInvertible___rarg(x_1, x_2, x_3, x_4, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_unitOfInvertible___at_Matrix_unitOfDetInvertible___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_unitOfInvertible___at_Matrix_unitOfDetInvertible___spec__1___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_unitOfDetInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_unitOfInvertible___at_Matrix_unitOfDetInvertible___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_unitOfDetInvertible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_unitOfDetInvertible___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Matrix_instInvertibleInv___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_instInvertibleInv___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instInvertibleInv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_instInvertibleInv(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___rarg___boxed), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Matrix_diagonalRingHom___rarg(x_4, x_1, x_2);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertible(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_diagonalInvertible___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Invertible_map___at_Matrix_diagonalInvertible___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Invertible_map___at_Matrix_diagonalInvertible___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_diagonalInvertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = lean_apply_2(x_1, x_2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleOfDiagonalInvertible___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_invertibleOfDiagonalInvertible___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfDiagonalInvertible___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfDiagonalInvertible___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfDiagonalInvertible(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonalInvertible___rarg(x_1, x_2, lean_box(0), x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonalInvertibleEquivInvertible___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_invertibleOfDiagonalInvertible___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_diagonalInvertibleEquivInvertible___elambda__2___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Semiring_toNonAssocSemiring___rarg(x_5);
x_7 = lean_alloc_closure((void*)(l_Matrix_diagonalInvertibleEquivInvertible___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_6);
x_8 = lean_alloc_closure((void*)(l_Matrix_diagonalInvertibleEquivInvertible___elambda__2___rarg), 1, 0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonalInvertibleEquivInvertible___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonalInvertibleEquivInvertible___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_diagonalInvertibleEquivInvertible___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonalInvertibleEquivInvertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_diagonalInvertibleEquivInvertible___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___rarg___lambda__1), 2, 1);
lean_closure_set(x_10, 0, x_7);
x_11 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___rarg___lambda__1), 2, 1);
lean_closure_set(x_11, 0, x_8);
x_12 = lean_alloc_closure((void*)(l_Matrix_submatrix___rarg), 5, 3);
lean_closure_set(x_12, 0, x_9);
lean_closure_set(x_12, 1, x_11);
lean_closure_set(x_12, 2, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertible___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfRightInverse___at_Matrix_submatrixEquivInvertible___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_submatrixEquivInvertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_9, 0, x_5);
x_10 = lean_alloc_closure((void*)(l_Matrix_submatrix___rarg), 5, 3);
lean_closure_set(x_10, 0, x_7);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Matrix_invertibleOfSubmatrixEquivInvertible___rarg___boxed), 7, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfRightInverse___at_Matrix_invertibleOfSubmatrixEquivInvertible___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_invertibleOfSubmatrixEquivInvertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfSubmatrixEquivInvertible___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_invertibleOfSubmatrixEquivInvertible(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_submatrixEquivInvertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_invertibleOfSubmatrixEquivInvertible___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___rarg___boxed), 7, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___rarg___boxed), 7, 6);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_5);
lean_closure_set(x_9, 3, x_6);
lean_closure_set(x_9, 4, x_7);
lean_closure_set(x_9, 5, x_8);
x_10 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
lean_closure_set(x_10, 7, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_submatrixEquivInvertibleEquivInvertible___rarg), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_submatrixEquivInvertibleEquivInvertible___elambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Invertible(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FiniteDimensional_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Adjugate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_SemiringInverse(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Trace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_ToLin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_NonsingularInverse(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Invertible(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FiniteDimensional_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Adjugate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_SemiringInverse(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Trace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_ToLin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
