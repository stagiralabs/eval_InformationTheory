// Lean compiler output
// Module: Mathlib.Algebra.Category.ModuleCat.Adjunctions
// Imports: Init Mathlib.Algebra.Category.ModuleCat.Monoidal.Basic Mathlib.CategoryTheory.Monoidal.Types.Basic Mathlib.LinearAlgebra.DirectSum.Finsupp Mathlib.CategoryTheory.Linear.LinearFunctor
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
LEAN_EXPORT lean_object* l_Finset_sum___at_CategoryTheory_Free_lift___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_CategoryTheory_Free_lift___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_of___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_CategoryTheory_Free_lift___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_of(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Free_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_of(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Free_of___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Free_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_AddMonoid_toAddZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_7);
x_8 = lean_apply_1(x_7, x_3);
x_9 = lean_apply_1(x_7, x_4);
x_10 = lean_apply_2(x_1, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_List_foldrTR___rarg(x_12, x_13, x_6);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___boxed), 6, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_CategoryTheory_Free_lift___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Multiset_map___rarg(x_10, x_9);
x_12 = l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg(x_4, x_5, x_6, x_7, x_8, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_CategoryTheory_Free_lift___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at_CategoryTheory_Free_lift___spec__2___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg___lambda__1), 3, 2);
lean_closure_set(x_12, 0, x_9);
lean_closure_set(x_12, 1, x_10);
x_13 = l_Finset_sum___at_CategoryTheory_Free_lift___spec__2___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6, x_7, x_8, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_3(x_9, x_2, x_3, x_7);
x_11 = lean_apply_4(x_4, x_5, x_6, x_8, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_inc(x_10);
lean_inc(x_7);
x_11 = lean_apply_1(x_10, x_7);
lean_inc(x_8);
x_12 = lean_apply_1(x_10, x_8);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_CategoryTheory_Free_lift___rarg___lambda__2), 8, 6);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_7);
lean_closure_set(x_13, 2, x_8);
lean_closure_set(x_13, 3, x_2);
lean_closure_set(x_13, 4, x_11);
lean_closure_set(x_13, 5, x_12);
lean_inc(x_1);
x_14 = l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg(x_4, lean_box(0), x_5, x_6, x_1, x_7, x_8, x_1, x_9, x_13);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Free_lift___rarg___lambda__1), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_CategoryTheory_Free_lift___rarg___lambda__3___boxed), 9, 6);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_1);
lean_closure_set(x_10, 3, x_3);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Free_lift___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_sum___at_CategoryTheory_Free_lift___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_CategoryTheory_Free_lift___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Finset_sum___at_CategoryTheory_Free_lift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_sum___at_CategoryTheory_Free_lift___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Free_lift___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_CategoryTheory_Free_lift___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Monoidal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_DirectSum_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Linear_LinearFunctor(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Adjunctions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Monoidal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_DirectSum_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Linear_LinearFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
