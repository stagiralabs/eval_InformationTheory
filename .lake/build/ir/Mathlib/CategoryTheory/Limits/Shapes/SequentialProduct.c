// Lean compiler output
// Module: Mathlib.CategoryTheory.Limits.Shapes.SequentialProduct
// Imports: Init Mathlib.Algebra.Order.Monoid.Canonical.Defs Mathlib.CategoryTheory.Functor.OfSequence Mathlib.CategoryTheory.Limits.Shapes.BinaryBiproducts Mathlib.CategoryTheory.Limits.Shapes.Countable Mathlib.CategoryTheory.Limits.Shapes.PiProd Mathlib.CategoryTheory.Limits.Shapes.RegularMono Mathlib.Order.Interval.Finset.Nat
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
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Functor_OfSequence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryBiproducts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Countable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_PiProd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_RegularMono(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Nat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_SequentialProduct(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Canonical_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Functor_OfSequence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryBiproducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Countable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_PiProd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_RegularMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
