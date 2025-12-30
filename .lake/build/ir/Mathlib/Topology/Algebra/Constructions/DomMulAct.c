// Lean compiler output
// Module: Mathlib.Topology.Algebra.Constructions.DomMulAct
// Imports: Init Mathlib.Topology.Homeomorph Mathlib.GroupTheory.GroupAction.DomAct.Basic
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
LEAN_EXPORT lean_object* l_DomMulAct_mkHomeomorph___boxed(lean_object*, lean_object*);
static lean_object* l_DomAddAct_mkHomeomorph___closed__1;
lean_object* l_MulOpposite_opEquiv(lean_object*);
LEAN_EXPORT lean_object* l_DomAddAct_instTopologicalSpace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DomMulAct_mkHomeomorph(lean_object*, lean_object*);
lean_object* l_AddOpposite_opEquiv(lean_object*);
LEAN_EXPORT lean_object* l_DomMulAct_instTopologicalSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DomAddAct_mkHomeomorph___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DomAddAct_instTopologicalSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DomAddAct_mkHomeomorph(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DomMulAct_instTopologicalSpace___boxed(lean_object*, lean_object*);
static lean_object* l_DomMulAct_mkHomeomorph___closed__1;
LEAN_EXPORT lean_object* l_DomMulAct_instTopologicalSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DomMulAct_instTopologicalSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DomMulAct_instTopologicalSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DomAddAct_instTopologicalSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DomAddAct_instTopologicalSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DomAddAct_instTopologicalSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_DomMulAct_mkHomeomorph___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_MulOpposite_opEquiv(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_DomMulAct_mkHomeomorph(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DomMulAct_mkHomeomorph___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DomMulAct_mkHomeomorph___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DomMulAct_mkHomeomorph(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_DomAddAct_mkHomeomorph___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_AddOpposite_opEquiv(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_DomAddAct_mkHomeomorph(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DomAddAct_mkHomeomorph___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_DomAddAct_mkHomeomorph___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DomAddAct_mkHomeomorph(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Homeomorph(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_DomAct_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_Constructions_DomMulAct(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Homeomorph(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_DomAct_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DomMulAct_mkHomeomorph___closed__1 = _init_l_DomMulAct_mkHomeomorph___closed__1();
lean_mark_persistent(l_DomMulAct_mkHomeomorph___closed__1);
l_DomAddAct_mkHomeomorph___closed__1 = _init_l_DomAddAct_mkHomeomorph___closed__1();
lean_mark_persistent(l_DomAddAct_mkHomeomorph___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
