// Lean compiler output
// Module: Mathlib.Data.Matrix.DualNumber
// Imports: Init Mathlib.Algebra.DualNumber Mathlib.Data.Matrix.Basic
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
static lean_object* l_Matrix_dualNumberEquiv___closed__2;
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__4(lean_object*, lean_object*, lean_object*);
static lean_object* l_Matrix_dualNumberEquiv___closed__1;
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__3(lean_object*);
static lean_object* l_Matrix_dualNumberEquiv___closed__3;
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Matrix_dualNumberEquiv___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Matrix_dualNumberEquiv___lambda__2), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_5 = lean_apply_2(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_6, x_2, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
static lean_object* _init_l_Matrix_dualNumberEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Matrix_dualNumberEquiv___lambda__3), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Matrix_dualNumberEquiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Matrix_dualNumberEquiv___lambda__4), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Matrix_dualNumberEquiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Matrix_dualNumberEquiv___closed__1;
x_2 = l_Matrix_dualNumberEquiv___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_dualNumberEquiv___closed__3;
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_dualNumberEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_dualNumberEquiv(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_DualNumber(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Matrix_DualNumber(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_DualNumber(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Matrix_dualNumberEquiv___closed__1 = _init_l_Matrix_dualNumberEquiv___closed__1();
lean_mark_persistent(l_Matrix_dualNumberEquiv___closed__1);
l_Matrix_dualNumberEquiv___closed__2 = _init_l_Matrix_dualNumberEquiv___closed__2();
lean_mark_persistent(l_Matrix_dualNumberEquiv___closed__2);
l_Matrix_dualNumberEquiv___closed__3 = _init_l_Matrix_dualNumberEquiv___closed__3();
lean_mark_persistent(l_Matrix_dualNumberEquiv___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
