// Lean compiler output
// Module: Mathlib.RingTheory.Artinian.Module
// Imports: Init Mathlib.Data.SetLike.Fintype Mathlib.Order.Filter.EventuallyConst Mathlib.RingTheory.Ideal.Prod Mathlib.RingTheory.Ideal.Quotient.Operations Mathlib.RingTheory.Jacobson.Semiprimary Mathlib.RingTheory.Nilpotent.Lemmas Mathlib.RingTheory.Noetherian.Defs Mathlib.RingTheory.Spectrum.Maximal.Basic Mathlib.RingTheory.Spectrum.Prime.Basic
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
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum(lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___rarg___boxed), 1, 0);
x_4 = lean_alloc_closure((void*)(l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___rarg___boxed), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsArtinianRing_primeSpectrumEquivMaximalSpectrum___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_SetLike_Fintype(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_EventuallyConst(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Quotient_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Jacobson_Semiprimary(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Noetherian_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Spectrum_Maximal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Spectrum_Prime_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Artinian_Module(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_SetLike_Fintype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_EventuallyConst(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Quotient_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Jacobson_Semiprimary(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Noetherian_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Spectrum_Maximal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Spectrum_Prime_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
