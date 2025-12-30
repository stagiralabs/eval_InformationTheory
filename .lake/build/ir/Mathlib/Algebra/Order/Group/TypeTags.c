// Lean compiler output
// Module: Mathlib.Algebra.Order.Group.TypeTags
// Imports: Init Mathlib.Algebra.Order.Group.Defs Mathlib.Algebra.Order.Monoid.TypeTags
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
lean_object* l_Additive_orderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Additive_linearOrderedAddCommGroup(lean_object*);
lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Additive_orderedAddCommGroup___rarg(lean_object*);
lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Additive_subNegMonoid___rarg(lean_object*);
lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(lean_object*);
lean_object* l_LinearOrderedCommGroup_toLinearOrder___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Additive_linearOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_linearOrderedCommGroup___rarg(lean_object*);
lean_object* l_LinearOrderedCommGroup_toLinearOrder___rarg(lean_object*);
lean_object* l_Multiplicative_orderedCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_orderedCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_linearOrderedCommGroup(lean_object*);
lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___rarg(lean_object*);
lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(lean_object*);
lean_object* l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiplicative_divInvMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_orderedCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_Additive_orderedAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_Multiplicative_orderedCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Multiplicative_divInvMonoid___rarg(x_2);
x_4 = l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(x_1);
x_5 = l_Multiplicative_orderedCommMonoid___rarg(x_4);
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
LEAN_EXPORT lean_object* l_Multiplicative_orderedCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiplicative_orderedCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Additive_orderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Additive_subNegMonoid___rarg(x_2);
x_4 = l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(x_1);
x_5 = l_Additive_orderedAddCommMonoid___rarg(x_4);
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
LEAN_EXPORT lean_object* l_Additive_orderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Additive_orderedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiplicative_linearOrderedCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_1);
x_2 = l_LinearOrderedAddCommGroup_toLinearOrder___rarg(x_1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = l_Multiplicative_orderedCommGroup___rarg(x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_7, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3___rarg), 3, 1);
lean_closure_set(x_11, 0, x_1);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2___rarg), 3, 1);
lean_closure_set(x_12, 0, x_1);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1___rarg), 3, 1);
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
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_22, 0, x_7);
lean_ctor_set(x_22, 1, x_4);
lean_ctor_set(x_22, 2, x_5);
lean_ctor_set(x_22, 3, x_6);
lean_ctor_set(x_22, 4, x_11);
lean_ctor_set(x_22, 5, x_12);
lean_ctor_set(x_22, 6, x_13);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_inc(x_1);
x_26 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__3___rarg), 3, 1);
lean_closure_set(x_26, 0, x_1);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__2___rarg), 3, 1);
lean_closure_set(x_27, 0, x_1);
lean_inc(x_1);
x_28 = lean_alloc_closure((void*)(l_LinearOrderedAddCommGroup_toLinearOrder___elambda__1___rarg), 3, 1);
lean_closure_set(x_28, 0, x_1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 lean_ctor_release(x_1, 4);
 lean_ctor_release(x_1, 5);
 lean_ctor_release(x_1, 6);
 x_29 = x_1;
} else {
 lean_dec_ref(x_1);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 7, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_4);
lean_ctor_set(x_30, 2, x_5);
lean_ctor_set(x_30, 3, x_6);
lean_ctor_set(x_30, 4, x_26);
lean_ctor_set(x_30, 5, x_27);
lean_ctor_set(x_30, 6, x_28);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_Multiplicative_linearOrderedCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiplicative_linearOrderedCommGroup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Additive_linearOrderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_1);
x_2 = l_LinearOrderedCommGroup_toLinearOrder___rarg(x_1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = l_Additive_orderedAddCommGroup___rarg(x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_7, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__3___rarg), 3, 1);
lean_closure_set(x_11, 0, x_1);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__2___rarg), 3, 1);
lean_closure_set(x_12, 0, x_1);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__1___rarg), 3, 1);
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
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_22, 0, x_7);
lean_ctor_set(x_22, 1, x_4);
lean_ctor_set(x_22, 2, x_5);
lean_ctor_set(x_22, 3, x_6);
lean_ctor_set(x_22, 4, x_11);
lean_ctor_set(x_22, 5, x_12);
lean_ctor_set(x_22, 6, x_13);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_inc(x_1);
x_26 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__3___rarg), 3, 1);
lean_closure_set(x_26, 0, x_1);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__2___rarg), 3, 1);
lean_closure_set(x_27, 0, x_1);
lean_inc(x_1);
x_28 = lean_alloc_closure((void*)(l_LinearOrderedCommGroup_toLinearOrder___elambda__1___rarg), 3, 1);
lean_closure_set(x_28, 0, x_1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 lean_ctor_release(x_1, 4);
 lean_ctor_release(x_1, 5);
 lean_ctor_release(x_1, 6);
 x_29 = x_1;
} else {
 lean_dec_ref(x_1);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 7, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_4);
lean_ctor_set(x_30, 2, x_5);
lean_ctor_set(x_30, 3, x_6);
lean_ctor_set(x_30, 4, x_26);
lean_ctor_set(x_30, 5, x_27);
lean_ctor_set(x_30, 6, x_28);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_Additive_linearOrderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Additive_linearOrderedAddCommGroup___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_TypeTags(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Group_TypeTags(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_TypeTags(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
