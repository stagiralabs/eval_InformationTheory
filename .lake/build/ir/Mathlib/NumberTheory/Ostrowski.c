// Lean compiler output
// Module: Mathlib.NumberTheory.Ostrowski
// Imports: Init Mathlib.Analysis.AbsoluteValue.Equivalence Mathlib.Analysis.SpecialFunctions.Log.Base Mathlib.Analysis.SpecialFunctions.Pow.Continuity Mathlib.NumberTheory.Padics.PadicNorm
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
LEAN_EXPORT lean_object* l_Rat_AbsoluteValue_real(lean_object*);
lean_object* l_abs___at_Real_nnabs___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Rat_AbsoluteValue_padic(lean_object*, lean_object*, lean_object*);
lean_object* l_padicNorm(lean_object*, lean_object*);
lean_object* l_Rat_cast___at_Real_instRatCast___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Rat_AbsoluteValue_padic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_padicNorm(x_1, x_3);
x_5 = l_Rat_cast___at_Real_instRatCast___spec__1(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Rat_AbsoluteValue_real(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Rat_cast___at_Real_instRatCast___spec__1(x_1);
x_3 = l_abs___at_Real_nnabs___spec__1(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_AbsoluteValue_Equivalence(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Log_Base(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Pow_Continuity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_Padics_PadicNorm(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_Ostrowski(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_AbsoluteValue_Equivalence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Log_Base(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Pow_Continuity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_Padics_PadicNorm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
