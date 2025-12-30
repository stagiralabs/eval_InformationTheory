// Lean compiler output
// Module: Mathlib.CategoryTheory.Localization.HasLocalization
// Imports: Init Mathlib.CategoryTheory.Localization.Predicate
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
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_MorphismProperty_Q___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_HasLocalization_standard(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___rarg___boxed(lean_object*);
lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_HasLocalization_standard___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_MorphismProperty_instCategoryLocalization_x27(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_MorphismProperty_Q_x27___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_MorphismProperty_Q_x27___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_Q_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_MorphismProperty_Q_x27(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_HasLocalization_standard___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_CategoryTheory_MorphismProperty_instCategoryLocalization(lean_box(0), x_1, lean_box(0));
x_4 = l_CategoryTheory_MorphismProperty_Q___rarg(x_1, lean_box(0));
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_HasLocalization_standard(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MorphismProperty_HasLocalization_standard___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Localization_Predicate(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Localization_HasLocalization(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Localization_Predicate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
