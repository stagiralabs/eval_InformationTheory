// Lean compiler output
// Module: Mathlib.Algebra.Field.ZMod
// Imports: Init Mathlib.Algebra.Field.Basic Mathlib.Data.ZMod.Basic
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
LEAN_EXPORT lean_object* l_npowRec___at_ZMod_instField___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_commRing(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_castRec___at_ZMod_instField___spec__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_zpowRec___at_ZMod_instField___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_instField___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_instField___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_ZMod_instField___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_inv___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_castRec___at_ZMod_instField___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_NNRat_num(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_instField___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_castRec___at_ZMod_instField___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NNRat_cast___at_ZMod_instField___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_instField(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NNRat_cast___at_ZMod_instField___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_instField___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_cast___at_ZMod_instField___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_ZMod_instField___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_ZMod_instField___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_inv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 3);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
x_10 = l_Monoid_toMulOneClass___rarg(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_ZMod_inv(x_1, x_4);
x_13 = lean_apply_2(x_11, x_3, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_ZMod_instField___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = l_ZMod_commRing(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_2, x_8);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_3);
x_12 = l_npowRec___at_ZMod_instField___spec__2(x_1, x_9, x_3);
lean_dec(x_9);
x_13 = lean_apply_2(x_11, x_12, x_3);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_dec(x_5);
return x_14;
}
}
}
static lean_object* _init_l_zpowRec___at_ZMod_instField___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_ZMod_instField___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_zpowRec___at_ZMod_instField___spec__3___closed__1;
x_6 = lean_int_dec_lt(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_abs(x_3);
x_8 = lean_apply_2(x_2, x_7, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_nat_abs(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_13 = lean_apply_2(x_2, x_12, x_4);
x_14 = l_ZMod_inv(x_1, x_13);
lean_dec(x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_NNRat_castRec___at_ZMod_instField___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_5 = l_NNRat_num(x_3);
lean_inc(x_4);
x_6 = lean_apply_1(x_4, x_5);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_apply_1(x_4, x_7);
x_9 = l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1(x_1, x_2, x_6, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_instField___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Rat_castRec___at_ZMod_instField___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Int_cast___at_ZMod_instField___spec__6(x_1, x_5);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_apply_1(x_4, x_7);
x_9 = l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1(x_1, x_2, x_6, x_8);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_NNRat_cast___at_ZMod_instField___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NNRat_castRec___at_ZMod_instField___spec__4(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Rat_cast___at_ZMod_instField___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Rat_castRec___at_ZMod_instField___spec__5(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_instField___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_NNRat_castRec___at_ZMod_instField___spec__4(x_1, x_2, x_4);
x_7 = lean_apply_2(x_3, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ZMod_instField___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Rat_castRec___at_ZMod_instField___spec__5(x_1, x_2, x_4);
x_7 = lean_apply_2(x_3, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ZMod_instField(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_3 = l_ZMod_commRing(x_1);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_ZMod_inv___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1___boxed), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_5);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_npowRec___at_ZMod_instField___spec__2___boxed), 3, 1);
lean_closure_set(x_9, 0, x_1);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_zpowRec___at_ZMod_instField___spec__3___boxed), 4, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
lean_inc(x_5);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_NNRat_castRec___at_ZMod_instField___spec__4___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_5);
lean_inc(x_5);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Rat_castRec___at_ZMod_instField___spec__5), 3, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_5);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_ZMod_instField___lambda__1___boxed), 5, 3);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_5);
lean_closure_set(x_13, 2, x_7);
x_14 = lean_alloc_closure((void*)(l_ZMod_instField___lambda__2), 5, 3);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_5);
lean_closure_set(x_14, 2, x_7);
x_15 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_4);
lean_ctor_set(x_15, 2, x_8);
lean_ctor_set(x_15, 3, x_10);
lean_ctor_set(x_15, 4, x_11);
lean_ctor_set(x_15, 5, x_12);
lean_ctor_set(x_15, 6, x_13);
lean_ctor_set(x_15, 7, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DivInvMonoid_div_x27___at_ZMod_instField___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_ZMod_instField___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowRec___at_ZMod_instField___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_ZMod_instField___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_zpowRec___at_ZMod_instField___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NNRat_castRec___at_ZMod_instField___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NNRat_castRec___at_ZMod_instField___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_NNRat_cast___at_ZMod_instField___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_NNRat_cast___at_ZMod_instField___spec__7(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_instField___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ZMod_instField___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Field_ZMod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_zpowRec___at_ZMod_instField___spec__3___closed__1 = _init_l_zpowRec___at_ZMod_instField___spec__3___closed__1();
lean_mark_persistent(l_zpowRec___at_ZMod_instField___spec__3___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
