// Lean compiler output
// Module: Mathlib.Data.Nat.Lattice
// Imports: Init Mathlib.Data.Set.Accumulate Mathlib.Order.ConditionallyCompleteLattice.Finset Mathlib.Order.Interval.Finset.Nat
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
LEAN_EXPORT lean_object* l_Nat_instLattice;
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
static lean_object* l_Nat_instLattice___closed__1;
extern lean_object* l_Nat_instLinearOrder;
static lean_object* _init_l_Nat_instLattice___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrder;
x_2 = l_LinearOrder_toLattice___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_instLattice() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLattice___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Accumulate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Nat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Accumulate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_ConditionallyCompleteLattice_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instLattice___closed__1 = _init_l_Nat_instLattice___closed__1();
lean_mark_persistent(l_Nat_instLattice___closed__1);
l_Nat_instLattice = _init_l_Nat_instLattice();
lean_mark_persistent(l_Nat_instLattice);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
