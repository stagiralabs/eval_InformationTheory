// Lean compiler output
// Module: Mathlib.LinearAlgebra.Ray
// Imports: Init Mathlib.Algebra.Order.Module.Algebra Mathlib.Algebra.Ring.Subring.Units Mathlib.LinearAlgebra.LinearIndependent.Defs Mathlib.Tactic.LinearCombination Mathlib.Tactic.Module Mathlib.Tactic.Positivity.Basic
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
lean_object* l_LinearEquiv_toAddEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNegRay___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionRay___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_instInvolutiveNeg___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_coe___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNegRay___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_instInvolutiveNeg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_coe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_Setoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Quot_congr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionRayVector___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_instNeg___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionRay___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RayVector_instInvolutiveNeg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map___at_instNegRay___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeEquiv___rarg(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RayVector_coe___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RayVector_instNeg___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_instInvolutiveNeg___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_instInvolutiveNeg___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNegRay(lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_instInvolutiveNeg___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map___at_instNegRay___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionRay(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_Setoid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionRayVector(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_instNeg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map___at_instNegRay___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RayVector_coe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNegRay___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNegRay___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMulActionRayVector___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rayOfNeZero___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Ray_map___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RayVector_coe___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RayVector_coe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RayVector_coe___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RayVector_coe___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RayVector_coe___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RayVector_coe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RayVector_coe(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RayVector_Setoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RayVector_Setoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RayVector_Setoid(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_rayOfNeZero___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_rayOfNeZero___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_rayOfNeZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_rayOfNeZero(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_LinearEquiv_toAddEquiv___rarg(x_1);
x_3 = l_Equiv_subtypeEquiv___rarg(x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_RayVector_mapLinearEquiv___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RayVector_mapLinearEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RayVector_mapLinearEquiv(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_RayVector_mapLinearEquiv___rarg(x_1);
x_3 = l_Quot_congr___rarg(x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Module_Ray_map___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Module_Ray_map(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_instMulActionRayVector___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMulActionRayVector(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_instMulActionRayVector___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMulActionRayVector___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_instMulActionRayVector(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMulActionRay___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instMulActionRay(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_instMulActionRay___rarg), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_instMulActionRay___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_instMulActionRay(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RayVector_instNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RayVector_instNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RayVector_instNeg___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RayVector_instNeg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RayVector_instNeg___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RayVector_instInvolutiveNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RayVector_instInvolutiveNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RayVector_instInvolutiveNeg___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RayVector_instInvolutiveNeg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RayVector_instInvolutiveNeg___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_map___at_instNegRay___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_map___at_instNegRay___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Quotient_map___at_instNegRay___spec__1___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_instNegRay___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instNegRay___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_instNegRay___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_closure((void*)(l_Quotient_map___at_instNegRay___spec__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_instNegRay(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instNegRay___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_map___at_instNegRay___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quotient_map___at_instNegRay___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_instNegRay___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_instNegRay___rarg___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instNegRay___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_instNegRay___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_instInvolutiveNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_instNegRay___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_closure((void*)(l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_instInvolutiveNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Module_Ray_instInvolutiveNeg___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quotient_map___at_Module_Ray_instInvolutiveNeg___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Module_Ray_instInvolutiveNeg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Module_Ray_instInvolutiveNeg___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Module_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Subring_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_LinearIndependent_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_LinearCombination(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Ray(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Module_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Subring_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_LinearIndependent_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_LinearCombination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___closed__1 = _init_l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_RayVector_mapLinearEquiv___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
