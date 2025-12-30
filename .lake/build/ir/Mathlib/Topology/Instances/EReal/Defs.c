// Lean compiler output
// Module: Mathlib.Topology.Instances.EReal.Defs
// Imports: Init Mathlib.Data.Rat.Encodable Mathlib.Data.Real.EReal Mathlib.Topology.Order.MonotoneContinuity Mathlib.Topology.Order.T5 Mathlib.Topology.Algebra.Group.Basic
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
LEAN_EXPORT lean_object* l_EReal_instTopologicalSpace;
static lean_object* _init_l_EReal_instTopologicalSpace() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Encodable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Real_EReal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_MonotoneContinuity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_T5(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Group_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_EReal_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Encodable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Real_EReal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_MonotoneContinuity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_T5(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_EReal_instTopologicalSpace = _init_l_EReal_instTopologicalSpace();
lean_mark_persistent(l_EReal_instTopologicalSpace);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
