// Lean compiler output
// Module: Mathlib.RingTheory.Localization.Ideal
// Imports: Init Mathlib.GroupTheory.MonoidLocalization.Away Mathlib.RingTheory.Ideal.Quotient.Operations Mathlib.RingTheory.Localization.Defs Mathlib.Algebra.Algebra.Tower
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
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderEmbedding(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderEmbedding___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_orderEmbedding___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_span___at_Ideal_span___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_RingTheory_Localization_Ideal_0__IsLocalization_map__ideal(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderEmbedding___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1___rarg(x_1, lean_box(0), x_4, x_8, lean_box(0), x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderEmbedding(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsLocalization_orderEmbedding___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_comap___at_IsLocalization_orderEmbedding___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderEmbedding___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IsLocalization_orderEmbedding___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1___rarg(x_2, lean_box(0), x_3, x_5, lean_box(0), x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_span___at_Ideal_span___spec__1___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_IsLocalization_orderIsoOfPrime___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_4);
x_8 = lean_alloc_closure((void*)(l_IsLocalization_orderIsoOfPrime___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsLocalization_orderIsoOfPrime___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Ideal_comap___at_IsLocalization_orderIsoOfPrime___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsLocalization_orderIsoOfPrime___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsLocalization_orderIsoOfPrime___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_orderIsoOfPrime___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IsLocalization_orderIsoOfPrime___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_MonoidLocalization_Away(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Quotient_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Tower(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Localization_Ideal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_MonoidLocalization_Away(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Quotient_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
