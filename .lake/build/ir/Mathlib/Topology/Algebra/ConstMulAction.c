// Lean compiler output
// Module: Mathlib.Topology.Algebra.ConstMulAction
// Imports: Init Mathlib.Algebra.Module.ULift Mathlib.Algebra.Order.Group.Synonym Mathlib.Data.Set.Pointwise.SMul Mathlib.GroupTheory.GroupAction.Defs Mathlib.Topology.Algebra.Constructions Mathlib.Topology.Algebra.Support Mathlib.Topology.Bases Mathlib.Topology.Homeomorph
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
lean_object* l_Units_mk0___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smulOfNeZero___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_vadd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Homeomorph_smulOfNeZero___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smul(lean_object*, lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddAction_toPerm___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_vadd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Units_instDivInvMonoid___rarg(lean_object*);
lean_object* l_Units_instSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_vadd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smulOfNeZero(lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smulOfNeZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Homeomorph_smulOfNeZero___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Homeomorph_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_toPerm___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Homeomorph_smul___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Homeomorph_smul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_vadd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddAction_toPerm___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_vadd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Homeomorph_vadd___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_vadd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Homeomorph_vadd(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Homeomorph_smulOfNeZero___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Units_instDivInvMonoid___rarg(x_5);
x_7 = lean_alloc_closure((void*)(l_Units_instSMul___rarg), 3, 1);
lean_closure_set(x_7, 0, x_2);
lean_inc(x_3);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__2___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
x_9 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_Homeomorph_smulOfNeZero___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_Homeomorph_smulOfNeZero___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_toPerm___at_Homeomorph_smulOfNeZero___spec__2___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smulOfNeZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_7 = l_Units_mk0___rarg(x_2, x_5, lean_box(0));
x_8 = l_MulAction_toPerm___at_Homeomorph_smulOfNeZero___spec__2___rarg(x_2, x_3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smulOfNeZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Homeomorph_smulOfNeZero___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Homeomorph_smul___at_Homeomorph_smulOfNeZero___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Homeomorph_smulOfNeZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Homeomorph_smulOfNeZero___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Synonym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pointwise_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Constructions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Bases(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Homeomorph(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_ConstMulAction(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Synonym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pointwise_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Bases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Homeomorph(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
