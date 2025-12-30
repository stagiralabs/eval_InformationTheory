// Lean compiler output
// Module: Mathlib.RingTheory.Polynomial.Bernstein
// Imports: Init Mathlib.Algebra.MvPolynomial.PDeriv Mathlib.Algebra.Polynomial.AlgebraMap Mathlib.Algebra.Polynomial.Derivative Mathlib.Algebra.Polynomial.Eval.SMul Mathlib.Data.Nat.Choose.Sum Mathlib.LinearAlgebra.LinearIndependent.Lemmas Mathlib.RingTheory.Polynomial.Pochhammer
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
lean_object* initialize_Mathlib_Algebra_MvPolynomial_PDeriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_AlgebraMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Derivative(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Eval_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_LinearIndependent_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Pochhammer(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Polynomial_Bernstein(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_PDeriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_AlgebraMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Derivative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Eval_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_LinearIndependent_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Pochhammer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
