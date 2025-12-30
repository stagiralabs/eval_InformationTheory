// Lean compiler output
// Module: Mathlib.CategoryTheory.Abelian.Injective.Basic
// Imports: Init Mathlib.CategoryTheory.Abelian.Exact Mathlib.CategoryTheory.Preadditive.Injective.Basic Mathlib.CategoryTheory.Preadditive.Yoneda.Limits Mathlib.CategoryTheory.Preadditive.Yoneda.Injective Mathlib.Algebra.Homology.ShortComplex.ExactFunctor
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
lean_object* initialize_Mathlib_CategoryTheory_Abelian_Exact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_Injective_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_Yoneda_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_Yoneda_Injective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_ExactFunctor(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Abelian_Injective_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Abelian_Exact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_Injective_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_Yoneda_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_Yoneda_Injective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_ExactFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
