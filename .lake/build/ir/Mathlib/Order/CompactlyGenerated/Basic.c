// Lean compiler output
// Module: Mathlib.Order.CompactlyGenerated.Basic
// Imports: Init Mathlib.Order.Atoms Mathlib.Order.OrderIsoNat Mathlib.Order.RelIso.Set Mathlib.Order.SupClosed Mathlib.Order.SupIndep Mathlib.Order.Zorn Mathlib.Data.Finset.Order Mathlib.Order.Interval.Set.OrderIso Mathlib.Data.Finite.Set Mathlib.Tactic.TFAE
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
lean_object* initialize_Mathlib_Order_Atoms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_OrderIsoNat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_RelIso_Set(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SupClosed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SupIndep(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Zorn(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_OrderIso(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Set(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_TFAE(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_CompactlyGenerated_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Atoms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_OrderIsoNat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_RelIso_Set(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SupClosed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SupIndep(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Zorn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_OrderIso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Set(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_TFAE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
