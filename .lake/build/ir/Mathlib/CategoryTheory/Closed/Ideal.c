// Lean compiler output
// Module: Mathlib.CategoryTheory.Closed.Ideal
// Imports: Init Mathlib.CategoryTheory.Limits.Preserves.Shapes.BinaryProducts Mathlib.CategoryTheory.Limits.Preserves.Shapes.Terminal Mathlib.CategoryTheory.Limits.Constructions.FiniteProductsOfBinaryProducts Mathlib.CategoryTheory.Monad.Limits Mathlib.CategoryTheory.Adjunction.FullyFaithful Mathlib.CategoryTheory.Adjunction.Limits Mathlib.CategoryTheory.Adjunction.Reflective Mathlib.CategoryTheory.Closed.Cartesian Mathlib.CategoryTheory.Subterminal
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
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_BinaryProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Terminal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_FiniteProductsOfBinaryProducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Monad_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_FullyFaithful(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Reflective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Closed_Cartesian(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Subterminal(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Closed_Ideal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_BinaryProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Terminal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_FiniteProductsOfBinaryProducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Monad_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_FullyFaithful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Reflective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Closed_Cartesian(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Subterminal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
