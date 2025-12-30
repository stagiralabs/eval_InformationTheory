// Lean compiler output
// Module: Mathlib.Data.Matrix.Basis
// Imports: Init Mathlib.Data.Matrix.Basic
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
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixAddMonoidHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrix___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixLinearMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixLinearMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixAddMonoidHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_apply_2(x_1, x_4, x_7);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_apply_2(x_2, x_5, x_8);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_inc(x_3);
return x_3;
}
else
{
lean_inc(x_6);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrix(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_stdBasisMatrix___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrix___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Matrix_stdBasisMatrix___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_closure((void*)(l_Matrix_stdBasisMatrix___rarg___boxed), 8, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_6);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_stdBasisMatrixAddMonoidHom___rarg), 5, 0);
return x_4;
}
}
static lean_object* _init_l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_stdBasisMatrixAddMonoidHom___rarg(x_1, x_2, x_4, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixLinearMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Matrix_stdBasisMatrixLinearMap___rarg___boxed), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_stdBasisMatrixLinearMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Matrix_stdBasisMatrixLinearMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Matrix_Basis(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___closed__1 = _init_l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Matrix_stdBasisMatrixLinearMap___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
