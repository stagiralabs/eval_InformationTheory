// Lean compiler output
// Module: Mathlib.Topology.Instances.NNReal.Defs
// Imports: Init Mathlib.Algebra.Algebra.Rat Mathlib.Data.NNReal.Star Mathlib.Topology.ContinuousMap.Basic Mathlib.Topology.Instances.Real.Defs Mathlib.Topology.MetricSpace.Isometry
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
LEAN_EXPORT lean_object* l_NNReal_instTopologicalSpace;
static lean_object* l_ContinuousMap_coeNNRealReal___closed__1;
lean_object* l_NNReal_toReal___boxed(lean_object*);
extern lean_object* l_instPseudoMetricSpaceNNReal;
LEAN_EXPORT lean_object* l_ContinuousMap_coeNNRealReal;
static lean_object* _init_l_NNReal_instTopologicalSpace() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instPseudoMetricSpaceNNReal;
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_ContinuousMap_coeNNRealReal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_NNReal_toReal___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ContinuousMap_coeNNRealReal() {
_start:
{
lean_object* x_1; 
x_1 = l_ContinuousMap_coeNNRealReal___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNReal_Star(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Real_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Isometry(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_NNReal_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNReal_Star(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Real_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Isometry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_NNReal_instTopologicalSpace = _init_l_NNReal_instTopologicalSpace();
lean_mark_persistent(l_NNReal_instTopologicalSpace);
l_ContinuousMap_coeNNRealReal___closed__1 = _init_l_ContinuousMap_coeNNRealReal___closed__1();
lean_mark_persistent(l_ContinuousMap_coeNNRealReal___closed__1);
l_ContinuousMap_coeNNRealReal = _init_l_ContinuousMap_coeNNRealReal();
lean_mark_persistent(l_ContinuousMap_coeNNRealReal);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
