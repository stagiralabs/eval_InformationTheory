// Lean compiler output
// Module: Mathlib.CategoryTheory.Subterminal
// Imports: Init Mathlib.CategoryTheory.Limits.Shapes.BinaryProducts Mathlib.CategoryTheory.Limits.Shapes.Terminal Mathlib.CategoryTheory.Subobject.MonoOver
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
LEAN_EXPORT lean_object* l_CategoryTheory_instCategorySubterminals(lean_object*);
static lean_object* l_CategoryTheory_instCategorySubterminals___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_subterminalInclusion(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_subterminalInclusion___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_subterminalInclusion___rarg(lean_object*);
lean_object* l_CategoryTheory_InducedCategory_category___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_fullSubcategoryInclusion___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_instCategorySubterminals___rarg(lean_object*);
static lean_object* _init_l_CategoryTheory_instCategorySubterminals___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCategorySubterminals___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CategoryTheory_instCategorySubterminals___rarg___closed__1;
x_3 = l_CategoryTheory_InducedCategory_category___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_instCategorySubterminals(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_instCategorySubterminals___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_subterminalInclusion___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CategoryTheory_instCategorySubterminals___rarg___closed__1;
x_3 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_fullSubcategoryInclusion___spec__1___rarg(x_1, lean_box(0), x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_subterminalInclusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_subterminalInclusion___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_subterminalInclusion___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_subterminalInclusion___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Terminal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Subobject_MonoOver(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Subterminal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Terminal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Subobject_MonoOver(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_instCategorySubterminals___rarg___closed__1 = _init_l_CategoryTheory_instCategorySubterminals___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_instCategorySubterminals___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
