// Lean compiler output
// Module: Mathlib.RingTheory.Ideal.Norm.AbsNorm
// Imports: Init Mathlib.Algebra.CharP.Quotient Mathlib.Data.Int.AbsoluteValue Mathlib.Data.Int.Associated Mathlib.LinearAlgebra.FreeModule.Determinant Mathlib.LinearAlgebra.FreeModule.IdealQuotient Mathlib.RingTheory.DedekindDomain.Dvr Mathlib.RingTheory.DedekindDomain.Ideal Mathlib.RingTheory.Norm.Basic Mathlib.RingTheory.UniqueFactorizationDomain.Multiplicative
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
lean_object* initialize_Mathlib_Algebra_CharP_Quotient(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_AbsoluteValue(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Associated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_Determinant(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_IdealQuotient(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_Dvr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_DedekindDomain_Ideal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Norm_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_UniqueFactorizationDomain_Multiplicative(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Ideal_Norm_AbsNorm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_Quotient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_AbsoluteValue(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Associated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_Determinant(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_IdealQuotient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_Dvr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_DedekindDomain_Ideal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Norm_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_UniqueFactorizationDomain_Multiplicative(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
