// Lean compiler output
// Module: Mathlib.RingTheory.Spectrum.Prime.FreeLocus
// Imports: Init Mathlib.RingTheory.Flat.Stability Mathlib.RingTheory.LocalProperties.Projective Mathlib.RingTheory.LocalRing.Module Mathlib.RingTheory.Localization.Free Mathlib.RingTheory.Localization.LocalizationLocalization Mathlib.RingTheory.Spectrum.Prime.Topology Mathlib.Topology.LocallyConstant.Basic Mathlib.RingTheory.TensorProduct.Free
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
lean_object* initialize_Mathlib_RingTheory_Flat_Stability(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalProperties_Projective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Free(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_LocalizationLocalization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Spectrum_Prime_Topology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_LocallyConstant_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TensorProduct_Free(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Spectrum_Prime_FreeLocus(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Flat_Stability(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalProperties_Projective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Free(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_LocalizationLocalization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Spectrum_Prime_Topology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_LocallyConstant_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TensorProduct_Free(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
