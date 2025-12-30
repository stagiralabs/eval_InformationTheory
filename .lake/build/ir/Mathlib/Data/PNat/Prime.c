// Lean compiler output
// Module: Mathlib.Data.PNat.Prime
// Imports: Init Mathlib.Data.Nat.Prime.Defs Mathlib.Data.PNat.Basic
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
lean_object* lean_nat_gcd(lean_object*, lean_object*);
lean_object* l_Nat_lcm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_gcd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_toPNat(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_toPNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PNat_lcm___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_Primes_coePNat___closed__1;
LEAN_EXPORT lean_object* l_PNat_lcm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_coePNat;
LEAN_EXPORT lean_object* l_PNat_gcd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Primes_toPNat(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_Primes_toPNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_Primes_toPNat(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_Primes_coePNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Primes_toPNat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_Primes_coePNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_Primes_coePNat___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PNat_gcd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_nat_gcd(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PNat_gcd___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PNat_gcd(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PNat_lcm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_lcm(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PNat_lcm___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PNat_lcm(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_PNat_Prime(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_Primes_coePNat___closed__1 = _init_l_Nat_Primes_coePNat___closed__1();
lean_mark_persistent(l_Nat_Primes_coePNat___closed__1);
l_Nat_Primes_coePNat = _init_l_Nat_Primes_coePNat();
lean_mark_persistent(l_Nat_Primes_coePNat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
