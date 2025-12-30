// Lean compiler output
// Module: Mathlib.Geometry.Manifold.Instances.Sphere
// Imports: Init Mathlib.Analysis.Calculus.Deriv.Inv Mathlib.Analysis.Complex.Circle Mathlib.Analysis.NormedSpace.BallAction Mathlib.Analysis.SpecialFunctions.ExpDeriv Mathlib.Analysis.InnerProductSpace.Calculus Mathlib.Analysis.InnerProductSpace.PiL2 Mathlib.Data.Complex.FiniteDimensional Mathlib.Geometry.Manifold.Algebra.LieGroup Mathlib.Geometry.Manifold.Instances.Real Mathlib.Geometry.Manifold.MFDeriv.Basic Mathlib.Tactic.Module
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
lean_object* initialize_Mathlib_Analysis_Calculus_Deriv_Inv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Complex_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_NormedSpace_BallAction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_ExpDeriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_InnerProductSpace_Calculus(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_InnerProductSpace_PiL2(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Complex_FiniteDimensional(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_Algebra_LieGroup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_Instances_Real(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Geometry_Manifold_MFDeriv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Module(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Geometry_Manifold_Instances_Sphere(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Deriv_Inv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Complex_Circle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_NormedSpace_BallAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_ExpDeriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_InnerProductSpace_Calculus(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_InnerProductSpace_PiL2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Complex_FiniteDimensional(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_Algebra_LieGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_Instances_Real(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Geometry_Manifold_MFDeriv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
