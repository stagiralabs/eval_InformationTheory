// Lean compiler output
// Module: Mathlib.Algebra.Polynomial.Derivation
// Imports: Init Mathlib.Algebra.Polynomial.AlgebraMap Mathlib.Algebra.Polynomial.Derivative Mathlib.Algebra.Polynomial.Module.AEval Mathlib.RingTheory.Adjoin.Polynomial Mathlib.RingTheory.Derivation.Basic
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
lean_object* l_Polynomial_aeval___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Derivation_compAEval___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_compAEval___spec__1(lean_object*, lean_object*);
lean_object* l_LinearEquiv_refl___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_compAEval___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Derivation_compAEval___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Derivation_compAEval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_compAEval___spec__1___boxed(lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_Derivation_compAEval___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_compAEval___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Derivation_compAEval___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Derivation_compAEval___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = l_LinearEquiv_refl___rarg(x_1, x_4, x_6);
x_12 = l_Polynomial_aeval___rarg(x_1, x_2, x_3, x_9);
x_13 = lean_apply_1(x_12, x_10);
x_14 = lean_apply_1(x_8, x_13);
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_apply_1(x_15, x_14);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Derivation_compAEval(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Derivation_compAEval___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Derivation_compAEval___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Derivation_compAEval___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Derivation_compAEval___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Derivation_compAEval___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_AlgebraMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Derivative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Module_AEval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Adjoin_Polynomial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Derivation_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Polynomial_Derivation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_AlgebraMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Derivative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Module_AEval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Adjoin_Polynomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Derivation_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_Derivation_compAEval___spec__1___closed__1 = _init_l_RingHom_id___at_Derivation_compAEval___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Derivation_compAEval___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
