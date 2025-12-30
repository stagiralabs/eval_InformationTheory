// Lean compiler output
// Module: Mathlib.RingTheory.Binomial
// Imports: Init Mathlib.Algebra.Polynomial.Smeval Mathlib.Algebra.Ring.NegOnePow Mathlib.GroupTheory.GroupAction.Ring Mathlib.RingTheory.Polynomial.Pochhammer Mathlib.Tactic.FieldSimp
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
LEAN_EXPORT lean_object* l_Ring_multichoose___at_Ring_choose___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ring_multichoose___at_Ring_choose___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_multichoose___boxed(lean_object*, lean_object*);
static lean_object* l_Int_instBinomialRing___closed__1;
static lean_object* l_Nat_instBinomialRing___closed__1;
LEAN_EXPORT lean_object* l_Int_instBinomialRing;
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Ring_choose___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Ring_multichoose___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ring_choose(lean_object*);
LEAN_EXPORT lean_object* l_Int_multichoose(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ring_multichoose(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ring_multichoose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ring_multichoose___at_Ring_choose___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_multichoose___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ring_choose___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_fast__choose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instBinomialRing;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Int_negOnePow(lean_object*);
static lean_object* l_Int_multichoose___closed__1;
lean_object* l_AddCommGroupWithOne_toAddCommMonoidWithOne___rarg(lean_object*);
lean_object* l_AddCommGroupWithOne_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ring_multichoose___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ring_multichoose(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ring_multichoose___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ring_multichoose___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ring_multichoose(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Nat_instBinomialRing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_multichoose___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instBinomialRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instBinomialRing___closed__1;
return x_1;
}
}
static lean_object* _init_l_Int_multichoose___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_multichoose(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Int_multichoose___closed__1;
x_4 = lean_int_dec_lt(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_nat_abs(x_1);
x_6 = lean_nat_add(x_5, x_2);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_6, x_7);
lean_dec(x_6);
x_9 = l_Nat_fast__choose(x_8, x_2);
lean_dec(x_2);
lean_dec(x_8);
x_10 = lean_nat_to_int(x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_nat_abs(x_1);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_11, x_12);
lean_dec(x_11);
lean_inc(x_2);
x_14 = lean_nat_to_int(x_2);
x_15 = l_Int_negOnePow(x_14);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_nat_add(x_13, x_12);
lean_dec(x_13);
x_18 = l_Nat_fast__choose(x_17, x_2);
lean_dec(x_2);
lean_dec(x_17);
x_19 = lean_nat_to_int(x_18);
x_20 = lean_int_mul(x_16, x_19);
lean_dec(x_19);
lean_dec(x_16);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Int_multichoose___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_multichoose(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Int_multichoose___closed__1;
x_5 = lean_int_dec_lt(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_nat_abs(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_8 = lean_nat_abs(x_1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_RingTheory_Binomial_0__Int_multichoose_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Int_instBinomialRing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_multichoose___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instBinomialRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_instBinomialRing___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ring_multichoose___at_Ring_choose___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ring_multichoose___at_Ring_choose___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ring_multichoose___at_Ring_choose___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ring_choose___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_6 = l_AddCommGroupWithOne_toAddCommMonoidWithOne___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_AddCommGroupWithOne_toAddGroupWithOne___rarg(x_1);
x_10 = l_AddGroupWithOne_toAddGroup___rarg(x_9);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_inc(x_5);
x_14 = lean_apply_1(x_13, x_5);
x_15 = lean_apply_2(x_11, x_4, x_14);
x_16 = lean_ctor_get(x_12, 2);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_apply_2(x_8, x_15, x_16);
x_18 = lean_apply_2(x_3, x_17, x_5);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Ring_choose(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ring_choose___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ring_multichoose___at_Ring_choose___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ring_multichoose___at_Ring_choose___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ring_choose___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ring_choose___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Smeval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_NegOnePow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Pochhammer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Binomial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Smeval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_NegOnePow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Pochhammer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instBinomialRing___closed__1 = _init_l_Nat_instBinomialRing___closed__1();
lean_mark_persistent(l_Nat_instBinomialRing___closed__1);
l_Nat_instBinomialRing = _init_l_Nat_instBinomialRing();
lean_mark_persistent(l_Nat_instBinomialRing);
l_Int_multichoose___closed__1 = _init_l_Int_multichoose___closed__1();
lean_mark_persistent(l_Int_multichoose___closed__1);
l_Int_instBinomialRing___closed__1 = _init_l_Int_instBinomialRing___closed__1();
lean_mark_persistent(l_Int_instBinomialRing___closed__1);
l_Int_instBinomialRing = _init_l_Int_instBinomialRing();
lean_mark_persistent(l_Int_instBinomialRing);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
