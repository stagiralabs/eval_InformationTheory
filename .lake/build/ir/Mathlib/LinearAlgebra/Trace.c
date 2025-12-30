// Lean compiler output
// Module: Mathlib.LinearAlgebra.Trace
// Imports: Init Mathlib.LinearAlgebra.Contraction Mathlib.LinearAlgebra.Matrix.Charpoly.Coeff Mathlib.RingTheory.Finiteness.Prod Mathlib.RingTheory.Finiteness.TensorProduct Mathlib.RingTheory.TensorProduct.Free
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
lean_object* initialize_Mathlib_LinearAlgebra_Contraction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Coeff(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_TensorProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Free(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Trace(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Contraction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Coeff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_TensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_Free(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
