// Lean compiler output
// Module: Mathlib.Dynamics.Newton
// Imports: Init Mathlib.Algebra.Polynomial.AlgebraMap Mathlib.Algebra.Polynomial.Identities Mathlib.RingTheory.Nilpotent.Lemmas Mathlib.RingTheory.Polynomial.Nilpotent Mathlib.RingTheory.Polynomial.Tower
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_AlgebraMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Identities(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Nilpotent(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Tower(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Dynamics_Newton(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_AlgebraMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Identities(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Nilpotent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
