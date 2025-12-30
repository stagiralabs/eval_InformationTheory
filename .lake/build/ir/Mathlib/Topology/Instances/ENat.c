// Lean compiler output
// Module: Mathlib.Topology.Instances.ENat
// Imports: Init Mathlib.Data.ENat.Basic Mathlib.Topology.Algebra.Monoid Mathlib.Topology.Instances.Discrete Mathlib.Order.Interval.Set.WithBotTop
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
LEAN_EXPORT lean_object* l_ENat_instTopologicalSpace;
static lean_object* _init_l_ENat_instTopologicalSpace() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Monoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Discrete(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_WithBotTop(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_ENat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Monoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Discrete(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_WithBotTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ENat_instTopologicalSpace = _init_l_ENat_instTopologicalSpace();
lean_mark_persistent(l_ENat_instTopologicalSpace);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
