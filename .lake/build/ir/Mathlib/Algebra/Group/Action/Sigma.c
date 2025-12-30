// Lean compiler output
// Module: Mathlib.Algebra.Group.Action.Sigma
// Imports: Init Mathlib.Algebra.Group.Action.Faithful Mathlib.Data.Sigma.Basic
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
static lean_object* l_Sigma_instSMul___rarg___closed__1;
LEAN_EXPORT lean_object* l_Sigma_instMulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instAddAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Sigma_VAdd___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instAddAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_VAdd___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Sigma_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_VAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instMulAction___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instAddAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instSMul___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_VAdd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_instSMul___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_1, x_3, x_2, x_4);
return x_5;
}
}
static lean_object* _init_l_Sigma_instSMul___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sigma_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Sigma_instSMul___rarg___lambda__1), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Sigma_instSMul___rarg___closed__1;
x_6 = l_Sigma_map___rarg(x_5, x_4, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Sigma_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Sigma_instSMul___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sigma_VAdd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Sigma_instSMul___rarg___lambda__1), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Sigma_instSMul___rarg___closed__1;
x_6 = l_Sigma_map___rarg(x_5, x_4, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Sigma_VAdd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Sigma_VAdd___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sigma_VAdd___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sigma_VAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sigma_VAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Sigma_VAdd___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sigma_instMulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sigma_instSMul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sigma_instMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Sigma_instMulAction___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sigma_instMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sigma_instMulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sigma_instAddAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sigma_VAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sigma_instAddAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Sigma_instAddAction___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sigma_instAddAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sigma_instAddAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Faithful(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sigma_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Action_Sigma(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Faithful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sigma_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Sigma_instSMul___rarg___closed__1 = _init_l_Sigma_instSMul___rarg___closed__1();
lean_mark_persistent(l_Sigma_instSMul___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
