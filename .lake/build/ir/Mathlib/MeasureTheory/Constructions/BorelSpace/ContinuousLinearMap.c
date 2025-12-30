// Lean compiler output
// Module: Mathlib.MeasureTheory.Constructions.BorelSpace.ContinuousLinearMap
// Imports: Init Mathlib.MeasureTheory.Constructions.BorelSpace.Basic Mathlib.Analysis.NormedSpace.OperatorNorm.NormedSpace Mathlib.Topology.Algebra.Module.FiniteDimension
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
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instMeasurableSpace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instMeasurableSpace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___boxed(lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instMeasurableSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instMeasurableSpace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_ContinuousLinearMap_instMeasurableSpace(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_NormedSpace_OperatorNorm_NormedSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Module_FiniteDimension(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_ContinuousLinearMap(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_NormedSpace_OperatorNorm_NormedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Module_FiniteDimension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___closed__1 = _init_l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_ContinuousLinearMap_instMeasurableSpace___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
