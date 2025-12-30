// Lean compiler output
// Module: Mathlib.Topology.Algebra.UniformConvergence
// Imports: Init Mathlib.Topology.Algebra.UniformMulAction Mathlib.Algebra.Module.Pi Mathlib.Topology.UniformSpace.UniformConvergenceTopology
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
lean_object* l_Pi_subNegMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddCommGroupUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instModuleUniformOnFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionUniformOnFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddMonoidUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddCommGroupUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddUniformFun(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instInvUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddGroupUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCommMonoidUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformFun___rarg(lean_object*);
lean_object* l_Pi_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddMonoidUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDivUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instSubUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMonoidUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instOneUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOneUniformFun___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionUniformFun___rarg(lean_object*);
lean_object* l_Pi_instInv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instModuleUniformOnFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instZeroUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instDivUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddMonoidUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instModuleUniformFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCommGroupUniformFun(lean_object*, lean_object*);
lean_object* l_Pi_divInvMonoid___rarg(lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instCommMonoidUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDistribMulActionUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instNegUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCommGroupUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNegUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonoidUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMulActionUniformOnFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInvUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCommGroupUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instSMulUniformOnFun(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instModuleUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instCommMonoidUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionUniformFun(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCommGroupUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instCommMonoidUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instZeroUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSMulUniformFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instModuleUniformFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddGroupUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instGroupUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instDistribMulActionUniformOnFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOneUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instModuleUniformFun___rarg(lean_object*);
lean_object* l_Pi_instOne___rarg(lean_object*, lean_object*);
lean_object* l_Pi_instMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddMonoidUniformFun(lean_object*, lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instZeroUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDistribMulActionUniformFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOneUniformFun___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSMulUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMulUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDivUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDivUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSubUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instSubUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instGroupUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddGroupUniformOnFun___rarg(lean_object*);
lean_object* l_Pi_instDiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDistribMulActionUniformFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddGroupUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instGroupUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instNegUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instSubUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instGroupUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instSMulUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMonoidUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionUniformFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOneUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instDistribMulActionUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instNegUniformOnFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instZeroUniformFun___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instDistribMulActionUniformOnFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddCommGroupUniformOnFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonoidUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instAddCommGroupUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOneUniformFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOneUniformFun___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instOneUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instOne___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOneUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOneUniformFun___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instOneUniformFun___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instZeroUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instZeroUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instZeroUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOneUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instOne___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instOneUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instOneUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instZeroUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instZeroUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instZeroUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instMulUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instMul___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMulUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instMulUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instAddUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMulUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instMul___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMulUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instMulUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instAddUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instAddUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instInvUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instInv___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInvUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instInvUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instNegUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instNegUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instNegUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInvUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instInv___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instInvUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instInvUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instNegUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instNegUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instNegUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDivUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instDiv___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDivUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instDivUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSubUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSubUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instSubUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDivUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instDiv___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDivUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instDivUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instSubUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSubUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instSubUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instMonoidUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_monoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMonoidUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instMonoidUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddMonoidUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddMonoidUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instAddMonoidUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMonoidUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_monoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMonoidUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instMonoidUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instAddMonoidUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddMonoidUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instAddMonoidUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCommMonoidUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_monoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCommMonoidUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instCommMonoidUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instAddCommMonoidUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCommMonoidUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_monoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCommMonoidUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instCommMonoidUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddCommMonoidUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instAddCommMonoidUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instGroupUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_divInvMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instGroupUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instGroupUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddGroupUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddGroupUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instAddGroupUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instGroupUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_divInvMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instGroupUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instGroupUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instAddGroupUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddGroupUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instAddGroupUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCommGroupUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_divInvMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCommGroupUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instCommGroupUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddCommGroupUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddCommGroupUniformFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instAddCommGroupUniformFun___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCommGroupUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_divInvMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCommGroupUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instCommGroupUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instAddCommGroupUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instAddCommGroupUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instAddCommGroupUniformOnFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instSMulUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instSMul___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSMulUniformFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instSMulUniformFun___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instSMulUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_instSMul___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instSMulUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_instSMulUniformOnFun___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMulActionUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMulActionUniformFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_instMulActionUniformFun___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMulActionUniformFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_instMulActionUniformFun(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMulActionUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instMulActionUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_instMulActionUniformOnFun___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instMulActionUniformOnFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_instMulActionUniformOnFun(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instDistribMulActionUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDistribMulActionUniformFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_instDistribMulActionUniformFun___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instDistribMulActionUniformFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_instDistribMulActionUniformFun(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instDistribMulActionUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDistribMulActionUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_instDistribMulActionUniformOnFun___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instDistribMulActionUniformOnFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_instDistribMulActionUniformOnFun(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instModuleUniformFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instModuleUniformFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_instModuleUniformFun___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instModuleUniformFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_instModuleUniformFun(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instModuleUniformOnFun___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_instOneUniformFun___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instModuleUniformOnFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_instModuleUniformOnFun___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_instModuleUniformOnFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_instModuleUniformOnFun(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformMulAction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_UniformConvergenceTopology(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_UniformConvergence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformMulAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_UniformConvergenceTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
