// Lean compiler output
// Module: Mathlib.Analysis.SpecificLimits.Basic
// Imports: Init Mathlib.Algebra.GeomSum Mathlib.Order.Filter.AtTopBot.Archimedean Mathlib.Order.Iterate Mathlib.Topology.Algebra.Algebra Mathlib.Topology.Algebra.InfiniteSum.Real Mathlib.Topology.Instances.EReal.Lemmas
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
lean_object* initialize_Mathlib_Algebra_GeomSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_Archimedean(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Iterate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_InfiniteSum_Real(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_EReal_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_SpecificLimits_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GeomSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_Archimedean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Iterate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_InfiniteSum_Real(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_EReal_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
