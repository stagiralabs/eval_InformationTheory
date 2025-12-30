// Lean compiler output
// Module: Mathlib.Combinatorics.SetFamily.HarrisKleitman
// Imports: Init Mathlib.Algebra.Order.Ring.Nat Mathlib.Algebra.Order.Ring.Canonical Mathlib.Combinatorics.SetFamily.Compression.Down Mathlib.Data.Fintype.Powerset Mathlib.Order.UpperLower.Basic
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
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Canonical(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SetFamily_Compression_Down(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_UpperLower_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SetFamily_HarrisKleitman(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Canonical(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SetFamily_Compression_Down(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_UpperLower_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
