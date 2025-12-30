// Lean compiler output
// Module: Mathlib.RingTheory.Multiplicity
// Imports: Init Batteries.Data.Nat.Gcd Mathlib.Algebra.GroupWithZero.Associated Mathlib.Algebra.Ring.Divisibility.Basic Mathlib.Algebra.Ring.Int.Defs Mathlib.Data.ENat.Basic Mathlib.Algebra.BigOperators.Group.Finset.Basic
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
LEAN_EXPORT lean_object* l_Int_decidableMultiplicityFinite___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Nat_decidableMultiplicityFinite___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableFiniteMultiplicity___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_decidableFiniteMultiplicity(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_decidableFiniteMultiplicity___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_decidableMultiplicityFinite(lean_object*, lean_object*);
static lean_object* l_Int_decidableMultiplicityFinite___closed__1;
LEAN_EXPORT uint8_t l_Int_decidableFiniteMultiplicity(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_decidableMultiplicityFinite(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_decidableFiniteMultiplicity(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_dec_eq(x_1, x_3);
x_5 = l_instDecidableNot___rarg(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Nat_decidableFiniteMultiplicity___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Nat_decidableFiniteMultiplicity(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Nat_decidableMultiplicityFinite(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Nat_decidableFiniteMultiplicity(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_decidableMultiplicityFinite___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Nat_decidableMultiplicityFinite(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Int_decidableMultiplicityFinite___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Int_decidableMultiplicityFinite(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_3 = lean_nat_abs(x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
x_6 = l_instDecidableNot___rarg(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; uint8_t x_10; 
x_8 = l_Int_decidableMultiplicityFinite___closed__1;
x_9 = lean_int_dec_eq(x_2, x_8);
x_10 = l_instDecidableNot___rarg(x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Int_decidableMultiplicityFinite___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Int_decidableMultiplicityFinite(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Int_decidableFiniteMultiplicity(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Int_decidableMultiplicityFinite(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_decidableFiniteMultiplicity___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Int_decidableFiniteMultiplicity(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_Nat_Gcd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Associated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Divisibility_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Multiplicity(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_Nat_Gcd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Associated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Divisibility_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_decidableMultiplicityFinite___closed__1 = _init_l_Int_decidableMultiplicityFinite___closed__1();
lean_mark_persistent(l_Int_decidableMultiplicityFinite___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
