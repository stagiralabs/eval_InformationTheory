// Lean compiler output
// Module: Mathlib.Topology.Category.LightProfinite.Limits
// Imports: Init Mathlib.Topology.Category.CompHausLike.Limits Mathlib.Topology.Category.LightProfinite.Basic
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
static lean_object* l_LightProfinite_isTerminalPUnit___closed__1;
LEAN_EXPORT lean_object* l_LightProfinite_isTerminalPUnit;
lean_object* l_CategoryTheory_Limits_IsTerminal_ofUnique___at_CompHausLike_isTerminalPUnit___spec__1___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_LightProfinite_isTerminalPUnit___closed__2;
lean_object* l_CategoryTheory_Limits_IsTerminal_ofUnique___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* _init_l_LightProfinite_isTerminalPUnit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_IsTerminal_ofUnique___at_CompHausLike_isTerminalPUnit___spec__1___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_LightProfinite_isTerminalPUnit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LightProfinite_isTerminalPUnit___closed__1;
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_IsTerminal_ofUnique___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LightProfinite_isTerminalPUnit() {
_start:
{
lean_object* x_1; 
x_1 = l_LightProfinite_isTerminalPUnit___closed__2;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_CompHausLike_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_LightProfinite_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Category_LightProfinite_Limits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_CompHausLike_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_LightProfinite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LightProfinite_isTerminalPUnit___closed__1 = _init_l_LightProfinite_isTerminalPUnit___closed__1();
lean_mark_persistent(l_LightProfinite_isTerminalPUnit___closed__1);
l_LightProfinite_isTerminalPUnit___closed__2 = _init_l_LightProfinite_isTerminalPUnit___closed__2();
lean_mark_persistent(l_LightProfinite_isTerminalPUnit___closed__2);
l_LightProfinite_isTerminalPUnit = _init_l_LightProfinite_isTerminalPUnit();
lean_mark_persistent(l_LightProfinite_isTerminalPUnit);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
