// Lean compiler output
// Module: Mathlib.Analysis.SpecialFunctions.MulExpNegMulSqIntegral
// Imports: Init Mathlib.Analysis.SpecialFunctions.MulExpNegMulSq Mathlib.Analysis.SpecialFunctions.Pow.Deriv Mathlib.MeasureTheory.Integral.BoundedContinuousFunction Mathlib.MeasureTheory.Integral.DominatedConvergence Mathlib.MeasureTheory.Measure.RegularityCompacts Mathlib.Topology.ContinuousMap.StoneWeierstrass
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
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_MulExpNegMulSq(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Pow_Deriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_BoundedContinuousFunction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_DominatedConvergence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_RegularityCompacts(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_StoneWeierstrass(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_SpecialFunctions_MulExpNegMulSqIntegral(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_MulExpNegMulSq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Pow_Deriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_BoundedContinuousFunction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_DominatedConvergence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_RegularityCompacts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_StoneWeierstrass(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
