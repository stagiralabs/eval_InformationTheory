// Lean compiler output
// Module: Mathlib.Data.Matrix.Diagonal
// Imports: Init Mathlib.Data.Int.Cast.Pi Mathlib.Data.Matrix.Defs Mathlib.Data.Nat.Cast.Basic
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
LEAN_EXPORT lean_object* l_Matrix_diagonal___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_subNegMonoid___rarg(lean_object*);
lean_object* l_Matrix_addCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_one___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diag(lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instIntCastOfZero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddCommGroupWithOne___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddCommMonoidWithOne(lean_object*, lean_object*);
lean_object* l_Matrix_addCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_one___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_one___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_one___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddCommMonoidWithOne___rarg(lean_object*, lean_object*);
lean_object* l_Pi_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_one___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero(lean_object*, lean_object*);
lean_object* l_Matrix_addGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instIntCastOfZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddMonoidWithOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diag___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_one___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddMonoidWithOne___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddCommGroupWithOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_one(lean_object*, lean_object*);
lean_object* l_Matrix_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instIntCastOfZero___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal(lean_object*, lean_object*);
lean_object* l_AddCommGroupWithOne_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_diagonal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_1(x_3, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_1(x_3, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Matrix_instNatCastOfZero___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_4);
x_8 = l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1___rarg(x_1, x_2, x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instNatCastOfZero___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_Matrix_instNatCastOfZero___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_instNatCastOfZero___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_instNatCastOfZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_instNatCastOfZero___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_1(x_3, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instIntCastOfZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Matrix_instNatCastOfZero___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_4);
x_8 = l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1___rarg(x_1, x_2, x_7, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Matrix_instIntCastOfZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instIntCastOfZero___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_Matrix_instIntCastOfZero___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_instIntCastOfZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Matrix_instIntCastOfZero___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_one___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_1(x_3, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_one___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_one___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_one___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Matrix_one___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Matrix_one___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Matrix_diagonal___at_Matrix_one___spec__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_one(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_one___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diagonal___at_Matrix_one___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Matrix_diagonal___at_Matrix_one___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Matrix_one___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_one___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddMonoidWithOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Matrix_instNatCastOfZero___rarg___boxed), 6, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_5);
x_7 = l_Matrix_addMonoid___rarg(x_3);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Matrix_one___rarg(x_1, x_4, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddMonoidWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instAddMonoidWithOne___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Matrix_one___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Pi_subNegMonoid___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_3 = l_AddGroupWithOne_toAddGroup___rarg(x_2);
lean_inc(x_3);
x_4 = l_Matrix_addGroup___rarg(x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Matrix_instAddMonoidWithOne___rarg(x_1, x_5);
x_7 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_closure((void*)(l_Matrix_instIntCastOfZero___rarg___boxed), 6, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_9);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_6, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_ctor_set(x_6, 1, x_13);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 2);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_alloc_closure((void*)(l_Matrix_instAddGroupWithOne___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_16, 0, x_3);
x_17 = lean_alloc_closure((void*)(l_Pi_subNegMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_6);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_15);
lean_ctor_set(x_18, 4, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_6, 0);
x_20 = lean_ctor_get(x_6, 2);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_6);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_20);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_4, 2);
lean_inc(x_24);
lean_dec(x_4);
x_25 = lean_alloc_closure((void*)(l_Matrix_instAddGroupWithOne___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_25, 0, x_3);
x_26 = lean_alloc_closure((void*)(l_Pi_subNegMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_27, 0, x_10);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_24);
lean_ctor_set(x_27, 4, x_26);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instAddGroupWithOne___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddGroupWithOne___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Matrix_instAddGroupWithOne___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddCommMonoidWithOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Matrix_addCommMonoid___rarg(x_3);
x_5 = l_Matrix_instAddMonoidWithOne___rarg(x_1, x_2);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_dec(x_7);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_5);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_4);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddCommMonoidWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instAddCommMonoidWithOne___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddCommGroupWithOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Matrix_addCommGroup___rarg(x_3);
x_5 = l_AddCommGroupWithOne_toAddGroupWithOne___rarg(x_2);
x_6 = l_Matrix_instAddGroupWithOne___rarg(x_1, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_9);
lean_ctor_set(x_11, 3, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Matrix_instAddCommGroupWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instAddCommGroupWithOne___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diag___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = lean_apply_2(x_1, x_2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_diag(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_diag___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Cast_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Matrix_Diagonal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Cast_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
