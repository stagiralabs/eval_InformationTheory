// Lean compiler output
// Module: Mathlib.CategoryTheory.Idempotents.Biproducts
// Imports: Init Mathlib.CategoryTheory.Idempotents.Karoubi
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
LEAN_EXPORT lean_object* l_CategoryTheory_Idempotents_Karoubi_complement___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Idempotents_Karoubi_complement(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Idempotents_Karoubi_complement___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc_n(x_5, 2);
x_7 = lean_apply_2(x_2, x_5, x_5);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
lean_inc(x_5);
x_10 = lean_apply_1(x_9, x_5);
x_11 = lean_apply_2(x_8, x_10, x_6);
lean_ctor_set(x_3, 1, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc_n(x_12, 2);
x_14 = lean_apply_2(x_2, x_12, x_12);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_dec(x_1);
lean_inc(x_12);
x_17 = lean_apply_1(x_16, x_12);
x_18 = lean_apply_2(x_15, x_17, x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Idempotents_Karoubi_complement(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Idempotents_Karoubi_complement___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Idempotents_Karoubi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Idempotents_Biproducts(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Idempotents_Karoubi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
