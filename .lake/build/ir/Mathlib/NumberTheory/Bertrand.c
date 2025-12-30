// Lean compiler output
// Module: Mathlib.NumberTheory.Bertrand
// Imports: Init Mathlib.Data.Nat.Choose.Factorization Mathlib.NumberTheory.Primorial Mathlib.Analysis.Convex.SpecificFunctions.Basic Mathlib.Analysis.Convex.SpecificFunctions.Deriv Mathlib.Tactic.NormNum.Prime
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
lean_object* initialize_Mathlib_Data_Nat_Choose_Factorization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Primorial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Convex_SpecificFunctions_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Convex_SpecificFunctions_Deriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum_Prime(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Bertrand(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Factorization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Primorial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Convex_SpecificFunctions_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Convex_SpecificFunctions_Deriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum_Prime(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
