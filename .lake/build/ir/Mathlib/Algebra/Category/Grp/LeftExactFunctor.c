// Lean compiler output
// Module: Mathlib.Algebra.Category.Grp.LeftExactFunctor
// Imports: Init Mathlib.Algebra.Category.Grp.ChosenFiniteProducts Mathlib.Algebra.Category.Grp.EquivalenceGroupAddGroup Mathlib.CategoryTheory.Monoidal.Internal.Types.CommGrp_ Mathlib.CategoryTheory.Preadditive.AdditiveFunctor Mathlib.CategoryTheory.Preadditive.CommGrp_
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
lean_object* initialize_Mathlib_Algebra_Category_Grp_ChosenFiniteProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_EquivalenceGroupAddGroup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monoidal_Internal_Types_CommGrp__(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_CommGrp__(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_Grp_LeftExactFunctor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_ChosenFiniteProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_EquivalenceGroupAddGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monoidal_Internal_Types_CommGrp__(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_CommGrp__(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
