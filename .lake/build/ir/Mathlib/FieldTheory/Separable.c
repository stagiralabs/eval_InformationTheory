// Lean compiler output
// Module: Mathlib.FieldTheory.Separable
// Imports: Init Mathlib.Algebra.Polynomial.Expand Mathlib.Algebra.Polynomial.Splits Mathlib.Algebra.Squarefree.Basic Mathlib.FieldTheory.IntermediateField.Basic Mathlib.FieldTheory.Minpoly.Field Mathlib.RingTheory.Polynomial.Content Mathlib.RingTheory.PowerBasis Mathlib.Data.ENat.Lattice
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
lean_object* initialize_Mathlib_Algebra_Polynomial_Expand(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Splits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Squarefree_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_IntermediateField_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Minpoly_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Content(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_PowerBasis(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENat_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_Separable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Expand(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Splits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Squarefree_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_IntermediateField_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Minpoly_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Content(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_PowerBasis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
