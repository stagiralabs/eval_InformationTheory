// Lean compiler output
// Module: Mathlib.Order.Filter.Ring
// Imports: Init Mathlib.Order.Filter.Germ.OrderedMonoid Mathlib.Algebra.Order.Ring.Defs
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
lean_object* l_Filter_Germ_subNegMonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedAddCommGroup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedSemiring___rarg(lean_object*, lean_object*);
lean_object* l_OrderedSemiring_toOrderedAddCommMonoid___rarg(lean_object*);
lean_object* l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup(lean_object*, lean_object*);
lean_object* l_Filter_Germ_instOrderedCommMonoid___rarg(lean_object*, lean_object*);
lean_object* l_Filter_Germ_instSemiring___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Filter_Germ_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommRing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Filter_Germ_instRing___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedAddCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup___rarg(lean_object*, lean_object*);
lean_object* l_OrderedRing_toOrderedAddCommGroup___rarg(lean_object*);
lean_object* l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(lean_object*);
lean_object* l_Filter_Germ_instOrderedAddCommMonoid___rarg(lean_object*, lean_object*);
lean_object* l_Filter_Germ_instDivInvMonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedCommGroup___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_2);
x_3 = l_OrderedCommGroup_toOrderedCancelCommMonoid___rarg(x_2);
lean_inc(x_1);
x_4 = l_Filter_Germ_instOrderedCommMonoid___rarg(x_1, x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_5);
x_6 = l_Filter_Germ_instDivInvMonoid___rarg(x_1, lean_box(0), x_5);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_6, 3);
lean_dec(x_10);
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
x_12 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedCommGroup___rarg___lambda__2), 3, 1);
lean_closure_set(x_12, 0, x_5);
lean_ctor_set(x_6, 3, x_12);
lean_ctor_set(x_6, 0, x_9);
lean_ctor_set(x_4, 0, x_6);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_6, 1);
x_15 = lean_ctor_get(x_6, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedCommGroup___rarg___lambda__2), 3, 1);
lean_closure_set(x_16, 0, x_5);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set(x_17, 3, x_16);
lean_ctor_set(x_4, 0, x_17);
return x_4;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_6, 2);
lean_inc(x_21);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 x_22 = x_6;
} else {
 lean_dec_ref(x_6);
 x_22 = lean_box(0);
}
x_23 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedCommGroup___rarg___lambda__2), 3, 1);
lean_closure_set(x_23, 0, x_5);
if (lean_is_scalar(x_22)) {
 x_24 = lean_alloc_ctor(0, 4, 0);
} else {
 x_24 = x_22;
}
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_19);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedAddCommGroup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_2);
x_3 = l_OrderedAddCommGroup_toOrderedCancelAddCommMonoid___rarg(x_2);
lean_inc(x_1);
x_4 = l_Filter_Germ_instOrderedAddCommMonoid___rarg(x_1, x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_5);
x_6 = l_Filter_Germ_subNegMonoid___rarg(x_1, lean_box(0), x_5);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_6, 3);
lean_dec(x_10);
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
x_12 = lean_alloc_closure((void*)(l_Filter_Germ_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_5);
lean_ctor_set(x_6, 3, x_12);
lean_ctor_set(x_6, 0, x_9);
lean_ctor_set(x_4, 0, x_6);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_6, 1);
x_15 = lean_ctor_get(x_6, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_closure((void*)(l_Filter_Germ_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_16, 0, x_5);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set(x_17, 3, x_16);
lean_ctor_set(x_4, 0, x_17);
return x_4;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_6, 2);
lean_inc(x_21);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 x_22 = x_6;
} else {
 lean_dec_ref(x_6);
 x_22 = lean_box(0);
}
x_23 = lean_alloc_closure((void*)(l_Filter_Germ_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_23, 0, x_5);
if (lean_is_scalar(x_22)) {
 x_24 = lean_alloc_ctor(0, 4, 0);
} else {
 x_24 = x_22;
}
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_19);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedAddCommGroup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Filter_Germ_instSemiring___rarg(x_1, lean_box(0), x_3);
x_5 = l_OrderedSemiring_toOrderedAddCommMonoid___rarg(x_2);
x_6 = l_Filter_Germ_instOrderedAddCommMonoid___rarg(x_1, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_4);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedSemiring___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommSemiring___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Germ_instOrderedSemiring___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedCommSemiring___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Filter_Germ_instRing___rarg(x_1, lean_box(0), x_3);
x_5 = l_OrderedRing_toOrderedAddCommGroup___rarg(x_2);
x_6 = l_Filter_Germ_instOrderedAddCommGroup___rarg(x_1, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_4);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedRing___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommRing___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_Germ_instOrderedRing___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_Germ_instOrderedCommRing(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Filter_Germ_instOrderedCommRing___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Germ_OrderedMonoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_Ring(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Germ_OrderedMonoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
