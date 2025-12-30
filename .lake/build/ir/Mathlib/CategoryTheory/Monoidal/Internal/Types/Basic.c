// Lean compiler output
// Module: Mathlib.CategoryTheory.Monoidal.Internal.Types.Basic
// Imports: Init Mathlib.Algebra.Category.MonCat.Basic Mathlib.CategoryTheory.Monoidal.CommMon_ Mathlib.CategoryTheory.Monoidal.Types.Basic
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
LEAN_EXPORT lean_object* l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___closed__1;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonTypeEquivalenceMon_monMonoid(lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRec___at_MonTypeEquivalenceMon_monMonoid___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonTypeEquivalenceMon_monMonoid___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_MonTypeEquivalenceMon_monMonoid___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_MonTypeEquivalenceMon_monMonoid___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommMonTypeEquivalenceCommMon_commMonCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Nat_binaryRec___at_MonTypeEquivalenceMon_monMonoid___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_land(x_8, x_3);
x_10 = lean_nat_dec_eq(x_9, x_6);
lean_dec(x_9);
x_11 = lean_nat_shiftr(x_3, x_8);
lean_dec(x_3);
if (x_10 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc_n(x_5, 2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_5);
lean_inc(x_12);
x_14 = lean_apply_1(x_12, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_5);
x_16 = lean_apply_1(x_12, x_15);
x_3 = x_11;
x_4 = x_16;
x_5 = x_14;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
lean_inc(x_5);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_5);
x_20 = lean_apply_1(x_18, x_19);
x_3 = x_11;
x_5 = x_20;
goto _start;
}
}
else
{
lean_object* x_22; 
lean_dec(x_3);
lean_dec(x_1);
x_22 = lean_apply_2(x_2, x_4, x_5);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___closed__1;
x_6 = l_Nat_binaryRec___at_MonTypeEquivalenceMon_monMonoid___spec__4(x_1, x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_npowBinRec___at_MonTypeEquivalenceMon_monMonoid___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
x_7 = lean_alloc_closure((void*)(l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___lambda__1___boxed), 2, 0);
x_8 = l_Nat_binaryRec___at_MonTypeEquivalenceMon_monMonoid___spec__4(x_1, x_7, x_2, x_6, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_npowBinRecAuto___at_MonTypeEquivalenceMon_monMonoid___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowBinRec___at_MonTypeEquivalenceMon_monMonoid___spec__2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonTypeEquivalenceMon_monMonoid___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonTypeEquivalenceMon_monMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_MonTypeEquivalenceMon_monMonoid___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_npowBinRecAuto___at_MonTypeEquivalenceMon_monMonoid___spec__1), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommMonTypeEquivalenceCommMon_commMonCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MonTypeEquivalenceMon_monMonoid(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_MonCat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_CommMon__(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Internal_Types_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_MonCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_CommMon__(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Types_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___closed__1 = _init_l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___closed__1();
lean_mark_persistent(l_npowBinRec_go___at_MonTypeEquivalenceMon_monMonoid___spec__3___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
