// Lean compiler output
// Module: Mathlib.RingTheory.MvPowerSeries.PiTopology
// Imports: Init Mathlib.RingTheory.MvPowerSeries.Basic Mathlib.RingTheory.Nilpotent.Defs Mathlib.Topology.Algebra.InfiniteSum.Constructions Mathlib.Topology.Algebra.Ring.Basic Mathlib.Topology.Algebra.UniformGroup.Basic Mathlib.Topology.UniformSpace.Pi
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
lean_object* l_Pi_uniformSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instTopologicalSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instTopologicalSpace___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instTopologicalSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instTopologicalSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MvPowerSeries_WithPiTopology_instTopologicalSpace(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_uniformSpace(lean_box(0), lean_box(0), x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MvPowerSeries_WithPiTopology_instUniformSpace___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_MvPowerSeries_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Nilpotent_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_InfiniteSum_Constructions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Ring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformGroup_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_MvPowerSeries_PiTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_MvPowerSeries_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Nilpotent_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_InfiniteSum_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Ring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformGroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
