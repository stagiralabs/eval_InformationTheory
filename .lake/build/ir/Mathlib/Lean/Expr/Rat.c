// Lean compiler output
// Module: Mathlib.Lean.Expr.Rat
// Imports: Init Mathlib.Init Batteries.Data.Rat.Basic Batteries.Tactic.Alias
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
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_rat_x3f(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
static lean_object* l_Lean_Expr_rat_x3f___closed__2;
LEAN_EXPORT lean_object* l_Int_cast___at_Lean_Expr_rat_x3f___spec__1(lean_object*);
lean_object* l_mkRat(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isExplicitNumber(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isExplicitNumber___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_rat_x3f___closed__1;
static lean_object* l_Lean_Expr_rat_x3f___closed__3;
lean_object* l_Lean_Expr_int_x3f(lean_object*);
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_Lean_Expr_rat_x3f___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_rat_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Div", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_rat_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("div", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_rat_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_rat_x3f___closed__1;
x_2 = l_Lean_Expr_rat_x3f___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_rat_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Expr_rat_x3f___closed__3;
x_3 = lean_unsigned_to_nat(4u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_Expr_int_x3f(x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_5, 0, x_10);
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
lean_dec(x_5);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Expr_appArg_x21(x_1);
x_16 = l_Lean_Expr_nat_x3f(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = lean_box(0);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_dec_eq(x_18, x_19);
x_21 = l_instDecidableNot___rarg(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_1);
x_22 = lean_box(0);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = l_Lean_Expr_appFn_x21(x_1);
lean_dec(x_1);
x_24 = l_Lean_Expr_appArg_x21(x_23);
lean_dec(x_23);
x_25 = l_Lean_Expr_int_x3f(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_dec(x_18);
x_26 = lean_box(0);
return x_26;
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_18);
x_29 = l_mkRat(x_28, x_18);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
x_31 = lean_nat_dec_eq(x_30, x_18);
lean_dec(x_18);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
lean_free_object(x_25);
x_32 = lean_box(0);
return x_32;
}
else
{
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
lean_inc(x_18);
x_34 = l_mkRat(x_33, x_18);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
x_36 = lean_nat_dec_eq(x_35, x_18);
lean_dec(x_18);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_34);
x_37 = lean_box(0);
return x_37;
}
else
{
lean_object* x_38; 
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_34);
return x_38;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isExplicitNumber(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 9:
{
uint8_t x_2; 
lean_dec(x_1);
x_2 = 1;
return x_2;
}
case 10:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_1 = x_3;
goto _start;
}
default: 
{
lean_object* x_5; 
x_5 = l_Lean_Expr_rat_x3f(x_1);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 1;
return x_7;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isExplicitNumber___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_isExplicitNumber(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_Rat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Tactic_Alias(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Lean_Expr_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_Rat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Tactic_Alias(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Expr_rat_x3f___closed__1 = _init_l_Lean_Expr_rat_x3f___closed__1();
lean_mark_persistent(l_Lean_Expr_rat_x3f___closed__1);
l_Lean_Expr_rat_x3f___closed__2 = _init_l_Lean_Expr_rat_x3f___closed__2();
lean_mark_persistent(l_Lean_Expr_rat_x3f___closed__2);
l_Lean_Expr_rat_x3f___closed__3 = _init_l_Lean_Expr_rat_x3f___closed__3();
lean_mark_persistent(l_Lean_Expr_rat_x3f___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
