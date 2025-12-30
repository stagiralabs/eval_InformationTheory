// Lean compiler output
// Module: Mathlib.CategoryTheory.EssentialImage
// Imports: Init Mathlib.CategoryTheory.NatIso Mathlib.CategoryTheory.FullSubcategory Mathlib.CategoryTheory.ObjectProperty.ClosedUnderIsomorphisms
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
lean_object* l_CategoryTheory_FullSubcategory_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImage___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImage___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_FullSubcategory_lift__comp__inclusion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImage(lean_object*, lean_object*);
lean_object* l_CategoryTheory_InducedCategory_category___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_inducedFunctor___at_CategoryTheory_fullSubcategoryInclusion___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_FullSubcategory_category___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___closed__1;
x_4 = l_CategoryTheory_InducedCategory_category___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_instCategoryEssImageSubcategory___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_instCategoryEssImageSubcategory(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___closed__1;
x_4 = l_CategoryTheory_inducedFunctor___at_CategoryTheory_fullSubcategoryInclusion___spec__1___rarg(x_1, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_essImageInclusion___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Functor_essImageInclusion___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_essImageInclusion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_essImageInclusion(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImage___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_FullSubcategory_lift___rarg(x_1, lean_box(0), x_2, lean_box(0), x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImage(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_toEssImage___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImage___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_toEssImage___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_FullSubcategory_lift__comp__inclusion___rarg(x_1, lean_box(0), x_2, lean_box(0), x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_toEssImageCompEssentialImageInclusion___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_NatIso(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_FullSubcategory(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_ObjectProperty_ClosedUnderIsomorphisms(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_EssentialImage(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_NatIso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_FullSubcategory(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_ObjectProperty_ClosedUnderIsomorphisms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___closed__1 = _init_l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_instCategoryEssImageSubcategory___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
