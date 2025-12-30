// Lean compiler output
// Module: Mathlib.Data.Nat.Log
// Imports: Init Mathlib.Order.Interval.Set.Defs Mathlib.Order.Monotone.Basic Mathlib.Tactic.Bound.Attribute Mathlib.Tactic.Contrapose Mathlib.Tactic.Monotonicity.Attr
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
LEAN_EXPORT lean_object* l_Nat_log___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_logC___boxed(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Log_0__Nat_logC_step_match__1_splitter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_clog___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_logC(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_logC_step(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_log(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_clog(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Log_0__Nat_logC_step_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Nat_logC_step___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_log(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_le(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(0u);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_dec_lt(x_5, x_1);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_unsigned_to_nat(0u);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_nat_div(x_2, x_1);
x_9 = l_Nat_log(x_1, x_8);
lean_dec(x_8);
x_10 = lean_nat_add(x_9, x_5);
lean_dec(x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_log___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_log(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_clog(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_dec_lt(x_3, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_3, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_unsigned_to_nat(0u);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_nat_add(x_2, x_1);
x_9 = lean_nat_sub(x_8, x_3);
lean_dec(x_8);
x_10 = lean_nat_div(x_9, x_1);
lean_dec(x_9);
x_11 = l_Nat_clog(x_1, x_10);
lean_dec(x_10);
x_12 = lean_nat_add(x_11, x_3);
lean_dec(x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_clog___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_clog(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_logC_step(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_1, x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_nat_mul(x_2, x_2);
x_6 = l_Nat_logC_step(x_1, x_5, lean_box(0));
lean_dec(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = lean_nat_dec_lt(x_8, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_nat_div(x_8, x_2);
lean_dec(x_8);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_mul(x_12, x_9);
lean_dec(x_9);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_13, x_14);
lean_dec(x_13);
lean_ctor_set(x_6, 1, x_15);
lean_ctor_set(x_6, 0, x_11);
return x_6;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_mul(x_16, x_9);
lean_dec(x_9);
lean_ctor_set(x_6, 1, x_17);
return x_6;
}
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_20 = lean_nat_dec_lt(x_18, x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_nat_div(x_18, x_2);
lean_dec(x_18);
x_22 = lean_unsigned_to_nat(2u);
x_23 = lean_nat_mul(x_22, x_19);
lean_dec(x_19);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_23, x_24);
lean_dec(x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_unsigned_to_nat(2u);
x_28 = lean_nat_mul(x_27, x_19);
lean_dec(x_19);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_Nat_logC_step___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_logC_step(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_logC(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_dec_lt(x_3, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Nat_logC_step(x_2, x_1, lean_box(0));
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Nat_logC___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_logC(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Log_0__Nat_logC_step_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Log_0__Nat_logC_step_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Log_0__Nat_logC_step_match__1_splitter___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Monotone_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Bound_Attribute(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Contrapose(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Monotonicity_Attr(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Log(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Monotone_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Bound_Attribute(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Contrapose(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Monotonicity_Attr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
