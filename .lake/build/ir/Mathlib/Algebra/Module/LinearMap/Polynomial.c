// Lean compiler output
// Module: Mathlib.Algebra.Module.LinearMap.Polynomial
// Imports: Init Mathlib.Algebra.MvPolynomial.Monad Mathlib.LinearAlgebra.Charpoly.ToMatrix Mathlib.LinearAlgebra.FreeModule.StrongRankCondition Mathlib.LinearAlgebra.Matrix.Charpoly.Univ Mathlib.RingTheory.Finiteness.TensorProduct Mathlib.RingTheory.TensorProduct.Free
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
lean_object* initialize_Mathlib_Algebra_MvPolynomial_Monad(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Charpoly_ToMatrix(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_StrongRankCondition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Univ(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_TensorProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Free(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Module_LinearMap_Polynomial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_Monad(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Charpoly_ToMatrix(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_StrongRankCondition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Matrix_Charpoly_Univ(builtin, lean_io_mk_world());
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
