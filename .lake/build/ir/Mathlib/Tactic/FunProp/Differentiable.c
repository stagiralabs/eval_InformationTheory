// Lean compiler output
// Module: Mathlib.Tactic.FunProp.Differentiable
// Imports: Init Mathlib.Analysis.Calculus.FDeriv.Basic Mathlib.Analysis.Calculus.FDeriv.Comp Mathlib.Analysis.Calculus.FDeriv.Prod Mathlib.Analysis.Calculus.FDeriv.Pi Mathlib.Analysis.Calculus.FDeriv.Add Mathlib.Analysis.Calculus.FDeriv.Mul Mathlib.Analysis.Calculus.Deriv.Inv Mathlib.Analysis.SpecialFunctions.ExpDeriv Mathlib.Analysis.SpecialFunctions.Log.Deriv Mathlib.Tactic.FunProp
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
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Comp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Add(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_FDeriv_Mul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_Deriv_Inv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_ExpDeriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Log_Deriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FunProp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_FunProp_Differentiable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Comp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Add(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_FDeriv_Mul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_Deriv_Inv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_ExpDeriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Log_Deriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FunProp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
