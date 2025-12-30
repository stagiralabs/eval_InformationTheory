// Lean compiler output
// Module: Mathlib.Testing.Plausible.Testable
// Imports: Init Plausible.Testable Mathlib.Logic.Basic
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
LEAN_EXPORT lean_object* l_Plausible_Fact_printableProp(lean_object*);
LEAN_EXPORT lean_object* l_Plausible_Testable_factTestable___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Plausible_Testable_factTestable(lean_object*);
LEAN_EXPORT lean_object* l_Plausible_Fact_printableProp___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Plausible_Testable_factTestable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Plausible_TestResult_iff___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Plausible_Fact_printableProp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Plausible_Testable_factTestable___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_box(x_3);
x_7 = lean_apply_4(x_1, x_2, x_6, x_4, x_5);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Plausible_TestResult_iff___rarg(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = l_Plausible_TestResult_iff___rarg(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Plausible_Testable_factTestable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Plausible_Testable_factTestable___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Plausible_Testable_factTestable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Plausible_Testable_factTestable___rarg(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Plausible_Fact_printableProp___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Plausible_Fact_printableProp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Plausible_Fact_printableProp___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Plausible_Fact_printableProp___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Plausible_Fact_printableProp___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Plausible_Testable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Testing_Plausible_Testable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Plausible_Testable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
