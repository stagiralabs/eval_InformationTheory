// Lean compiler output
// Module: Mathlib.Combinatorics.Colex
// Imports: Init Mathlib.Algebra.GeomSum Mathlib.Data.Finset.Slice Mathlib.Data.Nat.BitIndices Mathlib.Order.SupClosed Mathlib.Order.UpperLower.Basic
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
uint8_t l_Multiset_decidableDforallMultiset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___boxed(lean_object*, lean_object*);
static lean_object* l_Finset_equivBitIndices___closed__2;
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_equivBitIndices___elambda__1___spec__1(lean_object*, lean_object*);
lean_object* l_Finset_powerset___rarg(lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_Colex_initSeg___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Finset_equivBitIndices___elambda__2___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableEq(lean_object*);
static lean_object* l_Finset_equivBitIndices___closed__3;
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Finset_Colex_instOrderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_equivBitIndices___elambda__1(lean_object*);
lean_object* l_Nat_bitIndices(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_Colex_initSeg___spec__3(lean_object*);
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_Colex_initSeg___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instBoundedOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLT___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___lambda__1(lean_object*, lean_object*);
static lean_object* l_Finset_orderIsoColex___closed__2;
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instPartialOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_Colex_initSeg___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Finset_equivBitIndices___elambda__2___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instOrderBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_Colex_initSeg___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableLE___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableLT___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_initSeg___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instPartialOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instBoundedOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
uint8_t l_List_isPerm___at_List_decidablePerm___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_Colex_instLinearOrder___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_equivBitIndices___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
static lean_object* l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2___closed__1;
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_orderIsoColex___closed__1;
LEAN_EXPORT lean_object* l_Finset_Colex_instBoundedOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_Colex_instPartialOrder___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_toFinset___at_Finset_equivBitIndices___elambda__2___spec__1(lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2(lean_object*);
static lean_object* l_Finset_equivBitIndices___elambda__1___closed__1;
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_equivBitIndices;
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLT(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Finset_equivBitIndices___elambda__2___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
LEAN_EXPORT lean_object* l_Finset_equivBitIndices___elambda__2___boxed(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Finset_equivBitIndices___elambda__2___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg(lean_object*);
static lean_object* l_Finset_equivBitIndices___closed__1;
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instInhabitedColex(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Finset_equivBitIndices___elambda__2___spec__6(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_initSeg(lean_object*);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___boxed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_Colex_initSeg___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_orderIsoColex;
lean_object* l_Nat_pow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableLE___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder(lean_object*);
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instInhabitedColex(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Colex_instLE(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Finset_Colex_instPartialOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instPartialOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Colex_instPartialOrder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Colex_instPartialOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instOrderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instOrderBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Colex_instOrderBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableEq___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Finset_Colex_instDecidableEq___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = l_Multiset_decidableMem___rarg(x_1, x_5, x_2);
x_7 = l_instDecidableNot___rarg(x_6);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_apply_2(x_3, x_4, x_5);
return x_10;
}
}
}
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableLE___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableLE___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = l_Finset_decidableExistsAndFinset___rarg(x_5, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_2);
lean_inc(x_5);
lean_inc(x_1);
x_7 = l_Multiset_decidableMem___rarg(x_1, x_5, x_2);
x_8 = l_instDecidableNot___rarg(x_7);
x_9 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableLE___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_5);
lean_closure_set(x_9, 4, x_2);
x_10 = l_forall__prop__decidable___rarg(x_8, x_9);
return x_10;
}
}
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableLE___rarg___lambda__3), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_2);
x_6 = l_Multiset_decidableDforallMultiset___rarg(x_3, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableLE___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Finset_Colex_instDecidableLE___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Finset_Colex_instDecidableLE___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Colex_instDecidableLE(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Finset_Colex_instDecidableLE___rarg(x_1, x_2, x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = l_Finset_Colex_instDecidableLE___rarg(x_1, x_2, x_4, x_3);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Finset_Colex_instDecidableLT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLT(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableLT___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instDecidableLT___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Finset_Colex_instDecidableLT___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_6);
lean_inc(x_5);
x_7 = l_Finset_Colex_instDecidableLE___rarg(x_5, x_6, x_3, x_4);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = l_Finset_Colex_instDecidableLE___rarg(x_5, x_6, x_4, x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_6);
lean_inc(x_5);
x_7 = l_Finset_Colex_instDecidableLE___rarg(x_5, x_6, x_3, x_4);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = l_Finset_Colex_instDecidableLE___rarg(x_5, x_6, x_4, x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Finset_Colex_instDecidableLE___rarg(x_4, x_5, x_2, x_3);
if (x_6 == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Finset_Colex_instDecidableLE___rarg(x_4, x_5, x_2, x_3);
if (x_6 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT uint8_t l_Finset_Colex_instLinearOrder___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_4);
lean_inc(x_3);
x_7 = l_decidableLTOfDecidableLE___at_Finset_Colex_instDecidableLT___spec__1___rarg(x_5, x_6, x_3, x_4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1___rarg(x_1, x_2, x_3, x_4);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_11 = 0;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_2 = l_LinearOrder_toLattice___rarg(x_1);
x_3 = l_Lattice_toSemilatticeInf___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Finset_Colex_instPartialOrder(lean_box(0), x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Finset_Colex_instLinearOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Finset_Colex_instLinearOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_4);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Finset_Colex_instLinearOrder___rarg___lambda__3___boxed), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_4);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_9, 0, x_1);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_10);
lean_inc(x_9);
x_11 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableLE___rarg___boxed), 4, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2___rarg___boxed), 4, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_4);
x_13 = lean_alloc_closure((void*)(l_Finset_Colex_instDecidableLT___rarg___boxed), 5, 3);
lean_closure_set(x_13, 0, x_4);
lean_closure_set(x_13, 1, x_9);
lean_closure_set(x_13, 2, x_10);
x_14 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set(x_14, 2, x_7);
lean_ctor_set(x_14, 3, x_8);
lean_ctor_set(x_14, 4, x_11);
lean_ctor_set(x_14, 5, x_12);
lean_ctor_set(x_14, 6, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_Colex_instLinearOrder___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_decidableEqOfDecidableLE___at_Finset_Colex_instLinearOrder___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instLinearOrder___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Finset_Colex_instLinearOrder___rarg___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instBoundedOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instBoundedOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_Colex_instBoundedOrder___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_instBoundedOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Colex_instBoundedOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_Colex_initSeg___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthTRAux___rarg(x_2, x_9);
x_11 = l_List_lengthTRAux___rarg(x_7, x_9);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_14, 0, x_1);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_15, 0, x_1);
lean_inc(x_2);
lean_inc(x_7);
x_16 = l_Finset_Colex_instDecidableLE___rarg(x_14, x_15, x_7, x_2);
if (x_16 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_4);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_List_lengthTRAux___rarg(x_2, x_21);
x_23 = l_List_lengthTRAux___rarg(x_19, x_21);
x_24 = lean_nat_dec_eq(x_22, x_23);
lean_dec(x_23);
lean_dec(x_22);
if (x_24 == 0)
{
lean_dec(x_19);
x_3 = x_20;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_inc(x_1);
x_26 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_26, 0, x_1);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_27, 0, x_1);
lean_inc(x_2);
lean_inc(x_19);
x_28 = l_Finset_Colex_instDecidableLE___rarg(x_26, x_27, x_19, x_2);
if (x_28 == 0)
{
lean_dec(x_19);
x_3 = x_20;
goto _start;
}
else
{
lean_object* x_30; 
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_4);
x_3 = x_20;
x_4 = x_30;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_Colex_initSeg___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_Colex_initSeg___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_Colex_initSeg___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_Finset_Colex_initSeg___spec__3___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_Colex_initSeg___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_Colex_initSeg___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_Colex_initSeg___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Finset_Colex_initSeg___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_Colex_initSeg___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_Colex_initSeg___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_initSeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_powerset___rarg(x_2);
x_5 = l_Multiset_filter___at_Finset_Colex_initSeg___spec__2___rarg(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_Colex_initSeg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_Colex_initSeg___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2___closed__1;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Finset_equivBitIndices___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Finset_equivBitIndices___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_closure((void*)(l_Nat_pow___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_equivBitIndices___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_equivBitIndices___elambda__1___closed__1;
x_3 = l_Finset_sum___at_Finset_equivBitIndices___elambda__1___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = lean_nat_dec_eq(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Finset_equivBitIndices___elambda__2___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_8 = 0;
x_9 = l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Finset_equivBitIndices___elambda__2___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_Finset_equivBitIndices___elambda__2___spec__6(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Finset_equivBitIndices___elambda__2___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Finset_equivBitIndices___elambda__2___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Finset_equivBitIndices___elambda__2___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Finset_equivBitIndices___elambda__2___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Finset_equivBitIndices___elambda__2___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Finset_equivBitIndices___elambda__2___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_toFinset___at_Finset_equivBitIndices___elambda__2___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Finset_equivBitIndices___elambda__2___spec__5(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_equivBitIndices___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_bitIndices(x_1);
x_3 = l_List_pwFilter___at_Finset_equivBitIndices___elambda__2___spec__5(x_2);
return x_3;
}
}
static lean_object* _init_l_Finset_equivBitIndices___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_equivBitIndices___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_equivBitIndices___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_equivBitIndices___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_equivBitIndices___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Finset_equivBitIndices___closed__1;
x_2 = l_Finset_equivBitIndices___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Finset_equivBitIndices() {
_start:
{
lean_object* x_1; 
x_1 = l_Finset_equivBitIndices___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Finset_equivBitIndices___elambda__2___spec__7(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_equivBitIndices___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_equivBitIndices___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Finset_orderIsoColex___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Finset_equivBitIndices;
x_2 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Finset_orderIsoColex___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Finset_equivBitIndices___closed__1;
x_2 = l_Finset_orderIsoColex___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Finset_orderIsoColex() {
_start:
{
lean_object* x_1; 
x_1 = l_Finset_orderIsoColex___closed__2;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GeomSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Slice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_BitIndices(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SupClosed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_UpperLower_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Colex(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GeomSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Slice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_BitIndices(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SupClosed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_UpperLower_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_Colex_instPartialOrder___closed__1 = _init_l_Finset_Colex_instPartialOrder___closed__1();
lean_mark_persistent(l_Finset_Colex_instPartialOrder___closed__1);
l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2___closed__1 = _init_l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2___closed__1();
lean_mark_persistent(l_Multiset_sum___at_Finset_equivBitIndices___elambda__1___spec__2___closed__1);
l_Finset_equivBitIndices___elambda__1___closed__1 = _init_l_Finset_equivBitIndices___elambda__1___closed__1();
lean_mark_persistent(l_Finset_equivBitIndices___elambda__1___closed__1);
l_Finset_equivBitIndices___closed__1 = _init_l_Finset_equivBitIndices___closed__1();
lean_mark_persistent(l_Finset_equivBitIndices___closed__1);
l_Finset_equivBitIndices___closed__2 = _init_l_Finset_equivBitIndices___closed__2();
lean_mark_persistent(l_Finset_equivBitIndices___closed__2);
l_Finset_equivBitIndices___closed__3 = _init_l_Finset_equivBitIndices___closed__3();
lean_mark_persistent(l_Finset_equivBitIndices___closed__3);
l_Finset_equivBitIndices = _init_l_Finset_equivBitIndices();
lean_mark_persistent(l_Finset_equivBitIndices);
l_Finset_orderIsoColex___closed__1 = _init_l_Finset_orderIsoColex___closed__1();
lean_mark_persistent(l_Finset_orderIsoColex___closed__1);
l_Finset_orderIsoColex___closed__2 = _init_l_Finset_orderIsoColex___closed__2();
lean_mark_persistent(l_Finset_orderIsoColex___closed__2);
l_Finset_orderIsoColex = _init_l_Finset_orderIsoColex();
lean_mark_persistent(l_Finset_orderIsoColex);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
