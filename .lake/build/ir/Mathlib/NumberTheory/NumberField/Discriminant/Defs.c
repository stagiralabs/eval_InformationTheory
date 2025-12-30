// Lean compiler output
// Module: Mathlib.NumberTheory.NumberField.Discriminant.Defs
// Imports: Init Init.Data.ULift Init.Data.Fin.Fold Init.Data.List.Nat.Pairwise Init.Data.List.Nat.Range Mathlib.NumberTheory.NumberField.Basic Mathlib.RingTheory.Localization.NormTrace Mathlib.Analysis.Normed.Field.Lemmas
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
lean_object* initialize_Init_Data_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Fin_Fold(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_List_Nat_Pairwise(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_List_Nat_Range(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_NumberTheory_NumberField_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_NormTrace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Field_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_NumberField_Discriminant_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Fin_Fold(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_Pairwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_Range(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_NumberTheory_NumberField_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_NormTrace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Field_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
