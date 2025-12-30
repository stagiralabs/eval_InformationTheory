// Lean compiler output
// Module: Mathlib.RingTheory.PowerSeries.WellKnown
// Imports: Init Mathlib.Algebra.Algebra.Rat Mathlib.Data.Nat.Cast.Field Mathlib.RingTheory.PowerSeries.Basic
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
LEAN_EXPORT lean_object* l_PowerSeries_sin___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_exp___rarg(lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
static lean_object* l_PowerSeries_exp___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter(lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_exp___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_sin(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_cos___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_sin___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_sin___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t l_Nat_instDecidablePredEven(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_divp___at_PowerSeries_invUnitsSub___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divp___at_PowerSeries_invUnitsSub___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_cos(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub(lean_object*);
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_cos___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divp___at_PowerSeries_invUnitsSub___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_exp___boxed(lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
lean_object* l_Nat_factorial(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
static lean_object* l_PowerSeries_sin___rarg___lambda__1___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_PowerSeries_mk___rarg(lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_exp(lean_object*, lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_cos___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_exp___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divp___at_PowerSeries_invUnitsSub___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Semiring_toMonoidWithZero___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Monoid_toMulOneClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_apply_2(x_8, x_2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_divp___at_PowerSeries_invUnitsSub___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_divp___at_PowerSeries_invUnitsSub___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 3);
lean_inc(x_11);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_9);
x_12 = lean_apply_2(x_11, x_9, x_10);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_apply_2(x_11, x_9, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_divp___at_PowerSeries_invUnitsSub___spec__1___rarg(x_1, x_7, x_15);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_PowerSeries_invUnitsSub___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_PowerSeries_mk___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PowerSeries_invUnitsSub___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_divp___at_PowerSeries_invUnitsSub___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_divp___at_PowerSeries_invUnitsSub___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_invUnitsSub___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PowerSeries_invUnitsSub___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_RingTheory_PowerSeries_WellKnown_0__PowerSeries_invOneSubPow_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_PowerSeries_exp___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_exp___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Nat_factorial(x_2);
x_5 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_4);
x_6 = l_PowerSeries_exp___rarg___lambda__1___closed__1;
x_7 = l_Rat_div(x_6, x_5);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_exp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_PowerSeries_exp___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_PowerSeries_mk___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_exp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_PowerSeries_exp___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_exp___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PowerSeries_exp___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_exp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PowerSeries_exp(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_PowerSeries_sin___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PowerSeries_exp___rarg___lambda__1___closed__1;
x_2 = l_Rat_neg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_sin___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Nat_instDecidablePredEven(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_div(x_3, x_6);
x_8 = l_PowerSeries_sin___rarg___lambda__1___closed__1;
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = l_Int_pow(x_9, x_7);
lean_dec(x_9);
x_11 = l_PowerSeries_exp___rarg___lambda__1___closed__1;
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_nat_pow(x_12, x_7);
lean_dec(x_7);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Nat_factorial(x_3);
x_16 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_15);
x_17 = l_Rat_div(x_14, x_16);
lean_dec(x_14);
x_18 = lean_apply_1(x_5, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_19 = l_Ring_toNonAssocRing___rarg(x_2);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_20);
x_22 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_21);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_PowerSeries_sin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_PowerSeries_sin___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_1);
x_5 = l_PowerSeries_mk___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_sin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PowerSeries_sin___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_sin___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PowerSeries_sin___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_cos___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Nat_instDecidablePredEven(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = l_Ring_toNonAssocRing___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_3, x_11);
x_13 = l_PowerSeries_sin___rarg___lambda__1___closed__1;
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = l_Int_pow(x_14, x_12);
lean_dec(x_14);
x_16 = l_PowerSeries_exp___rarg___lambda__1___closed__1;
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_nat_pow(x_17, x_12);
lean_dec(x_12);
lean_dec(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Nat_factorial(x_3);
x_21 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_20);
x_22 = l_Rat_div(x_19, x_21);
lean_dec(x_19);
x_23 = lean_apply_1(x_10, x_22);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_PowerSeries_cos___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_PowerSeries_cos___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_PowerSeries_mk___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_cos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PowerSeries_cos___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PowerSeries_cos___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PowerSeries_cos___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Algebra_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PowerSeries_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_PowerSeries_WellKnown(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PowerSeries_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PowerSeries_exp___rarg___lambda__1___closed__1 = _init_l_PowerSeries_exp___rarg___lambda__1___closed__1();
lean_mark_persistent(l_PowerSeries_exp___rarg___lambda__1___closed__1);
l_PowerSeries_sin___rarg___lambda__1___closed__1 = _init_l_PowerSeries_sin___rarg___lambda__1___closed__1();
lean_mark_persistent(l_PowerSeries_sin___rarg___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
