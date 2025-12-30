// Lean compiler output
// Module: Mathlib.CategoryTheory.Enriched.HomCongr
// Imports: Init Mathlib.CategoryTheory.Enriched.Ordinary.Basic
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
lean_object* l_CategoryTheory_eHomWhiskerLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_eHomCongr(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_eHomCongr___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_eHomWhiskerRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_eHomCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_eHomCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_13);
lean_inc(x_7);
lean_inc(x_6);
x_14 = lean_apply_2(x_13, x_6, x_7);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_8);
x_15 = lean_apply_2(x_13, x_8, x_9);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
lean_inc(x_13);
lean_inc(x_7);
lean_inc(x_8);
x_17 = lean_apply_2(x_13, x_8, x_7);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_CategoryTheory_eHomWhiskerRight___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_8, x_6, x_18, x_7);
x_20 = lean_ctor_get(x_11, 0);
lean_inc(x_20);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_CategoryTheory_eHomWhiskerLeft___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_8, x_7, x_9, x_20);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_22 = lean_apply_5(x_16, x_14, x_17, x_15, x_19, x_21);
lean_inc(x_9);
lean_inc(x_6);
x_23 = lean_apply_2(x_13, x_6, x_9);
x_24 = lean_ctor_get(x_10, 0);
lean_inc(x_24);
lean_dec(x_10);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_CategoryTheory_eHomWhiskerRight___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_6, x_8, x_24, x_9);
x_26 = lean_ctor_get(x_11, 1);
lean_inc(x_26);
lean_dec(x_11);
x_27 = l_CategoryTheory_eHomWhiskerLeft___rarg(x_1, x_2, lean_box(0), x_4, x_5, x_6, x_9, x_7, x_26);
x_28 = lean_apply_5(x_16, x_15, x_23, x_14, x_25, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_eHomCongr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Iso_eHomCongr___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Iso_eHomCongr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_CategoryTheory_Iso_eHomCongr___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Enriched_Ordinary_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Enriched_HomCongr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Enriched_Ordinary_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
