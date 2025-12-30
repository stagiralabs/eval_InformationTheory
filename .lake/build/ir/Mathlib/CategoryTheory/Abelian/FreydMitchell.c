// Lean compiler output
// Module: Mathlib.CategoryTheory.Abelian.FreydMitchell
// Imports: Init Mathlib.CategoryTheory.Abelian.GrothendieckCategory.ModuleEmbedding.Opposite Mathlib.CategoryTheory.Abelian.GrothendieckAxioms.Indization
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
lean_object* l_CategoryTheory_AsSmall_up___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_AsSmall_up___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_CategoryTheory_Abelian_FreydMitchell_0__CategoryTheory_Abelian_FreydMitchell_F___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Abelian_GrothendieckCategory_ModuleEmbedding_Opposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Abelian_GrothendieckAxioms_Indization(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Abelian_FreydMitchell(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Abelian_GrothendieckCategory_ModuleEmbedding_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Abelian_GrothendieckAxioms_Indization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
