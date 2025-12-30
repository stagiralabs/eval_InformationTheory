// Lean compiler output
// Module: Mathlib.Algebra.Order.Antidiag.Finsupp
// Imports: Init Mathlib.Algebra.Order.Antidiag.Pi Mathlib.Data.Finsupp.Basic
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
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_finsuppAntidiag___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Finset_piAntidiag___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_finsuppAntidiag___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_finsuppAntidiag___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_finsuppAntidiag___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_11 = l_List_reverse___rarg(x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_7);
lean_inc(x_13);
x_15 = lean_apply_1(x_7, x_13);
lean_inc(x_4);
lean_inc(x_8);
x_16 = lean_apply_2(x_4, x_15, x_8);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
x_18 = l_instDecidableNot___rarg(x_17);
if (x_18 == 0)
{
lean_free_object(x_9);
lean_dec(x_13);
x_9 = x_14;
goto _start;
}
else
{
lean_ctor_set(x_9, 1, x_10);
{
lean_object* _tmp_8 = x_14;
lean_object* _tmp_9 = x_9;
x_9 = _tmp_8;
x_10 = _tmp_9;
}
goto _start;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_21);
x_23 = lean_apply_1(x_7, x_21);
lean_inc(x_4);
lean_inc(x_8);
x_24 = lean_apply_2(x_4, x_23, x_8);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
x_26 = l_instDecidableNot___rarg(x_25);
if (x_26 == 0)
{
lean_dec(x_21);
x_9 = x_22;
goto _start;
}
else
{
lean_object* x_28; 
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_21);
lean_ctor_set(x_28, 1, x_10);
x_9 = x_22;
x_10 = x_28;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_finsuppAntidiag___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_finsuppAntidiag___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_finsuppAntidiag___spec__1___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_9 = l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg(x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_5);
lean_dec(x_5);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
}
static lean_object* _init_l_Finset_finsuppAntidiag___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_Finset_finsuppAntidiag___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
x_8 = l_Finset_piAntidiag___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = l_Finset_finsuppAntidiag___rarg___closed__1;
x_10 = l_Multiset_pmap___rarg(x_9, x_8, lean_box(0));
x_11 = l_Multiset_map___rarg(x_7, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_finsuppAntidiag___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_filterTR_loop___at_Finset_finsuppAntidiag___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Multiset_filter___at_Finset_finsuppAntidiag___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_finsuppAntidiag___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Finset_filter___at_Finset_finsuppAntidiag___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_finsuppAntidiag___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finset_finsuppAntidiag___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Antidiag_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Antidiag_Finsupp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Antidiag_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_finsuppAntidiag___rarg___closed__1 = _init_l_Finset_finsuppAntidiag___rarg___closed__1();
lean_mark_persistent(l_Finset_finsuppAntidiag___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
