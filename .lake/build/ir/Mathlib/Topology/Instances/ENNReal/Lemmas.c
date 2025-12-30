// Lean compiler output
// Module: Mathlib.Topology.Instances.ENNReal.Lemmas
// Imports: Init Mathlib.Algebra.BigOperators.Intervals Mathlib.Data.ENNReal.Operations Mathlib.Topology.Algebra.Order.LiminfLimsup Mathlib.Topology.Instances.ENNReal.Defs Mathlib.Topology.Instances.NNReal.Lemmas Mathlib.Topology.MetricSpace.Pseudo.Real Mathlib.Topology.Metrizable.Uniformity Mathlib.Topology.Order.MonotoneContinuity Mathlib.Topology.Order.T5
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_metricSpaceEMetricBall(lean_object*);
static lean_object* l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1___closed__1;
LEAN_EXPORT lean_object* l_ENNReal_ltTopHomeomorphNNReal;
LEAN_EXPORT lean_object* l_metricSpaceEMetricBall___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1(lean_object*);
extern lean_object* l_ENNReal_neTopEquivNNReal;
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_ENNReal_ltTopHomeomorphNNReal___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_metricSpaceEMetricBall___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
static lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1___closed__1;
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENNReal_neTopHomeomorphNNReal;
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_instEMetricSpaceSubtype___rarg(lean_object*);
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_ENNReal_neTopHomeomorphNNReal() {
_start:
{
lean_object* x_1; 
x_1 = l_ENNReal_neTopEquivNNReal;
return x_1;
}
}
static lean_object* _init_l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_trans___at_ENNReal_ltTopHomeomorphNNReal___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_ENNReal_ltTopHomeomorphNNReal() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_2 = l_ENNReal_neTopHomeomorphNNReal;
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
x_6 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_7 = l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1___closed__1;
x_8 = l_WithTop_recTopCoe___rarg(x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_5 = l_instEMetricSpaceSubtype___rarg(x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__2), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, lean_box(0));
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_8);
lean_ctor_set(x_10, 3, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_metricSpaceEMetricBall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg(x_1, x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_metricSpaceEMetricBall(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_metricSpaceEMetricBall___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_metricSpaceEMetricBall___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_metricSpaceEMetricBall___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Intervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENNReal_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Order_LiminfLimsup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_ENNReal_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_NNReal_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Pseudo_Real(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Metrizable_Uniformity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_MonotoneContinuity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_T5(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_ENNReal_Lemmas(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Intervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENNReal_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Order_LiminfLimsup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_ENNReal_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_NNReal_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Pseudo_Real(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Metrizable_Uniformity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_MonotoneContinuity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_T5(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ENNReal_neTopHomeomorphNNReal = _init_l_ENNReal_neTopHomeomorphNNReal();
lean_mark_persistent(l_ENNReal_neTopHomeomorphNNReal);
l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1___closed__1 = _init_l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1___closed__1();
lean_mark_persistent(l_Homeomorph_setCongr___at_ENNReal_ltTopHomeomorphNNReal___spec__1___closed__1);
l_ENNReal_ltTopHomeomorphNNReal = _init_l_ENNReal_ltTopHomeomorphNNReal();
lean_mark_persistent(l_ENNReal_ltTopHomeomorphNNReal);
l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1___closed__1 = _init_l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1___closed__1();
lean_mark_persistent(l_EMetricSpace_toMetricSpace___at_metricSpaceEMetricBall___spec__1___rarg___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
