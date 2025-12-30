// Lean compiler output
// Module: Mathlib.Data.Nat.Fib.Basic
// Imports: Init Mathlib.Data.Finset.NatAntidiagonal Mathlib.Data.Nat.GCD.Basic Mathlib.Data.Nat.BinaryRec Mathlib.Logic.Function.Iterate Mathlib.Tactic.Ring Mathlib.Tactic.Zify Mathlib.Data.Nat.Choose.Basic Mathlib.Algebra.BigOperators.Group.Finset.Basic
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
lean_object* l_Nat_iterate___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_fastFibAux___closed__1;
static lean_object* l_Nat_fastFibAux___closed__2;
LEAN_EXPORT lean_object* l_Nat_fastFibAux___boxed(lean_object*);
static lean_object* l_Nat_fastFibAux___closed__3;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
static lean_object* l_Nat_fib___closed__1;
LEAN_EXPORT lean_object* l_Nat_fastFib___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_fastFibAux(lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
static lean_object* l_Nat_fib___closed__2;
LEAN_EXPORT lean_object* l_Nat_fib___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_fib(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Nat_fastFibAux___spec__1(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Nat_fastFibAux___spec__1___boxed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_fastFib(lean_object*);
LEAN_EXPORT lean_object* l_Nat_fib___lambda__1___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_fib___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_nat_add(x_3, x_2);
lean_inc(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
static lean_object* _init_l_Nat_fib___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_fib___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_fib___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_fib(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Nat_fib___closed__2;
x_3 = l_Nat_fib___closed__1;
x_4 = l_Nat_iterate___rarg(x_2, x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_fib___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_fib___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Nat_fastFibAux___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_land(x_5, x_2);
x_7 = lean_nat_dec_eq(x_6, x_3);
lean_dec(x_6);
x_8 = lean_nat_shiftr(x_2, x_5);
x_9 = l_Nat_binaryRec___at_Nat_fastFibAux___spec__1(x_1, x_8);
lean_dec(x_8);
if (x_7 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_pow(x_10, x_11);
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_nat_pow(x_13, x_11);
x_15 = lean_nat_add(x_12, x_14);
lean_dec(x_14);
lean_dec(x_12);
x_16 = lean_nat_mul(x_11, x_13);
lean_dec(x_13);
x_17 = lean_nat_add(x_16, x_10);
lean_dec(x_16);
x_18 = lean_nat_mul(x_10, x_17);
lean_dec(x_17);
lean_dec(x_10);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_unsigned_to_nat(2u);
x_23 = lean_nat_mul(x_22, x_21);
x_24 = lean_nat_sub(x_23, x_20);
lean_dec(x_23);
x_25 = lean_nat_mul(x_20, x_24);
lean_dec(x_24);
x_26 = lean_nat_pow(x_21, x_22);
lean_dec(x_21);
x_27 = lean_nat_pow(x_20, x_22);
lean_dec(x_20);
x_28 = lean_nat_add(x_26, x_27);
lean_dec(x_27);
lean_dec(x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_inc(x_1);
return x_1;
}
}
}
static lean_object* _init_l_Nat_fastFibAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_fib(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_fastFibAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Nat_fib(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_fastFibAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_fastFibAux___closed__1;
x_2 = l_Nat_fastFibAux___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_fastFibAux(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_fastFibAux___closed__3;
x_3 = l_Nat_binaryRec___at_Nat_fastFibAux___spec__1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_Nat_fastFibAux___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_binaryRec___at_Nat_fastFibAux___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_fastFibAux___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_fastFibAux(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_fastFib(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_fastFibAux(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_fastFib___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_fastFib(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_NatAntidiagonal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_GCD_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_BinaryRec(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Function_Iterate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Zify(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Fib_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_NatAntidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_GCD_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_BinaryRec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Function_Iterate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Zify(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_fib___closed__1 = _init_l_Nat_fib___closed__1();
lean_mark_persistent(l_Nat_fib___closed__1);
l_Nat_fib___closed__2 = _init_l_Nat_fib___closed__2();
lean_mark_persistent(l_Nat_fib___closed__2);
l_Nat_fastFibAux___closed__1 = _init_l_Nat_fastFibAux___closed__1();
lean_mark_persistent(l_Nat_fastFibAux___closed__1);
l_Nat_fastFibAux___closed__2 = _init_l_Nat_fastFibAux___closed__2();
lean_mark_persistent(l_Nat_fastFibAux___closed__2);
l_Nat_fastFibAux___closed__3 = _init_l_Nat_fastFibAux___closed__3();
lean_mark_persistent(l_Nat_fastFibAux___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
