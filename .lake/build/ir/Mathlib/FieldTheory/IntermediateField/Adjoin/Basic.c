// Lean compiler output
// Module: Mathlib.FieldTheory.IntermediateField.Adjoin.Basic
// Imports: Init Mathlib.Algebra.Algebra.Subalgebra.Directed Mathlib.FieldTheory.IntermediateField.Adjoin.Defs Mathlib.FieldTheory.IntermediateField.Algebraic Mathlib.FieldTheory.Separable Mathlib.FieldTheory.SplittingField.IsSplittingField Mathlib.LinearAlgebra.Dimension.FreeAndStrongRankCondition Mathlib.RingTheory.Adjoin.Dimension Mathlib.RingTheory.Finiteness.TensorProduct Mathlib.RingTheory.TensorProduct.Basic Mathlib.SetTheory.Cardinal.Subfield Mathlib.LinearAlgebra.Dual
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
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Directed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_IntermediateField_Adjoin_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_IntermediateField_Algebraic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Separable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_SplittingField_IsSplittingField(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Dimension_FreeAndStrongRankCondition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Adjoin_Dimension(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_TensorProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Cardinal_Subfield(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Dual(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_IntermediateField_Adjoin_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_Directed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_IntermediateField_Adjoin_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_IntermediateField_Algebraic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Separable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_SplittingField_IsSplittingField(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Dimension_FreeAndStrongRankCondition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Adjoin_Dimension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_TensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Cardinal_Subfield(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Dual(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
