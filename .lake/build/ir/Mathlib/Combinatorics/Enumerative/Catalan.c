// Lean compiler output
// Module: Mathlib.Combinatorics.Enumerative.Catalan
// Imports: Init Mathlib.Algebra.BigOperators.Fin Mathlib.Algebra.BigOperators.NatAntidiagonal Mathlib.Data.Nat.Choose.Central Mathlib.Tactic.FieldSimp Mathlib.Tactic.GCongr Mathlib.Tactic.Positivity
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
LEAN_EXPORT lean_object* l_List_pwFilter___at_Tree_treesOfNumNodesEq___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_catalan(lean_object*);
lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Tree_Basic_0__decEqTree____x40_Mathlib_Data_Tree_Basic___hyg_45____at_Tree_treesOfNumNodesEq___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Tree_treesOfNumNodesEq___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_catalan___boxed(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter(lean_object*);
static lean_object* l_Tree_treesOfNumNodesEq___closed__2;
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Tree_Basic_0__decEqTree____x40_Mathlib_Data_Tree_Basic___hyg_45____at_Tree_treesOfNumNodesEq___spec__5___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Nat_centralBinom(lean_object*);
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq(lean_object*);
static lean_object* l_Tree_treesOfNumNodesEq___closed__1;
LEAN_EXPORT lean_object* l_catalan___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Tree_treesOfNumNodesEq___spec__2(lean_object*);
static lean_object* l_Tree_pairwiseNode___closed__1;
lean_object* l_Rat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1(lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_catalan___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___rarg(lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_sum___at_catalan___spec__1___rarg___closed__1;
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Tree_treesOfNumNodesEq___spec__7(lean_object*, lean_object*);
lean_object* l_Multiset_attach___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Tree_treesOfNumNodesEq___closed__3;
LEAN_EXPORT lean_object* l_Tree_pairwiseNode___lambda__1___boxed(lean_object*);
static lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__1;
LEAN_EXPORT lean_object* l_Tree_pairwiseNode___lambda__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Tree_treesOfNumNodesEq___spec__4(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_catalan___lambda__1(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__2;
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Tree_pairwiseNode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq___lambda__1(lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan(lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___boxed(lean_object*);
lean_object* l_List_Nat_antidiagonal(lean_object*);
static lean_object* _init_l_Finset_sum___at_catalan___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at_catalan___spec__1___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_catalan___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_catalan___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_catalan(x_2);
x_4 = lean_nat_sub(x_1, x_2);
x_5 = l_catalan(x_4);
lean_dec(x_4);
x_6 = lean_nat_mul(x_3, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_catalan___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_catalan(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = lean_nat_add(x_5, x_4);
x_7 = l_catalan___closed__1;
x_8 = l_List_ofFn___rarg(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_catalan___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_5);
x_10 = l_Finset_sum___at_catalan___spec__1___rarg(x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_unsigned_to_nat(1u);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_sum___at_catalan___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_catalan___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_catalan___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_catalan___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_catalan(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__catalan_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_3 = l_Nat_centralBinom(x_2);
x_4 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_3);
x_5 = lean_nat_sub(x_1, x_2);
x_6 = l_Nat_centralBinom(x_5);
lean_dec(x_5);
x_7 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_6);
x_8 = l_Rat_mul(x_4, x_7);
lean_dec(x_7);
lean_dec(x_4);
x_9 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_2);
x_10 = l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__1;
x_11 = l_Rat_mul(x_10, x_9);
lean_dec(x_9);
x_12 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
lean_inc(x_12);
x_13 = l_Rat_sub(x_11, x_12);
x_14 = l_Rat_mul(x_8, x_13);
lean_dec(x_13);
lean_dec(x_8);
x_15 = l_Rat_mul(x_10, x_12);
x_16 = l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__2;
x_17 = l_Rat_add(x_12, x_16);
x_18 = l_Rat_mul(x_15, x_17);
lean_dec(x_17);
lean_dec(x_15);
x_19 = l_Rat_div(x_14, x_18);
lean_dec(x_14);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Tree_pairwiseNode___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_box(0);
lean_inc(x_3);
lean_inc(x_2);
x_5 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
static lean_object* _init_l_Tree_pairwiseNode___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tree_pairwiseNode___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Tree_pairwiseNode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Multiset_product___rarg(x_1, x_2);
x_4 = l_Tree_pairwiseNode___closed__1;
x_5 = l_Multiset_map___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Tree_pairwiseNode___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Tree_pairwiseNode___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l___private_Mathlib_Data_Tree_Basic_0__decEqTree____x40_Mathlib_Data_Tree_Basic___hyg_45____at_Tree_treesOfNumNodesEq___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 2);
x_10 = l___private_Mathlib_Data_Tree_Basic_0__decEqTree____x40_Mathlib_Data_Tree_Basic___hyg_45____at_Tree_treesOfNumNodesEq___spec__5(x_6, x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
x_1 = x_7;
x_2 = x_9;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = l___private_Mathlib_Data_Tree_Basic_0__decEqTree____x40_Mathlib_Data_Tree_Basic___hyg_45____at_Tree_treesOfNumNodesEq___spec__5(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___lambda__1___boxed), 2, 1);
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
LEAN_EXPORT lean_object* l_List_foldrTR___at_Tree_treesOfNumNodesEq___spec__7(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Tree_treesOfNumNodesEq___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_Tree_treesOfNumNodesEq___spec__7(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Tree_treesOfNumNodesEq___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Tree_treesOfNumNodesEq___spec__6(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Tree_treesOfNumNodesEq___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Tree_treesOfNumNodesEq___spec__6(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Tree_treesOfNumNodesEq___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Tree_treesOfNumNodesEq___spec__6(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_bind___rarg(x_1, x_2);
x_4 = l_List_pwFilter___at_Tree_treesOfNumNodesEq___spec__6(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Tree_treesOfNumNodesEq(x_2);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Tree_treesOfNumNodesEq(x_4);
x_6 = l_Multiset_product___rarg(x_3, x_5);
x_7 = l_Tree_pairwiseNode___closed__1;
x_8 = l_Multiset_map___rarg(x_7, x_6);
return x_8;
}
}
static lean_object* _init_l_Tree_treesOfNumNodesEq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_attach___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Tree_treesOfNumNodesEq___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tree_treesOfNumNodesEq___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Tree_treesOfNumNodesEq___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = l_List_Nat_antidiagonal(x_5);
lean_dec(x_5);
x_7 = l_Tree_treesOfNumNodesEq___closed__1;
x_8 = l_Multiset_pmap___rarg(x_7, x_6, lean_box(0));
x_9 = l_Tree_treesOfNumNodesEq___closed__2;
x_10 = l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1___rarg(x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Tree_treesOfNumNodesEq___closed__3;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Tree_Basic_0__decEqTree____x40_Mathlib_Data_Tree_Basic___hyg_45____at_Tree_treesOfNumNodesEq___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Mathlib_Data_Tree_Basic_0__decEqTree____x40_Mathlib_Data_Tree_Basic___hyg_45____at_Tree_treesOfNumNodesEq___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Tree_treesOfNumNodesEq___spec__8(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_biUnion___at_Tree_treesOfNumNodesEq___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Tree_treesOfNumNodesEq___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tree_treesOfNumNodesEq___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Tree_treesOfNumNodesEq(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_NatAntidiagonal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Central(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_GCongr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Enumerative_Catalan(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_NatAntidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Central(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_GCongr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_sum___at_catalan___spec__1___rarg___closed__1 = _init_l_Finset_sum___at_catalan___spec__1___rarg___closed__1();
lean_mark_persistent(l_Finset_sum___at_catalan___spec__1___rarg___closed__1);
l_catalan___closed__1 = _init_l_catalan___closed__1();
lean_mark_persistent(l_catalan___closed__1);
l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__1 = _init_l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__1();
lean_mark_persistent(l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__1);
l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__2 = _init_l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__2();
lean_mark_persistent(l___private_Mathlib_Combinatorics_Enumerative_Catalan_0__gosperCatalan___closed__2);
l_Tree_pairwiseNode___closed__1 = _init_l_Tree_pairwiseNode___closed__1();
lean_mark_persistent(l_Tree_pairwiseNode___closed__1);
l_Tree_treesOfNumNodesEq___closed__1 = _init_l_Tree_treesOfNumNodesEq___closed__1();
lean_mark_persistent(l_Tree_treesOfNumNodesEq___closed__1);
l_Tree_treesOfNumNodesEq___closed__2 = _init_l_Tree_treesOfNumNodesEq___closed__2();
lean_mark_persistent(l_Tree_treesOfNumNodesEq___closed__2);
l_Tree_treesOfNumNodesEq___closed__3 = _init_l_Tree_treesOfNumNodesEq___closed__3();
lean_mark_persistent(l_Tree_treesOfNumNodesEq___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
