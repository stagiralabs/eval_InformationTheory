// Lean compiler output
// Module: Mathlib.Control.Traversable.Equiv
// Imports: Init Mathlib.Control.Traversable.Lemmas Mathlib.Logic.Equiv.Defs
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
LEAN_EXPORT lean_object* l_Equiv_map___at_Equiv_functor___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traversable___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traversable___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_map___at_Equiv_functor___elambda__1___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_functor___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__2(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traversable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_functor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traversable___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traverse___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_apply_1(x_1, lean_box(0));
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_7, x_6);
x_10 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_5, x_9);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_apply_1(x_11, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Equiv_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_map___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_map___at_Equiv_functor___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_apply_1(x_1, lean_box(0));
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_7);
x_9 = l_Equiv_symm___elambda__2___rarg(x_7, x_6);
x_10 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_5, x_9);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_apply_1(x_11, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Equiv_map___at_Equiv_functor___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_map___at_Equiv_functor___elambda__1___spec__1___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = l_Equiv_map___at_Equiv_functor___elambda__1___spec__1___rarg(x_1, x_2, lean_box(0), lean_box(0), x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_functor___elambda__1___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Equiv_map___rarg(x_1, x_2, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_functor___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_functor___elambda__2___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_functor___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_functor___elambda__2___rarg), 6, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_functor___elambda__1___rarg), 6, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_functor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_functor___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_traverse___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Equiv_traverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_1, lean_box(0));
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_Equiv_traverse___rarg___lambda__1), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Equiv_symm___elambda__2___rarg(x_11, x_8);
x_15 = lean_apply_6(x_13, lean_box(0), x_4, lean_box(0), lean_box(0), x_7, x_14);
x_16 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_12, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Equiv_traverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_traverse___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_traversable___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Equiv_traverse___rarg(x_1, x_2, lean_box(0), x_4, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_traversable___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_traversable___elambda__1___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_traversable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Equiv_functor___rarg(x_1, x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_traversable___elambda__1___rarg), 8, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_traversable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_traversable___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Traversable_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_Traversable_Equiv(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Traversable_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
