// Lean compiler output
// Module: Mathlib.CategoryTheory.Functor.Hom
// Imports: Init Mathlib.CategoryTheory.Products.Basic Mathlib.CategoryTheory.Types
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_hom(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_hom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_hom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_hom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
lean_inc(x_6);
lean_inc(x_9);
lean_inc(x_8);
x_13 = lean_apply_5(x_6, x_8, x_11, x_9, x_5, x_12);
x_14 = lean_apply_5(x_6, x_7, x_8, x_9, x_10, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_hom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_hom___rarg___lambda__1), 5, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, lean_box(0));
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_hom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_hom___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Products_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Types(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Functor_Hom(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Products_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
