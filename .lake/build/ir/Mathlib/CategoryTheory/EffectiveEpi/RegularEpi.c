// Lean compiler output
// Module: Mathlib.CategoryTheory.EffectiveEpi.RegularEpi
// Imports: Init Mathlib.CategoryTheory.Limits.Shapes.RegularMono Mathlib.CategoryTheory.EffectiveEpi.Basic
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
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_desc___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 2);
lean_inc(x_11);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_1);
x_12 = l_CategoryTheory_Limits_Cofork_of_u03c0___rarg(x_1, x_9, x_3, x_10, x_11, x_2, x_4, lean_box(0));
x_13 = lean_ctor_get(x_5, 3);
lean_inc(x_13);
lean_dec(x_5);
x_14 = l_CategoryTheory_Limits_Cofork_IsColimit_desc___rarg(x_1, x_9, x_3, x_10, x_11, x_12, x_13, x_6, x_7, lean_box(0));
lean_dec(x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_effectiveEpiStructOfRegularEpi___elambda__1___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_effectiveEpiStructOfRegularEpi___elambda__1___rarg), 8, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_effectiveEpiStructOfRegularEpi(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_effectiveEpiStructOfRegularEpi___rarg), 5, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_RegularMono(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_EffectiveEpi_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_EffectiveEpi_RegularEpi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_RegularMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_EffectiveEpi_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
