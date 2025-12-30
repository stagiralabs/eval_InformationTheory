// Lean compiler output
// Module: Mathlib.CategoryTheory.Shift.ShiftSequence
// Imports: Init Mathlib.CategoryTheory.Shift.Basic Mathlib.CategoryTheory.Preadditive.AdditiveFunctor
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftIso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_isoWhiskerLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_shiftFunctor___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftIso___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_NatTrans_vcomp___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shift___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftIso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shift___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_shift___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Functor_shift(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_6, x_2, x_3, x_4, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftIso(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_shiftIso___rarg), 5, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftIso___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Functor_shiftIso(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_isoShiftZero___rarg___boxed), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_Functor_isoShiftZero___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShiftZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Functor_isoShiftZero(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_vcomp___elambda__1___rarg), 7, 6);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_8);
lean_closure_set(x_10, 5, x_9);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_alloc_closure((void*)(l_CategoryTheory_NatTrans_vcomp___elambda__1___rarg), 7, 6);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_5);
lean_closure_set(x_13, 2, x_4);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_11);
lean_closure_set(x_13, 5, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_8);
x_9 = l_CategoryTheory_shiftFunctor___rarg(x_6, x_8);
lean_inc(x_3);
lean_inc(x_9);
x_10 = l_CategoryTheory_Functor_comp___rarg(x_1, lean_box(0), x_1, lean_box(0), x_2, x_9, x_3);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_dec(x_5);
lean_inc(x_11);
lean_inc(x_7);
x_12 = l_CategoryTheory_Functor_shift___rarg(x_7, x_11);
lean_inc(x_12);
lean_inc(x_9);
x_13 = l_CategoryTheory_Functor_comp___rarg(x_1, lean_box(0), x_1, lean_box(0), x_2, x_9, x_12);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l_CategoryTheory_Functor_shift___rarg(x_7, x_8);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
x_16 = l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1___rarg(x_1, x_2, x_12, x_3, x_15);
lean_dec(x_15);
lean_inc(x_2);
lean_inc_n(x_1, 2);
x_17 = l_CategoryTheory_isoWhiskerLeft___rarg(x_1, lean_box(0), x_1, lean_box(0), x_2, x_9, x_3, x_12, x_16);
lean_inc(x_8);
x_18 = l_CategoryTheory_Functor_shiftIso___rarg(x_7, x_8, x_11, x_8, lean_box(0));
x_19 = l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2___rarg(x_1, x_2, x_10, x_13, x_14, x_17, x_18);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_isoShift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_isoShift___rarg), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Iso_symm___at_CategoryTheory_Functor_isoShift___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Iso_trans___at_CategoryTheory_Functor_isoShift___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
lean_inc(x_11);
lean_inc(x_6);
x_15 = l_CategoryTheory_Functor_shift___rarg(x_6, x_11);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_inc(x_16);
lean_inc(x_7);
x_17 = lean_apply_1(x_16, x_7);
lean_inc(x_9);
x_18 = l_CategoryTheory_shiftFunctor___rarg(x_5, x_9);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_8);
x_20 = lean_apply_1(x_19, x_8);
lean_inc(x_20);
x_21 = lean_apply_1(x_16, x_20);
lean_inc(x_12);
lean_inc(x_6);
x_22 = l_CategoryTheory_Functor_shift___rarg(x_6, x_12);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_8);
x_24 = lean_apply_1(x_23, x_8);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_dec(x_15);
x_26 = lean_apply_3(x_25, x_7, x_20, x_10);
x_27 = l_CategoryTheory_Functor_shiftIso___rarg(x_6, x_9, x_11, x_12, lean_box(0));
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_apply_1(x_28, x_8);
x_30 = lean_apply_5(x_14, x_17, x_21, x_24, x_26, x_29);
return x_30;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_shiftMap___rarg___boxed), 13, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_CategoryTheory_Functor_shiftMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_shiftMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_shiftMap(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Shift_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Shift_ShiftSequence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Shift_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
