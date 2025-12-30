// Lean compiler output
// Module: Mathlib.CategoryTheory.Triangulated.Subcategory
// Imports: Init Mathlib.CategoryTheory.ObjectProperty.ClosedUnderIsomorphisms Mathlib.CategoryTheory.Localization.CalculusOfFractions Mathlib.CategoryTheory.Localization.Triangulated Mathlib.CategoryTheory.Shift.Localization
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
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_isoClosure___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_mk_x27(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_mk_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_isoClosure___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_isoClosure(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_mk_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_isoClosure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_isoClosure(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Triangulated_Subcategory_isoClosure___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_isoClosure___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Triangulated_Subcategory_isoClosure___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_mk_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, lean_box(0));
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_mk_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Triangulated_Subcategory_mk_x27___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Triangulated_Subcategory_mk_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_CategoryTheory_Triangulated_Subcategory_mk_x27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_ObjectProperty_ClosedUnderIsomorphisms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Localization_CalculusOfFractions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Localization_Triangulated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Shift_Localization(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Triangulated_Subcategory(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_ObjectProperty_ClosedUnderIsomorphisms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Localization_CalculusOfFractions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Localization_Triangulated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Shift_Localization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
