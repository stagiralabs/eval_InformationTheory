// Lean compiler output
// Module: Mathlib.Data.Nat.Digits
// Imports: Init Mathlib.Algebra.BigOperators.Intervals Mathlib.Algebra.BigOperators.Ring.List Mathlib.Data.Int.ModEq Mathlib.Data.Nat.Bits Mathlib.Data.Nat.Log Mathlib.Data.List.Palindrome Mathlib.Tactic.IntervalCases Mathlib.Tactic.Linarith Mathlib.Tactic.Ring
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ofDigits(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_digits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Nat_digitsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_digitsAux1(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
lean_object* l_List_replicateTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ofDigits___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_digitsAux0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_digits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_digitsAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_ofDigits___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Nat_digitsAux0(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_digitsAux0(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = lean_nat_add(x_5, x_4);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Nat_digitsAux0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_digitsAux0(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_digitsAux1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_List_replicateTR___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_digitsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_9 = lean_nat_mod(x_8, x_1);
x_10 = lean_nat_div(x_8, x_1);
lean_dec(x_8);
x_11 = l_Nat_digitsAux(x_1, lean_box(0), x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; 
x_13 = lean_box(0);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Nat_digitsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_digitsAux(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Nat_Digits_0__Nat_digitsAux0_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_digits(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
x_7 = lean_nat_dec_eq(x_6, x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_nat_sub(x_6, x_5);
lean_dec(x_6);
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_nat_add(x_8, x_9);
lean_dec(x_8);
x_11 = l_Nat_digitsAux(x_10, lean_box(0), x_2);
lean_dec(x_2);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = l_List_replicateTR___rarg(x_2, x_5);
return x_12;
}
}
else
{
lean_object* x_13; 
x_13 = l_Nat_digitsAux0(x_2);
lean_dec(x_2);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Nat_digits___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_digits(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_nat_dec_eq(x_8, x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_nat_sub(x_8, x_7);
lean_dec(x_8);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
else
{
lean_dec(x_8);
lean_dec(x_4);
lean_inc(x_3);
return x_3;
}
}
else
{
lean_dec(x_4);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Nat_Digits_0__Nat_digits_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_ofDigits___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_4 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_10);
lean_dec(x_10);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_1(x_15, x_8);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
lean_inc(x_2);
x_18 = l_Nat_ofDigits___rarg(x_1, x_2, x_9);
x_19 = lean_apply_2(x_17, x_2, x_18);
x_20 = lean_apply_2(x_13, x_16, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Nat_ofDigits(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_ofDigits___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_ofDigits___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_ofDigits___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Nat_Digits_0__Nat_ofDigits_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_apply_3(x_5, x_9, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_2(x_4, x_2, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Mathlib_Data_Nat_Digits_0__Nat_toDigitsCore_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Intervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_List(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_ModEq(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Bits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Log(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Palindrome(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_IntervalCases(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Digits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Intervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_List(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_ModEq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Bits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Log(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Palindrome(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_IntervalCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
