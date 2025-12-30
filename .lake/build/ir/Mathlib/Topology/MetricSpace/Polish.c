// Lean compiler output
// Module: Mathlib.Topology.MetricSpace.Polish
// Imports: Init Mathlib.Analysis.Normed.Field.Basic Mathlib.Topology.Instances.Nat Mathlib.Topology.MetricSpace.PiNat Mathlib.Topology.MetricSpace.Isometry Mathlib.Topology.MetricSpace.Gluing Mathlib.Topology.Sets.Opens
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
LEAN_EXPORT lean_object* l_TopologicalSpace_Opens_CompleteCopy_inst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopologicalSpace_Opens_CompleteCopy_inst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopologicalSpace_Opens_CompleteCopy_inst(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TopologicalSpace_Opens_CompleteCopy_inst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TopologicalSpace_Opens_CompleteCopy_inst(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_PiNat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Isometry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Gluing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sets_Opens(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_MetricSpace_Polish(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_PiNat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Isometry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Gluing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sets_Opens(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
