// Lean compiler output
// Module: Mathlib.Data.Finsupp.Interval
// Imports: Init Mathlib.Data.Finset.Finsupp Mathlib.Data.Finsupp.Order Mathlib.Order.Interval.Finset.Basic
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
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_rangeSingleton___elambda__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_Finsupp_rangeSingleton___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 1);
lean_dec(x_6);
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
lean_ctor_set(x_2, 1, x_4);
return x_2;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_rangeSingleton___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_rangeSingleton___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_rangeSingleton___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_rangeSingleton___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finsupp_Interval(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
