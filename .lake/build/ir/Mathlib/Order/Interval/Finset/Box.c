// Lean compiler output
// Module: Mathlib.Order.Interval.Finset.Box
// Imports: Init Mathlib.Algebra.Order.Disjointed Mathlib.Algebra.Order.Ring.Prod Mathlib.Data.Int.Interval Mathlib.Tactic.Ring Mathlib.Tactic.Zify Mathlib.Algebra.Order.Group.Prod
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
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_box___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_disjointed___at_Finset_box___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_box___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_box___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_disjointed___at_Finset_box___spec__1(lean_object*);
lean_object* l_Finset_Icc___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Ico___at_Fin_instLocallyFiniteOrder___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_box___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_diff___at_Multiset_sub___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_OrderedRing_toOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_box(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_box___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_box___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldrTR___at_Multiset_ndunion___spec__8___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_box___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_box___spec__2___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_box(0);
x_6 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_5, x_3, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_box___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_box___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_disjointed___at_Finset_box___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Finset_Ico___at_Fin_instLocallyFiniteOrder___spec__8(x_5, x_3);
lean_dec(x_3);
lean_inc(x_1);
x_7 = l_Finset_sup___at_Finset_box___spec__2___rarg(x_1, x_6, x_2);
x_8 = l_List_diff___at_Multiset_sub___spec__6___rarg(x_1, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_disjointed___at_Finset_box___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_disjointed___at_Finset_box___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_box___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_4 = l_OrderedRing_toOrderedAddCommGroup___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Ring_toAddGroupWithOne___rarg(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_1(x_11, x_3);
lean_inc(x_12);
x_13 = lean_apply_1(x_7, x_12);
x_14 = l_Finset_Icc___rarg(x_2, x_13, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Finset_box___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Finset_box___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_disjointed___at_Finset_box___spec__1___rarg(x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_box(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_box___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Disjointed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Zify(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Prod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Interval_Finset_Box(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Disjointed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Zify(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
