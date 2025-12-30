// Lean compiler output
// Module: Mathlib.Data.Int.Interval
// Imports: Init Mathlib.Algebra.Group.Embedding Mathlib.Algebra.Order.Ring.Int Mathlib.Algebra.Ring.CharZero Mathlib.Order.Interval.Finset.Basic
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
LEAN_EXPORT lean_object* l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
static lean_object* l_Int_instLocallyFiniteOrder___closed__1;
LEAN_EXPORT lean_object* l_addLeftEmbedding___at_Int_instLocallyFiniteOrder___spec__2___rarg(lean_object*);
lean_object* l_addLeftEmbedding___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__4___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder;
static lean_object* l_Int_instLocallyFiniteOrder___closed__5;
static lean_object* l_Int_instLocallyFiniteOrder___closed__2;
LEAN_EXPORT lean_object* l_addLeftEmbedding___at_Int_instLocallyFiniteOrder___spec__2(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
extern lean_object* l_Int_instRing;
static lean_object* l_Int_instLocallyFiniteOrder___closed__3;
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__3(lean_object*, lean_object*);
extern lean_object* l_Int_instAdd;
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
static lean_object* l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__1(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Nat_castEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__4(lean_object*, lean_object*);
static lean_object* l_Int_instLocallyFiniteOrder___lambda__1___closed__1;
lean_object* l_Function_Embedding_trans___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Int_instLocallyFiniteOrder___closed__4;
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_instRing;
x_2 = l_Ring_toAddGroupWithOne___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__1;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_Nat_castEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_addLeftEmbedding___at_Int_instLocallyFiniteOrder___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Int_instAdd;
x_3 = lean_alloc_closure((void*)(l_addLeftEmbedding___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addLeftEmbedding___at_Int_instLocallyFiniteOrder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_addLeftEmbedding___at_Int_instLocallyFiniteOrder___spec__2___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Int_instLocallyFiniteOrder___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1(lean_box(0));
x_4 = l_Int_instAdd;
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_addLeftEmbedding___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = l_Int_instLocallyFiniteOrder___lambda__1___closed__1;
x_8 = lean_int_add(x_2, x_7);
x_9 = lean_int_sub(x_8, x_1);
lean_dec(x_1);
lean_dec(x_8);
x_10 = l_Int_toNat(x_9);
lean_dec(x_9);
x_11 = l_List_range(x_10);
x_12 = l_Multiset_map___rarg(x_6, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1(lean_box(0));
x_4 = l_Int_instAdd;
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_addLeftEmbedding___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_int_sub(x_2, x_1);
lean_dec(x_1);
x_8 = l_Int_toNat(x_7);
lean_dec(x_7);
x_9 = l_List_range(x_8);
x_10 = l_Multiset_map___rarg(x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1(lean_box(0));
x_4 = l_Int_instLocallyFiniteOrder___lambda__1___closed__1;
x_5 = lean_int_add(x_1, x_4);
x_6 = l_Int_instAdd;
x_7 = lean_alloc_closure((void*)(l_addLeftEmbedding___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
x_9 = lean_int_sub(x_2, x_1);
x_10 = l_Int_toNat(x_9);
lean_dec(x_9);
x_11 = l_List_range(x_10);
x_12 = l_Multiset_map___rarg(x_8, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_3 = l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1(lean_box(0));
x_4 = l_Int_instLocallyFiniteOrder___lambda__1___closed__1;
x_5 = lean_int_add(x_1, x_4);
x_6 = l_Int_instAdd;
x_7 = lean_alloc_closure((void*)(l_addLeftEmbedding___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
x_9 = lean_int_sub(x_2, x_1);
x_10 = lean_int_sub(x_9, x_4);
lean_dec(x_9);
x_11 = l_Int_toNat(x_10);
lean_dec(x_10);
x_12 = l_List_range(x_11);
x_13 = l_Multiset_map___rarg(x_8, x_12);
return x_13;
}
}
static lean_object* _init_l_Int_instLocallyFiniteOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instLocallyFiniteOrder___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instLocallyFiniteOrder___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instLocallyFiniteOrder___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instLocallyFiniteOrder___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instLocallyFiniteOrder___lambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instLocallyFiniteOrder___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instLocallyFiniteOrder___lambda__4___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instLocallyFiniteOrder___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Int_instLocallyFiniteOrder___closed__1;
x_2 = l_Int_instLocallyFiniteOrder___closed__2;
x_3 = l_Int_instLocallyFiniteOrder___closed__3;
x_4 = l_Int_instLocallyFiniteOrder___closed__4;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Int_instLocallyFiniteOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_instLocallyFiniteOrder___closed__5;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instLocallyFiniteOrder___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instLocallyFiniteOrder___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instLocallyFiniteOrder___lambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_instLocallyFiniteOrder___lambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instLocallyFiniteOrder___lambda__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Embedding(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_CharZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Int_Interval(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Embedding(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_CharZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__1 = _init_l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__1();
lean_mark_persistent(l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__1);
l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__2 = _init_l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__2();
lean_mark_persistent(l_Nat_castEmbedding___at_Int_instLocallyFiniteOrder___spec__1___closed__2);
l_Int_instLocallyFiniteOrder___lambda__1___closed__1 = _init_l_Int_instLocallyFiniteOrder___lambda__1___closed__1();
lean_mark_persistent(l_Int_instLocallyFiniteOrder___lambda__1___closed__1);
l_Int_instLocallyFiniteOrder___closed__1 = _init_l_Int_instLocallyFiniteOrder___closed__1();
lean_mark_persistent(l_Int_instLocallyFiniteOrder___closed__1);
l_Int_instLocallyFiniteOrder___closed__2 = _init_l_Int_instLocallyFiniteOrder___closed__2();
lean_mark_persistent(l_Int_instLocallyFiniteOrder___closed__2);
l_Int_instLocallyFiniteOrder___closed__3 = _init_l_Int_instLocallyFiniteOrder___closed__3();
lean_mark_persistent(l_Int_instLocallyFiniteOrder___closed__3);
l_Int_instLocallyFiniteOrder___closed__4 = _init_l_Int_instLocallyFiniteOrder___closed__4();
lean_mark_persistent(l_Int_instLocallyFiniteOrder___closed__4);
l_Int_instLocallyFiniteOrder___closed__5 = _init_l_Int_instLocallyFiniteOrder___closed__5();
lean_mark_persistent(l_Int_instLocallyFiniteOrder___closed__5);
l_Int_instLocallyFiniteOrder = _init_l_Int_instLocallyFiniteOrder();
lean_mark_persistent(l_Int_instLocallyFiniteOrder);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
