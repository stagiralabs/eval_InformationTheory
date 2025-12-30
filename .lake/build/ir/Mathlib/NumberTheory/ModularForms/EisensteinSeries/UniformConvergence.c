// Lean compiler output
// Module: Mathlib.NumberTheory.ModularForms.EisensteinSeries.UniformConvergence
// Imports: Init Mathlib.Analysis.Complex.UpperHalfPlane.Topology Mathlib.Analysis.NormedSpace.FunctionSeries Mathlib.Analysis.PSeries Mathlib.Order.Interval.Finset.Box Mathlib.NumberTheory.ModularForms.EisensteinSeries.Defs
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
lean_object* initialize_Mathlib_Analysis_Complex_UpperHalfPlane_Topology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_NormedSpace_FunctionSeries(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_PSeries(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Box(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_ModularForms_EisensteinSeries_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_ModularForms_EisensteinSeries_UniformConvergence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Complex_UpperHalfPlane_Topology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_NormedSpace_FunctionSeries(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_PSeries(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Box(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_ModularForms_EisensteinSeries_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
