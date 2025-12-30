// Lean compiler output
// Module: Mathlib.RingTheory.Flat.Basic
// Imports: Init Mathlib.Algebra.Colimit.TensorProduct Mathlib.Algebra.DirectSum.Finsupp Mathlib.Algebra.DirectSum.Module Mathlib.Algebra.Exact Mathlib.Algebra.Module.CharacterModule Mathlib.Algebra.Module.Injective Mathlib.Algebra.Module.Projective Mathlib.LinearAlgebra.DirectSum.TensorProduct Mathlib.RingTheory.Finiteness.Cardinality Mathlib.LinearAlgebra.FreeModule.Basic Mathlib.LinearAlgebra.TensorProduct.RightExactness Mathlib.RingTheory.Finiteness.TensorProduct
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
lean_object* initialize_Mathlib_Algebra_Colimit_TensorProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_DirectSum_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_DirectSum_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Exact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_CharacterModule(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Injective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Projective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_DirectSum_TensorProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Cardinality(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_TensorProduct_RightExactness(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_TensorProduct(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Flat_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Colimit_TensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_DirectSum_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_DirectSum_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Exact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_CharacterModule(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Injective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Projective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_DirectSum_TensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Cardinality(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_TensorProduct_RightExactness(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_TensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
