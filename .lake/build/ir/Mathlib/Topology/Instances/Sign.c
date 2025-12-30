// Lean compiler output
// Module: Mathlib.Topology.Instances.Sign
// Imports: Init Mathlib.Data.Sign Mathlib.Topology.Order.Basic
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
lean_object* l_TopologicalSpace_instCompleteLattice(lean_object*);
static lean_object* l_instTopologicalSpaceSignType___closed__1;
LEAN_EXPORT lean_object* l_instTopologicalSpaceSignType;
static lean_object* _init_l_instTopologicalSpaceSignType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_TopologicalSpace_instCompleteLattice(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_instTopologicalSpaceSignType() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instTopologicalSpaceSignType___closed__1;
x_2 = lean_ctor_get(x_1, 4);
lean_inc(x_2);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sign(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Instances_Sign(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sign(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instTopologicalSpaceSignType___closed__1 = _init_l_instTopologicalSpaceSignType___closed__1();
lean_mark_persistent(l_instTopologicalSpaceSignType___closed__1);
l_instTopologicalSpaceSignType = _init_l_instTopologicalSpaceSignType();
lean_mark_persistent(l_instTopologicalSpaceSignType);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
