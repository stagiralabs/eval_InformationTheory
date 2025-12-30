// Lean compiler output
// Module: Mathlib.CategoryTheory.MorphismProperty.IsInvertedBy
// Imports: Init Mathlib.CategoryTheory.Functor.ReflectsIso Mathlib.CategoryTheory.MorphismProperty.Basic
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
lean_object* l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting(lean_object*);
lean_object* l_CategoryTheory_Functor_category___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg___closed__1;
lean_object* l_CategoryTheory_InducedCategory_category___rarg(lean_object*, lean_object*);
static lean_object* _init_l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_CategoryTheory_Functor_category___rarg(x_1, lean_box(0), x_4);
x_6 = l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg___closed__1;
x_7 = l_CategoryTheory_InducedCategory_category___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MorphismProperty_FunctorsInverting_mk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_MorphismProperty_FunctorsInverting_mk(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Functor_ReflectsIso(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_MorphismProperty_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_MorphismProperty_IsInvertedBy(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Functor_ReflectsIso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_MorphismProperty_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg___closed__1 = _init_l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_MorphismProperty_instCategoryFunctorsInverting___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
