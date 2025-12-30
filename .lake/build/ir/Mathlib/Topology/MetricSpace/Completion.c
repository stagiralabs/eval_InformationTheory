// Lean compiler output
// Module: Mathlib.Topology.MetricSpace.Completion
// Imports: Init Mathlib.Topology.UniformSpace.Completion Mathlib.Topology.MetricSpace.Isometry Mathlib.Topology.MetricSpace.Lipschitz Mathlib.Topology.MetricSpace.Algebra Mathlib.Topology.Algebra.GroupCompletion Mathlib.Topology.Instances.Real.Defs
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
lean_object* initialize_Mathlib_Topology_UniformSpace_Completion(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Isometry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Lipschitz(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_GroupCompletion(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Real_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_MetricSpace_Completion(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Completion(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Isometry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Lipschitz(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_GroupCompletion(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Real_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
