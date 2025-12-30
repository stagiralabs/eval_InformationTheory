// Lean compiler output
// Module: Mathlib.RepresentationTheory.Rep
// Imports: Init Mathlib.Algebra.Category.ModuleCat.Adjunctions Mathlib.Algebra.Category.ModuleCat.EpiMono Mathlib.Algebra.Category.ModuleCat.Limits Mathlib.Algebra.Category.ModuleCat.Colimits Mathlib.Algebra.Category.ModuleCat.Monoidal.Symmetric Mathlib.CategoryTheory.Elementwise Mathlib.CategoryTheory.Action.Monoidal Mathlib.RepresentationTheory.Basic
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Adjunctions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_EpiMono(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Colimits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Monoidal_Symmetric(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Elementwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Action_Monoidal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RepresentationTheory_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RepresentationTheory_Rep(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Adjunctions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_EpiMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Colimits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_Monoidal_Symmetric(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Elementwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Action_Monoidal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RepresentationTheory_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
