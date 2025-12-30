// Lean compiler output
// Module: Mathlib.Algebra.Order.Positive.Ring
// Imports: Init Mathlib.Algebra.Order.Ring.Defs Mathlib.Algebra.Ring.InjSurj Mathlib.Tactic.FastInstance
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
lean_object* l_Subtype_instLinearOrder___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_addLeftCancelSemigroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instPowSubtypeLtOfNatNat__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_linearOrderedCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instOneSubtypeLtOfNat___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instSemigroupSubtypeLtOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instMonoidSubtypeLtOfNat___rarg(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instMonoidSubtypeLtOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instAddSubtypeLtOfNat__mathlib(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instOneSubtypeLtOfNat___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instOneSubtypeLtOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Positive_linearOrderedCancelCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instSemigroupSubtypeLtOfNat___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_addRightCancelSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instDistribSubtypeLtOfNat___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_addSemigroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_addCommSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Positive_orderedCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instMulSubtypeLtOfNat__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_addRightCancelSemigroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instAddSubtypeLtOfNat__mathlib___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_partialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_orderedCommMonoid___rarg(lean_object*);
lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instMonoidSubtypeLtOfNat___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instMulSubtypeLtOfNat__mathlib(lean_object*);
lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(lean_object*);
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instPowSubtypeLtOfNatNat__mathlib(lean_object*);
lean_object* l_StrictOrderedSemiring_toOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_addSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Positive_instDistribSubtypeLtOfNat(lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Positive_addLeftCancelSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Positive_addCommSemigroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Positive_instAddSubtypeLtOfNat__mathlib___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Positive_instAddSubtypeLtOfNat__mathlib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Positive_instAddSubtypeLtOfNat__mathlib___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Positive_addSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Positive_addSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_addSemigroup___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_addCommSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Positive_addCommSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_addCommSemigroup___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_addLeftCancelSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Positive_addLeftCancelSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_addLeftCancelSemigroup___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_addRightCancelSemigroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Positive_addRightCancelSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_addRightCancelSemigroup___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instMulSubtypeLtOfNat__mathlib___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, x_2, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Positive_instMulSubtypeLtOfNat__mathlib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Positive_instMulSubtypeLtOfNat__mathlib___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Positive_instPowSubtypeLtOfNatNat__mathlib___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_3, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Positive_instPowSubtypeLtOfNatNat__mathlib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instPowSubtypeLtOfNatNat__mathlib___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instSemigroupSubtypeLtOfNat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instSemigroupSubtypeLtOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instSemigroupSubtypeLtOfNat___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instDistribSubtypeLtOfNat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_StrictOrderedSemiring_toOrderedSemiring___rarg(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
lean_closure_set(x_9, 2, lean_box(0));
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Positive_instDistribSubtypeLtOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instDistribSubtypeLtOfNat___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instOneSubtypeLtOfNat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_2);
x_4 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Positive_instOneSubtypeLtOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instOneSubtypeLtOfNat___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instOneSubtypeLtOfNat___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Positive_instOneSubtypeLtOfNat___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_instMonoidSubtypeLtOfNat___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Positive_instMonoidSubtypeLtOfNat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Positive_instOneSubtypeLtOfNat___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_Positive_instMonoidSubtypeLtOfNat___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Positive_instMonoidSubtypeLtOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_instMonoidSubtypeLtOfNat___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_orderedCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = l_Positive_instMonoidSubtypeLtOfNat___rarg(x_1);
x_3 = l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Subtype_partialOrder(lean_box(0), x_4, lean_box(0));
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Positive_orderedCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_orderedCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Positive_linearOrderedCancelCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_1);
x_2 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_1);
x_3 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_2);
x_4 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_3);
lean_inc(x_4);
x_5 = l_Subtype_instLinearOrder___rarg(x_4, lean_box(0));
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Positive_orderedCommMonoid___rarg(x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_7, 1);
lean_dec(x_9);
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 6);
lean_dec(x_12);
x_13 = lean_ctor_get(x_5, 5);
lean_dec(x_13);
x_14 = lean_ctor_get(x_5, 4);
lean_dec(x_14);
lean_ctor_set(x_7, 1, x_11);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_15, 0, x_4);
lean_inc(x_4);
x_16 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_16, 0, x_4);
x_17 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_17, 0, x_4);
lean_ctor_set(x_5, 6, x_17);
lean_ctor_set(x_5, 5, x_16);
lean_ctor_set(x_5, 4, x_15);
lean_ctor_set(x_5, 0, x_7);
return x_5;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_5, 1);
x_20 = lean_ctor_get(x_5, 2);
x_21 = lean_ctor_get(x_5, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_5);
lean_ctor_set(x_7, 1, x_18);
lean_inc(x_4);
x_22 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_22, 0, x_4);
lean_inc(x_4);
x_23 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_23, 0, x_4);
x_24 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_4);
x_25 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_21);
lean_ctor_set(x_25, 4, x_22);
lean_ctor_set(x_25, 5, x_23);
lean_ctor_set(x_25, 6, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_26 = lean_ctor_get(x_7, 0);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_ctor_get(x_5, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_5, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_5, 3);
lean_inc(x_30);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 x_31 = x_5;
} else {
 lean_dec_ref(x_5);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_27);
lean_inc(x_4);
x_33 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_33, 0, x_4);
lean_inc(x_4);
x_34 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_34, 0, x_4);
x_35 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_35, 0, x_4);
if (lean_is_scalar(x_31)) {
 x_36 = lean_alloc_ctor(0, 7, 0);
} else {
 x_36 = x_31;
}
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_28);
lean_ctor_set(x_36, 2, x_29);
lean_ctor_set(x_36, 3, x_30);
lean_ctor_set(x_36, 4, x_33);
lean_ctor_set(x_36, 5, x_34);
lean_ctor_set(x_36, 6, x_35);
return x_36;
}
}
}
LEAN_EXPORT lean_object* l_Positive_linearOrderedCancelCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Positive_linearOrderedCancelCommMonoid___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_InjSurj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FastInstance(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Positive_Ring(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_InjSurj(builtin, lean_io_mk_world());
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
