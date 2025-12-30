// Lean compiler output
// Module: Mathlib.Algebra.Group.Action.Sum
// Imports: Init Mathlib.Algebra.Group.Action.Faithful
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
LEAN_EXPORT lean_object* l_Sum_instAddAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instMulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instMulAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instAddAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_hasVAdd___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_hasVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sum_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_hasVAdd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_hasVAdd(lean_object*, lean_object*, lean_object*);
lean_object* l_instHVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instAddAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_apply_1(x_2, x_3);
x_7 = l_Sum_map___rarg(x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Sum_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Sum_instSMul___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sum_hasVAdd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_instHVAdd___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_alloc_closure((void*)(l_instHVAdd___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = l_Sum_map___rarg(x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Sum_hasVAdd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Sum_hasVAdd___elambda__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sum_hasVAdd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_hasVAdd___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sum_hasVAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Sum_hasVAdd___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sum_instMulAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_instSMul___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sum_instMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Sum_instMulAction___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_instMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_instMulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_instAddAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_hasVAdd___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sum_instAddAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Sum_instAddAction___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_instAddAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_instAddAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Faithful(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Action_Sum(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Faithful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
