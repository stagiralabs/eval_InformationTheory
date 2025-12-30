// Lean compiler output
// Module: Mathlib.Topology.Algebra.UniformGroup.Basic
// Imports: Init Mathlib.Topology.UniformSpace.UniformConvergence Mathlib.Topology.UniformSpace.UniformEmbedding Mathlib.Topology.UniformSpace.CompleteSeparated Mathlib.Topology.UniformSpace.Compact Mathlib.Topology.UniformSpace.HeineCantor Mathlib.Topology.Algebra.UniformGroup.Defs Mathlib.Topology.Algebra.Group.Quotient Mathlib.Topology.DiscreteSubset Mathlib.Tactic.Abel
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
lean_object* initialize_Mathlib_Topology_UniformSpace_UniformConvergence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_UniformEmbedding(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_CompleteSeparated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Compact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_HeineCantor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformGroup_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Group_Quotient(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_DiscreteSubset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Abel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_UniformGroup_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_UniformConvergence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_UniformEmbedding(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_CompleteSeparated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Compact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_HeineCantor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformGroup_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Group_Quotient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_DiscreteSubset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Abel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
