// Lean compiler output
// Module: Mathlib.CategoryTheory.Shift.Induced
// Imports: Init Mathlib.CategoryTheory.Shift.CommShift
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_shiftFunctor___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_9);
x_10 = lean_apply_1(x_7, x_9);
lean_inc(x_3);
x_11 = l_CategoryTheory_Functor_comp___rarg(x_1, lean_box(0), x_2, lean_box(0), x_2, x_3, x_10);
lean_inc(x_9);
x_12 = l_CategoryTheory_shiftFunctor___rarg(x_6, x_9);
x_13 = l_CategoryTheory_Functor_comp___rarg(x_1, lean_box(0), x_1, lean_box(0), x_2, x_12, x_3);
x_14 = lean_apply_1(x_8, x_9);
x_15 = l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1___rarg(x_1, x_2, x_11, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
return x_15;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, lean_box(0));
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, x_6);
lean_closure_set(x_11, 6, x_7);
lean_closure_set(x_11, 7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_CommShift_ofInduced___rarg), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_CategoryTheory_Functor_CommShift_ofInduced___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Shift_CommShift(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Shift_Induced(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Shift_CommShift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
