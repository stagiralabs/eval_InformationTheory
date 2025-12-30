// Lean compiler output
// Module: Mathlib.Topology.Algebra.WithZeroTopology
// Imports: Init Mathlib.Algebra.Order.GroupWithZero.Canonical Mathlib.Topology.Algebra.GroupWithZero Mathlib.Topology.Order.OrderClosed
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
LEAN_EXPORT lean_object* l_WithZeroTopology_topologicalSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithZeroTopology_topologicalSpace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithZeroTopology_topologicalSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_iInf___at_WithZeroTopology_topologicalSpace___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_iInf___at_WithZeroTopology_topologicalSpace___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_WithZeroTopology_topologicalSpace___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithZeroTopology_topologicalSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithZeroTopology_topologicalSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_GroupWithZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_OrderClosed(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_WithZeroTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_GroupWithZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_OrderClosed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
