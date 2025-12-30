// Lean compiler output
// Module: Mathlib.Algebra.Category.BialgebraCat.Monoidal
// Imports: Init Mathlib.Algebra.Category.AlgebraCat.Monoidal Mathlib.Algebra.Category.BialgebraCat.Basic Mathlib.Algebra.Category.CoalgebraCat.Monoidal Mathlib.RingTheory.Bialgebra.TensorProduct
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
lean_object* initialize_Mathlib_Algebra_Category_AlgebraCat_Monoidal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_BialgebraCat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_CoalgebraCat_Monoidal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Bialgebra_TensorProduct(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_BialgebraCat_Monoidal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_AlgebraCat_Monoidal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_BialgebraCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_CoalgebraCat_Monoidal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Bialgebra_TensorProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
