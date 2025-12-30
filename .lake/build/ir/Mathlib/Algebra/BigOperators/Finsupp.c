// Lean compiler output
// Module: Mathlib.Algebra.BigOperators.Finsupp
// Imports: Init Mathlib.Algebra.BigOperators.Pi Mathlib.Algebra.BigOperators.Ring.Finset Mathlib.Algebra.BigOperators.Fin Mathlib.Algebra.Group.Submonoid.BigOperators Mathlib.Data.Finsupp.Ext Mathlib.Data.Finsupp.Fin Mathlib.Data.Finsupp.Indicator
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
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_prod___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_prod___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_prod___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_sum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_prod___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_prod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_prod___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_sum___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_prod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_prod___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Finsupp_prod___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_prod___at_Finsupp_prod___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_prod___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_prod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Finsupp_prod___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Finset_prod___at_Finsupp_prod___spec__1___rarg(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finsupp_prod___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_prod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_prod(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_sum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_sum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_Finsupp_sum___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Finsupp_prod___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Finset_sum___at_Finsupp_sum___spec__1___rarg(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finsupp_sum___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_sum(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Ext(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Indicator(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_BigOperators_Finsupp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Ext(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Indicator(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
