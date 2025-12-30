// Lean compiler output
// Module: Mathlib.Topology.Order.Basic
// Imports: Init Mathlib.Order.Filter.Interval Mathlib.Order.Interval.Set.Pi Mathlib.Tactic.TFAE Mathlib.Tactic.NormNum Mathlib.Topology.Order.LeftRight Mathlib.Topology.Order.OrderClosed
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
LEAN_EXPORT lean_object* l_Preorder_topology(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Preorder_topology___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Preorder_topology(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Preorder_topology___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Preorder_topology(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_TFAE(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_LeftRight(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_OrderClosed(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Order_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_TFAE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_LeftRight(builtin, lean_io_mk_world());
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
