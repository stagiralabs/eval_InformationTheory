// Lean compiler output
// Module: Mathlib.LinearAlgebra.FreeModule.IdealQuotient
// Imports: Init Mathlib.LinearAlgebra.FreeModule.Finite.Basic Mathlib.LinearAlgebra.FreeModule.PID Mathlib.LinearAlgebra.FreeModule.StrongRankCondition Mathlib.LinearAlgebra.Quotient.Pi Mathlib.RingTheory.Ideal.Basis Mathlib.LinearAlgebra.Dimension.Constructions Mathlib.Data.ZMod.QuotientRing
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
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_Finite_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_PID(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_StrongRankCondition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Quotient_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Basis(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Dimension_Constructions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_QuotientRing(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_IdealQuotient(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_Finite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_PID(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_StrongRankCondition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Quotient_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Basis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Dimension_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_QuotientRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
