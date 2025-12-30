// Lean compiler output
// Module: Mathlib.Algebra.Order.Group.Defs
// Imports: Init Mathlib.Algebra.Order.Group.Unbundled.Basic Mathlib.Algebra.Order.Monoid.Defs Mathlib.Algebra.Order.Sub.Defs Mathlib.Util.AssertExists
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
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrderedCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrderedCancelCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__3(lean_object*);
LEAN_EXPORT lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___rarg(lean_object* x_1) {
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
x_7 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3___rarg), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1___rarg), 3, 1);
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
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder___rarg(lean_object* x_1) {
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
x_7 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__3___rarg), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__2___rarg), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__1___rarg), 3, 1);
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
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrderedCancelCommMonoid___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l_LinearOrderedCommGroup_toLinearOrderedCancelCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrderedCancelCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
lean_ctor_set(x_2, 0, x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__3___rarg), 3, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_11, 0, x_1);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = !lean_is_exclusive(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_1, 6);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 5);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 4);
lean_dec(x_16);
x_17 = lean_ctor_get(x_1, 3);
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_dec(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_dec(x_19);
x_20 = lean_ctor_get(x_1, 0);
lean_dec(x_20);
lean_ctor_set(x_1, 6, x_12);
lean_ctor_set(x_1, 5, x_11);
lean_ctor_set(x_1, 4, x_10);
return x_1;
}
else
{
lean_object* x_21; 
lean_dec(x_1);
x_21 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_4);
lean_ctor_set(x_21, 2, x_5);
lean_ctor_set(x_21, 3, x_6);
lean_ctor_set(x_21, 4, x_10);
lean_ctor_set(x_21, 5, x_11);
lean_ctor_set(x_21, 6, x_12);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
lean_dec(x_3);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__3___rarg), 3, 1);
lean_closure_set(x_25, 0, x_1);
lean_inc(x_1);
x_26 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__2___rarg), 3, 1);
lean_closure_set(x_26, 0, x_1);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___elambda__1___rarg), 3, 1);
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
lean_ctor_set(x_29, 1, x_4);
lean_ctor_set(x_29, 2, x_5);
lean_ctor_set(x_29, 3, x_6);
lean_ctor_set(x_29, 4, x_25);
lean_ctor_set(x_29, 5, x_26);
lean_ctor_set(x_29, 6, x_27);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrderedAddCancelCommMonoid___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_AssertExists(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_AssertExists(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
