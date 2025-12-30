// Lean compiler output
// Module: Mathlib.RingTheory.Ideal.Norm.RelNorm
// Imports: Init Mathlib.LinearAlgebra.FreeModule.PID Mathlib.RingTheory.DedekindDomain.PID Mathlib.RingTheory.Localization.NormTrace Mathlib.RingTheory.IntegralClosure.IntegralRestrict
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
LEAN_EXPORT lean_object* l_Ideal_spanNorm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_spanNorm___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_relNorm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_relNorm(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_spanNorm(lean_object*);
lean_object* l_Submodule_span___at_Ideal_span___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_spanNorm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_Submodule_span___at_Ideal_span___spec__1___rarg(x_13, lean_box(0));
return x_14;
}
}
LEAN_EXPORT lean_object* l_Ideal_spanNorm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_spanNorm___rarg___boxed), 12, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_spanNorm___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Ideal_spanNorm___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Ideal_relNorm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_Ideal_spanNorm___rarg___boxed), 12, 11);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, lean_box(0));
lean_closure_set(x_14, 2, lean_box(0));
lean_closure_set(x_14, 3, x_4);
lean_closure_set(x_14, 4, lean_box(0));
lean_closure_set(x_14, 5, lean_box(0));
lean_closure_set(x_14, 6, lean_box(0));
lean_closure_set(x_14, 7, x_8);
lean_closure_set(x_14, 8, lean_box(0));
lean_closure_set(x_14, 9, lean_box(0));
lean_closure_set(x_14, 10, lean_box(0));
return x_14;
}
}
LEAN_EXPORT lean_object* l_Ideal_relNorm(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_relNorm___rarg), 13, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_PID(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_PID(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_NormTrace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_IntegralClosure_IntegralRestrict(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Ideal_Norm_RelNorm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_PID(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_PID(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_NormTrace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_IntegralClosure_IntegralRestrict(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
