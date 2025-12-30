// Lean compiler output
// Module: Mathlib.FieldTheory.PrimitiveElement
// Imports: Init Mathlib.Data.Fintype.Pigeonhole Mathlib.FieldTheory.IsAlgClosed.Basic Mathlib.FieldTheory.SplittingField.Construction Mathlib.RingTheory.IntegralDomain Mathlib.RingTheory.Polynomial.UniqueFactorization
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
lean_object* initialize_Mathlib_Data_Fintype_Pigeonhole(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_IsAlgClosed_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_SplittingField_Construction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_IntegralDomain(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_UniqueFactorization(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_PrimitiveElement(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pigeonhole(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_IsAlgClosed_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_SplittingField_Construction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_IntegralDomain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_UniqueFactorization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
