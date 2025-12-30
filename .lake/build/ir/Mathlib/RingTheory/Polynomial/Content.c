// Lean compiler output
// Module: Mathlib.RingTheory.Polynomial.Content
// Imports: Init Mathlib.Algebra.GCDMonoid.Finset Mathlib.Algebra.Polynomial.CancelLeads Mathlib.Algebra.Polynomial.EraseLead Mathlib.Algebra.Polynomial.FieldDivision
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
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_gcd___at_Polynomial_content___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Polynomial_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_content___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_gcd___at_Polynomial_content___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_content(lean_object*);
lean_object* l_CommSemiring_toCommMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_content___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_gcd___at_Polynomial_content___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_gcd___at_Polynomial_content___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_CommSemiring_toCommMonoidWithZero___rarg(x_6);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Finset_fold___rarg(x_8, lean_box(0), lean_box(0), x_10, x_5, x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finset_gcd___at_Polynomial_content___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_gcd___at_Polynomial_content___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_content___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Polynomial_coeff___rarg), 2, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = l_Finset_gcd___at_Polynomial_content___spec__1___rarg(x_1, lean_box(0), x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Polynomial_content(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_content___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_gcd___at_Polynomial_content___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_gcd___at_Polynomial_content___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_content___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Polynomial_content___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GCDMonoid_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_CancelLeads(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_EraseLead(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_FieldDivision(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Polynomial_Content(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GCDMonoid_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_CancelLeads(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_EraseLead(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_FieldDivision(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
