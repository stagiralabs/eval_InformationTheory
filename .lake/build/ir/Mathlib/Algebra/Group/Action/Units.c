// Lean compiler output
// Module: Mathlib.Algebra.Group.Action.Units
// Imports: Init Mathlib.Algebra.Group.Action.Faithful Mathlib.Algebra.Group.Basic Mathlib.Algebra.Group.Units.Defs
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
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instMulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_addAction_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_addAction_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_mulAction_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instAddAction___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_addAction_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instAddAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Units_instMulAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Units_instSMul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instVAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instAddAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_mulAction_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instMulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_mulAction_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Units_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Units_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Units_instSMul___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Units_instSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Units_instSMul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddUnits_instVAdd___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddUnits_instVAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instVAdd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddUnits_instVAdd___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddUnits_instVAdd___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instVAdd___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddUnits_instVAdd___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_instMulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Units_instSMul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Units_instMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Units_instMulAction___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Units_instMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Units_instMulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instAddAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddUnits_instVAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instAddAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddUnits_instAddAction___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddUnits_instAddAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddUnits_instAddAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Units_mulAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_6);
x_9 = lean_apply_2(x_3, x_6, x_8);
x_10 = l_DivInvOneMonoid_toInvOneClass___rarg(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_1(x_11, x_6);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_apply_2(x_3, x_12, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Units_mulAction_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Units_mulAction_x27___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Units_mulAction_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Units_mulAction_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddUnits_addAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_6);
x_9 = lean_apply_2(x_3, x_6, x_8);
x_10 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_1(x_11, x_6);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_apply_2(x_3, x_12, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_AddUnits_addAction_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddUnits_addAction_x27___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddUnits_addAction_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddUnits_addAction_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Faithful(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Action_Units(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Faithful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
