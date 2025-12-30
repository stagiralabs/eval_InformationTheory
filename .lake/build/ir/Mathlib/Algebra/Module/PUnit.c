// Lean compiler output
// Module: Mathlib.Algebra.Module.PUnit
// Imports: Init Mathlib.Algebra.Module.Defs Mathlib.Algebra.Ring.Action.Basic Mathlib.Algebra.Ring.PUnit
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
LEAN_EXPORT lean_object* l_PUnit_mulDistribMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instDistribMulAction___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_mulDistribMulAction___boxed(lean_object*, lean_object*);
static lean_object* l_PUnit_instMulAction___closed__1;
LEAN_EXPORT lean_object* l_PUnit_instSMulZeroClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_smulWithZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_mulSemiringAction___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_mulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_distribMulAction___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_smulWithZero___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_module(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_mulActionWithZero___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_mulActionWithZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instSMul___rarg___boxed(lean_object*);
static lean_object* l_PUnit_smulWithZero___closed__1;
LEAN_EXPORT lean_object* l_PUnit_instVAdd(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instSMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_mulSemiringAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_vadd(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instSMul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instDistribMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instMulAction(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_mulAction___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_vadd___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instSMulZeroClass___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_distribMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_smul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_vadd___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_instSMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_module___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PUnit_smul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PUnit_smul(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PUnit_vadd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PUnit_vadd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PUnit_vadd___elambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_vadd___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PUnit_vadd___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_PUnit_smulWithZero___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_smul___boxed), 3, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_smulWithZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_smulWithZero___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_mulAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_distribMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_distribMulAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_distribMulAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulDistribMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulDistribMulAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_mulDistribMulAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulSemiringAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulSemiringAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_mulSemiringAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulActionWithZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_mulActionWithZero___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_mulActionWithZero(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_module(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_smulWithZero___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_module___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_module(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSMul___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PUnit_instSMul___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSMul___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_instSMul___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSMul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instSMul(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PUnit_instVAdd___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instVAdd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PUnit_instVAdd___elambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_instVAdd___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_instVAdd___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instVAdd___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_PUnit_instMulAction___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_instSMul___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_instMulAction(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_instMulAction___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSMulZeroClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instMulAction___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instSMulZeroClass___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instSMulZeroClass(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instDistribMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instMulAction___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_PUnit_instDistribMulAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PUnit_instDistribMulAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Action_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_PUnit(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Module_PUnit(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Action_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_PUnit(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PUnit_smulWithZero___closed__1 = _init_l_PUnit_smulWithZero___closed__1();
lean_mark_persistent(l_PUnit_smulWithZero___closed__1);
l_PUnit_instMulAction___closed__1 = _init_l_PUnit_instMulAction___closed__1();
lean_mark_persistent(l_PUnit_instMulAction___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
