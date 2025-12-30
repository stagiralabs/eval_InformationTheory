// Lean compiler output
// Module: Mathlib.Algebra.Ring.NegOnePow
// Imports: Init Mathlib.Algebra.Ring.Int.Parity Mathlib.Algebra.Ring.Int.Units Mathlib.Data.ZMod.IntUnitsPower
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
static lean_object* l_Int_negOnePow___closed__3;
static lean_object* l_Int_negOnePow___closed__2;
lean_object* l_Additive_toMul(lean_object*);
LEAN_EXPORT lean_object* l_Int_negOnePow___boxed(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
static lean_object* l_Int_negOnePow___closed__1;
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Int_negOnePow___closed__4;
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negOnePow(lean_object*);
static lean_object* _init_l_Int_negOnePow___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_negOnePow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_negOnePow___closed__1;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_negOnePow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Additive_toMul(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Int_negOnePow___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_negOnePow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_Int_negOnePow___closed__3;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Int_negOnePow___closed__4;
x_5 = lean_int_dec_lt(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_nat_abs(x_1);
x_7 = l_Int_negOnePow___closed__2;
x_8 = l_Int_pow(x_7, x_6);
lean_dec(x_6);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_nat_abs(x_1);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_11, x_12);
lean_dec(x_11);
x_14 = lean_nat_add(x_13, x_12);
lean_dec(x_13);
x_15 = l_Int_negOnePow___closed__2;
x_16 = l_Int_pow(x_15, x_14);
lean_dec(x_14);
lean_inc(x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_apply_1(x_3, x_17);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Int_negOnePow___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Int_negOnePow(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Parity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_IntUnitsPower(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_NegOnePow(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Parity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_IntUnitsPower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_negOnePow___closed__1 = _init_l_Int_negOnePow___closed__1();
lean_mark_persistent(l_Int_negOnePow___closed__1);
l_Int_negOnePow___closed__2 = _init_l_Int_negOnePow___closed__2();
lean_mark_persistent(l_Int_negOnePow___closed__2);
l_Int_negOnePow___closed__3 = _init_l_Int_negOnePow___closed__3();
lean_mark_persistent(l_Int_negOnePow___closed__3);
l_Int_negOnePow___closed__4 = _init_l_Int_negOnePow___closed__4();
lean_mark_persistent(l_Int_negOnePow___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
