// Lean compiler output
// Module: Mathlib.NumberTheory.Padics.PadicVal.Basic
// Imports: Init Mathlib.NumberTheory.Divisors Mathlib.NumberTheory.Padics.PadicVal.Defs Mathlib.Data.Nat.MaxPowDiv Mathlib.Data.Nat.Multiplicity Mathlib.Data.Nat.Prime.Int
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
LEAN_EXPORT lean_object* l_padicValInt(lean_object*, lean_object*);
lean_object* l_Nat_maxPowDiv_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_padicValInt___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_padicValRat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_padicValRat___boxed(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_padicValInt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_nat_abs(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Nat_maxPowDiv_go(x_4, x_1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_padicValInt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_padicValInt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_padicValRat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_padicValInt(x_1, x_3);
lean_dec(x_3);
x_5 = lean_nat_to_int(x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Nat_maxPowDiv_go(x_7, x_1, x_6);
x_9 = lean_nat_to_int(x_8);
x_10 = lean_int_sub(x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_padicValRat___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_padicValRat(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Divisors(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Padics_PadicVal_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_MaxPowDiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Multiplicity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime_Int(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Padics_PadicVal_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Divisors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Padics_PadicVal_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_MaxPowDiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Multiplicity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
