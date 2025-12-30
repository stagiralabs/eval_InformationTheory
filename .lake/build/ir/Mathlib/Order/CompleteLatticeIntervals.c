// Lean compiler output
// Module: Mathlib.Order.CompleteLatticeIntervals
// Imports: Init Mathlib.Order.ConditionallyCompleteLattice.Basic Mathlib.Order.LatticeIntervals Mathlib.Order.Interval.Set.OrdConnected
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
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg___boxed(lean_object*, lean_object*);
lean_object* l_CompleteLattice_toBoundedOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice(lean_object*);
lean_object* l_Set_Iic_instLatticeElem___rarg(lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, lean_box(0));
x_7 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_4);
x_5 = l_Set_Iic_instLatticeElem___rarg(x_4);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_Set_Iic_instCompleteLattice___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_3);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_Set_Iic_instCompleteLattice___rarg___lambda__2), 4, 3);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = l_CompleteLattice_toBoundedOrder___rarg(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_2);
lean_ctor_set(x_10, 4, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_Iic_instCompleteLattice___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_Iic_instCompleteLattice___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_Iic_instCompleteLattice___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_LatticeIntervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_OrdConnected(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_CompleteLatticeIntervals(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_ConditionallyCompleteLattice_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_LatticeIntervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_OrdConnected(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
