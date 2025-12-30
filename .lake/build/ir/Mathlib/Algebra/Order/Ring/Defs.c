// Lean compiler output
// Module: Mathlib.Algebra.Order.Ring.Defs
// Imports: Init Mathlib.Algebra.Order.Ring.Unbundled.Basic Mathlib.Algebra.CharZero.Defs Mathlib.Algebra.Order.Group.Defs Mathlib.Algebra.Order.GroupWithZero.Unbundled Mathlib.Algebra.Order.Monoid.NatCast Mathlib.Algebra.Order.Monoid.Unbundled.MinMax Mathlib.Algebra.Ring.Defs Mathlib.Tactic.Tauto Mathlib.Algebra.Order.Monoid.Unbundled.ExistsOfLE
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
LEAN_EXPORT lean_object* l_OrderedSemiring_toOrderedAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommRing_toOrderedCommSemiring(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toStrictOrderedCommRing___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing_x27(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommRing_toCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toCommRing___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toStrictOrderedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommRing_toCommRing(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedCancelAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing_x27___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing_x27(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toStrictOrderedCommSemiring(lean_object*);
LEAN_EXPORT lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toStrictOrderedCommRing(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring_x27___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toCommSemiring___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toStrictOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toCommMonoid___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommSemiring_toCommSemiring(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommSemiring_toCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedCancelAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toStrictOrderedCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toCommRing(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedCancelAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedCancelAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toCommSemiring(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toStrictOrderedSemiring(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommRing_toOrderedCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toLinearOrderedCommSemiring(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommRing_toCommRing___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring_x27(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommSemiring_toCommSemiring___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing_x27___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing(lean_object*);
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27(lean_object*);
LEAN_EXPORT lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 1);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_4);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_OrderedSemiring_toOrderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedSemiring_toOrderedAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommSemiring_toCommSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommSemiring_toCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedCommSemiring_toCommSemiring___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommSemiring_toCommSemiring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedCommSemiring_toCommSemiring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_dec(x_11);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 2, x_7);
lean_ctor_set(x_12, 3, x_8);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_12);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set(x_14, 2, x_7);
lean_ctor_set(x_14, 3, x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_5);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedRing_toOrderedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommRing_toCommRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommRing_toCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedCommRing_toCommRing___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommRing_toCommRing___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedCommRing_toCommRing___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedCancelAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 1);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_4);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedCancelAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedSemiring_toOrderedCancelAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toCommSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedCommSemiring_toCommSemiring___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toCommSemiring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_StrictOrderedCommSemiring_toCommSemiring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_dec(x_11);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 2, x_7);
lean_ctor_set(x_12, 3, x_8);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_12);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set(x_14, 2, x_7);
lean_ctor_set(x_14, 3, x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_5);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedRing_toOrderedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toCommRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedCommRing_toCommRing___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toCommRing___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_StrictOrderedCommRing_toCommRing___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 6);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 4);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_4, 1);
lean_dec(x_10);
lean_ctor_set(x_4, 1, x_8);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__3___rarg), 3, 1);
lean_closure_set(x_11, 0, x_1);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_12, 0, x_1);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_1, 6);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 5);
lean_dec(x_16);
x_17 = lean_ctor_get(x_1, 4);
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 3);
lean_dec(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_dec(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_dec(x_20);
x_21 = lean_ctor_get(x_1, 0);
lean_dec(x_21);
lean_ctor_set(x_1, 6, x_13);
lean_ctor_set(x_1, 5, x_12);
lean_ctor_set(x_1, 4, x_11);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_5);
lean_ctor_set(x_22, 2, x_6);
lean_ctor_set(x_22, 3, x_7);
lean_ctor_set(x_22, 4, x_11);
lean_ctor_set(x_22, 5, x_12);
lean_ctor_set(x_22, 6, x_13);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_4, 0);
lean_inc(x_23);
lean_dec(x_4);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_8);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__3___rarg), 3, 1);
lean_closure_set(x_25, 0, x_1);
lean_inc(x_1);
x_26 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_26, 0, x_1);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_27, 0, x_1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 lean_ctor_release(x_1, 4);
 lean_ctor_release(x_1, 5);
 lean_ctor_release(x_1, 6);
 x_28 = x_1;
} else {
 lean_dec_ref(x_1);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 7, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_5);
