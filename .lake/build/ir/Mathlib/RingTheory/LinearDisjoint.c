// Lean compiler output
// Module: Mathlib.RingTheory.LinearDisjoint
// Imports: Init Mathlib.Algebra.Algebra.Subalgebra.MulOpposite Mathlib.Algebra.Algebra.Subalgebra.Rank Mathlib.Algebra.Polynomial.Basis Mathlib.LinearAlgebra.Basis.VectorSpace Mathlib.LinearAlgebra.Dimension.FreeAndStrongRankCondition Mathlib.LinearAlgebra.LinearDisjoint Mathlib.LinearAlgebra.TensorProduct.Subalgebra Mathlib.RingTheory.Adjoin.Dimension Mathlib.RingTheory.Algebraic.Basic Mathlib.RingTheory.IntegralClosure.Algebra.Defs Mathlib.RingTheory.IntegralClosure.IsIntegral.Basic Mathlib.RingTheory.Localization.FractionRing Mathlib.RingTheory.TensorProduct.Finite Mathlib.RingTheory.TensorProduct.Nontrivial
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
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_MulOpposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Subalgebra_Rank(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Basis(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Dimension_FreeAndStrongRankCondition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_LinearDisjoint(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_TensorProduct_Subalgebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Adjoin_Dimension(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Algebraic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_IntegralClosure_Algebra_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_IntegralClosure_IsIntegral_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_FractionRing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Nontrivial(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_LinearDisjoint(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_MulOpposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Subalgebra_Rank(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Basis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Dimension_FreeAndStrongRankCondition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_LinearDisjoint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_TensorProduct_Subalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Adjoin_Dimension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Algebraic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_IntegralClosure_Algebra_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_IntegralClosure_IsIntegral_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_FractionRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_Nontrivial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
