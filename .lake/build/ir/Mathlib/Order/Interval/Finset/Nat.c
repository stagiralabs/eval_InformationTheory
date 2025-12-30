// Lean compiler output
// Module: Mathlib.Order.Interval.Finset.Nat
// Imports: Init Mathlib.Algebra.Group.Embedding Mathlib.Order.Interval.Multiset
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
static lean_object* l_Nat_instLocallyFiniteOrder___closed__2;
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__3___boxed(lean_object*, lean_object*);
lean_object* l_List_range_x27TR_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder;
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLocallyFiniteOrder___closed__3;
static lean_object* l_Nat_instLocallyFiniteOrder___closed__5;
static lean_object* l_Nat_instLocallyFiniteOrder___closed__1;
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__3(lean_object*, lean_object*);
static lean_object* l_Nat_instLocallyFiniteOrder___closed__4;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__2___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
x_5 = lean_nat_sub(x_4, x_1);
lean_dec(x_4);
x_6 = lean_nat_mul(x_3, x_5);
x_7 = lean_nat_add(x_1, x_6);
lean_dec(x_6);
x_8 = lean_box(0);
x_9 = l_List_range_x27TR_go(x_3, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_nat_sub(x_2, x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_mul(x_4, x_3);
x_6 = lean_nat_add(x_1, x_5);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = l_List_range_x27TR_go(x_4, x_3, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = lean_nat_sub(x_2, x_1);
x_6 = lean_nat_mul(x_3, x_5);
x_7 = lean_nat_add(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
x_8 = lean_box(0);
x_9 = l_List_range_x27TR_go(x_3, x_5, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = lean_nat_sub(x_2, x_1);
x_6 = lean_nat_sub(x_5, x_3);
lean_dec(x_5);
x_7 = lean_nat_mul(x_3, x_6);
x_8 = lean_nat_add(x_4, x_7);
lean_dec(x_7);
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = l_List_range_x27TR_go(x_3, x_6, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l_Nat_instLocallyFiniteOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instLocallyFiniteOrder___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLocallyFiniteOrder___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instLocallyFiniteOrder___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLocallyFiniteOrder___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instLocallyFiniteOrder___lambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLocallyFiniteOrder___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instLocallyFiniteOrder___lambda__4___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLocallyFiniteOrder___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Nat_instLocallyFiniteOrder___closed__1;
x_2 = l_Nat_instLocallyFiniteOrder___closed__2;
x_3 = l_Nat_instLocallyFiniteOrder___closed__3;
x_4 = l_Nat_instLocallyFiniteOrder___closed__4;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Nat_instLocallyFiniteOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLocallyFiniteOrder___closed__5;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_instLocallyFiniteOrder___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_instLocallyFiniteOrder___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_instLocallyFiniteOrder___lambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_instLocallyFiniteOrder___lambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_instLocallyFiniteOrder___lambda__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Embedding(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Multiset(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Interval_Finset_Nat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Embedding(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Multiset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instLocallyFiniteOrder___closed__1 = _init_l_Nat_instLocallyFiniteOrder___closed__1();
lean_mark_persistent(l_Nat_instLocallyFiniteOrder___closed__1);
l_Nat_instLocallyFiniteOrder___closed__2 = _init_l_Nat_instLocallyFiniteOrder___closed__2();
lean_mark_persistent(l_Nat_instLocallyFiniteOrder___closed__2);
l_Nat_instLocallyFiniteOrder___closed__3 = _init_l_Nat_instLocallyFiniteOrder___closed__3();
lean_mark_persistent(l_Nat_instLocallyFiniteOrder___closed__3);
l_Nat_instLocallyFiniteOrder___closed__4 = _init_l_Nat_instLocallyFiniteOrder___closed__4();
lean_mark_persistent(l_Nat_instLocallyFiniteOrder___closed__4);
l_Nat_instLocallyFiniteOrder___closed__5 = _init_l_Nat_instLocallyFiniteOrder___closed__5();
lean_mark_persistent(l_Nat_instLocallyFiniteOrder___closed__5);
l_Nat_instLocallyFiniteOrder = _init_l_Nat_instLocallyFiniteOrder();
lean_mark_persistent(l_Nat_instLocallyFiniteOrder);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
