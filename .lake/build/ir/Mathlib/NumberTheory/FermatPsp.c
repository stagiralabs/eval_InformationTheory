// Lean compiler output
// Module: Mathlib.NumberTheory.FermatPsp
// Imports: Init Mathlib.Algebra.Order.Archimedean.Basic Mathlib.FieldTheory.Finite.Basic Mathlib.Order.Filter.Cofinite
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
uint8_t l_Nat_decidable__dvd(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_decidablePsp(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_FermatPsp_0__Nat_psp__from__prime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_decidableProbablePrime___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_decidableProbablePrime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_FermatPsp_0__Nat_psp__from__prime___boxed(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_decidablePsp___boxed(lean_object*, lean_object*);
uint8_t l_Nat_decidablePrime_x27(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_decidableProbablePrime(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = lean_nat_pow(x_2, x_4);
lean_dec(x_4);
x_6 = lean_nat_sub(x_5, x_3);
lean_dec(x_5);
x_7 = l_Nat_decidable__dvd(x_1, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_decidableProbablePrime___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Nat_decidableProbablePrime(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Nat_decidablePsp(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Nat_decidableProbablePrime(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; uint8_t x_6; 
x_5 = l_Nat_decidablePrime_x27(x_1);
x_6 = l_instDecidableNot___rarg(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_lt(x_8, x_1);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_decidablePsp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Nat_decidablePsp(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_FermatPsp_0__Nat_psp__from__prime(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_nat_pow(x_1, x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_3, x_4);
x_6 = lean_nat_sub(x_1, x_4);
x_7 = lean_nat_div(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_8 = lean_nat_add(x_3, x_4);
lean_dec(x_3);
x_9 = lean_nat_add(x_1, x_4);
x_10 = lean_nat_div(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
x_11 = lean_nat_mul(x_7, x_10);
lean_dec(x_10);
lean_dec(x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_NumberTheory_FermatPsp_0__Nat_psp__from__prime___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_NumberTheory_FermatPsp_0__Nat_psp__from__prime(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Archimedean_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Finite_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Cofinite(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_FermatPsp(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Archimedean_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Finite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Cofinite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
