// Lean compiler output
// Module: Mathlib.Order.Disjointed
// Imports: Init Mathlib.Order.PartialSups Mathlib.Order.Interval.Finset.Fin
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
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_disjointed(lean_object*, lean_object*);
lean_object* l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_disjointed___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Iio___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_disjointed___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_disjointed___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_disjointed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_disjointed___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_disjointed___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_disjointed___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_4 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_Finset_sup___at_disjointed___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = l_Finset_fold___rarg(x_8, lean_box(0), lean_box(0), x_7, x_3, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_disjointed___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sup___at_disjointed___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_disjointed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_5);
x_7 = lean_apply_1(x_4, x_5);
x_8 = l_Finset_Iio___rarg(x_3, x_5);
x_9 = l_Finset_sup___at_disjointed___spec__1___rarg(x_1, x_8, x_4);
x_10 = lean_apply_2(x_6, x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_disjointed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_disjointed___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_disjointed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_disjointed___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_PartialSups(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Fin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Disjointed(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_PartialSups(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
