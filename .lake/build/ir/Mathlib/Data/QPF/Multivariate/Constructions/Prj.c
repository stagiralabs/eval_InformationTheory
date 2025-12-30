// Lean compiler output
// Module: Mathlib.Data.QPF.Multivariate.Constructions.Prj
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
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_abs___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_abs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_map___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_abs(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_map(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvfunctor___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvfunctor(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvqpf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_P___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvfunctor___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_P(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Prj_inhabited___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Prj_inhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_inhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Prj_inhabited(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_4, x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_map(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MvQPF_Prj_map___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_map___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Prj_map(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvfunctor___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MvQPF_Prj_map___rarg), 5, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvfunctor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MvQPF_Prj_mvfunctor___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvfunctor___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Prj_mvfunctor(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_P(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_P___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvQPF_Prj_P(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_abs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_2(x_4, x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_abs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MvQPF_Prj_abs___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_abs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Prj_abs(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Prj_repr___elambda__1___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_MvQPF_Prj_repr___elambda__1___rarg___boxed), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Prj_repr___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Prj_repr___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_repr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MvQPF_Prj_repr(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Prj_mvqpf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_MvQPF_Prj_map___rarg), 5, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_box(0);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_MvQPF_Prj_abs___rarg), 3, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_MvQPF_Prj_repr___boxed), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set(x_7, 3, x_6);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Functor_Multivariate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_QPF_Multivariate_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_QPF_Multivariate_Constructions_Prj(uint8_t builtin, lean_object* w) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
