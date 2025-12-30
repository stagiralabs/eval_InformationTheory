// Lean compiler output
// Module: Mathlib.Data.DFinsupp.WellFounded
// Imports: Init Mathlib.Data.DFinsupp.Lex Mathlib.Order.GameAdd Mathlib.Order.Antisymmetrization Mathlib.Tactic.AdaptationNote Mathlib.SetTheory.Cardinal.Basic
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
lean_object* initialize_Mathlib_Data_DFinsupp_Lex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_GameAdd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Antisymmetrization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_AdaptationNote(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Cardinal_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_DFinsupp_WellFounded(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Lex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_GameAdd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Antisymmetrization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_AdaptationNote(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Cardinal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
