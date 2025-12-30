// Lean compiler output
// Module: Mathlib.Data.Nat.Factorization.Induction
// Imports: Init Mathlib.Data.Nat.Factorization.Defs
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
LEAN_EXPORT lean_object* l_Nat_recOnMul_hp_x27_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimeCoprime___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPosPrimePosCoprime___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_minFac(lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnMul_hp_x27_x27(lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimeCoprime___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPosPrimePosCoprime(lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnMul_hp_x27_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPosPrimePosCoprime___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimeCoprime(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Nat_factorization___elambda__1(lean_object*, lean_object*);
lean_object* l_Nat_strongRec_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnMul(lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnMul___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
x_10 = lean_nat_dec_eq(x_9, x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_nat_sub(x_9, x_8);
lean_dec(x_9);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_add(x_11, x_12);
lean_dec(x_11);
x_14 = l_Nat_minFac(x_13);
x_15 = l_Nat_factorization___elambda__1(x_13, x_14);
x_16 = lean_nat_pow(x_14, x_15);
x_17 = lean_nat_div(x_13, x_16);
lean_dec(x_16);
lean_dec(x_13);
lean_inc(x_17);
x_18 = lean_apply_2(x_5, x_17, lean_box(0));
x_19 = lean_apply_7(x_1, x_17, x_14, x_15, lean_box(0), lean_box(0), lean_box(0), x_18);
return x_19;
}
else
{
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
else
{
lean_dec(x_5);
lean_dec(x_1);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Nat_recOnPrimePow___rarg___lambda__1___boxed), 5, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_1);
x_6 = l_Nat_strongRec_x27___rarg(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_recOnPrimePow___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPrimePow___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_recOnPrimePow___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPosPrimePosCoprime___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_3, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_nat_pow(x_4, x_5);
x_13 = lean_apply_4(x_1, x_4, x_5, lean_box(0), lean_box(0));
x_14 = lean_apply_7(x_2, x_12, x_3, lean_box(0), lean_box(0), lean_box(0), x_13, x_9);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_4(x_1, x_4, x_5, lean_box(0), lean_box(0));
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPosPrimePosCoprime___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_Nat_recOnPosPrimePosCoprime___rarg___lambda__1), 9, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
x_7 = l_Nat_recOnPrimePow___rarg(x_2, x_3, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPosPrimePosCoprime(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_recOnPosPrimePosCoprime___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPrimeCoprime___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_3(x_1, x_2, x_3, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPrimeCoprime___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_Nat_recOnPrimeCoprime___rarg___lambda__1), 5, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_apply_3(x_2, x_6, x_7, lean_box(0));
x_9 = l_Nat_recOnPosPrimePosCoprime___rarg(x_5, x_1, x_8, x_3, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnPrimeCoprime(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_recOnPrimeCoprime___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnMul_hp_x27_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_5, x_9);
x_11 = lean_nat_pow(x_4, x_10);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = l_Nat_recOnMul_hp_x27_x27___rarg(x_1, x_2, x_3, x_4, x_10, lean_box(0));
lean_dec(x_10);
lean_inc(x_4);
x_13 = lean_apply_2(x_2, x_4, lean_box(0));
x_14 = lean_apply_4(x_3, x_11, x_4, x_12, x_13);
return x_14;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Nat_recOnMul_hp_x27_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_recOnMul_hp_x27_x27___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnMul_hp_x27_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_recOnMul_hp_x27_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnMul___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_4(x_1, x_2, x_3, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_Nat_recOnMul_hp_x27_x27___rarg___boxed), 6, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
x_7 = lean_alloc_closure((void*)(l_Nat_recOnMul___rarg___lambda__1), 8, 1);
lean_closure_set(x_7, 0, x_4);
x_8 = l_Nat_recOnPrimeCoprime___rarg(x_1, x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_recOnMul(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_recOnMul___rarg), 5, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorization_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Factorization_Induction(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorization_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
