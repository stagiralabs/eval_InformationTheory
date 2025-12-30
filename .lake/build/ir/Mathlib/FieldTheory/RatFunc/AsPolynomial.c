// Lean compiler output
// Module: Mathlib.FieldTheory.RatFunc.AsPolynomial
// Imports: Init Mathlib.FieldTheory.RatFunc.Basic Mathlib.RingTheory.EuclideanDomain Mathlib.RingTheory.DedekindDomain.AdicValuation Mathlib.RingTheory.Localization.FractionRing Mathlib.RingTheory.Polynomial.Content
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
LEAN_EXPORT lean_object* l_Ideal_span___at_Polynomial_idealX___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_Polynomial_idealX___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_Polynomial_idealX___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_idealX___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_Polynomial_idealX___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_Polynomial_idealX___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ideal_span___at_Polynomial_idealX___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_idealX(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_idealX___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_span___at_Polynomial_idealX___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_Polynomial_idealX___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Submodule_span___at_Polynomial_idealX___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_Polynomial_idealX___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_span___at_Polynomial_idealX___spec__2___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_Polynomial_idealX___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ideal_span___at_Polynomial_idealX___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_idealX___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_span___at_Polynomial_idealX___spec__2___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_idealX(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_idealX___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_span___at_Polynomial_idealX___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_span___at_Polynomial_idealX___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ideal_span___at_Polynomial_idealX___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ideal_span___at_Polynomial_idealX___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_idealX___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Polynomial_idealX___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_RatFunc_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_EuclideanDomain(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_AdicValuation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_FractionRing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Content(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_RatFunc_AsPolynomial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_RatFunc_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_EuclideanDomain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_AdicValuation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_FractionRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Content(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
