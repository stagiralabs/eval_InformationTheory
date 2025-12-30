// Lean compiler output
// Module: Mathlib.Algebra.Order.Rearrangement
// Imports: Init Mathlib.Algebra.Order.Module.OrderedSMul Mathlib.Algebra.Order.Module.Synonym Mathlib.Data.Prod.Lex Mathlib.Data.Set.Image Mathlib.Data.Finset.Max Mathlib.GroupTheory.Perm.Support Mathlib.Order.Monotone.Monovary Mathlib.Tactic.Abel
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
lean_object* initialize_Mathlib_Algebra_Order_Module_OrderedSMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Module_Synonym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Prod_Lex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Image(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Max(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Monotone_Monovary(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Abel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Rearrangement(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Module_OrderedSMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Module_Synonym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Prod_Lex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Image(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Max(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Monotone_Monovary(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Abel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
