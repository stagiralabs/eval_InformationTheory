// Lean compiler output
// Module: Mathlib.Data.QPF.Multivariate.Constructions.Quot
// Imports: Init Mathlib.Data.QPF.Multivariate.Basic
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
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_map___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_map(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_3, lean_box(0), x_5);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvQPF_quotientQPF___elambda__1___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_6, lean_box(0), x_5);
x_8 = lean_apply_2(x_3, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvQPF_quotientQPF___elambda__2___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_MvQPF_quotientQPF___elambda__2___rarg), 5, 3);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, lean_box(0));
lean_closure_set(x_11, 2, x_6);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_MvQPF_quotientQPF___elambda__1___rarg), 5, 3);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_7);
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_3, 3);
lean_dec(x_14);
x_15 = lean_ctor_get(x_3, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_3, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_3, 0);
lean_dec(x_17);
lean_ctor_set(x_3, 3, x_12);
lean_ctor_set(x_3, 2, x_11);
lean_ctor_set(x_3, 0, x_5);
return x_3;
}
else
{
lean_object* x_18; 
lean_dec(x_3);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_10);
lean_ctor_set(x_18, 2, x_11);
lean_ctor_set(x_18, 3, x_12);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvQPF_quotientQPF___elambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvQPF_quotientQPF___elambda__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvQPF_quotientQPF___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MvQPF_quotientQPF(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MvQPF_Quot1_inhabited___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MvQPF_Quot1_inhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_inhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MvQPF_Quot1_inhabited(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_4(x_1, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_map(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Quot1_map___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Quot1_map(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_4(x_1, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MvQPF_Quot1_mvFunctor___elambda__1___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MvQPF_Quot1_mvFunctor___elambda__1___rarg), 6, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvQPF_Quot1_mvFunctor___elambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvQPF_Quot1_mvFunctor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MvQPF_Quot1_mvFunctor(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_QPF_Multivariate_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_QPF_Multivariate_Constructions_Quot(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
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
