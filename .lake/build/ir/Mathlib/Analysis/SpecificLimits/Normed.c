// Lean compiler output
// Module: Mathlib.Analysis.SpecificLimits.Normed
// Imports: Init Mathlib.Algebra.BigOperators.Module Mathlib.Algebra.Order.Field.Power Mathlib.Algebra.Polynomial.Monic Mathlib.Analysis.Asymptotics.Lemmas Mathlib.Analysis.Normed.Field.InfiniteSum Mathlib.Analysis.Normed.Module.Basic Mathlib.Analysis.SpecificLimits.Basic Mathlib.Data.List.TFAE Mathlib.Data.Nat.Choose.Bounds Mathlib.Order.Filter.AtTopBot.ModEq Mathlib.RingTheory.Polynomial.Pochhammer Mathlib.Tactic.NoncommRing
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
lean_object* initialize_Mathlib_Algebra_BigOperators_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Power(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Monic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Asymptotics_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Field_InfiniteSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Module_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecificLimits_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_TFAE(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Bounds(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_ModEq(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Polynomial_Pochhammer(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NoncommRing(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_SpecificLimits_Normed(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Power(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Monic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Asymptotics_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Field_InfiniteSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecificLimits_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_TFAE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Bounds(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_ModEq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Polynomial_Pochhammer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NoncommRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
