// Lean compiler output
// Module: Mathlib.Topology.Instances.Rat
// Imports: Init Mathlib.Topology.Algebra.Order.Archimedean Mathlib.Topology.Instances.Nat Mathlib.Topology.Instances.Real.Defs
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
lean_object* l_abs___at_Real_nnabs___spec__1(lean_object*);
static lean_object* l_Rat_instMetricSpace___closed__2;
LEAN_EXPORT lean_object* l_Rat_instMetricSpace___lambda__2(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instMetricSpace___lambda__1(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instMetricSpace;
static lean_object* l_Rat_instMetricSpace___closed__3;
static lean_object* l_Rat_instMetricSpace___closed__1;
static lean_object* l_Rat_instMetricSpace___closed__4;
LEAN_EXPORT lean_object* l_Rat_cast___at_Rat_instMetricSpace___spec__1(lean_object*);
lean_object* l_Rat_cast___at_Real_instRatCast___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Rat_cast___at_Rat_instMetricSpace___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Rat_cast___at_Real_instRatCast___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Rat_instMetricSpace___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Rat_cast___at_Real_instRatCast___spec__1(x_1);
x_4 = l_Rat_cast___at_Real_instRatCast___spec__1(x_2);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_4);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_5);
x_7 = l_abs___at_Real_nnabs___spec__1(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Rat_instMetricSpace___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Rat_cast___at_Real_instRatCast___spec__1(x_1);
x_4 = l_Rat_cast___at_Real_instRatCast___spec__1(x_2);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_4);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_5);
x_7 = l_abs___at_Real_nnabs___spec__1(x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
static lean_object* _init_l_Rat_instMetricSpace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instMetricSpace___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instMetricSpace___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instMetricSpace___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instMetricSpace___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instMetricSpace___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
x_2 = l_Rat_instMetricSpace___closed__2;
x_3 = l_Rat_instMetricSpace___closed__3;
x_4 = l_Rat_instMetricSpace___closed__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_Rat_instMetricSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instMetricSpace___closed__4;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Order_Archimedean(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Real_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Order_Archimedean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Real_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rat_instMetricSpace___closed__1 = _init_l_Rat_instMetricSpace___closed__1();
lean_mark_persistent(l_Rat_instMetricSpace___closed__1);
l_Rat_instMetricSpace___closed__2 = _init_l_Rat_instMetricSpace___closed__2();
lean_mark_persistent(l_Rat_instMetricSpace___closed__2);
l_Rat_instMetricSpace___closed__3 = _init_l_Rat_instMetricSpace___closed__3();
lean_mark_persistent(l_Rat_instMetricSpace___closed__3);
l_Rat_instMetricSpace___closed__4 = _init_l_Rat_instMetricSpace___closed__4();
lean_mark_persistent(l_Rat_instMetricSpace___closed__4);
l_Rat_instMetricSpace = _init_l_Rat_instMetricSpace();
lean_mark_persistent(l_Rat_instMetricSpace);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
