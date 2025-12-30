// Lean compiler output
// Module: Mathlib.NumberTheory.LegendreSymbol.QuadraticChar.Basic
// Imports: Init Mathlib.Data.Fintype.Parity Mathlib.NumberTheory.LegendreSymbol.ZModChar Mathlib.FieldTheory.Finite.Basic
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
static lean_object* l_quadraticCharFun___rarg___closed__1;
LEAN_EXPORT lean_object* l_quadraticChar___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_quadraticCharFun___at_quadraticChar___spec__1(lean_object*);
static lean_object* l_quadraticCharFun___rarg___closed__3;
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_quadraticChar(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_quadraticCharFun___rarg___closed__2;
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_quadraticCharFun(lean_object*);
LEAN_EXPORT lean_object* l_quadraticCharFun___at_quadraticChar___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_quadraticCharFun___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Fintype_IsSquare_decidablePred___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_quadraticCharFun___at_quadraticChar___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_quadraticCharFun___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_quadraticCharFun___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_quadraticCharFun___rarg___closed__1;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_quadraticCharFun___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_quadraticCharFun___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
x_6 = lean_apply_2(x_2, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_apply_1(x_3, x_4);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_quadraticCharFun___rarg___closed__2;
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_quadraticCharFun___rarg___closed__1;
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_12 = l_quadraticCharFun___rarg___closed__3;
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_quadraticCharFun(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_quadraticCharFun___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_quadraticCharFun___at_quadraticChar___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = l_Field_toSemifield___rarg(x_1);
x_7 = l_Semifield_toDivisionSemiring___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Semiring_toMonoidWithZero___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_5);
x_11 = lean_apply_2(x_3, x_5, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = l_CommRing_toNonUnitalCommRing___rarg(x_4);
x_14 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Fintype_IsSquare_decidablePred___rarg(x_15, x_2, x_3, x_5);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = l_quadraticCharFun___rarg___closed__2;
return x_17;
}
else
{
lean_object* x_18; 
x_18 = l_quadraticCharFun___rarg___closed__1;
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = l_quadraticCharFun___rarg___closed__3;
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_quadraticCharFun___at_quadraticChar___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_quadraticCharFun___at_quadraticChar___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_quadraticChar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_quadraticCharFun___at_quadraticChar___spec__1___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_quadraticChar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_quadraticChar___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_quadraticCharFun___at_quadraticChar___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_quadraticCharFun___at_quadraticChar___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Parity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_ZModChar(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Finite_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_QuadraticChar_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Parity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LegendreSymbol_ZModChar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Finite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_quadraticCharFun___rarg___closed__1 = _init_l_quadraticCharFun___rarg___closed__1();
lean_mark_persistent(l_quadraticCharFun___rarg___closed__1);
l_quadraticCharFun___rarg___closed__2 = _init_l_quadraticCharFun___rarg___closed__2();
lean_mark_persistent(l_quadraticCharFun___rarg___closed__2);
l_quadraticCharFun___rarg___closed__3 = _init_l_quadraticCharFun___rarg___closed__3();
lean_mark_persistent(l_quadraticCharFun___rarg___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
