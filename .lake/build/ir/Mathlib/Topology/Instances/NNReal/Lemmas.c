// Lean compiler output
// Module: Mathlib.Topology.Instances.NNReal.Lemmas
// Imports: Init Mathlib.Data.NNReal.Basic Mathlib.Data.NNReal.Star Mathlib.Topology.Algebra.InfiniteSum.Order Mathlib.Topology.Algebra.InfiniteSum.Ring Mathlib.Topology.ContinuousMap.Basic Mathlib.Topology.Instances.NNReal.Defs Mathlib.Topology.MetricSpace.Isometry
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
lean_object* initialize_Mathlib_Data_NNReal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNReal_Star(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_InfiniteSum_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_InfiniteSum_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_NNReal_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Isometry(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_NNReal_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNReal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNReal_Star(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_InfiniteSum_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_InfiniteSum_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_NNReal_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Isometry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
