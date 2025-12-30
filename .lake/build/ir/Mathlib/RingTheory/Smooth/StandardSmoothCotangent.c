// Lean compiler output
// Module: Mathlib.RingTheory.Smooth.StandardSmoothCotangent
// Imports: Init Mathlib.LinearAlgebra.Basis.Exact Mathlib.RingTheory.Kaehler.CotangentComplex Mathlib.RingTheory.Smooth.StandardSmooth Mathlib.RingTheory.Smooth.Kaehler Mathlib.RingTheory.Etale.Basic
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
lean_object* initialize_Mathlib_LinearAlgebra_Basis_Exact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Kaehler_CotangentComplex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Smooth_StandardSmooth(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Smooth_Kaehler(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Etale_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Smooth_StandardSmoothCotangent(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_Exact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Kaehler_CotangentComplex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Smooth_StandardSmooth(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Smooth_Kaehler(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Etale_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
