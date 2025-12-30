// Lean compiler output
// Module: Mathlib.Algebra.Group.Fin.Basic
// Imports: Init Mathlib.Algebra.Group.Basic Mathlib.Algebra.NeZero Mathlib.Data.Nat.Cast.Defs Mathlib.Data.Fin.Rev
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
LEAN_EXPORT lean_object* l_Fin_instAddRightCancelSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Fin_instAddLeftCancelSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommMonoid___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_neg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommGroup___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instInvolutiveNeg(lean_object*);
lean_object* l_Fin_ofNat_x27___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Fin_instAddMonoidWithOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Fin_addCommGroup___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_sub___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommGroup___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_addCommGroup(lean_object*, lean_object*);
lean_object* l_Fin_add___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_zsmulRec___at_Fin_addCommGroup___spec__2___closed__1;
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_addCommMonoid(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_addCommSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_Fin_instAddCommSemigroup(lean_object*);
LEAN_EXPORT lean_object* l_zsmulRec___at_Fin_addCommGroup___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommMonoid___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_addCommSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fin_add___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_instAddCommSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fin_add___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommMonoid___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
x_9 = l_nsmulRec___at_Fin_addCommMonoid___spec__1(x_1, lean_box(0), x_8, x_4);
lean_dec(x_8);
x_10 = l_Fin_add(x_1, x_9, x_4);
lean_dec(x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_nat_mod(x_5, x_1);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Fin_addCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Fin_add___boxed), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_mod(x_4, x_1);
x_6 = lean_alloc_closure((void*)(l_nsmulRec___at_Fin_addCommMonoid___spec__1___boxed), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommMonoid___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_nsmulRec___at_Fin_addCommMonoid___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_instAddMonoidWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_3 = l_Fin_addCommMonoid(x_1, lean_box(0));
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Fin_ofNat_x27___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_mod(x_5, x_1);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommGroup___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
x_9 = l_nsmulRec___at_Fin_addCommGroup___spec__1(x_1, lean_box(0), x_8, x_4);
lean_dec(x_8);
x_10 = l_Fin_add(x_1, x_9, x_4);
lean_dec(x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_nat_mod(x_5, x_1);
return x_11;
}
}
}
static lean_object* _init_l_zsmulRec___at_Fin_addCommGroup___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Fin_addCommGroup___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_zsmulRec___at_Fin_addCommGroup___spec__2___closed__1;
x_7 = lean_int_dec_lt(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_nat_abs(x_4);
x_9 = lean_apply_2(x_3, x_8, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_nat_abs(x_4);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_10, x_11);
lean_dec(x_10);
x_13 = lean_nat_add(x_12, x_11);
lean_dec(x_12);
x_14 = lean_apply_2(x_3, x_13, x_5);
x_15 = lean_nat_sub(x_1, x_14);
lean_dec(x_14);
x_16 = lean_nat_mod(x_15, x_1);
lean_dec(x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Fin_addCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_3 = l_Fin_addCommMonoid(x_1, lean_box(0));
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Fin_neg___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Fin_sub___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_nsmulRec___at_Fin_addCommGroup___spec__1___boxed), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
x_7 = lean_alloc_closure((void*)(l_zsmulRec___at_Fin_addCommGroup___spec__2___boxed), 5, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_6);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Fin_addCommGroup___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_nsmulRec___at_Fin_addCommGroup___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_zsmulRec___at_Fin_addCommGroup___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_zsmulRec___at_Fin_addCommGroup___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fin_instInvolutiveNeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fin_neg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_instAddLeftCancelSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fin_add___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_instAddRightCancelSemigroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fin_add___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_NeZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Rev(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Fin_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_NeZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Rev(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_zsmulRec___at_Fin_addCommGroup___spec__2___closed__1 = _init_l_zsmulRec___at_Fin_addCommGroup___spec__2___closed__1();
lean_mark_persistent(l_zsmulRec___at_Fin_addCommGroup___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