lean_ctor_set(x_29, 2, x_6);
lean_ctor_set(x_29, 3, x_7);
lean_ctor_set(x_29, 4, x_25);
lean_ctor_set(x_29, 5, x_26);
lean_ctor_set(x_29, 6, x_27);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 6);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 4);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__3___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__2___rarg), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_LinearOrderedCommSemiring_toLinearOrderedSemiring___elambda__1___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 6);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 5);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 4);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 0);
lean_dec(x_16);
lean_ctor_set(x_1, 6, x_8);
lean_ctor_set(x_1, 5, x_7);
lean_ctor_set(x_1, 4, x_6);
return x_1;
}
else
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_3);
lean_ctor_set(x_17, 2, x_4);
lean_ctor_set(x_17, 3, x_5);
lean_ctor_set(x_17, 4, x_6);
lean_ctor_set(x_17, 5, x_7);
lean_ctor_set(x_17, 6, x_8);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 6);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrder___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrder___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 4);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrder___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrder___elambda__3___rarg), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrder___elambda__2___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrder___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 6);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 5);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 4);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
lean_ctor_set(x_1, 6, x_9);
lean_ctor_set(x_1, 5, x_8);
lean_ctor_set(x_1, 4, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_18, 0, x_6);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_18, 2, x_4);
lean_ctor_set(x_18, 3, x_5);
lean_ctor_set(x_18, 4, x_7);
lean_ctor_set(x_18, 5, x_8);
lean_ctor_set(x_18, 6, x_9);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 3);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommRing_toCommMonoid___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toCommMonoid___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LinearOrderedCommRing_toCommMonoid___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedSemiring___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_OrderedRing_toOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedRing_toOrderedSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommRing_toOrderedCommSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderedRing_toOrderedSemiring___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedCommRing_toOrderedCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedCommRing_toOrderedCommSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedSemiring_toOrderedSemiring_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_StrictOrderedSemiring_toOrderedSemiring_x27___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedSemiring_toOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedSemiring_toOrderedSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_StrictOrderedCommSemiring_toOrderedCommSemiring_x27___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toStrictOrderedSemiring___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toStrictOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedRing_toStrictOrderedSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedRing_toOrderedRing_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_StrictOrderedRing_toOrderedRing_x27___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedRing_toOrderedRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedRing_toOrderedRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedCommRing_toOrderedCommRing_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_StrictOrderedCommRing_toOrderedCommRing_x27___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toStrictOrderedCommSemiring___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toStrictOrderedCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedCommRing_toStrictOrderedCommSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_StrictOrderedCommRing_toOrderedCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StrictOrderedCommRing_toOrderedCommRing___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedCancelAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_dec(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_4, 1);
lean_dec(x_9);
lean_ctor_set(x_4, 1, x_7);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_ctor_get(x_1, 4);
x_16 = lean_ctor_get(x_1, 5);
x_17 = lean_ctor_get(x_1, 6);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_20 = x_4;
} else {
 lean_dec_ref(x_4);
 x_20 = lean_box(0);
}
if (lean_is_scalar(x_20)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_20;
}
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_18);
x_22 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_13);
lean_ctor_set(x_22, 3, x_14);
lean_ctor_set(x_22, 4, x_15);
lean_ctor_set(x_22, 5, x_16);
lean_ctor_set(x_22, 6, x_17);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedSemiring_toLinearOrderedCancelAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedSemiring_toLinearOrderedCancelAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_dec(x_5);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
lean_ctor_set(x_2, 0, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_ctor_get(x_1, 4);
x_16 = lean_ctor_get(x_1, 5);
x_17 = lean_ctor_get(x_1, 6);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_19 = x_2;
} else {
 lean_dec_ref(x_2);
 x_19 = lean_box(0);
}
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_dec(x_3);
if (lean_is_scalar(x_19)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_19;
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
x_22 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_13);
lean_ctor_set(x_22, 3, x_14);
lean_ctor_set(x_22, 4, x_15);
lean_ctor_set(x_22, 5, x_16);
lean_ctor_set(x_22, 6, x_17);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrderedSemiring___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_1, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 3);
lean_inc(x_11);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_dec(x_14);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_9);
lean_ctor_set(x_15, 2, x_10);
lean_ctor_set(x_15, 3, x_11);
lean_ctor_set(x_5, 1, x_8);
lean_ctor_set(x_5, 0, x_15);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_5, 0);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_9);
lean_ctor_set(x_17, 2, x_10);
lean_ctor_set(x_17, 3, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
lean_ctor_set(x_1, 0, x_18);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_ctor_get(x_1, 2);
x_21 = lean_ctor_get(x_1, 3);
x_22 = lean_ctor_get(x_1, 4);
x_23 = lean_ctor_get(x_1, 5);
x_24 = lean_ctor_get(x_1, 6);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_3, 2);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 3);
lean_inc(x_28);
lean_dec(x_3);
x_29 = lean_ctor_get(x_5, 0);
lean_inc(x_29);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_30 = x_5;
} else {
 lean_dec_ref(x_5);
 x_30 = lean_box(0);
}
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_26);
lean_ctor_set(x_31, 2, x_27);
lean_ctor_set(x_31, 3, x_28);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_25);
x_33 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_19);
lean_ctor_set(x_33, 2, x_20);
lean_ctor_set(x_33, 3, x_21);
lean_ctor_set(x_33, 4, x_22);
lean_ctor_set(x_33, 5, x_23);
lean_ctor_set(x_33, 6, x_24);
return x_33;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedRing_toLinearOrderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedRing_toLinearOrderedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toStrictOrderedCommRing___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toStrictOrderedCommRing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommRing_toStrictOrderedCommRing___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toStrictOrderedCommRing___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LinearOrderedCommRing_toStrictOrderedCommRing___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_dec(x_5);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
lean_ctor_set(x_2, 0, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_ctor_get(x_1, 4);
x_16 = lean_ctor_get(x_1, 5);
x_17 = lean_ctor_get(x_1, 6);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_19 = x_2;
} else {
 lean_dec_ref(x_2);
 x_19 = lean_box(0);
}
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_dec(x_3);
if (lean_is_scalar(x_19)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_19;
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
x_22 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_13);
lean_ctor_set(x_22, 3, x_14);
lean_ctor_set(x_22, 4, x_15);
lean_ctor_set(x_22, 5, x_16);
lean_ctor_set(x_22, 6, x_17);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommRing_toLinearOrderedCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Unbundled_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharZero_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_GroupWithZero_Unbundled(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_NatCast(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_MinMax(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Tauto(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Unbundled_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharZero_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_GroupWithZero_Unbundled(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_NatCast(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_MinMax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Tauto(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
