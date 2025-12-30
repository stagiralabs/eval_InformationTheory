// Lean compiler output
// Module: Mathlib.Analysis.Complex.CauchyIntegral
// Imports: Init Mathlib.Analysis.Analytic.Uniqueness Mathlib.Analysis.Calculus.DiffContOnCl Mathlib.Analysis.Calculus.DSlope Mathlib.Analysis.Calculus.FDeriv.Analytic Mathlib.Analysis.Complex.ReImTopology Mathlib.Data.Real.Cardinality Mathlib.MeasureTheory.Integral.CircleIntegral Mathlib.MeasureTheory.Integral.DivergenceTheorem Mathlib.MeasureTheory.Measure.Lebesgue.Complex
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
lean_object* initialize_Mathlib_Analysis_Analytic_Uniqueness(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_DiffContOnCl(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_DSlope(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Analytic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Complex_ReImTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Real_Cardinality(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_CircleIntegral(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_DivergenceTheorem(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Lebesgue_Complex(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Complex_CauchyIntegral(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_Uniqueness(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_DiffContOnCl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_DSlope(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Analytic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Complex_ReImTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Real_Cardinality(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_CircleIntegral(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_DivergenceTheorem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Lebesgue_Complex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
