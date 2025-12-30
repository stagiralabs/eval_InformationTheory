// Lean compiler output
// Module: Mathlib.Order.SuccPred.LinearLocallyFinite
// Imports: Init Mathlib.Data.Countable.Basic Mathlib.Logic.Encodable.Basic Mathlib.Order.SuccPred.Archimedean Mathlib.Algebra.Order.Ring.Nat Mathlib.Data.Finset.Max Mathlib.Data.Fintype.Pigeonhole Mathlib.Order.Interval.Finset.Defs
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
lean_object* l_Nat_iterate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toZ___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Order_succ___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__5(lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_toZ(lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoRangeOfLinearSuccPredArch(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoRangeOfLinearSuccPredArch___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoRangeOfLinearSuccPredArch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Order_pred___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_Order_pred___rarg), 2, 1);
lean_closure_set(x_7, 0, x_2);
lean_inc(x_3);
lean_inc(x_5);
x_8 = l_Nat_iterate___rarg(x_7, x_5, x_3);
lean_inc(x_4);
lean_inc(x_1);
x_9 = l_instDecidableEq__mathlib___rarg(x_1, x_8, x_4);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
x_6 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3___rarg(x_1, x_2, x_3, x_4, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_toZ___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3___rarg(x_1, x_2, x_3, x_4, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_find___at_toZ___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_Order_succ___rarg), 2, 1);
lean_closure_set(x_7, 0, x_2);
lean_inc(x_3);
lean_inc(x_5);
x_8 = l_Nat_iterate___rarg(x_7, x_5, x_3);
lean_inc(x_4);
lean_inc(x_1);
x_9 = l_instDecidableEq__mathlib___rarg(x_1, x_8, x_4);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
x_6 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6___rarg(x_1, x_2, x_3, x_4, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_toZ___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_toZ___spec__5___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6___rarg(x_1, x_2, x_3, x_4, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_toZ___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_find___at_toZ___spec__4___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_toZ___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_7 = l_instDecidableLe__mathlib___rarg(x_1, x_5, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__3___rarg(x_1, x_4, x_5, x_6, x_9, lean_box(0));
x_11 = lean_nat_to_int(x_10);
x_12 = lean_int_neg(x_11);
lean_dec(x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l___private_Batteries_WF_0__WellFounded_fixC___at_toZ___spec__6___rarg(x_1, x_2, x_5, x_6, x_13, lean_box(0));
x_15 = lean_nat_to_int(x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_toZ(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_toZ___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_toZ___rarg(x_1, x_2, lean_box(0), x_3, x_4, x_5);
x_7 = l_Int_toNat(x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Order_succ___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Nat_iterate___rarg(x_4, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_6);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_6);
x_8 = lean_alloc_closure((void*)(l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__2), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_orderIsoNatOfLinearSuccPredArch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_orderIsoNatOfLinearSuccPredArch___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_orderIsoRangeOfLinearSuccPredArch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_5);
x_8 = lean_alloc_closure((void*)(l_orderIsoNatOfLinearSuccPredArch___rarg___lambda__2), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_orderIsoRangeOfLinearSuccPredArch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_orderIsoRangeOfLinearSuccPredArch___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_orderIsoRangeOfLinearSuccPredArch___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_orderIsoRangeOfLinearSuccPredArch___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Countable_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Encodable_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SuccPred_Archimedean(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Max(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Pigeonhole(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_SuccPred_LinearLocallyFinite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Countable_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Encodable_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SuccPred_Archimedean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Max(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pigeonhole(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
