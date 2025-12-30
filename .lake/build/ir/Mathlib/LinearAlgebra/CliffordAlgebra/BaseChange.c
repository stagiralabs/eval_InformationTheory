// Lean compiler output
// Module: Mathlib.LinearAlgebra.CliffordAlgebra.BaseChange
// Imports: Init Mathlib.LinearAlgebra.QuadraticForm.TensorProduct Mathlib.LinearAlgebra.CliffordAlgebra.Conjugation Mathlib.LinearAlgebra.TensorProduct.Opposite Mathlib.RingTheory.TensorProduct.Basic
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
lean_object* initialize_Mathlib_LinearAlgebra_QuadraticForm_TensorProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_CliffordAlgebra_Conjugation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_TensorProduct_Opposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_CliffordAlgebra_BaseChange(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_QuadraticForm_TensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_CliffordAlgebra_Conjugation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_TensorProduct_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
