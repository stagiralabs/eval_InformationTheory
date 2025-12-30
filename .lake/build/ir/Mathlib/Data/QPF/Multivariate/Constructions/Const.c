// Lean compiler output
// Module: Mathlib.Data.QPF.Multivariate.Constructions.Const
// Imports: Init Mathlib.Control.Functor.Multivariate Mathlib.Data.QPF.Multivariate.Basic
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
LEAN_EXPORT lean_object* l_MvQPF_Const_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_map___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_map___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_mk___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_MvQPF_Const_mvqpf___closed__1;
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_get___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_get___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited___rarg___boxed(lean_object*);
lean_object* l_MvPFunctor_const_mk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_mk___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Const_inhabited___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Const_inhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_inhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Const_inhabited(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mk___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Const_mk___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mk___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Const_mk___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Const_mk(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_get___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_get(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Const_get___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_get___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Const_get___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_get___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Const_get(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_map___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MvQPF_Const_map___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_map___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Const_map___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MvQPF_Const_map(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MvQPF_Const_MvFunctor___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Const_MvFunctor___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_MvFunctor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MvQPF_Const_MvFunctor(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPFunctor_const_mk(x_1, lean_box(0), x_3, lean_box(0));
return x_4;
}
}
static lean_object* _init_l_MvQPF_Const_mvqpf___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MvQPF_Const_mvqpf___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_MvQPF_Const_MvFunctor___boxed), 5, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
x_4 = lean_box(0);
x_5 = lean_alloc_closure((void*)(l_MvQPF_Const_mvqpf___lambda__2), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_MvQPF_Const_mvqpf___closed__1;
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Const_mvqpf___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvQPF_Const_mvqpf___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Functor_Multivariate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_QPF_Multivariate_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_QPF_Multivariate_Constructions_Const(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Functor_Multivariate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_QPF_Multivariate_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MvQPF_Const_mvqpf___closed__1 = _init_l_MvQPF_Const_mvqpf___closed__1();
lean_mark_persistent(l_MvQPF_Const_mvqpf___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
