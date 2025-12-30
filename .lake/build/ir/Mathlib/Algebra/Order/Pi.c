// Lean compiler output
// Module: Mathlib.Algebra.Order.Pi
// Imports: Init Mathlib.Algebra.ZeroOne.Lemmas Mathlib.Algebra.Order.Monoid.Canonical.Defs Mathlib.Algebra.Order.Ring.Defs Mathlib.Algebra.Ring.Pi
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
LEAN_EXPORT lean_object* l_Pi_orderedCommRing(lean_object*, lean_object*);
lean_object* l_Pi_subNegMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg(lean_object*);
lean_object* l_Pi_preorder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedRing___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
lean_object* l_Pi_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCancelCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg(lean_object*);
lean_object* l_Pi_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedSemiring___rarg(lean_object*);
lean_object* l_Pi_divInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Pi_semiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedRing___rarg(lean_object*);
lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCancelCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedSemiring___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedSemiring___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedRing___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup(lean_object*, lean_object*);
lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedSemiring(lean_object*, lean_object*);
lean_object* l_Pi_ring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid___rarg(lean_object*);
lean_object* l_OrderedRing_toOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedCommMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_preorder(lean_box(0), lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedCommMonoid___rarg___lambda__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_monoid___rarg(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedCommMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedAddCommMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_preorder(lean_box(0), lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedAddCommMonoid___rarg___lambda__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_addMonoid___rarg(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedAddCommMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCancelCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedCommMonoid___rarg___lambda__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_monoid___rarg(x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedCommMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_preorder(lean_box(0), lean_box(0), x_4);
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedCancelCommMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCancelCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedAddCommMonoid___rarg___lambda__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_addMonoid___rarg(x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedAddCommMonoid___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_preorder(lean_box(0), lean_box(0), x_4);
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCancelCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedAddCancelCommMonoid___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_3, x_4);
x_9 = lean_ctor_get(x_7, 2);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_2(x_9, x_2, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_3, x_4);
x_8 = lean_ctor_get(x_6, 3);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_8, x_2, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_divInvMonoid___rarg(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_orderedCommMonoid___rarg(x_4);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 3);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_7, 2);
lean_dec(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__3), 4, 1);
lean_closure_set(x_11, 0, x_1);
lean_ctor_set(x_7, 2, x_11);
x_12 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__4), 4, 1);
lean_closure_set(x_12, 0, x_1);
lean_ctor_set(x_3, 3, x_12);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_5, 0);
lean_dec(x_14);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__3), 4, 1);
lean_closure_set(x_19, 0, x_1);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__4), 4, 1);
lean_closure_set(x_21, 0, x_1);
lean_ctor_set(x_3, 3, x_21);
lean_ctor_set(x_3, 0, x_20);
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_23 = x_5;
} else {
 lean_dec_ref(x_5);
 x_23 = lean_box(0);
}
if (lean_is_scalar(x_23)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_23;
}
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_ctor_get(x_3, 1);
x_27 = lean_ctor_get(x_3, 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_3);
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 lean_ctor_release(x_25, 2);
 x_30 = x_25;
} else {
 lean_dec_ref(x_25);
 x_30 = lean_box(0);
}
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__3), 4, 1);
lean_closure_set(x_31, 0, x_1);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 3, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_29);
lean_ctor_set(x_32, 2, x_31);
x_33 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg___lambda__4), 4, 1);
lean_closure_set(x_33, 0, x_1);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_27);
lean_ctor_set(x_34, 3, x_33);
x_35 = lean_ctor_get(x_5, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_36 = x_5;
} else {
 lean_dec_ref(x_5);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedCommGroup___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedAddCommGroup___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_2);
x_3 = l_Pi_subNegMonoid___rarg(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedAddCommGroup___rarg___lambda__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_orderedAddCommMonoid___rarg(x_4);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 3);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_7, 2);
lean_dec(x_10);
x_11 = lean_alloc_closure((void*)(l_Pi_orderedAddCommGroup___rarg___lambda__3), 2, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_alloc_closure((void*)(l_Pi_addMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_12, 0, x_11);
lean_ctor_set(x_7, 2, x_12);
x_13 = lean_alloc_closure((void*)(l_Pi_subNegMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_13, 0, x_2);
lean_ctor_set(x_3, 3, x_13);
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_5, 0);
lean_dec(x_15);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_20 = lean_alloc_closure((void*)(l_Pi_orderedAddCommGroup___rarg___lambda__3), 2, 1);
lean_closure_set(x_20, 0, x_1);
x_21 = lean_alloc_closure((void*)(l_Pi_addMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_alloc_closure((void*)(l_Pi_subNegMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_23, 0, x_2);
lean_ctor_set(x_3, 3, x_23);
lean_ctor_set(x_3, 0, x_22);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_25 = x_5;
} else {
 lean_dec_ref(x_5);
 x_25 = lean_box(0);
}
if (lean_is_scalar(x_25)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_25;
}
lean_ctor_set(x_26, 0, x_3);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_27 = lean_ctor_get(x_3, 0);
x_28 = lean_ctor_get(x_3, 1);
x_29 = lean_ctor_get(x_3, 2);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_3);
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 lean_ctor_release(x_27, 2);
 x_32 = x_27;
} else {
 lean_dec_ref(x_27);
 x_32 = lean_box(0);
}
x_33 = lean_alloc_closure((void*)(l_Pi_orderedAddCommGroup___rarg___lambda__3), 2, 1);
lean_closure_set(x_33, 0, x_1);
x_34 = lean_alloc_closure((void*)(l_Pi_addMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_34, 0, x_33);
if (lean_is_scalar(x_32)) {
 x_35 = lean_alloc_ctor(0, 3, 0);
} else {
 x_35 = x_32;
}
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_31);
lean_ctor_set(x_35, 2, x_34);
x_36 = lean_alloc_closure((void*)(l_Pi_subNegMonoid___elambda__1___rarg), 4, 1);
lean_closure_set(x_36, 0, x_2);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_28);
lean_ctor_set(x_37, 2, x_29);
lean_ctor_set(x_37, 3, x_36);
x_38 = lean_ctor_get(x_5, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_39 = x_5;
} else {
 lean_dec_ref(x_5);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
LEAN_EXPORT lean_object* l_Pi_orderedAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedAddCommGroup___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedSemiring___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_semiring___rarg(x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedSemiring___rarg___lambda__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_preorder(lean_box(0), lean_box(0), x_4);
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedSemiring___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_semiring___rarg(x_2);
x_4 = l_Pi_orderedSemiring___rarg(x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedCommSemiring___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedRing___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedRing___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_OrderedRing_toOrderedSemiring___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedRing___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_ring___rarg(x_2);
x_4 = lean_alloc_closure((void*)(l_Pi_orderedRing___rarg___lambda__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Pi_orderedSemiring___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Pi_orderedRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedRing___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Pi_orderedRing___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_ring___rarg(x_2);
x_4 = l_Pi_orderedRing___rarg(x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Pi_orderedCommRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_orderedCommRing___rarg), 1, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ZeroOne_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Pi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ZeroOne_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
