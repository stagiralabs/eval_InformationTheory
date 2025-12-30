// Lean compiler output
// Module: Mathlib.MeasureTheory.Constructions.Polish.Basic
// Imports: Init Mathlib.MeasureTheory.Constructions.BorelSpace.Metric Mathlib.Topology.MetricSpace.Perfect Mathlib.Topology.Separation.CountableSeparatingOn
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
LEAN_EXPORT lean_object* l_MeasureTheory_wrapped____x40_Mathlib_MeasureTheory_Constructions_Polish_Basic___hyg_400_;
static lean_object* _init_l_MeasureTheory_wrapped____x40_Mathlib_MeasureTheory_Constructions_Polish_Basic___hyg_400_() {
_start:
{
return lean_box(0);
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Metric(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Perfect(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Separation_CountableSeparatingOn(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Constructions_Polish_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Metric(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Perfect(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Separation_CountableSeparatingOn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MeasureTheory_wrapped____x40_Mathlib_MeasureTheory_Constructions_Polish_Basic___hyg_400_ = _init_l_MeasureTheory_wrapped____x40_Mathlib_MeasureTheory_Constructions_Polish_Basic___hyg_400_();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
