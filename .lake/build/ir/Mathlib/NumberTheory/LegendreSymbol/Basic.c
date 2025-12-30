// Lean compiler output
// Module: Mathlib.NumberTheory.LegendreSymbol.Basic
// Imports: Init Mathlib.NumberTheory.LegendreSymbol.QuadraticChar.Basic
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
lean_object* l_ZMod_commRing(lean_object*);
LEAN_EXPORT lean_object* l_legendreSym_hom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_quadraticChar___at_legendreSym___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_legendreSym___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_fintype(lean_object*, lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
static lean_object* l_quadraticCharFun___at_legendreSym___spec__2___closed__1;
LEAN_EXPORT lean_object* l_legendreSym(lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_quadraticCharFun___at_legendreSym___spec__2___closed__2;
lean_object* l_Semiring_toMonoidWithZero___rarg(lean_object*);
lean_object* l_ZMod_instField(lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
uint8_t l_Fintype_IsSquare_decidablePred___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ZMod_decidableEq___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
lean_object* lean_int_neg(lean_object*);
static lean_object* l_quadraticCharFun___at_legendreSym___spec__2___closed__3;
LEAN_EXPORT lean_object* l_quadraticCharFun___at_legendreSym___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_quadraticCharFun___at_legendreSym___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_quadraticCharFun___at_legendreSym___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_quadraticCharFun___at_legendreSym___spec__2___closed__1;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_quadraticCharFun___at_legendreSym___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_quadraticCharFun___at_legendreSym___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = l_ZMod_instField(x_1, lean_box(0));
x_8 = l_Field_toSemifield___rarg(x_7);
lean_dec(x_7);
x_9 = l_Semifield_toDivisionSemiring___rarg(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Semiring_toMonoidWithZero___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_4);
lean_inc(x_6);
x_13 = lean_apply_2(x_4, x_6, x_12);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_16 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Fintype_IsSquare_decidablePred___rarg(x_17, x_3, x_4, x_6);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_quadraticCharFun___at_legendreSym___spec__2___closed__2;
return x_19;
}
else
{
lean_object* x_20; 
x_20 = l_quadraticCharFun___at_legendreSym___spec__2___closed__1;
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = l_quadraticCharFun___at_legendreSym___spec__2___closed__3;
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_quadraticChar___at_legendreSym___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_ZMod_fintype(x_1, lean_box(0));
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_ZMod_decidableEq___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = l_ZMod_commRing(x_1);
x_6 = lean_alloc_closure((void*)(l_quadraticCharFun___at_legendreSym___spec__2), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_legendreSym___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_ZMod_instField(x_1, lean_box(0));
x_5 = l_Field_toDivisionRing___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 4);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_7, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_legendreSym(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = l_Int_cast___at_legendreSym___spec__3(x_1, lean_box(0), x_3);
x_5 = l_quadraticChar___at_legendreSym___spec__1(x_1, lean_box(0));
x_6 = lean_apply_1(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_legendreSym_hom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_legendreSym), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_QuadraticChar_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_LegendreSymbol_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_LegendreSymbol_QuadraticChar_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_quadraticCharFun___at_legendreSym___spec__2___closed__1 = _init_l_quadraticCharFun___at_legendreSym___spec__2___closed__1();
lean_mark_persistent(l_quadraticCharFun___at_legendreSym___spec__2___closed__1);
l_quadraticCharFun___at_legendreSym___spec__2___closed__2 = _init_l_quadraticCharFun___at_legendreSym___spec__2___closed__2();
lean_mark_persistent(l_quadraticCharFun___at_legendreSym___spec__2___closed__2);
l_quadraticCharFun___at_legendreSym___spec__2___closed__3 = _init_l_quadraticCharFun___at_legendreSym___spec__2___closed__3();
lean_mark_persistent(l_quadraticCharFun___at_legendreSym___spec__2___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
