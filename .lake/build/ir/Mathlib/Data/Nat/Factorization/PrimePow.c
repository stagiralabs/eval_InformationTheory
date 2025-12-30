// Lean compiler output
// Module: Mathlib.Data.Nat.Factorization.PrimePow
// Imports: Init Mathlib.Algebra.IsPrimePow Mathlib.Data.Nat.Factorization.Basic Mathlib.Data.Nat.Prime.Pow Mathlib.NumberTheory.Divisors
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
static lean_object* l_Nat_Primes_prodNatEquiv___closed__1;
static lean_object* l_Nat_Primes_prodNatEquiv___closed__2;
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__1(lean_object*);
static lean_object* l_Nat_Primes_prodNatEquiv___closed__3;
lean_object* l_Nat_minFac(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__1___boxed(lean_object*);
lean_object* l_Nat_factorization___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__2___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Nat_minFac(x_1);
x_3 = l_Nat_factorization___elambda__1(x_1, x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
x_6 = lean_nat_pow(x_2, x_5);
lean_dec(x_5);
return x_6;
}
}
static lean_object* _init_l_Nat_Primes_prodNatEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Primes_prodNatEquiv___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_Primes_prodNatEquiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Primes_prodNatEquiv___elambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_Primes_prodNatEquiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_Primes_prodNatEquiv___closed__1;
x_2 = l_Nat_Primes_prodNatEquiv___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_Primes_prodNatEquiv() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_Primes_prodNatEquiv___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_Primes_prodNatEquiv___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_Primes_prodNatEquiv___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_Primes_prodNatEquiv___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_IsPrimePow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorization_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Pow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Divisors(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Factorization_PrimePow(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_IsPrimePow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Pow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Divisors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_Primes_prodNatEquiv___closed__1 = _init_l_Nat_Primes_prodNatEquiv___closed__1();
lean_mark_persistent(l_Nat_Primes_prodNatEquiv___closed__1);
l_Nat_Primes_prodNatEquiv___closed__2 = _init_l_Nat_Primes_prodNatEquiv___closed__2();
lean_mark_persistent(l_Nat_Primes_prodNatEquiv___closed__2);
l_Nat_Primes_prodNatEquiv___closed__3 = _init_l_Nat_Primes_prodNatEquiv___closed__3();
lean_mark_persistent(l_Nat_Primes_prodNatEquiv___closed__3);
l_Nat_Primes_prodNatEquiv = _init_l_Nat_Primes_prodNatEquiv();
lean_mark_persistent(l_Nat_Primes_prodNatEquiv);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
