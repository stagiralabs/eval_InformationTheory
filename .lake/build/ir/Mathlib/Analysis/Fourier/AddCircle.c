// Lean compiler output
// Module: Mathlib.Analysis.Fourier.AddCircle
// Imports: Init Mathlib.Analysis.SpecialFunctions.ExpDeriv Mathlib.Analysis.SpecialFunctions.Complex.Circle Mathlib.Analysis.InnerProductSpace.l2Space Mathlib.MeasureTheory.Function.ContinuousMapDense Mathlib.MeasureTheory.Function.L2Space Mathlib.MeasureTheory.Group.Integral Mathlib.MeasureTheory.Integral.Periodic Mathlib.Topology.ContinuousMap.StoneWeierstrass Mathlib.MeasureTheory.Integral.FundThmCalculus
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
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_ExpDeriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Complex_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_InnerProductSpace_l2Space(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Function_ContinuousMapDense(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Function_L2Space(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Group_Integral(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_Periodic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_StoneWeierstrass(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_FundThmCalculus(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Fourier_AddCircle(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_ExpDeriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Complex_Circle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_InnerProductSpace_l2Space(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_ContinuousMapDense(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_L2Space(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Group_Integral(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_Periodic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_StoneWeierstrass(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_FundThmCalculus(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
