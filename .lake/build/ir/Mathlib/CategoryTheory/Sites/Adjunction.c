// Lean compiler output
// Module: Mathlib.CategoryTheory.Sites.Adjunction
// Imports: Init Mathlib.CategoryTheory.Adjunction.Restrict Mathlib.CategoryTheory.Adjunction.Whiskering Mathlib.CategoryTheory.Sites.PreservesSheafification
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafForget___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafForget___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_whiskerRight___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafForget(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_8);
lean_inc(x_3);
x_9 = lean_apply_1(x_8, x_3);
lean_inc(x_4);
x_10 = lean_apply_1(x_8, x_4);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_apply_3(x_11, x_3, x_4, x_5);
x_13 = lean_apply_4(x_7, x_9, x_10, x_12, x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___lambda__1), 6, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, lean_box(0));
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___lambda__1), 6, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, lean_box(0));
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___lambda__1), 6, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, lean_box(0));
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___lambda__1), 6, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, lean_box(0));
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___lambda__1), 6, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, lean_box(0));
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_whiskerRight___elambda__1___rarg), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg(x_1, lean_box(0), x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_whiskerRight___elambda__1___rarg), 5, 4);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_6);
lean_closure_set(x_7, 3, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_5);
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafForget___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg(x_1, lean_box(0), x_4, x_2, x_5, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafForget(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_sheafForget___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_comp___at_CategoryTheory_sheafForget___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_whiskerRight___at_CategoryTheory_sheafForget___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_sheafCompose___at_CategoryTheory_sheafForget___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_sheafForget___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_sheafForget___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Restrict(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Whiskering(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_PreservesSheafification(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Sites_Adjunction(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Restrict(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Whiskering(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_PreservesSheafification(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
