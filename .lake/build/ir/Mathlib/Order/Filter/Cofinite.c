// Lean compiler output
// Module: Mathlib.Order.Filter.Cofinite
// Imports: Init Mathlib.Data.Finite.Prod Mathlib.Data.Fintype.Pi Mathlib.Order.ConditionallyCompleteLattice.Basic Mathlib.Order.Filter.AtTopBot.Basic Mathlib.Order.Filter.CountablyGenerated Mathlib.Order.Filter.Ker Mathlib.Order.Filter.Pi
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
LEAN_EXPORT lean_object* l_Filter_cofinite(lean_object*);
LEAN_EXPORT lean_object* l_Filter_cofinite(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_AtTopBot_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_CountablyGenerated(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Ker(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_Cofinite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_AtTopBot_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_CountablyGenerated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Ker(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
