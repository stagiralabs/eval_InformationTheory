// Lean compiler output
// Module: Mathlib.CategoryTheory.Shift.ShiftedHom
// Imports: Init Mathlib.CategoryTheory.Shift.CommShift Mathlib.CategoryTheory.Preadditive.AdditiveFunctor
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
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_shiftFunctor___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_CategoryTheory_shiftFunctor___rarg(x_1, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_7, x_4);
x_9 = lean_apply_2(x_2, x_3, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_instAddCommGroupShiftedHomOfPreadditive(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_inc(x_13);
lean_inc(x_6);
x_14 = lean_apply_1(x_13, x_6);
lean_inc(x_8);
x_15 = l_CategoryTheory_shiftFunctor___rarg(x_4, x_8);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
x_17 = lean_apply_1(x_16, x_7);
lean_inc(x_13);
lean_inc(x_17);
x_18 = lean_apply_1(x_13, x_17);
lean_inc(x_8);
x_19 = l_CategoryTheory_shiftFunctor___rarg(x_5, x_8);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_7);
x_21 = lean_apply_1(x_13, x_7);
x_22 = lean_apply_1(x_20, x_21);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_apply_3(x_23, x_6, x_17, x_9);
x_25 = lean_apply_1(x_11, x_8);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_apply_1(x_26, x_7);
x_28 = lean_apply_5(x_12, x_14, x_18, x_22, x_24, x_27);
return x_28;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShiftedHom_map___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_CategoryTheory_ShiftedHom_map___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShiftedHom_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShiftedHom_map(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Shift_CommShift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Shift_ShiftedHom(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Shift_CommShift(builtin, lean_io_mk_world());
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
