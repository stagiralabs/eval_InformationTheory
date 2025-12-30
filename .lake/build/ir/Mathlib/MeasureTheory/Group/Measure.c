// Lean compiler output
// Module: Mathlib.MeasureTheory.Group.Measure
// Imports: Init Mathlib.Algebra.Group.Pointwise.Set.Card Mathlib.MeasureTheory.Group.Action Mathlib.MeasureTheory.Measure.Prod Mathlib.Topology.Algebra.Module.Equiv Mathlib.Topology.ContinuousMap.CocompactMap Mathlib.Topology.Algebra.ContinuousMonoidHom
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
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Set_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Group_Action(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Module_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_CocompactMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_ContinuousMonoidHom(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Group_Measure(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Set_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Group_Action(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Module_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_CocompactMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_ContinuousMonoidHom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
