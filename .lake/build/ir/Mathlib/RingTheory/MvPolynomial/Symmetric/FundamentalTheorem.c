// Lean compiler output
// Module: Mathlib.RingTheory.MvPolynomial.Symmetric.FundamentalTheorem
// Imports: Init Mathlib.RingTheory.MvPolynomial.Symmetric.Defs Mathlib.RingTheory.MvPolynomial.Tower Mathlib.Data.Finsupp.Notation Mathlib.Data.Finsupp.WellFounded
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
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Fin_accumulate___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_invAccumulate(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Fin_accumulate___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_invAccumulate___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_invAccumulate___boxed(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Fin_accumulate___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_accumulate(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Fin_accumulate___closed__1;
static lean_object* l_Fin_invAccumulate___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_sum___at_Fin_accumulate___spec__4___boxed(lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Fin_accumulate___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_accumulate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Fin_accumulate___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_invAccumulate___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Fin_accumulate___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_sum___at_Fin_accumulate___spec__4___rarg___closed__1;
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Fin_accumulate___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Fin_accumulate___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Fin_accumulate___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
x_6 = l_List_reverse___rarg(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_nat_dec_le(x_3, x_8);
if (x_10 == 0)
{
lean_free_object(x_4);
lean_dec(x_8);
x_4 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_4, 1, x_5);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_4;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_nat_dec_le(x_3, x_13);
if (x_15 == 0)
{
lean_dec(x_13);
x_4 = x_14;
goto _start;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_5);
x_4 = x_14;
x_5 = x_17;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Fin_accumulate___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_filterTR_loop___at_Fin_accumulate___spec__3(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Fin_accumulate___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_filter___at_Fin_accumulate___spec__2(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Finset_sum___at_Fin_accumulate___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Fin_accumulate___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at_Fin_accumulate___spec__4___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Fin_accumulate___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_Fin_accumulate___spec__4___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Fin_accumulate___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Fin_accumulate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Fin_accumulate___closed__1;
lean_inc(x_1);
x_6 = l_List_ofFn___rarg(x_1, x_5);
x_7 = l_Multiset_filter___at_Fin_accumulate___spec__2(x_1, x_2, x_4, x_6);
lean_dec(x_1);
x_8 = l_Finset_sum___at_Fin_accumulate___spec__4___rarg(x_7, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Fin_accumulate___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_filterTR_loop___at_Fin_accumulate___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Fin_accumulate___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_filter___at_Fin_accumulate___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Fin_accumulate___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_filter___at_Fin_accumulate___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Fin_accumulate___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_sum___at_Fin_accumulate___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_accumulate___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Fin_accumulate(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Fin_invAccumulate___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_sub(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_invAccumulate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_nat_dec_lt(x_3, x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_3, x_5);
x_7 = lean_nat_dec_lt(x_6, x_1);
if (x_4 == 0)
{
lean_dec(x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_2);
x_8 = l_Fin_invAccumulate___rarg___closed__1;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_apply_1(x_2, x_6);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_sub(x_10, x_9);
lean_dec(x_9);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_inc(x_2);
x_12 = lean_apply_1(x_2, x_3);
if (x_7 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_apply_1(x_2, x_6);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_15);
lean_dec(x_12);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Fin_invAccumulate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fin_invAccumulate___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fin_invAccumulate___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_invAccumulate___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Fin_invAccumulate___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Fin_invAccumulate(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_MvPolynomial_Symmetric_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_MvPolynomial_Tower(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_WellFounded(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_MvPolynomial_Symmetric_FundamentalTheorem(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_MvPolynomial_Symmetric_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_MvPolynomial_Tower(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_WellFounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_sum___at_Fin_accumulate___spec__4___rarg___closed__1 = _init_l_Finset_sum___at_Fin_accumulate___spec__4___rarg___closed__1();
lean_mark_persistent(l_Finset_sum___at_Fin_accumulate___spec__4___rarg___closed__1);
l_Fin_accumulate___closed__1 = _init_l_Fin_accumulate___closed__1();
lean_mark_persistent(l_Fin_accumulate___closed__1);
l_Fin_invAccumulate___rarg___closed__1 = _init_l_Fin_invAccumulate___rarg___closed__1();
lean_mark_persistent(l_Fin_invAccumulate___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
