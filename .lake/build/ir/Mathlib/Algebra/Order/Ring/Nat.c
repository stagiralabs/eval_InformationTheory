// Lean compiler output
// Module: Mathlib.Algebra.Order.Ring.Nat
// Imports: Init Mathlib.Algebra.Order.Group.Nat Mathlib.Algebra.Order.GroupWithZero.Canonical Mathlib.Algebra.Order.Ring.Defs Mathlib.Algebra.Ring.Parity Mathlib.Data.Set.Basic
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
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__8;
static lean_object* l_Nat_instOrderedSemiring___closed__1;
static lean_object* l_Nat_instOrderedCommSemiring___closed__1;
static lean_object* l_Nat_instLinearOrderedCommMonoidWithZero___closed__1;
LEAN_EXPORT lean_object* l_Nat_instOrderedCommSemiring;
LEAN_EXPORT lean_object* l_Nat_instLinearOrderedCommSemiring;
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__7;
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__3;
static lean_object* l_Nat_instLinearOrderedCommMonoidWithZero___closed__3;
extern lean_object* l_Nat_instAddMonoid;
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__5;
LEAN_EXPORT lean_object* l_Nat_instLinearOrderedCommMonoidWithZero___lambda__1(lean_object*, lean_object*);
lean_object* l_Nat_instMax___boxed(lean_object*, lean_object*);
lean_object* l_instOrdNat___boxed(lean_object*, lean_object*);
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_instStrictOrderedSemiring;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Nat_decLe___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLinearOrderedCommMonoidWithZero___closed__2;
extern lean_object* l_Nat_instSemiring;
static lean_object* l_Nat_instLinearOrderedSemiring___closed__1;
lean_object* l_instMinNat___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__4;
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__6;
LEAN_EXPORT lean_object* l_Nat_instLinearOrderedCommMonoidWithZero___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instLinearOrderedCommMonoidWithZero;
LEAN_EXPORT lean_object* l_Nat_instStrictOrderedCommSemiring;
LEAN_EXPORT lean_object* l_Nat_instLinearOrderedSemiring;
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instOrderedSemiring;
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__1;
static lean_object* l_Nat_instLinearOrderedCommSemiring___closed__2;
extern lean_object* l_Nat_instLinearOrder;
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_instLinearOrder;
x_2 = l_Nat_instSemiring;
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMinNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instMax___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instOrdNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_decLe___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_decLt___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_Nat_instLinearOrderedCommSemiring___closed__1;
x_2 = l_Nat_instLinearOrderedCommSemiring___closed__2;
x_3 = l_Nat_instLinearOrderedCommSemiring___closed__3;
x_4 = l_Nat_instLinearOrderedCommSemiring___closed__4;
x_5 = l_Nat_instLinearOrderedCommSemiring___closed__5;
x_6 = l_Nat_instLinearOrderedCommSemiring___closed__6;
x_7 = l_Nat_instLinearOrderedCommSemiring___closed__7;
x_8 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
return x_8;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLinearOrderedCommSemiring___closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_instLinearOrderedCommMonoidWithZero___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_nat_pow(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommMonoidWithZero___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instLinearOrderedCommMonoidWithZero___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommMonoidWithZero___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instAddMonoid;
x_2 = l_AddMonoid_toAddZeroClass___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommMonoidWithZero___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_Nat_instLinearOrderedCommSemiring;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_8 = l_Nat_instLinearOrderedCommMonoidWithZero___closed__1;
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_2, 0, x_9);
x_10 = l_Nat_instLinearOrderedCommSemiring___closed__2;
x_11 = l_Nat_instLinearOrderedCommSemiring___closed__3;
x_12 = l_Nat_instLinearOrderedCommSemiring___closed__4;
x_13 = l_Nat_instLinearOrderedCommSemiring___closed__5;
x_14 = l_Nat_instLinearOrderedCommSemiring___closed__6;
x_15 = l_Nat_instLinearOrderedCommSemiring___closed__7;
x_16 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_10);
lean_ctor_set(x_16, 2, x_11);
lean_ctor_set(x_16, 3, x_12);
lean_ctor_set(x_16, 4, x_13);
lean_ctor_set(x_16, 5, x_14);
lean_ctor_set(x_16, 6, x_15);
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
lean_dec(x_5);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 2);
lean_dec(x_19);
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
x_21 = l_Nat_instLinearOrderedCommMonoidWithZero___closed__2;
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_ctor_set(x_17, 2, x_22);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = l_Nat_instLinearOrderedCommMonoidWithZero___closed__2;
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_16);
lean_ctor_set(x_26, 1, x_23);
lean_ctor_set(x_26, 2, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
x_32 = l_Nat_instLinearOrderedCommMonoidWithZero___closed__1;
x_33 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_30);
lean_ctor_set(x_33, 2, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_28);
x_35 = l_Nat_instLinearOrderedCommSemiring___closed__2;
x_36 = l_Nat_instLinearOrderedCommSemiring___closed__3;
x_37 = l_Nat_instLinearOrderedCommSemiring___closed__4;
x_38 = l_Nat_instLinearOrderedCommSemiring___closed__5;
x_39 = l_Nat_instLinearOrderedCommSemiring___closed__6;
x_40 = l_Nat_instLinearOrderedCommSemiring___closed__7;
x_41 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_35);
lean_ctor_set(x_41, 2, x_36);
lean_ctor_set(x_41, 3, x_37);
lean_ctor_set(x_41, 4, x_38);
lean_ctor_set(x_41, 5, x_39);
lean_ctor_set(x_41, 6, x_40);
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_42);
lean_dec(x_29);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 lean_ctor_release(x_42, 2);
 x_44 = x_42;
} else {
 lean_dec_ref(x_42);
 x_44 = lean_box(0);
}
x_45 = l_Nat_instLinearOrderedCommMonoidWithZero___closed__2;
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_is_scalar(x_44)) {
 x_47 = lean_alloc_ctor(0, 3, 0);
} else {
 x_47 = x_44;
}
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_43);
lean_ctor_set(x_47, 2, x_46);
return x_47;
}
}
}
static lean_object* _init_l_Nat_instLinearOrderedCommMonoidWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLinearOrderedCommMonoidWithZero___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_instLinearOrderedCommMonoidWithZero___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_instLinearOrderedCommMonoidWithZero___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_instLinearOrderedSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrderedCommSemiring;
x_2 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_instLinearOrderedSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLinearOrderedSemiring___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instStrictOrderedSemiring() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrderedSemiring;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Nat_instStrictOrderedCommSemiring() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrderedCommSemiring;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Nat_instOrderedSemiring___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Nat_instStrictOrderedSemiring;
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
static lean_object* _init_l_Nat_instOrderedSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instOrderedSemiring___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instOrderedCommSemiring___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Nat_instStrictOrderedCommSemiring;
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
static lean_object* _init_l_Nat_instOrderedCommSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instOrderedCommSemiring___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Parity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_GroupWithZero_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Parity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instLinearOrderedCommSemiring___closed__1 = _init_l_Nat_instLinearOrderedCommSemiring___closed__1();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__1);
l_Nat_instLinearOrderedCommSemiring___closed__2 = _init_l_Nat_instLinearOrderedCommSemiring___closed__2();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__2);
l_Nat_instLinearOrderedCommSemiring___closed__3 = _init_l_Nat_instLinearOrderedCommSemiring___closed__3();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__3);
l_Nat_instLinearOrderedCommSemiring___closed__4 = _init_l_Nat_instLinearOrderedCommSemiring___closed__4();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__4);
l_Nat_instLinearOrderedCommSemiring___closed__5 = _init_l_Nat_instLinearOrderedCommSemiring___closed__5();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__5);
l_Nat_instLinearOrderedCommSemiring___closed__6 = _init_l_Nat_instLinearOrderedCommSemiring___closed__6();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__6);
l_Nat_instLinearOrderedCommSemiring___closed__7 = _init_l_Nat_instLinearOrderedCommSemiring___closed__7();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__7);
l_Nat_instLinearOrderedCommSemiring___closed__8 = _init_l_Nat_instLinearOrderedCommSemiring___closed__8();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring___closed__8);
l_Nat_instLinearOrderedCommSemiring = _init_l_Nat_instLinearOrderedCommSemiring();
lean_mark_persistent(l_Nat_instLinearOrderedCommSemiring);
l_Nat_instLinearOrderedCommMonoidWithZero___closed__1 = _init_l_Nat_instLinearOrderedCommMonoidWithZero___closed__1();
lean_mark_persistent(l_Nat_instLinearOrderedCommMonoidWithZero___closed__1);
l_Nat_instLinearOrderedCommMonoidWithZero___closed__2 = _init_l_Nat_instLinearOrderedCommMonoidWithZero___closed__2();
lean_mark_persistent(l_Nat_instLinearOrderedCommMonoidWithZero___closed__2);
l_Nat_instLinearOrderedCommMonoidWithZero___closed__3 = _init_l_Nat_instLinearOrderedCommMonoidWithZero___closed__3();
lean_mark_persistent(l_Nat_instLinearOrderedCommMonoidWithZero___closed__3);
l_Nat_instLinearOrderedCommMonoidWithZero = _init_l_Nat_instLinearOrderedCommMonoidWithZero();
lean_mark_persistent(l_Nat_instLinearOrderedCommMonoidWithZero);
l_Nat_instLinearOrderedSemiring___closed__1 = _init_l_Nat_instLinearOrderedSemiring___closed__1();
lean_mark_persistent(l_Nat_instLinearOrderedSemiring___closed__1);
l_Nat_instLinearOrderedSemiring = _init_l_Nat_instLinearOrderedSemiring();
lean_mark_persistent(l_Nat_instLinearOrderedSemiring);
l_Nat_instStrictOrderedSemiring = _init_l_Nat_instStrictOrderedSemiring();
lean_mark_persistent(l_Nat_instStrictOrderedSemiring);
l_Nat_instStrictOrderedCommSemiring = _init_l_Nat_instStrictOrderedCommSemiring();
lean_mark_persistent(l_Nat_instStrictOrderedCommSemiring);
l_Nat_instOrderedSemiring___closed__1 = _init_l_Nat_instOrderedSemiring___closed__1();
lean_mark_persistent(l_Nat_instOrderedSemiring___closed__1);
l_Nat_instOrderedSemiring = _init_l_Nat_instOrderedSemiring();
lean_mark_persistent(l_Nat_instOrderedSemiring);
l_Nat_instOrderedCommSemiring___closed__1 = _init_l_Nat_instOrderedCommSemiring___closed__1();
lean_mark_persistent(l_Nat_instOrderedCommSemiring___closed__1);
l_Nat_instOrderedCommSemiring = _init_l_Nat_instOrderedCommSemiring();
lean_mark_persistent(l_Nat_instOrderedCommSemiring);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
