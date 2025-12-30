// Lean compiler output
// Module: Mathlib.Analysis.Calculus.Rademacher
// Imports: Init Mathlib.Analysis.Calculus.LineDeriv.Measurable Mathlib.Analysis.Normed.Module.FiniteDimension Mathlib.MeasureTheory.Measure.Lebesgue.EqHaar Mathlib.Analysis.BoundedVariation Mathlib.MeasureTheory.Group.Integral Mathlib.Analysis.Distribution.AEEqOfIntegralContDiff Mathlib.MeasureTheory.Measure.Haar.Disintegration
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
lean_object* initialize_Mathlib_Analysis_Calculus_LineDeriv_Measurable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Module_FiniteDimension(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Lebesgue_EqHaar(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_BoundedVariation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Group_Integral(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Distribution_AEEqOfIntegralContDiff(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Haar_Disintegration(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Calculus_Rademacher(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_LineDeriv_Measurable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_FiniteDimension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Lebesgue_EqHaar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_BoundedVariation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Group_Integral(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Distribution_AEEqOfIntegralContDiff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Haar_Disintegration(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
