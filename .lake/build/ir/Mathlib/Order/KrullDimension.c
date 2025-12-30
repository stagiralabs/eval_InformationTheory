// Lean compiler output
// Module: Mathlib.Order.KrullDimension
// Imports: Init Mathlib.Algebra.Order.Group.Int Mathlib.Data.ENat.Lattice Mathlib.Data.Int.Basic Mathlib.Order.Atoms Mathlib.Order.Minimal Mathlib.Order.RelSeries Mathlib.Order.LatticeIntervals Mathlib.Tactic.FinCases
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
lean_object* initialize_Mathlib_Algebra_Order_Group_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENat_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Atoms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Minimal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_RelSeries(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_LatticeIntervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FinCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_KrullDimension(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Atoms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Minimal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_RelSeries(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_LatticeIntervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FinCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
