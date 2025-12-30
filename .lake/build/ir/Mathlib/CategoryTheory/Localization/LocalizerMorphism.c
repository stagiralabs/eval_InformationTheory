// Lean compiler output
// Module: Mathlib.CategoryTheory.Localization.LocalizerMorphism
// Imports: Init Mathlib.CategoryTheory.Localization.Equivalence
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
lean_object* l_CategoryTheory_Functor_op___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_arrow___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_mapArrow___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_id___rarg___boxed(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_arrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_comp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_op___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_id(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_op___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Functor_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_comp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_id___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_op(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_id___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Functor_id___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_id(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_LocalizerMorphism_id___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_id___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_LocalizerMorphism_id___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_comp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_Functor_comp___rarg(x_1, lean_box(0), x_2, lean_box(0), x_3, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_LocalizerMorphism_comp___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_comp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_CategoryTheory_LocalizerMorphism_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_op___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_op___rarg(x_1, lean_box(0), x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_op(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_LocalizerMorphism_op___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_op___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_LocalizerMorphism_op___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_arrow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_Functor_mapArrow___rarg(x_1, lean_box(0), x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_LocalizerMorphism_arrow(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_LocalizerMorphism_arrow___rarg), 5, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Localization_Equivalence(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Localization_LocalizerMorphism(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Localization_Equivalence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
