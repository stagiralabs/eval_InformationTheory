// Lean compiler output
// Module: Mathlib.FieldTheory.Differential.Liouville
// Imports: Init Mathlib.Algebra.Algebra.Field Mathlib.Algebra.BigOperators.Field Mathlib.FieldTheory.Differential.Basic Mathlib.FieldTheory.Galois.Basic Mathlib.FieldTheory.IsAlgClosed.AlgebraicClosure
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
lean_object* initialize_Mathlib_Algebra_Algebra_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Differential_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Galois_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_IsAlgClosed_AlgebraicClosure(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_Differential_Liouville(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Differential_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Galois_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_IsAlgClosed_AlgebraicClosure(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
