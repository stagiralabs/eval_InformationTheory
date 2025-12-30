// Lean compiler output
// Module: Mathlib.Algebra.Homology.ShortComplex.ExactFunctor
// Imports: Init Mathlib.Algebra.Homology.ShortComplex.PreservesHomology Mathlib.Algebra.Homology.ShortComplex.ShortExact Mathlib.Algebra.Homology.ShortComplex.Abelian Mathlib.CategoryTheory.Preadditive.LeftExact Mathlib.CategoryTheory.Abelian.Exact
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
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_PreservesHomology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_ShortExact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_Abelian(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_LeftExact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Abelian_Exact(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_ExactFunctor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_PreservesHomology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_ShortExact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_Abelian(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_LeftExact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Abelian_Exact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
