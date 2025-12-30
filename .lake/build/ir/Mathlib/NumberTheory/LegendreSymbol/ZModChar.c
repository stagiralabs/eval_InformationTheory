// Lean compiler output
// Module: Mathlib.NumberTheory.LegendreSymbol.ZModChar
// Imports: Init Mathlib.Data.Int.Range Mathlib.Data.ZMod.Basic Mathlib.NumberTheory.MulChar.Basic
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
static lean_object* l_ZMod__u03c7_u2084___closed__2;
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088(lean_object*);
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2084(lean_object*);
static lean_object* l_ZMod__u03c7_u2084___closed__3;
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088_x27___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2084___boxed(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088_x27(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
static lean_object* l_ZMod__u03c7_u2084___closed__1;
static lean_object* _init_l_ZMod__u03c7_u2084___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_ZMod__u03c7_u2084___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ZMod__u03c7_u2084___closed__1;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_ZMod__u03c7_u2084___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2084(lean_object* x_1) {
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
lean_object* x_7; uint8_t x_8; 
x_7 = lean_nat_sub(x_5, x_4);
lean_dec(x_5);
x_8 = lean_nat_dec_eq(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_ZMod__u03c7_u2084___closed__2;
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_ZMod__u03c7_u2084___closed__3;
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = l_ZMod__u03c7_u2084___closed__1;
return x_11;
}
}
else
{
lean_object* x_12; 
x_12 = l_ZMod__u03c7_u2084___closed__3;
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2084___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ZMod__u03c7_u2084(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088(lean_object* x_1) {
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
lean_object* x_7; uint8_t x_8; 
x_7 = lean_nat_sub(x_5, x_4);
lean_dec(x_5);
x_8 = lean_nat_dec_eq(x_7, x_2);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_nat_sub(x_7, x_4);
lean_dec(x_7);
x_10 = lean_nat_dec_eq(x_9, x_2);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_nat_sub(x_9, x_4);
lean_dec(x_9);
x_12 = lean_nat_dec_eq(x_11, x_2);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_nat_sub(x_11, x_4);
lean_dec(x_11);
x_14 = lean_nat_dec_eq(x_13, x_2);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_nat_sub(x_13, x_4);
lean_dec(x_13);
x_16 = lean_nat_dec_eq(x_15, x_2);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = l_ZMod__u03c7_u2084___closed__1;
return x_17;
}
else
{
lean_object* x_18; 
x_18 = l_ZMod__u03c7_u2084___closed__3;
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_13);
x_19 = l_ZMod__u03c7_u2084___closed__2;
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_11);
x_20 = l_ZMod__u03c7_u2084___closed__3;
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_9);
x_21 = l_ZMod__u03c7_u2084___closed__2;
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_7);
x_22 = l_ZMod__u03c7_u2084___closed__3;
return x_22;
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
x_23 = l_ZMod__u03c7_u2084___closed__1;
return x_23;
}
}
else
{
lean_object* x_24; 
x_24 = l_ZMod__u03c7_u2084___closed__3;
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ZMod__u03c7_u2088(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088_x27(lean_object* x_1) {
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
lean_object* x_7; uint8_t x_8; 
x_7 = lean_nat_sub(x_5, x_4);
lean_dec(x_5);
x_8 = lean_nat_dec_eq(x_7, x_2);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_nat_sub(x_7, x_4);
lean_dec(x_7);
x_10 = lean_nat_dec_eq(x_9, x_2);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_nat_sub(x_9, x_4);
lean_dec(x_9);
x_12 = lean_nat_dec_eq(x_11, x_2);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_nat_sub(x_11, x_4);
lean_dec(x_11);
x_14 = lean_nat_dec_eq(x_13, x_2);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_nat_sub(x_13, x_4);
lean_dec(x_13);
x_16 = lean_nat_dec_eq(x_15, x_2);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = l_ZMod__u03c7_u2084___closed__2;
return x_17;
}
else
{
lean_object* x_18; 
x_18 = l_ZMod__u03c7_u2084___closed__3;
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_13);
x_19 = l_ZMod__u03c7_u2084___closed__2;
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_11);
x_20 = l_ZMod__u03c7_u2084___closed__3;
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_9);
x_21 = l_ZMod__u03c7_u2084___closed__1;
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_7);
x_22 = l_ZMod__u03c7_u2084___closed__3;
return x_22;
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
x_23 = l_ZMod__u03c7_u2084___closed__1;
return x_23;
}
}
else
{
lean_object* x_24; 
x_24 = l_ZMod__u03c7_u2084___closed__3;
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_ZMod__u03c7_u2088_x27___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ZMod__u03c7_u2088_x27(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Range(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_MulChar_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_ZModChar(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Range(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_MulChar_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ZMod__u03c7_u2084___closed__1 = _init_l_ZMod__u03c7_u2084___closed__1();
lean_mark_persistent(l_ZMod__u03c7_u2084___closed__1);
l_ZMod__u03c7_u2084___closed__2 = _init_l_ZMod__u03c7_u2084___closed__2();
lean_mark_persistent(l_ZMod__u03c7_u2084___closed__2);
l_ZMod__u03c7_u2084___closed__3 = _init_l_ZMod__u03c7_u2084___closed__3();
lean_mark_persistent(l_ZMod__u03c7_u2084___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
