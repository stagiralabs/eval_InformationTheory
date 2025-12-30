// Lean compiler output
// Module: Mathlib.Data.Real.Cardinality
// Imports: Init Mathlib.Algebra.Order.Group.Pointwise.Interval Mathlib.Analysis.SpecificLimits.Basic Mathlib.Data.Rat.Cardinal Mathlib.SetTheory.Cardinal.Continuum
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
lean_object* l_npowRec___at_Real_commRing___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cardinal_cantorFunctionAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cardinal_cantorFunctionAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_3);
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = l_npowRec___at_Real_commRing___spec__2(x_3, x_1);
lean_dec(x_3);
return x_7;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Pointwise_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecificLimits_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Cardinal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Cardinal_Continuum(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Real_Cardinality(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Pointwise_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecificLimits_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Cardinal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Cardinal_Continuum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
