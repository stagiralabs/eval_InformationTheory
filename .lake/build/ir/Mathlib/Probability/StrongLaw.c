// Lean compiler output
// Module: Mathlib.Probability.StrongLaw
// Imports: Init Mathlib.Probability.IdentDistrib Mathlib.Probability.Independence.Integrable Mathlib.MeasureTheory.Integral.DominatedConvergence Mathlib.Analysis.SpecificLimits.FloorPow Mathlib.Analysis.PSeries Mathlib.Analysis.Asymptotics.SpecificAsymptotics
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
lean_object* initialize_Mathlib_Probability_IdentDistrib(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Probability_Independence_Integrable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_DominatedConvergence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecificLimits_FloorPow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_PSeries(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Asymptotics_SpecificAsymptotics(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Probability_StrongLaw(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Probability_IdentDistrib(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Probability_Independence_Integrable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_DominatedConvergence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecificLimits_FloorPow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_PSeries(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Asymptotics_SpecificAsymptotics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
