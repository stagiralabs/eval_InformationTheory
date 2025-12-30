// Lean compiler output
// Module: Mathlib.Data.Matrix.Invertible
// Imports: Init Mathlib.Data.Matrix.ConjTranspose Mathlib.Tactic.Abel
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
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__6___rarg(lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__15(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__18___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__18(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__17___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__10(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__12___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleTranspose___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleTranspose___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__15___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__14___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3(lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleTranspose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__7(lean_object*, lean_object*);
lean_object* l_Matrix_conjTranspose___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__16(lean_object*, lean_object*);
lean_object* l_Matrix_transpose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_conjTranspose___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Matrix_invertibleConjTranspose___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_invertibleConjTranspose___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleConjTranspose___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_invertibleConjTranspose(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_conjTranspose___rarg), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Matrix_invertibleOfInvertibleConjTranspose___rarg___boxed), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_invertibleOfInvertibleConjTranspose___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleConjTranspose___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_invertibleOfInvertibleConjTranspose(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleTranspose___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_transpose___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleTranspose(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleTranspose___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleTranspose___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleTranspose(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleOfInvertibleTranspose___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_invertibleOfInvertibleTranspose___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_invertibleOfInvertibleTranspose___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleOfInvertibleTranspose___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_invertibleOfInvertibleTranspose(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_transpose___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_transposeInvertibleEquivInvertible___elambda__1___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Matrix_invertibleOfInvertibleTranspose___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Matrix_transposeInvertibleEquivInvertible___elambda__2___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Matrix_transposeInvertibleEquivInvertible___elambda__2___rarg), 1, 0);
x_6 = lean_alloc_closure((void*)(l_Matrix_transposeInvertibleEquivInvertible___elambda__1___rarg), 1, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_transposeInvertibleEquivInvertible___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_transposeInvertibleEquivInvertible___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_transposeInvertibleEquivInvertible___elambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_transposeInvertibleEquivInvertible___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_transposeInvertibleEquivInvertible___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Pi_instSub___elambda__1___rarg(x_3, x_1, x_2, x_4);
x_7 = lean_apply_1(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___elambda__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Pi_instAdd___elambda__1___rarg(x_3, x_1, x_2, x_4);
x_7 = lean_apply_1(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___elambda__2___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_foldrTR___rarg(x_7, x_8, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_Ring_toNonAssocRing___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__2___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_foldrTR___rarg(x_7, x_8, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__6___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__6___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__5___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_Ring_toNonAssocRing___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__5___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__4___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_foldrTR___rarg(x_7, x_8, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__9___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__9___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__8___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_Ring_toNonAssocRing___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__8___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__7___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__12___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_foldrTR___rarg(x_7, x_8, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__12___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__12___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__11___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_Ring_toNonAssocRing___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__11___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__10___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__15___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_foldrTR___rarg(x_7, x_8, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__15___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__15___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__14___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_Ring_toNonAssocRing___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__14___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__13___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__18___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Ring_toNonAssocRing___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_foldrTR___rarg(x_7, x_8, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__18(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__18___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__18___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__17___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = l_Ring_toNonAssocRing___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_7);
x_9 = l_Finset_sum___at_Matrix_invertibleAddMulMul___spec__17___rarg(x_2, x_1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_dotProduct___at_Matrix_invertibleAddMulMul___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_dotProduct___at_Matrix_invertibleAddMulMul___spec__16___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_6);
x_9 = l_dotProduct___at_Matrix_invertibleAddMulMul___spec__7___rarg(x_4, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
x_9 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__2), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__1), 3, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_8);
x_11 = l_dotProduct___at_Matrix_invertibleAddMulMul___spec__10___rarg(x_7, x_5, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_5);
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__3), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
lean_closure_set(x_10, 6, x_7);
x_11 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__1), 3, 2);
lean_closure_set(x_11, 0, x_8);
lean_closure_set(x_11, 1, x_9);
x_12 = l_dotProduct___at_Matrix_invertibleAddMulMul___spec__13___rarg(x_7, x_5, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__4), 9, 8);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_3);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
lean_closure_set(x_10, 6, x_6);
lean_closure_set(x_10, 7, x_7);
x_11 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__1), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_9);
x_12 = l_dotProduct___at_Matrix_invertibleAddMulMul___spec__16___rarg(x_3, x_4, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__6___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_5);
x_13 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_14 = l_AddGroupWithOne_toAddGroup___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_10);
x_16 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__5), 9, 7);
lean_closure_set(x_16, 0, x_10);
lean_closure_set(x_16, 1, x_7);
lean_closure_set(x_16, 2, x_1);
lean_closure_set(x_16, 3, x_5);
lean_closure_set(x_16, 4, x_12);
lean_closure_set(x_16, 5, x_3);
lean_closure_set(x_16, 6, x_9);
x_17 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___lambda__7___boxed), 2, 1);
lean_closure_set(x_17, 0, x_15);
x_18 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___elambda__1___rarg), 5, 3);
lean_closure_set(x_18, 0, x_10);
lean_closure_set(x_18, 1, x_16);
lean_closure_set(x_18, 2, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_invertibleAddMulMul___rarg___boxed), 12, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_Matrix_invertibleAddMulMul___spec__3___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleAddMulMul___rarg___lambda__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___lambda__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_invertibleAddMulMul___rarg___lambda__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_invertibleAddMulMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Matrix_invertibleAddMulMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_ConjTranspose(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Abel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Matrix_Invertible(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_ConjTranspose(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Abel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
