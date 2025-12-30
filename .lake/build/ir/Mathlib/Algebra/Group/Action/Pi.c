// Lean compiler output
// Module: Mathlib.Algebra.Group.Action.Pi
// Imports: Init Mathlib.Algebra.Group.Action.Faithful Mathlib.Algebra.Group.Pi.Basic Mathlib.Data.Set.Function
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
LEAN_EXPORT lean_object* l_Pi_vadd_x27___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_hasSMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulAction_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addAction_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_hasVAdd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_hasSMul___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulAction_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_hasSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addAction_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_vadd_x27___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_smul_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_addAction_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_hasVAdd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_addAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_vadd_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_smul_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_mulAction_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_vadd_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_hasSMul___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_smul_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
lean_inc(x_4);
x_6 = lean_apply_1(x_3, x_4);
x_7 = lean_apply_3(x_1, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_smul_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_smul_x27___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_vadd_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
lean_inc(x_4);
x_6 = lean_apply_1(x_3, x_4);
x_7 = lean_apply_3(x_1, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_vadd_x27___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_vadd_x27___elambda__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_vadd_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pi_vadd_x27___elambda__1___rarg), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_vadd_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_vadd_x27___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_mulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_apply_3(x_1, x_4, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_mulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_addAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_instVAdd___elambda__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_addAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_addAction___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_addAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_addAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_mulAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
lean_inc(x_4);
x_6 = lean_apply_1(x_3, x_4);
x_7 = lean_apply_3(x_1, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_mulAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_mulAction_x27___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_mulAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_mulAction_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_addAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_vadd_x27___elambda__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_addAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_addAction_x27___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_addAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_addAction_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Function_hasSMul___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Function_hasSMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_Function_hasSMul___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instSMul___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_hasSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_hasSMul___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_hasSMul___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Function_hasSMul___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_hasVAdd___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_Function_hasSMul___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instVAdd___elambda__1___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_hasVAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_hasVAdd___rarg), 1, 0);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Faithful(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pi_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Function(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Action_Pi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Faithful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pi_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Function(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
