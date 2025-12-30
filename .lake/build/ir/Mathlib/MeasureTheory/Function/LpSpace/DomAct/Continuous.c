// Lean compiler output
// Module: Mathlib.MeasureTheory.Function.LpSpace.DomAct.Continuous
// Imports: Init Mathlib.MeasureTheory.Function.LpSpace.DomAct.Basic Mathlib.MeasureTheory.Function.LpSpace.ContinuousCompMeasurePreserving Mathlib.Topology.Algebra.Constructions.DomMulAct
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
lean_object* initialize_Mathlib_MeasureTheory_Function_LpSpace_DomAct_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Function_LpSpace_ContinuousCompMeasurePreserving(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Constructions_DomMulAct(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Function_LpSpace_DomAct_Continuous(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_LpSpace_DomAct_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_LpSpace_ContinuousCompMeasurePreserving(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Constructions_DomMulAct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
