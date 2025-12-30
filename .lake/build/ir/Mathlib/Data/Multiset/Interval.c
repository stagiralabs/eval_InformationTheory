// Lean compiler output
// Module: Mathlib.Data.Multiset.Interval
// Imports: Init Mathlib.Data.DFinsupp.Interval Mathlib.Data.DFinsupp.Multiset Mathlib.Order.Interval.Finset.Nat Mathlib.Data.Nat.Lattice
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
lean_object* l_Multiset_toDFinsupp___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg___lambda__1(lean_object*);
static lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__2;
extern lean_object* l_Nat_instAddMonoid;
extern lean_object* l_Nat_instLocallyFiniteOrder;
LEAN_EXPORT lean_object* l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2(lean_object*);
lean_object* l_Multiset_decidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__3___boxed(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_DFinsupp_instLocallyFiniteOrder___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1(lean_object*);
static lean_object* l_Multiset_instLocallyFiniteOrder___rarg___lambda__2___closed__1;
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg(lean_object*);
lean_object* l_LocallyFiniteOrder_ofIcc___elambda__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LocallyFiniteOrder_ofIcc___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_instPartialOrder;
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg___lambda__1___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_equivDFinsupp___rarg(lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__3;
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__1___boxed(lean_object*);
lean_object* l_LocallyFiniteOrder_ofIcc___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg___closed__1;
lean_object* l_Multiset_instPartialOrder(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_instAddMonoid;
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_instLocallyFiniteOrder;
return x_2;
}
}
static lean_object* _init_l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__2___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__3___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__1;
x_6 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__2;
x_7 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__3;
x_8 = l_DFinsupp_instLocallyFiniteOrder___rarg(x_1, x_5, x_2, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, x_3, x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiset_instPartialOrder(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_alloc_closure((void*)(l_Multiset_decidableEq___rarg___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_2);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_LocallyFiniteOrder_ofIcc___elambda__3___rarg), 4, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
lean_inc(x_2);
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_LocallyFiniteOrder_ofIcc___elambda__2___rarg), 4, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_LocallyFiniteOrder_ofIcc___elambda__1___rarg), 4, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_2);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_6);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_instPartialOrder;
return x_2;
}
}
static lean_object* _init_l_Multiset_instLocallyFiniteOrder___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_instLocallyFiniteOrder___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_4 = l_Multiset_equivDFinsupp___rarg(x_1);
x_5 = l_Equiv_symm___rarg(x_4);
x_6 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
lean_inc(x_1);
x_7 = l_Multiset_toDFinsupp___rarg(x_1, x_2);
lean_inc(x_1);
x_8 = l_Multiset_toDFinsupp___rarg(x_1, x_3);
x_9 = l_Multiset_instLocallyFiniteOrder___rarg___lambda__2___closed__1;
x_10 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg(x_1, x_9, x_7, x_8);
x_11 = l_Multiset_map___rarg(x_6, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Multiset_instLocallyFiniteOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg(x_1, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_instLocallyFiniteOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___lambda__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_instLocallyFiniteOrder___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_instLocallyFiniteOrder___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_DFinsupp_Interval(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_DFinsupp_Multiset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Multiset_Interval(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Interval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Multiset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__1 = _init_l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__1();
lean_mark_persistent(l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__1);
l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__2 = _init_l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__2();
lean_mark_persistent(l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__2);
l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__3 = _init_l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__3();
lean_mark_persistent(l_Finset_Icc___at_Multiset_instLocallyFiniteOrder___spec__1___rarg___closed__3);
l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg___closed__1 = _init_l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg___closed__1();
lean_mark_persistent(l_LocallyFiniteOrder_ofIcc___at_Multiset_instLocallyFiniteOrder___spec__2___rarg___closed__1);
l_Multiset_instLocallyFiniteOrder___rarg___lambda__2___closed__1 = _init_l_Multiset_instLocallyFiniteOrder___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Multiset_instLocallyFiniteOrder___rarg___lambda__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
