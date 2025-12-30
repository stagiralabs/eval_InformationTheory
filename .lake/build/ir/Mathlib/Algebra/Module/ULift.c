// Lean compiler output
// Module: Mathlib.Algebra.Module.ULift
// Imports: Init Mathlib.Algebra.GroupWithZero.ULift Mathlib.Algebra.Ring.ULift Mathlib.Algebra.Module.Equiv.Defs Mathlib.Data.ULift
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
static lean_object* l_RingHom_id___at_ULift_moduleEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ULift_module___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulAction_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_addAction_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulWithZero_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ULift_moduleEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_addAction_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ULift_moduleEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_vaddLeft___rarg(lean_object*);
static lean_object* l_ULift_moduleEquiv___rarg___closed__1;
LEAN_EXPORT lean_object* l_ULift_distribSMul_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribMulAction_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulZeroClass___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ULift_smul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_module_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_module_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribSMul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribMulAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribMulAction_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribSMul_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribMulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribSMul___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulAction___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulWithZero(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulLeft___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribSMul_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_addAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_addAction_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_module_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_vaddLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulWithZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_moduleEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulZeroClass_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulZeroClass_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulAction_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulWithZero_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_vaddLeft___elambda__1(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ULift_module___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulWithZero_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_module(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribMulAction_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_distribMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulZeroClass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_addAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_addAction___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_vaddLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulZeroClass_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulAction_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_smulLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_smulLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULift_smulLeft___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_vaddLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_vaddLeft___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULift_vaddLeft___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_vaddLeft___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_vaddLeft___elambda__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_vaddLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULift_vaddLeft___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_mulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_mulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_mulAction___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_mulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_mulAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_addAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_addAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_addAction___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_addAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_addAction(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_mulAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_mulAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_mulAction_x27___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_mulAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_mulAction_x27(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_addAction_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_addAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_addAction_x27___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_addAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_addAction_x27(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_smulZeroClass___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smulLeft___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_smulZeroClass(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_smulZeroClass___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_smulZeroClass___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_smulZeroClass(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_smulZeroClass_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_smulZeroClass_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_smulZeroClass_x27___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_smulZeroClass_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_smulZeroClass_x27(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_distribSMul___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smulLeft___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_distribSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_distribSMul___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_distribSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_distribSMul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_distribSMul_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_distribSMul_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ULift_distribSMul_x27___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_distribSMul_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_distribSMul_x27(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_distribMulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_mulAction___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_distribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_distribMulAction___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_distribMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_distribMulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_distribMulAction_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_mulAction_x27___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_distribMulAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_distribMulAction_x27___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_distribMulAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_distribMulAction_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_mulAction___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_mulDistribMulAction___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_mulDistribMulAction(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_mulAction_x27___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_mulDistribMulAction_x27___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulDistribMulAction_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_mulDistribMulAction_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_smulWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smulLeft___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_smulWithZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_smulWithZero___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_smulWithZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_smulWithZero(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_smulWithZero_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_smulWithZero_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_smulWithZero_x27___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_smulWithZero_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_smulWithZero_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smulLeft___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_mulActionWithZero___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_mulActionWithZero(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_mulActionWithZero_x27___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_mulActionWithZero_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_mulActionWithZero_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_module___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smulLeft___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_module(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_module___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_module___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_module(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_module_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_smul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_module_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_module_x27___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_module_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_module_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_moduleEquiv___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
static lean_object* _init_l_RingHom_id___at_ULift_moduleEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ULift_moduleEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ULift_moduleEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_ULift_moduleEquiv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ULift_moduleEquiv___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_ULift_moduleEquiv___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ULift_moduleEquiv___elambda__1___rarg___boxed), 1, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULift_moduleEquiv___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ULift_moduleEquiv___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ULift_moduleEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ULift_moduleEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ULift_moduleEquiv___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_moduleEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ULift_moduleEquiv___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Equiv_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ULift(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Module_ULift(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Equiv_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_ULift_moduleEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_ULift_moduleEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_ULift_moduleEquiv___spec__1___closed__1);
l_ULift_moduleEquiv___rarg___closed__1 = _init_l_ULift_moduleEquiv___rarg___closed__1();
lean_mark_persistent(l_ULift_moduleEquiv___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
