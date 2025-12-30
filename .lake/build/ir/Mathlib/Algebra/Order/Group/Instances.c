// Lean compiler output
// Module: Mathlib.Algebra.Order.Group.Instances
// Imports: Init Mathlib.Algebra.Order.Group.Defs Mathlib.Algebra.Order.Monoid.OrderDual
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
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_orderedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__3(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_orderedCommGroup___rarg(lean_object*);
lean_object* l_OrderDual_instLinearOrder___rarg(lean_object*);
lean_object* l_OrderDual_orderedAddCommMonoid___rarg(lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__2(lean_object*);
lean_object* l_OrderDual_orderedCommMonoid___rarg(lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_orderedAddCommGroup___rarg(lean_object*);
lean_object* l_LinearOrderedCommGroup_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_orderedCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup(lean_object*);
lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___rarg(lean_object*);
lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_orderedCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(x_1);
lean_inc(x_2);
x_3 = l_OrderDual_orderedCommMonoid___rarg(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
lean_ctor_set(x_4, 0, x_5);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 0);
lean_dec(x_9);
lean_ctor_set(x_3, 0, x_4);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_13);
lean_ctor_set(x_15, 3, x_14);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_17 = x_3;
} else {
 lean_dec_ref(x_3);
 x_17 = lean_box(0);
}
if (lean_is_scalar(x_17)) {
 x_18 = lean_alloc_ctor(0, 2, 0);
} else {
 x_18 = x_17;
}
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_OrderDual_orderedCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_orderedCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_orderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(x_1);
lean_inc(x_2);
x_3 = l_OrderDual_orderedAddCommMonoid___rarg(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
lean_ctor_set(x_4, 0, x_5);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 0);
lean_dec(x_9);
lean_ctor_set(x_3, 0, x_4);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_13);
lean_ctor_set(x_15, 3, x_14);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_17 = x_3;
} else {
 lean_dec_ref(x_3);
 x_17 = lean_box(0);
}
if (lean_is_scalar(x_17)) {
 x_18 = lean_alloc_ctor(0, 2, 0);
} else {
 x_18 = x_17;
}
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_OrderDual_orderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_orderedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidableLe__mathlib___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidableLt__mathlib___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_OrderDual_orderedCommGroup___rarg(x_2);
x_4 = l_LinearOrderedCommGroup_toLinearOrder___rarg(x_1);
lean_inc(x_4);
x_5 = l_OrderDual_instLinearOrder___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_5, 6);
lean_dec(x_7);
x_8 = lean_ctor_get(x_5, 5);
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 4);
lean_dec(x_9);
x_10 = lean_ctor_get(x_5, 0);
lean_dec(x_10);
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedCommGroup___rarg___lambda__1), 3, 1);
lean_closure_set(x_11, 0, x_4);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_12, 0, x_4);
x_13 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedCommGroup___rarg___lambda__2), 3, 1);
lean_closure_set(x_13, 0, x_4);
lean_ctor_set(x_5, 6, x_13);
lean_ctor_set(x_5, 5, x_12);
lean_ctor_set(x_5, 4, x_11);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_5, 1);
x_15 = lean_ctor_get(x_5, 2);
x_16 = lean_ctor_get(x_5, 3);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
lean_inc(x_4);
x_17 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedCommGroup___rarg___lambda__1), 3, 1);
lean_closure_set(x_17, 0, x_4);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_18, 0, x_4);
x_19 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedCommGroup___rarg___lambda__2), 3, 1);
lean_closure_set(x_19, 0, x_4);
x_20 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidableLt__mathlib___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidableEq__mathlib___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidableLe__mathlib___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_OrderDual_orderedAddCommGroup___rarg(x_2);
x_4 = l_LinearOrderedAddCommGroup_toLinearOrder___rarg(x_1);
lean_inc(x_4);
x_5 = l_OrderDual_instLinearOrder___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_5, 6);
lean_dec(x_7);
x_8 = lean_ctor_get(x_5, 5);
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 4);
lean_dec(x_9);
x_10 = lean_ctor_get(x_5, 0);
lean_dec(x_10);
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__3___rarg), 3, 1);
lean_closure_set(x_11, 0, x_4);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__2___rarg), 3, 1);
lean_closure_set(x_12, 0, x_4);
x_13 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__1___rarg), 3, 1);
lean_closure_set(x_13, 0, x_4);
lean_ctor_set(x_5, 6, x_13);
lean_ctor_set(x_5, 5, x_12);
lean_ctor_set(x_5, 4, x_11);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_5, 1);
x_15 = lean_ctor_get(x_5, 2);
x_16 = lean_ctor_get(x_5, 3);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
lean_inc(x_4);
x_17 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__3___rarg), 3, 1);
lean_closure_set(x_17, 0, x_4);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__2___rarg), 3, 1);
lean_closure_set(x_18, 0, x_4);
x_19 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___elambda__1___rarg), 3, 1);
lean_closure_set(x_19, 0, x_4);
x_20 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_OrderDual_linearOrderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_linearOrderedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_OrderDual(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Group_Instances(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_OrderDual(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
