// Lean compiler output
// Module: Mathlib.NumberTheory.LSeries.PrimesInAP
// Imports: Init Mathlib.NumberTheory.DirichletCharacter.Orthogonality Mathlib.NumberTheory.LSeries.Linearity Mathlib.NumberTheory.LSeries.Nonvanishing Mathlib.RingTheory.RootsOfUnity.AlgebraicallyClosed
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
lean_object* initialize_Mathlib_NumberTheory_DirichletCharacter_Orthogonality(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LSeries_Linearity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LSeries_Nonvanishing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_RootsOfUnity_AlgebraicallyClosed(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_LSeries_PrimesInAP(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_DirichletCharacter_Orthogonality(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LSeries_Linearity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LSeries_Nonvanishing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_RootsOfUnity_AlgebraicallyClosed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
