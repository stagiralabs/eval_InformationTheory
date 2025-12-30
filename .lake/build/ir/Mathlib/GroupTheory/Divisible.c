// Lean compiler output
// Module: Mathlib.GroupTheory.Divisible
// Imports: Init Mathlib.Algebra.Group.ULift Mathlib.Algebra.Group.Subgroup.Pointwise Mathlib.Algebra.Module.NatInt Mathlib.GroupTheory.QuotientGroup.Defs Mathlib.Tactic.NormNum.Eq
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
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instRootableBy___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_divisibleBy___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_divisibleBy___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_rootableBy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_rootableBy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat_match__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instRootableBy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___rarg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Pi_divisibleBy___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_divisibleBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_rootableBy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divisibleByIntOfCharZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_divisibleBy___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divisibleByIntOfCharZero___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat(lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat_match__1(lean_object*);
LEAN_EXPORT lean_object* l_Pi_divisibleBy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_divisibleBy___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt(lean_object*);
LEAN_EXPORT lean_object* l_Prod_rootableBy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_divisibleBy___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___rarg(lean_object*, lean_object*);
static lean_object* l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1;
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_divisibleBy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_divisibleBy___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_divisibleBy___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divisibleByIntOfCharZero(lean_object*);
LEAN_EXPORT lean_object* l_Pi_rootableBy___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_divisibleBy(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_rootableBy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instRootableBy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_rootableBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
x_6 = lean_apply_3(x_1, x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_rootableBy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Pi_rootableBy___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_rootableBy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pi_rootableBy(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_divisibleBy___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_2, x_4);
x_6 = lean_apply_3(x_1, x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_divisibleBy___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Pi_divisibleBy___elambda__1___rarg), 4, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_divisibleBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_divisibleBy___elambda__1___rarg), 4, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_divisibleBy(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_divisibleBy___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_divisibleBy___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Pi_divisibleBy___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Pi_divisibleBy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Pi_divisibleBy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_rootableBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_5, x_4);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_apply_2(x_2, x_7, x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_rootableBy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Prod_rootableBy___rarg), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_rootableBy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Prod_rootableBy(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_divisibleBy___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_5, x_4);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_apply_2(x_2, x_7, x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_divisibleBy___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Prod_divisibleBy___elambda__1___rarg), 4, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_divisibleBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Prod_divisibleBy___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Prod_divisibleBy(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Prod_divisibleBy___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Prod_divisibleBy___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Prod_divisibleBy___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Prod_divisibleBy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Prod_divisibleBy___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ULift_instRootableBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_instRootableBy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ULift_instRootableBy___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ULift_instRootableBy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ULift_instRootableBy(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ULift_instDivisibleBy___elambda__1___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ULift_instDivisibleBy___elambda__1___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ULift_instDivisibleBy___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ULift_instDivisibleBy___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ULift_instDivisibleBy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ULift_instDivisibleBy___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_divisibleByIntOfCharZero___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 4);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_2(x_5, x_3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_divisibleByIntOfCharZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_divisibleByIntOfCharZero___rarg___lambda__1), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_divisibleByIntOfCharZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_divisibleByIntOfCharZero___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1;
x_6 = lean_int_dec_lt(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_abs(x_4);
x_8 = lean_apply_2(x_2, x_3, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_nat_abs(x_4);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = l_DivInvOneMonoid_toInvOneClass___rarg(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_15 = lean_apply_2(x_2, x_3, x_14);
x_16 = lean_apply_1(x_13, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Group_rootableByIntOfRootableByNat___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Group_rootableByIntOfRootableByNat___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1;
x_5 = lean_int_dec_lt(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_nat_abs(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_8 = lean_nat_abs(x_1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddGroup_divisibleByIntOfDivisibleByNat_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddGroup_divisibleByIntOfDivisibleByNat_match__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1;
x_6 = lean_int_dec_lt(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_abs(x_4);
x_8 = lean_apply_2(x_2, x_3, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_nat_abs(x_4);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_15 = lean_apply_2(x_2, x_3, x_14);
x_16 = lean_apply_1(x_13, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddGroup_divisibleByIntOfDivisibleByNat___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddGroup_divisibleByIntOfDivisibleByNat___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_nat_to_int(x_3);
x_5 = lean_apply_2(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Group_rootableByNatOfRootableByInt___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Group_rootableByNatOfRootableByInt___elambda__1___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Group_rootableByNatOfRootableByInt___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Group_rootableByNatOfRootableByInt___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Group_rootableByNatOfRootableByInt___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Group_rootableByNatOfRootableByInt___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_nat_to_int(x_3);
x_5 = lean_apply_2(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1___rarg), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddGroup_divisibleByNatOfDivisibleByInt___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddGroup_divisibleByNatOfDivisibleByInt___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddGroup_divisibleByNatOfDivisibleByInt___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddGroup_divisibleByNatOfDivisibleByInt___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_NatInt(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_QuotientGroup_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum_Eq(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Divisible(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_NatInt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_QuotientGroup_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum_Eq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1 = _init_l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1();
lean_mark_persistent(l_Group_rootableByIntOfRootableByNat___elambda__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
