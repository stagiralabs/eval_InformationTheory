// Lean compiler output
// Module: Mathlib.Data.Finsupp.Multiset
// Imports: Init Mathlib.Algebra.Order.Group.Finset Mathlib.Data.Finsupp.Order
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
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_toMultiset___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Finsupp_orderIsoMultiset___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg___lambda__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_toMultiset___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_equivNatSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_toMultiset___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_toMultiset(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_toMultiset___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg(lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
static lean_object* l_Multiset_toFinsupp___rarg___closed__1;
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finsupp_toMultiset___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderIsoMultiset___rarg(lean_object*);
lean_object* l_Equiv_subtypeEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_equivNatSum___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Finsupp_toMultiset___rarg___closed__1;
lean_object* l_Multiset_add___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_toMultiset___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinsupp(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_instWellFoundedRelationNat(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_orderIsoMultiset(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg___closed__1;
LEAN_EXPORT lean_object* l_Sym_equivNatSum(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_toMultiset___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_count___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Finsupp_toMultiset___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Finsupp_orderIsoMultiset___spec__1(lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
lean_inc(x_2);
x_7 = l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg(x_6, x_2);
lean_dec(x_6);
x_8 = l_List_appendTR___rarg(x_7, x_2);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Finsupp_toMultiset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_add___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg___closed__1;
x_4 = l_List_foldrTR___rarg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finsupp_toMultiset___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_toMultiset___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finsupp_toMultiset___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_Finsupp_toMultiset___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Finset_sum___at_Finsupp_toMultiset___spec__3___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sum___at_Finsupp_toMultiset___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_toMultiset___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg(x_2, x_4);
return x_5;
}
}
static lean_object* _init_l_Finsupp_toMultiset___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finsupp_toMultiset___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finsupp_toMultiset___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finsupp_toMultiset___rarg___closed__1;
x_3 = l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_toMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finsupp_toMultiset___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_nsmulRec___at_Finsupp_toMultiset___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_toMultiset___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_toMultiset___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_count___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_2);
x_4 = lean_alloc_closure((void*)(l_Multiset_toFinsupp___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg___lambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finsupp_toMultiset___rarg___closed__1;
x_3 = l_Finsupp_sum___at_Finsupp_toMultiset___spec__2___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Multiset_toFinsupp___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_toFinsupp___rarg___lambda__3), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinsupp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Multiset_toFinsupp___rarg___lambda__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Multiset_toFinsupp___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinsupp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_toFinsupp___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Finsupp_orderIsoMultiset___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_symm___at_Finsupp_orderIsoMultiset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddEquiv_symm___at_Finsupp_orderIsoMultiset___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderIsoMultiset___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Multiset_toFinsupp___rarg(x_1);
x_3 = l_Equiv_symm___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_orderIsoMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finsupp_orderIsoMultiset___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finsupp_instWellFoundedRelationNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym_equivNatSum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_toFinsupp___rarg(x_1);
x_4 = l_Equiv_subtypeEquiv___rarg(x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym_equivNatSum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sym_equivNatSum___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym_equivNatSum___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sym_equivNatSum___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Order(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finsupp_Multiset(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg___closed__1 = _init_l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg___closed__1();
lean_mark_persistent(l_Multiset_sum___at_Finsupp_toMultiset___spec__4___rarg___closed__1);
l_Finsupp_toMultiset___rarg___closed__1 = _init_l_Finsupp_toMultiset___rarg___closed__1();
lean_mark_persistent(l_Finsupp_toMultiset___rarg___closed__1);
l_Multiset_toFinsupp___rarg___closed__1 = _init_l_Multiset_toFinsupp___rarg___closed__1();
lean_mark_persistent(l_Multiset_toFinsupp___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
