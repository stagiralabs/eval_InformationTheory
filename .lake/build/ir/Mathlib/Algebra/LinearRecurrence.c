// Lean compiler output
// Module: Mathlib.Algebra.LinearRecurrence
// Imports: Init Mathlib.Algebra.Polynomial.Eval.Defs Mathlib.LinearAlgebra.Dimension.Constructions
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
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
static lean_object* l_instInhabitedLinearRecurrence___rarg___closed__1;
static lean_object* l_LinearRecurrence_mkSol___rarg___closed__1;
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace(lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_mkSol___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_toInit___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedLinearRecurrence___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_mkSol___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_tupleSucc___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol(lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_toInit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedLinearRecurrence(lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedLinearRecurrence___rarg(lean_object*);
lean_object* l_isEmptyElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_LinearRecurrence_toInit___spec__1___closed__1;
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_LinearRecurrence_toInit___rarg___closed__1;
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_tupleSucc___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_mkSol___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_instInhabitedLinearRecurrence___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_isEmptyElim___boxed), 4, 3);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
lean_closure_set(x_1, 2, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_instInhabitedLinearRecurrence___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_instInhabitedLinearRecurrence___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instInhabitedLinearRecurrence(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInhabitedLinearRecurrence___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInhabitedLinearRecurrence___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instInhabitedLinearRecurrence___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_mkSol___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Multiset_map___rarg(x_4, x_3);
x_9 = l_Multiset_sum___rarg(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_mkSol___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_LinearRecurrence_mkSol___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_7);
x_10 = lean_apply_1(x_9, x_7);
x_11 = lean_nat_sub(x_3, x_4);
x_12 = lean_nat_add(x_11, x_7);
lean_dec(x_7);
lean_dec(x_11);
x_13 = l_LinearRecurrence_mkSol___rarg(x_5, x_2, x_6, x_12);
x_14 = lean_apply_2(x_8, x_10, x_13);
return x_14;
}
}
static lean_object* _init_l_LinearRecurrence_mkSol___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_nat_dec_lt(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_LinearRecurrence_mkSol___rarg___closed__1;
lean_inc(x_5);
x_10 = l_List_ofFn___rarg(x_5, x_9);
lean_inc(x_1);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_LinearRecurrence_mkSol___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_11, 0, x_8);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
lean_closure_set(x_11, 4, x_1);
lean_closure_set(x_11, 5, x_3);
x_12 = l_Finset_sum___at_LinearRecurrence_mkSol___spec__1___rarg(x_1, x_2, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_apply_1(x_3, x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearRecurrence_mkSol___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_mkSol___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_sum___at_LinearRecurrence_mkSol___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_mkSol___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearRecurrence_mkSol___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearRecurrence_solSpace___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearRecurrence_solSpace___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_solSpace___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearRecurrence_solSpace___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearRecurrence_mkSol___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearRecurrence_toInit___elambda__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_RingHom_id___at_LinearRecurrence_toInit___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_toInit___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearRecurrence_toInit___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_LinearRecurrence_toInit___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LinearRecurrence_toInit___rarg___lambda__3), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_LinearRecurrence_toInit___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_LinearRecurrence_toInit___rarg___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearRecurrence_toInit___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_toInit___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearRecurrence_toInit___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearRecurrence_toInit___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_toInit___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearRecurrence_toInit___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_tupleSucc___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearRecurrence_toInit___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Multiset_map___rarg(x_4, x_3);
x_9 = l_Multiset_sum___rarg(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_4);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_1(x_3, x_4);
x_9 = lean_apply_2(x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_nat_dec_lt(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
x_10 = l_LinearRecurrence_mkSol___rarg___closed__1;
x_11 = l_List_ofFn___rarg(x_8, x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_LinearRecurrence_tupleSucc___rarg___lambda__1), 4, 3);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_4);
x_13 = l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2___rarg(x_3, x_1, x_11, x_12);
lean_dec(x_1);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_1(x_4, x_7);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_LinearRecurrence_tupleSucc___rarg___lambda__2___boxed), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearRecurrence_tupleSucc___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearRecurrence_tupleSucc___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearRecurrence_tupleSucc___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_sum___at_LinearRecurrence_tupleSucc___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearRecurrence_tupleSucc___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearRecurrence_tupleSucc___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Eval_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Dimension_Constructions(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_LinearRecurrence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Eval_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Dimension_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instInhabitedLinearRecurrence___rarg___closed__1 = _init_l_instInhabitedLinearRecurrence___rarg___closed__1();
lean_mark_persistent(l_instInhabitedLinearRecurrence___rarg___closed__1);
l_LinearRecurrence_mkSol___rarg___closed__1 = _init_l_LinearRecurrence_mkSol___rarg___closed__1();
lean_mark_persistent(l_LinearRecurrence_mkSol___rarg___closed__1);
l_RingHom_id___at_LinearRecurrence_toInit___spec__1___closed__1 = _init_l_RingHom_id___at_LinearRecurrence_toInit___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_LinearRecurrence_toInit___spec__1___closed__1);
l_LinearRecurrence_toInit___rarg___closed__1 = _init_l_LinearRecurrence_toInit___rarg___closed__1();
lean_mark_persistent(l_LinearRecurrence_toInit___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
