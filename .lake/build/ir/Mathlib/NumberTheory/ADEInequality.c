// Lean compiler output
// Module: Mathlib.NumberTheory.ADEInequality
// Imports: Init Mathlib.Algebra.Order.Ring.Rat Mathlib.Data.Multiset.Sort Mathlib.Data.PNat.Basic Mathlib.Data.PNat.Interval Mathlib.Tactic.NormNum Mathlib.Tactic.IntervalCases
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
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
static lean_object* l_ADEInequality_E6___closed__1;
static lean_object* l_ADEInequality_sumInv___closed__1;
static lean_object* l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__2;
LEAN_EXPORT lean_object* l_ADEInequality_sumInv(lean_object*);
LEAN_EXPORT lean_object* l_ADEInequality_E_x27(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_ADEInequality_sumInv___spec__1(lean_object*);
lean_object* l_Rat_inv(lean_object*);
LEAN_EXPORT lean_object* l_ADEInequality_A(lean_object*);
LEAN_EXPORT lean_object* l_ADEInequality_E7;
LEAN_EXPORT lean_object* l_ADEInequality_D_x27(lean_object*);
LEAN_EXPORT lean_object* l_ADEInequality_sumInv___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_ADEInequality_A_x27(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
static lean_object* l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__1;
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_ADEInequality_E7___closed__1;
LEAN_EXPORT lean_object* l_ADEInequality_E6;
LEAN_EXPORT lean_object* l_ADEInequality_E8;
static lean_object* l_ADEInequality_E8___closed__1;
LEAN_EXPORT lean_object* l_ADEInequality_A_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ADEInequality_A(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_ADEInequality_A_x27(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ADEInequality_D_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ADEInequality_E_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = lean_unsigned_to_nat(3u);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
static lean_object* _init_l_ADEInequality_E6___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_ADEInequality_E_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_ADEInequality_E6() {
_start:
{
lean_object* x_1; 
x_1 = l_ADEInequality_E6___closed__1;
return x_1;
}
}
static lean_object* _init_l_ADEInequality_E7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_ADEInequality_E_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_ADEInequality_E7() {
_start:
{
lean_object* x_1; 
x_1 = l_ADEInequality_E7___closed__1;
return x_1;
}
}
static lean_object* _init_l_ADEInequality_E8___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = l_ADEInequality_E_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_ADEInequality_E8() {
_start:
{
lean_object* x_1; 
x_1 = l_ADEInequality_E8___closed__1;
return x_1;
}
}
static lean_object* _init_l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_add), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_ADEInequality_sumInv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__2;
x_3 = l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__1;
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ADEInequality_sumInv___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
x_3 = l_Rat_inv(x_2);
return x_3;
}
}
static lean_object* _init_l_ADEInequality_sumInv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ADEInequality_sumInv___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ADEInequality_sumInv(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_ADEInequality_sumInv___closed__1;
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Multiset_sum___at_ADEInequality_sumInv___spec__1(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Sort(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_IntervalCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_NumberTheory_ADEInequality(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_IntervalCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ADEInequality_E6___closed__1 = _init_l_ADEInequality_E6___closed__1();
lean_mark_persistent(l_ADEInequality_E6___closed__1);
l_ADEInequality_E6 = _init_l_ADEInequality_E6();
lean_mark_persistent(l_ADEInequality_E6);
l_ADEInequality_E7___closed__1 = _init_l_ADEInequality_E7___closed__1();
lean_mark_persistent(l_ADEInequality_E7___closed__1);
l_ADEInequality_E7 = _init_l_ADEInequality_E7();
lean_mark_persistent(l_ADEInequality_E7);
l_ADEInequality_E8___closed__1 = _init_l_ADEInequality_E8___closed__1();
lean_mark_persistent(l_ADEInequality_E8___closed__1);
l_ADEInequality_E8 = _init_l_ADEInequality_E8();
lean_mark_persistent(l_ADEInequality_E8);
l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__1 = _init_l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__1();
lean_mark_persistent(l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__1);
l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__2 = _init_l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__2();
lean_mark_persistent(l_Multiset_sum___at_ADEInequality_sumInv___spec__1___closed__2);
l_ADEInequality_sumInv___closed__1 = _init_l_ADEInequality_sumInv___closed__1();
lean_mark_persistent(l_ADEInequality_sumInv___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
