// Lean compiler output
// Module: Mathlib.Data.PNat.Interval
// Imports: Init Mathlib.Order.Interval.Finset.Nat Mathlib.Data.PNat.Defs
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
static lean_object* l_PNat_instLocallyFiniteOrder___closed__2;
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
lean_object* l_Subtype_instLocallyFiniteOrder___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_instLocallyFiniteOrder;
LEAN_EXPORT lean_object* l_PNat_instLocallyFiniteOrder;
static lean_object* l_PNat_instLocallyFiniteOrder___closed__1;
extern lean_object* l_Nat_instLinearOrder;
static lean_object* _init_l_PNat_instLocallyFiniteOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_closure((void*)(l_Nat_decLt___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_PNat_instLocallyFiniteOrder___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Nat_instLinearOrder;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_PNat_instLocallyFiniteOrder___closed__1;
x_4 = l_Nat_instLocallyFiniteOrder;
x_5 = l_Subtype_instLocallyFiniteOrder___rarg(x_2, lean_box(0), x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_PNat_instLocallyFiniteOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_PNat_instLocallyFiniteOrder___closed__2;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_PNat_Interval(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PNat_instLocallyFiniteOrder___closed__1 = _init_l_PNat_instLocallyFiniteOrder___closed__1();
lean_mark_persistent(l_PNat_instLocallyFiniteOrder___closed__1);
l_PNat_instLocallyFiniteOrder___closed__2 = _init_l_PNat_instLocallyFiniteOrder___closed__2();
lean_mark_persistent(l_PNat_instLocallyFiniteOrder___closed__2);
l_PNat_instLocallyFiniteOrder = _init_l_PNat_instLocallyFiniteOrder();
lean_mark_persistent(l_PNat_instLocallyFiniteOrder);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
