// Lean compiler output
// Module: Mathlib.NumberTheory.LSeries.SumCoeff
// Imports: Init Mathlib.Analysis.Asymptotics.SpecificAsymptotics Mathlib.Analysis.InnerProductSpace.Calculus Mathlib.Analysis.SpecialFunctions.ImproperIntegrals Mathlib.NumberTheory.AbelSummation Mathlib.NumberTheory.LSeries.Basic
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
lean_object* initialize_Mathlib_Analysis_Asymptotics_SpecificAsymptotics(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_InnerProductSpace_Calculus(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_ImproperIntegrals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_AbelSummation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LSeries_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_LSeries_SumCoeff(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Asymptotics_SpecificAsymptotics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_InnerProductSpace_Calculus(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_ImproperIntegrals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_AbelSummation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LSeries_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
