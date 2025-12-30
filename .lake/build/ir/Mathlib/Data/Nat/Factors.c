// Lean compiler output
// Module: Mathlib.Data.Nat.Factors
// Imports: Init Mathlib.Algebra.BigOperators.Ring.List Mathlib.Data.Nat.GCD.Basic Mathlib.Data.Nat.Prime.Basic Mathlib.Data.List.Prime Mathlib.Data.List.Sort Mathlib.Data.List.Perm.Subperm
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_minFac(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_primeFactorsList___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_primeFactorsList(lean_object*);
LEAN_EXPORT lean_object* l_Nat_primeFactorsList(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = lean_nat_dec_eq(x_5, x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_nat_sub(x_5, x_4);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = l_Nat_minFac(x_9);
x_11 = lean_nat_div(x_9, x_10);
lean_dec(x_9);
x_12 = l_Nat_primeFactorsList(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_5);
x_14 = lean_box(0);
return x_14;
}
}
else
{
lean_object* x_15; 
x_15 = lean_box(0);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Nat_primeFactorsList___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_primeFactorsList(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Nat_Factors_0__Nat_primeFactorsList_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_List(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_GCD_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Prime(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Sort(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Perm_Subperm(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Factors(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_List(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_GCD_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Prime(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Perm_Subperm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
