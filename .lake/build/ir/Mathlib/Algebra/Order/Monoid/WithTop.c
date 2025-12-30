// Lean compiler output
// Module: Mathlib.Algebra.Order.Monoid.WithTop
// Imports: Init Mathlib.Algebra.Order.Monoid.Unbundled.WithTop Mathlib.Algebra.Order.Monoid.Canonical.Defs
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
lean_object* l_WithBot_preorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderedAddCommMonoid(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid(lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_WithBot_decidableLE___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_WithTop_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_WithBot_decidableLT___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_instLinearOrderedAddCommMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1(lean_object*);
lean_object* l_WithTop_decidableLE___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_WithTop_decidableLT___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_orderedAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_instLinearOrderedAddCommMonoid___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_WithTop_linearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_WithBot_linearOrder___rarg(lean_object*);
lean_object* l_WithTop_preorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithBot_orderedAddCommMonoid___rarg(lean_object*);
lean_object* l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_orderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithTop_addMonoid___rarg(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_WithTop_preorder(lean_box(0), x_4);
lean_dec(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithTop_orderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_orderedAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_instLinearOrderedAddCommMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_instDecidableEq__mathlib___rarg(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_instLinearOrderedAddCommMonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_instLinearOrderedAddCommMonoid___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithTop_decidableLE___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithTop_decidableLT___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_WithTop_orderedAddCommMonoid___rarg(x_2);
x_4 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_1);
lean_inc(x_4);
x_5 = l_WithTop_linearOrder___rarg(x_4);
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
x_11 = lean_alloc_closure((void*)(l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__1), 3, 1);
lean_closure_set(x_11, 0, x_4);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_instLinearOrderedAddCommMonoid___spec__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_4);
x_13 = lean_alloc_closure((void*)(l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__2), 3, 1);
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
x_17 = lean_alloc_closure((void*)(l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__1), 3, 1);
lean_closure_set(x_17, 0, x_4);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithTop_instLinearOrderedAddCommMonoid___spec__1___rarg), 3, 1);
lean_closure_set(x_18, 0, x_4);
x_19 = lean_alloc_closure((void*)(l_WithTop_instLinearOrderedAddCommMonoid___rarg___lambda__2), 3, 1);
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
LEAN_EXPORT lean_object* l_WithTop_instLinearOrderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_instLinearOrderedAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_orderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_WithBot_preorder(lean_box(0), x_2);
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_WithTop_addMonoid___rarg(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithBot_orderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_orderedAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_instDecidableEq__mathlib___rarg(x_1, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithBot_decidableLE___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_instDecidableLt__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_WithBot_decidableLT___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_2 = l_LinearOrderedAddCommMonoid_toLinearOrder___rarg(x_1);
lean_inc(x_2);
x_3 = l_WithBot_linearOrder___rarg(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_WithBot_orderedAddCommMonoid___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
lean_dec(x_7);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 6);
lean_dec(x_10);
x_11 = lean_ctor_get(x_3, 5);
lean_dec(x_11);
x_12 = lean_ctor_get(x_3, 4);
lean_dec(x_12);
lean_ctor_set(x_5, 1, x_9);
lean_inc(x_2);
x_13 = lean_alloc_closure((void*)(l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__1), 3, 1);
lean_closure_set(x_13, 0, x_2);
lean_inc(x_2);
x_14 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1___rarg), 3, 1);
lean_closure_set(x_14, 0, x_2);
x_15 = lean_alloc_closure((void*)(l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__2), 3, 1);
lean_closure_set(x_15, 0, x_2);
lean_ctor_set(x_3, 6, x_15);
lean_ctor_set(x_3, 5, x_14);
lean_ctor_set(x_3, 4, x_13);
lean_ctor_set(x_3, 0, x_5);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
x_18 = lean_ctor_get(x_3, 2);
x_19 = lean_ctor_get(x_3, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_3);
lean_ctor_set(x_5, 1, x_16);
lean_inc(x_2);
x_20 = lean_alloc_closure((void*)(l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__1), 3, 1);
lean_closure_set(x_20, 0, x_2);
lean_inc(x_2);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_2);
x_22 = lean_alloc_closure((void*)(l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__2), 3, 1);
lean_closure_set(x_22, 0, x_2);
x_23 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_17);
lean_ctor_set(x_23, 2, x_18);
lean_ctor_set(x_23, 3, x_19);
lean_ctor_set(x_23, 4, x_20);
lean_ctor_set(x_23, 5, x_21);
lean_ctor_set(x_23, 6, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_24 = lean_ctor_get(x_5, 0);
lean_inc(x_24);
lean_dec(x_5);
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_3, 2);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 3);
lean_inc(x_28);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 x_29 = x_3;
} else {
 lean_dec_ref(x_3);
 x_29 = lean_box(0);
}
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_25);
lean_inc(x_2);
x_31 = lean_alloc_closure((void*)(l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__1), 3, 1);
lean_closure_set(x_31, 0, x_2);
lean_inc(x_2);
x_32 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_WithBot_linearOrderedAddCommMonoid___spec__1___rarg), 3, 1);
lean_closure_set(x_32, 0, x_2);
x_33 = lean_alloc_closure((void*)(l_WithBot_linearOrderedAddCommMonoid___rarg___lambda__2), 3, 1);
lean_closure_set(x_33, 0, x_2);
if (lean_is_scalar(x_29)) {
 x_34 = lean_alloc_ctor(0, 7, 0);
} else {
 x_34 = x_29;
}
lean_ctor_set(x_34, 0, x_30);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_27);
lean_ctor_set(x_34, 3, x_28);
lean_ctor_set(x_34, 4, x_31);
lean_ctor_set(x_34, 5, x_32);
lean_ctor_set(x_34, 6, x_33);
return x_34;
}
}
}
LEAN_EXPORT lean_object* l_WithBot_linearOrderedAddCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithBot_linearOrderedAddCommMonoid___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Monoid_WithTop(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
