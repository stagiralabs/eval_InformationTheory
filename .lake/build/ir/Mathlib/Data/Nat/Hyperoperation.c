// Lean compiler output
// Module: Mathlib.Data.Nat.Hyperoperation
// Imports: Init Mathlib.Tactic.Ring
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
LEAN_EXPORT lean_object* l_hyperoperation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hyperoperation___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hyperoperation(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_dec(x_1);
x_8 = lean_nat_dec_eq(x_7, x_4);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_nat_sub(x_7, x_6);
x_10 = lean_nat_dec_eq(x_9, x_4);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = lean_nat_dec_eq(x_3, x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_13 = lean_nat_add(x_7, x_6);
x_14 = l_hyperoperation(x_13, x_2, x_12);
x_1 = x_7;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_3);
x_16 = lean_unsigned_to_nat(1u);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_7);
x_17 = lean_nat_dec_eq(x_3, x_4);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_19 = lean_unsigned_to_nat(2u);
x_20 = l_hyperoperation(x_19, x_2, x_18);
x_1 = x_6;
x_3 = x_20;
goto _start;
}
else
{
lean_object* x_22; 
lean_dec(x_3);
x_22 = lean_unsigned_to_nat(0u);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_7);
x_23 = lean_nat_dec_eq(x_3, x_4);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_25 = l_hyperoperation(x_6, x_2, x_24);
x_1 = x_4;
x_3 = x_25;
goto _start;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_3, x_27);
lean_dec(x_3);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_hyperoperation___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_hyperoperation(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_4);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_1, x_11);
x_13 = lean_nat_dec_eq(x_12, x_9);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
lean_dec(x_5);
x_14 = lean_nat_sub(x_12, x_11);
x_15 = lean_nat_dec_eq(x_14, x_9);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_dec(x_6);
x_16 = lean_nat_sub(x_14, x_11);
lean_dec(x_14);
x_17 = lean_nat_dec_eq(x_3, x_9);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_7);
x_18 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_19 = lean_apply_3(x_8, x_12, x_2, x_18);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_3);
x_20 = lean_apply_2(x_7, x_16, x_2);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
x_21 = lean_nat_dec_eq(x_3, x_9);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
x_22 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_23 = lean_apply_3(x_8, x_11, x_2, x_22);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_8);
lean_dec(x_3);
x_24 = lean_apply_1(x_6, x_2);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
x_25 = lean_nat_dec_eq(x_3, x_9);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_5);
x_26 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_27 = lean_apply_3(x_8, x_9, x_2, x_26);
return x_27;
}
else
{
lean_object* x_28; 
lean_dec(x_8);
lean_dec(x_3);
x_28 = lean_apply_1(x_5, x_2);
return x_28;
}
}
}
else
{
lean_object* x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = lean_apply_2(x_4, x_2, x_3);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Mathlib_Data_Nat_Hyperoperation_0__hyperoperation_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Hyperoperation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
