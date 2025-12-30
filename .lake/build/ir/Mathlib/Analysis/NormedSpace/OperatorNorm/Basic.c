// Lean compiler output
// Module: Mathlib.Analysis.NormedSpace.OperatorNorm.Basic
// Imports: Init Mathlib.Algebra.Algebra.Tower Mathlib.Analysis.LocallyConvex.WithSeminorms Mathlib.Topology.Algebra.Module.StrongTopology Mathlib.Analysis.Normed.Operator.LinearIsometry Mathlib.Analysis.Normed.Operator.ContinuousLinearMap Mathlib.Tactic.SuppressCompilation
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
lean_object* initialize_Mathlib_Algebra_Algebra_Tower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_LocallyConvex_WithSeminorms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Module_StrongTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Operator_LinearIsometry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Operator_ContinuousLinearMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_SuppressCompilation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_NormedSpace_OperatorNorm_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Algebra_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_LocallyConvex_WithSeminorms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Module_StrongTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Operator_LinearIsometry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Operator_ContinuousLinearMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_SuppressCompilation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
