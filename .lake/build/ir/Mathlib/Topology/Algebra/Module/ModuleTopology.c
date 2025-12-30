// Lean compiler output
// Module: Mathlib.Topology.Algebra.Module.ModuleTopology
// Imports: Init Mathlib.Topology.Algebra.Module.Equiv Mathlib.RingTheory.Finiteness.Cardinality Mathlib.Algebra.Algebra.Bilinear
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
LEAN_EXPORT lean_object* l_DFunLike_coe___at_moduleTopology___spec__1;
LEAN_EXPORT lean_object* l_moduleTopology(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_moduleTopology___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_DFunLike_coe___at_moduleTopology___spec__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_moduleTopology(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_moduleTopology___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_moduleTopology(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Module_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Finiteness_Cardinality(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Bilinear(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_Module_ModuleTopology(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Module_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Finiteness_Cardinality(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Bilinear(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DFunLike_coe___at_moduleTopology___spec__1 = _init_l_DFunLike_coe___at_moduleTopology___spec__1();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
