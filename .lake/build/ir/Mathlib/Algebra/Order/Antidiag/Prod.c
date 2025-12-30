// Lean compiler output
// Module: Mathlib.Algebra.Order.Antidiag.Prod
// Imports: Init Mathlib.Algebra.Order.Monoid.Canonical.Defs Mathlib.Algebra.Order.Sub.Defs Mathlib.Data.Finset.Basic Mathlib.Order.Interval.Finset.Defs
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
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finset_antidiagonalOfLocallyFinite(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_antidiagonalOfLocallyFinite___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_antidiagonalOfLocallyFinite___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Iic___at_Finset_antidiagonalOfLocallyFinite___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Icc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2___rarg(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Iic___at_Finset_antidiagonalOfLocallyFinite___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_apply_2(x_4, x_5, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sigmaAntidiagonalEquivProd___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sigmaAntidiagonalEquivProd___elambda__2___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Finset_sigmaAntidiagonalEquivProd___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Finset_sigmaAntidiagonalEquivProd___elambda__2___rarg___boxed), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sigmaAntidiagonalEquivProd___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_sigmaAntidiagonalEquivProd___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_sigmaAntidiagonalEquivProd___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sigmaAntidiagonalEquivProd___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_sigmaAntidiagonalEquivProd___elambda__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_Iic___at_Finset_antidiagonalOfLocallyFinite___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Finset_Icc___rarg(x_3, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_Iic___at_Finset_antidiagonalOfLocallyFinite___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_Iic___at_Finset_antidiagonalOfLocallyFinite___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = l_List_reverse___rarg(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
x_14 = lean_apply_2(x_11, x_12, x_13);
lean_inc(x_2);
lean_inc(x_4);
x_15 = lean_apply_2(x_2, x_14, x_4);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_free_object(x_5);
lean_dec(x_9);
x_5 = x_10;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_6);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
x_21 = lean_ctor_get(x_3, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
x_24 = lean_apply_2(x_21, x_22, x_23);
lean_inc(x_2);
lean_inc(x_4);
x_25 = lean_apply_2(x_2, x_24, x_4);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_dec(x_19);
x_5 = x_20;
goto _start;
}
else
{
lean_object* x_28; 
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_6);
x_5 = x_20;
x_6 = x_28;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_antidiagonalOfLocallyFinite___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Finset_Iic___at_Finset_antidiagonalOfLocallyFinite___spec__1___rarg(x_1, lean_box(0), x_2, x_5);
lean_inc(x_6);
x_7 = l_Multiset_product___rarg(x_6, x_6);
x_8 = l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg(x_1, x_3, x_4, x_5, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_antidiagonalOfLocallyFinite___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Finset_antidiagonalOfLocallyFinite___rarg___lambda__1), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
lean_closure_set(x_6, 3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_antidiagonalOfLocallyFinite(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_antidiagonalOfLocallyFinite___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_filterTR_loop___at_Finset_antidiagonalOfLocallyFinite___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_filter___at_Finset_antidiagonalOfLocallyFinite___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Antidiag_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
