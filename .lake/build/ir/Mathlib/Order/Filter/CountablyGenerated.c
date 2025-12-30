// Lean compiler output
// Module: Mathlib.Order.Filter.CountablyGenerated
// Imports: Init Mathlib.Data.Set.Countable Mathlib.Order.Filter.Bases
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
LEAN_EXPORT lean_object* l_Filter_Nat_inhabitedCountableFilterBasis;
static lean_object* _init_l_Filter_Nat_inhabitedCountableFilterBasis() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Countable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Bases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_CountablyGenerated(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Countable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Bases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Filter_Nat_inhabitedCountableFilterBasis = _init_l_Filter_Nat_inhabitedCountableFilterBasis();
lean_mark_persistent(l_Filter_Nat_inhabitedCountableFilterBasis);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
