// Lean compiler output
// Module: Mathlib.Algebra.Ring.Subsemiring.Order
// Imports: Init Mathlib.Algebra.Order.Ring.InjSurj Mathlib.Algebra.Ring.Subsemiring.Defs Mathlib.Order.Interval.Set.Defs Mathlib.Tactic.FastInstance
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
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedCommSemiring(lean_object*);
lean_object* l_Subtype_instLinearOrder___rarg(lean_object*, lean_object*);
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedCommSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedCommSemiring(lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedSemiring(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedCommSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedCommSemiring(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedCommSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedSemiring(lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedCommSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedCommSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedSemiring___rarg(lean_object*, lean_object*);
lean_object* l_SubsemiringClass_toSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedCommSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedCommSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_nonneg___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedCommSemiring(lean_object*, lean_object*);
lean_object* l_Subtype_partialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_nonneg___rarg(lean_object*);
lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subsemiring_nonneg(lean_object*);
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
lean_object* l_StrictOrderedSemiring_toOrderedSemiring___rarg(lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedCommSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_SubsemiringClass_toSemiring___rarg(x_2, lean_box(0), x_5, x_1, lean_box(0));
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Subtype_partialOrder(lean_box(0), x_7, lean_box(0));
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubsemiringClass_toOrderedSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_StrictOrderedSemiring_toOrderedSemiring___rarg(x_3);
lean_inc(x_5);
x_6 = l_SubsemiringClass_toOrderedSemiring___rarg(x_1, x_2, x_5, lean_box(0));
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_Subtype_partialOrder(lean_box(0), x_9, lean_box(0));
lean_dec(x_9);
lean_ctor_set(x_6, 1, x_10);
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = l_Subtype_partialOrder(lean_box(0), x_12, lean_box(0));
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubsemiringClass_toStrictOrderedSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedCommSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubsemiringClass_toOrderedSemiring___rarg(x_1, x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toOrderedCommSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubsemiringClass_toOrderedCommSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedCommSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_SubsemiringClass_toStrictOrderedSemiring___rarg(x_1, x_2, x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toStrictOrderedCommSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubsemiringClass_toStrictOrderedCommSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_SubsemiringClass_toStrictOrderedSemiring___rarg(x_1, x_2, x_5, lean_box(0));
x_7 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_3);
x_8 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_7);
lean_inc(x_8);
x_9 = l_Subtype_instLinearOrder___rarg(x_8, lean_box(0));
x_10 = l_LinearOrder_toLattice___rarg(x_9);
lean_inc(x_10);
x_11 = l_Lattice_toSemilatticeInf___rarg(x_10);
x_12 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_9, 6);
lean_dec(x_16);
x_17 = lean_ctor_get(x_9, 5);
lean_dec(x_17);
x_18 = lean_ctor_get(x_9, 4);
lean_dec(x_18);
x_19 = lean_ctor_get(x_9, 2);
lean_dec(x_19);
x_20 = lean_ctor_get(x_9, 1);
lean_dec(x_20);
x_21 = lean_ctor_get(x_9, 0);
lean_dec(x_21);
lean_inc(x_8);
x_22 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_22, 0, x_8);
lean_inc(x_8);
x_23 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_23, 0, x_8);
x_24 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_8);
lean_ctor_set(x_9, 6, x_24);
lean_ctor_set(x_9, 5, x_23);
lean_ctor_set(x_9, 4, x_22);
lean_ctor_set(x_9, 2, x_14);
lean_ctor_set(x_9, 1, x_12);
lean_ctor_set(x_9, 0, x_6);
return x_9;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_9, 3);
lean_inc(x_25);
lean_dec(x_9);
lean_inc(x_8);
x_26 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_26, 0, x_8);
lean_inc(x_8);
x_27 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_27, 0, x_8);
x_28 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_28, 0, x_8);
x_29 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_29, 0, x_6);
lean_ctor_set(x_29, 1, x_12);
lean_ctor_set(x_29, 2, x_14);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set(x_29, 4, x_26);
lean_ctor_set(x_29, 5, x_27);
lean_ctor_set(x_29, 6, x_28);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubsemiringClass_toLinearOrderedSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedCommSemiring___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_SubsemiringClass_toStrictOrderedSemiring___rarg(x_1, x_2, x_5, lean_box(0));
x_7 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_3);
x_8 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_7);
x_9 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_8);
lean_inc(x_9);
x_10 = l_Subtype_instLinearOrder___rarg(x_9, lean_box(0));
x_11 = l_LinearOrder_toLattice___rarg(x_10);
lean_inc(x_11);
x_12 = l_Lattice_toSemilatticeInf___rarg(x_11);
x_13 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_10, 6);
lean_dec(x_17);
x_18 = lean_ctor_get(x_10, 5);
lean_dec(x_18);
x_19 = lean_ctor_get(x_10, 4);
lean_dec(x_19);
x_20 = lean_ctor_get(x_10, 2);
lean_dec(x_20);
x_21 = lean_ctor_get(x_10, 1);
lean_dec(x_21);
x_22 = lean_ctor_get(x_10, 0);
lean_dec(x_22);
lean_inc(x_9);
x_23 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_23, 0, x_9);
lean_inc(x_9);
x_24 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_9);
x_25 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_25, 0, x_9);
lean_ctor_set(x_10, 6, x_25);
lean_ctor_set(x_10, 5, x_24);
lean_ctor_set(x_10, 4, x_23);
lean_ctor_set(x_10, 2, x_15);
lean_ctor_set(x_10, 1, x_13);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_10, 3);
lean_inc(x_26);
lean_dec(x_10);
lean_inc(x_9);
x_27 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_27, 0, x_9);
lean_inc(x_9);
x_28 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_28, 0, x_9);
x_29 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_29, 0, x_9);
x_30 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_30, 0, x_6);
lean_ctor_set(x_30, 1, x_13);
lean_ctor_set(x_30, 2, x_15);
lean_ctor_set(x_30, 3, x_26);
lean_ctor_set(x_30, 4, x_27);
lean_ctor_set(x_30, 5, x_28);
lean_ctor_set(x_30, 6, x_29);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_SubsemiringClass_toLinearOrderedCommSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SubsemiringClass_toLinearOrderedCommSemiring___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubsemiringClass_toOrderedSemiring___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toOrderedSemiring___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubsemiringClass_toStrictOrderedSemiring___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toStrictOrderedSemiring___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedCommSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubsemiringClass_toOrderedSemiring___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toOrderedCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toOrderedCommSemiring___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedCommSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubsemiringClass_toStrictOrderedSemiring___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toStrictOrderedCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toStrictOrderedCommSemiring___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubsemiringClass_toLinearOrderedSemiring___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toLinearOrderedSemiring___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedCommSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_SubsemiringClass_toLinearOrderedCommSemiring___rarg(x_3, x_2, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_toLinearOrderedCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_toLinearOrderedCommSemiring___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_nonneg___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_nonneg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subsemiring_nonneg___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subsemiring_nonneg___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subsemiring_nonneg___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_InjSurj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Subsemiring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FastInstance(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Subsemiring_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_InjSurj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Subsemiring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FastInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
