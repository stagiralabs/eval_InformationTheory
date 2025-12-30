// Lean compiler output
// Module: Mathlib.NumberTheory.Padics.PadicVal.Defs
// Imports: Init Mathlib.RingTheory.Multiplicity Mathlib.Data.Nat.Factors
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
LEAN_EXPORT lean_object* l_Nat_findX___at_padicValNat___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_padicValNat___spec__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Nat_decidable__dvd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_padicValNat___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_padicValNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_padicValNat___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_padicValNat___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_3, x_5);
x_7 = lean_nat_pow(x_1, x_6);
x_8 = l_Nat_decidable__dvd(x_7, x_2);
lean_dec(x_7);
x_9 = l_instDecidableNot___rarg(x_8);
if (x_9 == 0)
{
lean_dec(x_3);
x_3 = x_6;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_6);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_padicValNat___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3(x_1, x_2, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_padicValNat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3(x_1, x_2, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_padicValNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_dec_eq(x_1, x_3);
x_5 = l_instDecidableNot___rarg(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_unsigned_to_nat(0u);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_2);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_unsigned_to_nat(0u);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3(x_1, x_2, x_7, lean_box(0));
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Batteries_WF_0__WellFounded_fixC___at_padicValNat___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_padicValNat___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_findX___at_padicValNat___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_padicValNat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_find___at_padicValNat___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_padicValNat___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_padicValNat(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Multiplicity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factors(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Padics_PadicVal_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Multiplicity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
