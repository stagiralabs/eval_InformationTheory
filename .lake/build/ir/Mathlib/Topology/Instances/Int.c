// Lean compiler output
// Module: Mathlib.Topology.Instances.Int
// Imports: Init Mathlib.Data.Int.Interval Mathlib.Data.Int.ConditionallyCompleteOrder Mathlib.Topology.Instances.Discrete Mathlib.Topology.MetricSpace.Bounded Mathlib.Order.Filter.AtTopBot.Archimedean Mathlib.Topology.MetricSpace.Basic
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
LEAN_EXPORT lean_object* l_Int_instMetricSpace___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instMetricSpace___lambda__2(lean_object*, lean_object*);
lean_object* l_Int_cast___at_Real_instIntCast___spec__2(lean_object*);
static lean_object* l_Int_instMetricSpace___closed__3;
LEAN_EXPORT lean_object* l_Int_cast___at_Int_instDist___spec__1(lean_object*);
lean_object* l_abs___at_Real_nnabs___spec__1(lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instDist(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
static lean_object* l_Int_instMetricSpace___closed__2;
extern lean_object* l_instUniformSpaceInt;
LEAN_EXPORT lean_object* l_Int_instMetricSpace;
static lean_object* l_Int_instMetricSpace___closed__1;
LEAN_EXPORT lean_object* l_Int_cast___at_Int_instDist___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Int_cast___at_Real_instIntCast___spec__2(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_instDist(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Int_cast___at_Real_instIntCast___spec__2(x_1);
x_4 = l_Int_cast___at_Real_instIntCast___spec__2(x_2);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_4);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_5);
x_7 = l_abs___at_Real_nnabs___spec__1(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Int_instMetricSpace___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Int_cast___at_Real_instIntCast___spec__2(x_1);
x_4 = l_Int_cast___at_Real_instIntCast___spec__2(x_2);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_4);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_5);
x_7 = l_abs___at_Real_nnabs___spec__1(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Int_instMetricSpace___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Int_cast___at_Real_instIntCast___spec__2(x_1);
x_4 = l_Int_cast___at_Real_instIntCast___spec__2(x_2);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_4);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_5);
x_7 = l_abs___at_Real_nnabs___spec__1(x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
static lean_object* _init_l_Int_instMetricSpace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instMetricSpace___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instMetricSpace___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instMetricSpace___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instMetricSpace___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
x_2 = l_Int_instMetricSpace___closed__1;
x_3 = l_Int_instMetricSpace___closed__2;
x_4 = l_instUniformSpaceInt;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_Int_instMetricSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_instMetricSpace___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_ConditionallyCompleteOrder(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Discrete(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Bounded(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_Archimedean(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_Int(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_ConditionallyCompleteOrder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Discrete(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Bounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_Archimedean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_instMetricSpace___closed__1 = _init_l_Int_instMetricSpace___closed__1();
lean_mark_persistent(l_Int_instMetricSpace___closed__1);
l_Int_instMetricSpace___closed__2 = _init_l_Int_instMetricSpace___closed__2();
lean_mark_persistent(l_Int_instMetricSpace___closed__2);
l_Int_instMetricSpace___closed__3 = _init_l_Int_instMetricSpace___closed__3();
lean_mark_persistent(l_Int_instMetricSpace___closed__3);
l_Int_instMetricSpace = _init_l_Int_instMetricSpace();
lean_mark_persistent(l_Int_instMetricSpace);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
