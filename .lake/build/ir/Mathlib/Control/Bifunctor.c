// Lean compiler output
// Module: Mathlib.Control.Bifunctor
// Imports: Init Mathlib.Control.Functor Mathlib.Tactic.Common
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
LEAN_EXPORT lean_object* l_Function_bicompr_bifunctor___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Prod_bifunctor___closed__1;
lean_object* l_Sum_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_fst(lean_object*);
static lean_object* l_Sum_bifunctor___closed__1;
LEAN_EXPORT lean_object* l_Function_bicompl_bifunctor(lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_const___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Bifunctor_fst___rarg___closed__1;
LEAN_EXPORT lean_object* l_Function_bicompl_bifunctor___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_bifunctor;
LEAN_EXPORT lean_object* l_Bifunctor_const___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_functor(lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_functor___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_snd(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_fst___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_bicompr_bifunctor(lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_flip___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_bifunctor;
LEAN_EXPORT lean_object* l_Bifunctor_snd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_const(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_functor___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bifunctor_flip(lean_object*);
static lean_object* _init_l_Bifunctor_fst___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_fst___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Bifunctor_fst___rarg___closed__1;
x_8 = lean_apply_7(x_1, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_5, x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_fst(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bifunctor_fst___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_snd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Bifunctor_fst___rarg___closed__1;
x_8 = lean_apply_7(x_1, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_snd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bifunctor_snd___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Prod_bifunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Prod_map), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Prod_bifunctor() {
_start:
{
lean_object* x_1; 
x_1 = l_Prod_bifunctor___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_const___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_const(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Bifunctor_const___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_const___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Bifunctor_const___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_flip___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_7(x_1, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_7, x_6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_flip(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bifunctor_flip___rarg), 8, 0);
return x_2;
}
}
static lean_object* _init_l_Sum_bifunctor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sum_map), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Sum_bifunctor() {
_start:
{
lean_object* x_1; 
x_1 = l_Sum_bifunctor___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_functor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = l_Bifunctor_fst___rarg___closed__1;
x_8 = lean_apply_7(x_1, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_7, x_6, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_functor___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Bifunctor_snd___rarg), 6, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
x_4 = lean_alloc_closure((void*)(l_Bifunctor_functor___rarg___lambda__1), 5, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Bifunctor_functor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bifunctor_functor___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_bicompl_bifunctor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_apply_3(x_13, lean_box(0), lean_box(0), x_10);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_apply_3(x_15, lean_box(0), lean_box(0), x_11);
x_17 = lean_apply_7(x_1, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_14, x_16, x_12);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Function_bicompl_bifunctor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_bicompl_bifunctor___rarg), 12, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_bicompr_bifunctor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_6(x_1, lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_8, x_9);
x_13 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_12, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Function_bicompr_bifunctor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_bicompr_bifunctor___rarg), 10, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Functor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Common(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Control_Bifunctor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Bifunctor_fst___rarg___closed__1 = _init_l_Bifunctor_fst___rarg___closed__1();
lean_mark_persistent(l_Bifunctor_fst___rarg___closed__1);
l_Prod_bifunctor___closed__1 = _init_l_Prod_bifunctor___closed__1();
lean_mark_persistent(l_Prod_bifunctor___closed__1);
l_Prod_bifunctor = _init_l_Prod_bifunctor();
lean_mark_persistent(l_Prod_bifunctor);
l_Sum_bifunctor___closed__1 = _init_l_Sum_bifunctor___closed__1();
lean_mark_persistent(l_Sum_bifunctor___closed__1);
l_Sum_bifunctor = _init_l_Sum_bifunctor();
lean_mark_persistent(l_Sum_bifunctor);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
