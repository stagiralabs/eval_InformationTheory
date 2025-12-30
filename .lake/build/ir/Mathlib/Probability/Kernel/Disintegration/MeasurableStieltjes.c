// Lean compiler output
// Module: Mathlib.Probability.Kernel.Disintegration.MeasurableStieltjes
// Imports: Init Mathlib.MeasureTheory.Measure.GiryMonad Mathlib.MeasureTheory.Measure.Stieltjes Mathlib.Analysis.Normed.Order.Lattice Mathlib.MeasureTheory.Function.StronglyMeasurable.Basic
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
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
static lean_object* l_ProbabilityTheory_defaultRatCDF___closed__1;
uint8_t l_Rat_blt(lean_object*, lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
LEAN_EXPORT lean_object* l_ProbabilityTheory_defaultRatCDF(lean_object*);
static lean_object* _init_l_ProbabilityTheory_defaultRatCDF___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ProbabilityTheory_defaultRatCDF(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_ProbabilityTheory_defaultRatCDF___closed__1;
x_3 = l_Rat_blt(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_5;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_GiryMonad(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Stieltjes(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Order_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Function_StronglyMeasurable_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Probability_Kernel_Disintegration_MeasurableStieltjes(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_GiryMonad(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Stieltjes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_StronglyMeasurable_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ProbabilityTheory_defaultRatCDF___closed__1 = _init_l_ProbabilityTheory_defaultRatCDF___closed__1();
lean_mark_persistent(l_ProbabilityTheory_defaultRatCDF___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
