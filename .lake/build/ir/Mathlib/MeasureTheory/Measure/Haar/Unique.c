// Lean compiler output
// Module: Mathlib.MeasureTheory.Measure.Haar.Unique
// Imports: Init Mathlib.MeasureTheory.Function.LocallyIntegrable Mathlib.MeasureTheory.Group.Integral Mathlib.MeasureTheory.Integral.Prod Mathlib.MeasureTheory.Integral.SetIntegral Mathlib.MeasureTheory.Measure.EverywherePos Mathlib.MeasureTheory.Measure.Haar.Basic Mathlib.Topology.Metrizable.Urysohn Mathlib.Topology.UrysohnsLemma Mathlib.Topology.ContinuousMap.Ordered
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
lean_object* initialize_Mathlib_MeasureTheory_Function_LocallyIntegrable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Group_Integral(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_SetIntegral(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_EverywherePos(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Haar_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Metrizable_Urysohn(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UrysohnsLemma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Ordered(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Measure_Haar_Unique(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_LocallyIntegrable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Group_Integral(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_SetIntegral(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_EverywherePos(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Haar_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Metrizable_Urysohn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UrysohnsLemma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Ordered(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
