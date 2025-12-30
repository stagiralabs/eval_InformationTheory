// Lean compiler output
// Module: Mathlib.Analysis.Calculus.MeanValue
// Imports: Init Mathlib.Analysis.Calculus.Deriv.AffineMap Mathlib.Analysis.Calculus.Deriv.Comp Mathlib.Analysis.Calculus.Deriv.Mul Mathlib.Analysis.Calculus.Deriv.Slope Mathlib.Analysis.Calculus.LocalExtr.Rolle Mathlib.Analysis.Normed.Group.AddTorsor Mathlib.Analysis.Normed.Module.Convex Mathlib.Analysis.RCLike.Basic Mathlib.RingTheory.LocalRing.Basic Mathlib.Topology.Instances.RealVectorSpace Mathlib.Topology.LocallyConstant.Basic
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
lean_object* initialize_Mathlib_Analysis_Calculus_Deriv_AffineMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_Deriv_Comp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_Deriv_Mul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_Deriv_Slope(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_LocalExtr_Rolle(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_AddTorsor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Module_Convex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_RCLike_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_RealVectorSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_LocallyConstant_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Calculus_MeanValue(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Deriv_AffineMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Deriv_Comp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Deriv_Mul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Deriv_Slope(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_LocalExtr_Rolle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_AddTorsor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_Convex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_RCLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_RealVectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_LocallyConstant_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
