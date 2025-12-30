// Lean compiler output
// Module: Mathlib.Geometry.Manifold.Metrizable
// Imports: Init Mathlib.Analysis.Normed.Module.FiniteDimension Mathlib.Geometry.Manifold.IsManifold.Basic Mathlib.Topology.Compactness.Paracompact Mathlib.Topology.Metrizable.Urysohn
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
lean_object* initialize_Mathlib_Analysis_Normed_Module_FiniteDimension(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_IsManifold_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Compactness_Paracompact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Metrizable_Urysohn(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_Manifold_Metrizable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_FiniteDimension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_IsManifold_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Compactness_Paracompact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Metrizable_Urysohn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
