// Lean compiler output
// Module: Mathlib.RingTheory.Spectrum.Prime.Polynomial
// Imports: Init Mathlib.LinearAlgebra.Charpoly.BaseChange Mathlib.LinearAlgebra.Eigenspace.Zero Mathlib.RingTheory.AdjoinRoot Mathlib.RingTheory.LocalRing.ResidueField.Ideal Mathlib.RingTheory.Spectrum.Prime.Topology Mathlib.RingTheory.TensorProduct.MvPolynomial
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
lean_object* initialize_Mathlib_LinearAlgebra_Charpoly_BaseChange(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Eigenspace_Zero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_AdjoinRoot(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_ResidueField_Ideal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Spectrum_Prime_Topology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_MvPolynomial(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Spectrum_Prime_Polynomial(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Charpoly_BaseChange(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Eigenspace_Zero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_AdjoinRoot(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_ResidueField_Ideal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Spectrum_Prime_Topology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_MvPolynomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
