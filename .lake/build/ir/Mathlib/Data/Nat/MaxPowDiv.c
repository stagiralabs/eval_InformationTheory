// Lean compiler output
// Module: Mathlib.Data.Nat.MaxPowDiv
// Imports: Init Mathlib.Algebra.Divisibility.Units Mathlib.Algebra.Order.Ring.Nat Mathlib.Tactic.Common
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
LEAN_EXPORT lean_object* l_Nat_maxPowDiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_maxPowDiv_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_maxPowDiv_go___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_maxPowDiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_maxPowDiv_go(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_dec_lt(x_4, x_2);
if (x_5 == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_3);
if (x_7 == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_nat_mod(x_3, x_2);
x_9 = lean_nat_dec_eq(x_8, x_6);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_nat_add(x_1, x_4);
lean_dec(x_1);
x_11 = lean_nat_div(x_3, x_2);
lean_dec(x_3);
x_1 = x_10;
x_3 = x_11;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_maxPowDiv_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_maxPowDiv_go(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_maxPowDiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Nat_maxPowDiv_go(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_maxPowDiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_maxPowDiv(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Divisibility_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Common(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_MaxPowDiv(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Divisibility_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
