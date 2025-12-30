// Lean compiler output
// Module: Mathlib.LinearAlgebra.Matrix.Swap
// Imports: Init Mathlib.LinearAlgebra.Matrix.GeneralLinearGroup.Defs Mathlib.LinearAlgebra.Matrix.Permutation Mathlib.Data.Matrix.PEquiv
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_Equiv_toPEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
lean_object* l_Equiv_swap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_swap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PEquiv_toMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_swap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_swap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_swap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
x_8 = l_Equiv_swap___rarg(x_3, x_4, x_5);
x_9 = l_Equiv_toPEquiv___rarg(x_8);
x_10 = l_PEquiv_toMatrix___rarg(x_3, x_1, x_2, x_9, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_swap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_swap___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_swap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_swap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_swap___rarg(x_4, x_5, x_1, x_2, x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_GeneralLinearGroup_swap___elambda__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_closure((void*)(l_Matrix_GeneralLinearGroup_swap___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_4);
lean_closure_set(x_13, 2, x_5);
lean_closure_set(x_13, 3, x_9);
lean_closure_set(x_13, 4, x_12);
lean_inc(x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_GeneralLinearGroup_swap___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_GeneralLinearGroup_swap___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_GeneralLinearGroup_swap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_GeneralLinearGroup_swap___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_GeneralLinearGroup_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Permutation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_PEquiv(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Swap(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_GeneralLinearGroup_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Permutation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_PEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
