// Lean compiler output
// Module: Mathlib.Data.Ordmap.Ordset
// Imports: Init Mathlib.Algebra.Order.Ring.Defs Mathlib.Data.Nat.Dist Mathlib.Data.Ordmap.Ordnode Mathlib.Tactic.Abel Mathlib.Tactic.Linarith
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
LEAN_EXPORT lean_object* l_Ordnode_Balanced_dec(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMin_x27_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node3L(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Balanced_dec___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node3R(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMax_x27_match__2_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balanceR_x27___rarg(lean_object*, lean_object*, lean_object*);
extern uint8_t l_instDecidableTrue;
LEAN_EXPORT lean_object* l_Ordset_singleton___rarg(lean_object*);
static lean_object* l_Ordset_instSingleton___closed__1;
LEAN_EXPORT lean_object* l_Ordset_instEmptyCollection___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_find(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balance_x27___rarg(lean_object*, lean_object*, lean_object*);
static uint8_t l_Ordnode_Balanced_dec___rarg___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_foldr_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_insert(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Ordnode_erase___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordset_mem_decidable___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instEmptyCollection(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_mem_decidable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_nil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateR_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_insert_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_Empty_instDecidablePred___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node4L___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ordnode_find___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_Bounded_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_size___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordset_erase(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_foldr_match__1_splitter(lean_object*, lean_object*, lean_object*);
uint8_t l_Ordnode_mem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_nil___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instSingleton___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_realSize(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_find___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_rotateR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instInsert___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_rotateL___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instMembership(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_Empty_instDecidablePred(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node4R___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_mem_decidable(lean_object*);
LEAN_EXPORT uint8_t l_Ordset_Empty_instDecidablePred___rarg(lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_BalancedSz_dec(lean_object*, lean_object*);
lean_object* l_Ordnode_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_size___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMin_x27_match__2_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_Bounded_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_erase___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_realSize___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateR_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_insert_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_mem___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instMembership___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node3R___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_BalancedSz_dec___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node3L___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balance_x27(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateL_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_insert_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_rotateR(lean_object*);
LEAN_EXPORT lean_object* l_Ordset_Empty_instDecidablePred___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node4L(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balanceR_x27(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balanceL_x27___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_realSize___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordset_mem(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_rotateL(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMax_x27_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateL_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_find___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node4R(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMax_x27_match__2_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balanceL_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMin_x27_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_singleton___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMax_x27_match__1_splitter(lean_object*, lean_object*);
lean_object* l_Ordnode_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMin_x27_match__2_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_node4L_match__1_splitter(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_erase___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_Balanced_dec___rarg(lean_object*);
LEAN_EXPORT uint8_t l_Ordset_mem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instSingleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instInsert(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_node4L_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_instInhabited___boxed(lean_object*, lean_object*);
lean_object* l_Ordnode_insert_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordset_insert___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_realSize___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Ordnode_realSize___rarg(x_3);
x_6 = l_Ordnode_realSize___rarg(x_4);
x_7 = lean_nat_add(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_realSize(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_realSize___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_realSize___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ordnode_realSize___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_size_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Ordnode_BalancedSz_dec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_nat_add(x_1, x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_dec_le(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(3u);
x_7 = lean_nat_mul(x_6, x_2);
x_8 = lean_nat_dec_le(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_nat_mul(x_6, x_1);
x_11 = lean_nat_dec_le(x_2, x_10);
lean_dec(x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_BalancedSz_dec___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Ordnode_BalancedSz_dec(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_realSize_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static uint8_t _init_l_Ordnode_Balanced_dec___rarg___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Ordnode_BalancedSz_dec(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Ordnode_Balanced_dec___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = l_instDecidableTrue;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = l_Ordnode_Balanced_dec___rarg___closed__1;
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = l_Ordnode_Balanced_dec___rarg(x_3);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
x_1 = x_4;
goto _start;
}
}
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Ordnode_BalancedSz_dec(x_11, x_10);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = l_Ordnode_Balanced_dec___rarg(x_3);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_1, 3);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_3, 0);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Ordnode_BalancedSz_dec(x_18, x_19);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = 0;
return x_21;
}
else
{
uint8_t x_22; 
x_22 = l_Ordnode_Balanced_dec___rarg(x_3);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = 0;
return x_23;
}
else
{
x_1 = x_17;
goto _start;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_ctor_get(x_17, 0);
x_27 = l_Ordnode_BalancedSz_dec(x_25, x_26);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = 0;
return x_28;
}
else
{
uint8_t x_29; 
x_29 = l_Ordnode_Balanced_dec___rarg(x_3);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = 0;
return x_30;
}
else
{
x_1 = x_17;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_Balanced_dec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_Balanced_dec___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Balanced_dec___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Ordnode_Balanced_dec___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_node3L___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_1);
lean_ctor_set(x_20, 2, x_2);
lean_ctor_set(x_20, 3, x_3);
x_6 = x_20;
x_7 = x_19;
goto block_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_3, 0);
lean_inc(x_21);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_add(x_22, x_21);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_23, x_24);
lean_dec(x_23);
lean_inc(x_25);
x_26 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_1);
lean_ctor_set(x_26, 2, x_2);
lean_ctor_set(x_26, 3, x_3);
x_6 = x_26;
x_7 = x_25;
goto block_18;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_add(x_27, x_28);
lean_dec(x_27);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_29, x_30);
lean_dec(x_29);
lean_inc(x_31);
x_32 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_1);
lean_ctor_set(x_32, 2, x_2);
lean_ctor_set(x_32, 3, x_3);
x_6 = x_32;
x_7 = x_31;
goto block_18;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_3, 0);
lean_inc(x_34);
x_35 = lean_nat_add(x_33, x_34);
lean_dec(x_34);
lean_dec(x_33);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_35, x_36);
lean_dec(x_35);
lean_inc(x_37);
x_38 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_1);
lean_ctor_set(x_38, 2, x_2);
lean_ctor_set(x_38, 3, x_3);
x_6 = x_38;
x_7 = x_37;
goto block_18;
}
}
block_18:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 2, x_4);
lean_ctor_set(x_12, 3, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
x_14 = lean_nat_add(x_7, x_13);
lean_dec(x_13);
lean_dec(x_7);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_14, x_15);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_6);
lean_ctor_set(x_17, 2, x_4);
lean_ctor_set(x_17, 3, x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_node3L(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_node3L___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_node3R___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
if (lean_obj_tag(x_3) == 0)
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_4);
lean_ctor_set(x_15, 3, x_5);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
lean_ctor_set(x_17, 2, x_2);
lean_ctor_set(x_17, 3, x_15);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_6 = x_15;
x_7 = x_18;
goto block_13;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_5, 0);
lean_inc(x_19);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_add(x_20, x_19);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_21, x_22);
lean_dec(x_21);
lean_inc(x_23);
x_24 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 2, x_4);
lean_ctor_set(x_24, 3, x_5);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_nat_add(x_20, x_23);
lean_dec(x_23);
x_26 = lean_nat_add(x_25, x_22);
lean_dec(x_25);
x_27 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_1);
lean_ctor_set(x_27, 2, x_2);
lean_ctor_set(x_27, 3, x_24);
return x_27;
}
else
{
lean_object* x_28; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_6 = x_24;
x_7 = x_28;
goto block_13;
}
}
}
else
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_nat_add(x_29, x_30);
lean_dec(x_29);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_31, x_32);
lean_dec(x_31);
lean_inc(x_33);
x_34 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_3);
lean_ctor_set(x_34, 2, x_4);
lean_ctor_set(x_34, 3, x_5);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_nat_add(x_30, x_33);
lean_dec(x_33);
x_36 = lean_nat_add(x_35, x_32);
lean_dec(x_35);
x_37 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_1);
lean_ctor_set(x_37, 2, x_2);
lean_ctor_set(x_37, 3, x_34);
return x_37;
}
else
{
lean_object* x_38; 
lean_dec(x_33);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_6 = x_34;
x_7 = x_38;
goto block_13;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_3, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_5, 0);
lean_inc(x_40);
x_41 = lean_nat_add(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_41, x_42);
lean_dec(x_41);
lean_inc(x_43);
x_44 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_3);
lean_ctor_set(x_44, 2, x_4);
lean_ctor_set(x_44, 3, x_5);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_nat_add(x_45, x_43);
lean_dec(x_43);
x_47 = lean_nat_add(x_46, x_42);
lean_dec(x_46);
x_48 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_1);
lean_ctor_set(x_48, 2, x_2);
lean_ctor_set(x_48, 3, x_44);
return x_48;
}
else
{
lean_object* x_49; 
lean_dec(x_43);
x_49 = lean_ctor_get(x_1, 0);
lean_inc(x_49);
x_6 = x_44;
x_7 = x_49;
goto block_13;
}
}
}
block_13:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_12, 2, x_2);
lean_ctor_set(x_12, 3, x_6);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_node3R(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_node3R___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_node4L___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Ordnode_node3L___rarg(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 3);
lean_inc(x_10);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_11 = x_3;
} else {
 lean_dec_ref(x_3);
 x_11 = lean_box(0);
}
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_1);
lean_ctor_set(x_47, 2, x_2);
lean_ctor_set(x_47, 3, x_8);
x_12 = x_47;
goto block_45;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_8, 0);
lean_inc(x_48);
x_49 = lean_unsigned_to_nat(0u);
x_50 = lean_nat_add(x_49, x_48);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_50, x_51);
lean_dec(x_50);
x_53 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_1);
lean_ctor_set(x_53, 2, x_2);
lean_ctor_set(x_53, 3, x_8);
x_12 = x_53;
goto block_45;
}
}
else
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_add(x_54, x_55);
lean_dec(x_54);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_add(x_56, x_57);
lean_dec(x_56);
x_59 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_1);
lean_ctor_set(x_59, 2, x_2);
lean_ctor_set(x_59, 3, x_8);
x_12 = x_59;
goto block_45;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_1, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_8, 0);
lean_inc(x_61);
x_62 = lean_nat_add(x_60, x_61);
lean_dec(x_61);
lean_dec(x_60);
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_add(x_62, x_63);
lean_dec(x_62);
x_65 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_1);
lean_ctor_set(x_65, 2, x_2);
lean_ctor_set(x_65, 3, x_8);
x_12 = x_65;
goto block_45;
}
}
block_45:
{
lean_object* x_13; lean_object* x_14; 
if (lean_obj_tag(x_10) == 0)
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
lean_ctor_set(x_22, 2, x_4);
lean_ctor_set(x_22, 3, x_5);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
x_13 = x_22;
x_14 = x_23;
goto block_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_5, 0);
lean_inc(x_24);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_add(x_25, x_24);
lean_dec(x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_26, x_27);
lean_dec(x_26);
x_29 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_10);
lean_ctor_set(x_29, 2, x_4);
lean_ctor_set(x_29, 3, x_5);
x_30 = lean_ctor_get(x_12, 0);
lean_inc(x_30);
x_13 = x_29;
x_14 = x_30;
goto block_20;
}
}
else
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_10, 0);
lean_inc(x_31);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_add(x_31, x_32);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_33, x_34);
lean_dec(x_33);
x_36 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_10);
lean_ctor_set(x_36, 2, x_4);
lean_ctor_set(x_36, 3, x_5);
x_37 = lean_ctor_get(x_12, 0);
lean_inc(x_37);
x_13 = x_36;
x_14 = x_37;
goto block_20;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_10, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_5, 0);
lean_inc(x_39);
x_40 = lean_nat_add(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_40, x_41);
lean_dec(x_40);
x_43 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_10);
lean_ctor_set(x_43, 2, x_4);
lean_ctor_set(x_43, 3, x_5);
x_44 = lean_ctor_get(x_12, 0);
lean_inc(x_44);
x_13 = x_43;
x_14 = x_44;
goto block_20;
}
}
block_20:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_nat_add(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_16, x_17);
lean_dec(x_16);
if (lean_is_scalar(x_11)) {
 x_19 = lean_alloc_ctor(1, 4, 0);
} else {
 x_19 = x_11;
}
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_12);
lean_ctor_set(x_19, 2, x_9);
lean_ctor_set(x_19, 3, x_13);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_node4L(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_node4L___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_node4R___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Ordnode_node3R___rarg(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 3);
lean_inc(x_10);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_11 = x_3;
} else {
 lean_dec_ref(x_3);
 x_11 = lean_box(0);
}
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_1);
lean_ctor_set(x_47, 2, x_2);
lean_ctor_set(x_47, 3, x_8);
x_12 = x_47;
goto block_45;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_8, 0);
lean_inc(x_48);
x_49 = lean_unsigned_to_nat(0u);
x_50 = lean_nat_add(x_49, x_48);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_50, x_51);
lean_dec(x_50);
x_53 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_1);
lean_ctor_set(x_53, 2, x_2);
lean_ctor_set(x_53, 3, x_8);
x_12 = x_53;
goto block_45;
}
}
else
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_add(x_54, x_55);
lean_dec(x_54);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_add(x_56, x_57);
lean_dec(x_56);
x_59 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_1);
lean_ctor_set(x_59, 2, x_2);
lean_ctor_set(x_59, 3, x_8);
x_12 = x_59;
goto block_45;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_1, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_8, 0);
lean_inc(x_61);
x_62 = lean_nat_add(x_60, x_61);
lean_dec(x_61);
lean_dec(x_60);
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_add(x_62, x_63);
lean_dec(x_62);
x_65 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_1);
lean_ctor_set(x_65, 2, x_2);
lean_ctor_set(x_65, 3, x_8);
x_12 = x_65;
goto block_45;
}
}
block_45:
{
lean_object* x_13; lean_object* x_14; 
if (lean_obj_tag(x_10) == 0)
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
lean_ctor_set(x_22, 2, x_4);
lean_ctor_set(x_22, 3, x_5);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
x_13 = x_22;
x_14 = x_23;
goto block_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_5, 0);
lean_inc(x_24);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_add(x_25, x_24);
lean_dec(x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_26, x_27);
lean_dec(x_26);
x_29 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_10);
lean_ctor_set(x_29, 2, x_4);
lean_ctor_set(x_29, 3, x_5);
x_30 = lean_ctor_get(x_12, 0);
lean_inc(x_30);
x_13 = x_29;
x_14 = x_30;
goto block_20;
}
}
else
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_10, 0);
lean_inc(x_31);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_add(x_31, x_32);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_33, x_34);
lean_dec(x_33);
x_36 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_10);
lean_ctor_set(x_36, 2, x_4);
lean_ctor_set(x_36, 3, x_5);
x_37 = lean_ctor_get(x_12, 0);
lean_inc(x_37);
x_13 = x_36;
x_14 = x_37;
goto block_20;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_10, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_5, 0);
lean_inc(x_39);
x_40 = lean_nat_add(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_40, x_41);
lean_dec(x_40);
x_43 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_10);
lean_ctor_set(x_43, 2, x_4);
lean_ctor_set(x_43, 3, x_5);
x_44 = lean_ctor_get(x_12, 0);
lean_inc(x_44);
x_13 = x_43;
x_14 = x_44;
goto block_20;
}
}
block_20:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_nat_add(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_16, x_17);
lean_dec(x_16);
if (lean_is_scalar(x_11)) {
 x_19 = lean_alloc_ctor(1, 4, 0);
} else {
 x_19 = x_11;
}
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_12);
lean_ctor_set(x_19, 2, x_9);
lean_ctor_set(x_19, 3, x_13);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_node4R(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_node4R___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_rotateL___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 3, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_12, 2, x_2);
lean_ctor_set(x_12, 3, x_4);
return x_12;
}
}
else
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_3, 3);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_3, 2);
lean_inc(x_15);
lean_dec(x_3);
x_16 = l_Ordnode_node4L___rarg(x_1, x_2, x_13, x_15, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_3, 2);
lean_inc(x_17);
lean_dec(x_3);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
x_19 = lean_unsigned_to_nat(2u);
x_20 = lean_nat_mul(x_19, x_18);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = l_Ordnode_node4L___rarg(x_1, x_2, x_13, x_17, x_14);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = l_Ordnode_node3L___rarg(x_1, x_2, x_13, x_17, x_14);
return x_24;
}
}
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_3, 3);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_3, 2);
lean_inc(x_26);
lean_dec(x_3);
x_27 = lean_ctor_get(x_13, 0);
lean_inc(x_27);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_lt(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = l_Ordnode_node4L___rarg(x_1, x_2, x_13, x_26, x_25);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = l_Ordnode_node3L___rarg(x_1, x_2, x_13, x_26, x_25);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_3, 2);
lean_inc(x_32);
lean_dec(x_3);
x_33 = lean_ctor_get(x_13, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
x_35 = lean_unsigned_to_nat(2u);
x_36 = lean_nat_mul(x_35, x_34);
lean_dec(x_34);
x_37 = lean_nat_dec_lt(x_33, x_36);
lean_dec(x_36);
lean_dec(x_33);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Ordnode_node4L___rarg(x_1, x_2, x_13, x_32, x_25);
return x_38;
}
else
{
lean_object* x_39; 
x_39 = l_Ordnode_node3L___rarg(x_1, x_2, x_13, x_32, x_25);
return x_39;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_rotateL(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_rotateL___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_rotateR___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 3, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_add(x_8, x_7);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_4);
lean_ctor_set(x_12, 2, x_2);
lean_ctor_set(x_12, 3, x_3);
return x_12;
}
}
else
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
lean_dec(x_1);
x_16 = l_Ordnode_node4R___rarg(x_14, x_15, x_13, x_2, x_3);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
x_19 = lean_unsigned_to_nat(2u);
x_20 = lean_nat_mul(x_19, x_18);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = l_Ordnode_node4R___rarg(x_14, x_17, x_13, x_2, x_3);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = l_Ordnode_node3R___rarg(x_14, x_17, x_13, x_2, x_3);
return x_24;
}
}
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_1, 2);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_13, 0);
lean_inc(x_27);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_lt(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = l_Ordnode_node4R___rarg(x_25, x_26, x_13, x_2, x_3);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = l_Ordnode_node3R___rarg(x_25, x_26, x_13, x_2, x_3);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_1, 2);
lean_inc(x_32);
lean_dec(x_1);
x_33 = lean_ctor_get(x_13, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
x_35 = lean_unsigned_to_nat(2u);
x_36 = lean_nat_mul(x_35, x_34);
lean_dec(x_34);
x_37 = lean_nat_dec_lt(x_33, x_36);
lean_dec(x_36);
lean_dec(x_33);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Ordnode_node4R___rarg(x_25, x_32, x_13, x_2, x_3);
return x_38;
}
else
{
lean_object* x_39; 
x_39 = l_Ordnode_node3R___rarg(x_25, x_32, x_13, x_2, x_3);
return x_39;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_rotateR(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_rotateR___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceL_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_49; 
x_49 = lean_unsigned_to_nat(0u);
x_4 = x_49;
goto block_48;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_4 = x_50;
goto block_48;
}
block_48:
{
lean_object* x_5; 
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_46; 
x_46 = lean_unsigned_to_nat(0u);
x_5 = x_46;
goto block_45;
}
else
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_3, 0);
lean_inc(x_47);
x_5 = x_47;
goto block_45;
}
block_45:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_nat_add(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_le(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(3u);
x_10 = lean_nat_mul(x_9, x_5);
lean_dec(x_5);
x_11 = lean_nat_dec_lt(x_10, x_4);
lean_dec(x_4);
lean_dec(x_10);
if (x_11 == 0)
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_12, 2, x_2);
lean_ctor_set(x_12, 3, x_3);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_add(x_14, x_13);
lean_dec(x_13);
x_16 = lean_nat_add(x_15, x_7);
lean_dec(x_15);
x_17 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
lean_ctor_set(x_17, 2, x_2);
lean_ctor_set(x_17, 3, x_3);
return x_17;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_add(x_18, x_19);
lean_dec(x_18);
x_21 = lean_nat_add(x_20, x_7);
lean_dec(x_20);
x_22 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_1);
lean_ctor_set(x_22, 2, x_2);
lean_ctor_set(x_22, 3, x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
x_25 = lean_nat_add(x_23, x_24);
lean_dec(x_24);
lean_dec(x_23);
x_26 = lean_nat_add(x_25, x_7);
lean_dec(x_25);
x_27 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_1);
lean_ctor_set(x_27, 2, x_2);
lean_ctor_set(x_27, 3, x_3);
return x_27;
}
}
}
else
{
lean_object* x_28; 
x_28 = l_Ordnode_rotateR___rarg(x_1, x_2, x_3);
return x_28;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_1);
lean_ctor_set(x_29, 2, x_2);
lean_ctor_set(x_29, 3, x_3);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_3, 0);
lean_inc(x_30);
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_add(x_31, x_30);
lean_dec(x_30);
x_33 = lean_nat_add(x_32, x_7);
lean_dec(x_32);
x_34 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_1);
lean_ctor_set(x_34, 2, x_2);
lean_ctor_set(x_34, 3, x_3);
return x_34;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_nat_add(x_35, x_36);
lean_dec(x_35);
x_38 = lean_nat_add(x_37, x_7);
lean_dec(x_37);
x_39 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_1);
lean_ctor_set(x_39, 2, x_2);
lean_ctor_set(x_39, 3, x_3);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
x_42 = lean_nat_add(x_40, x_41);
lean_dec(x_41);
lean_dec(x_40);
x_43 = lean_nat_add(x_42, x_7);
lean_dec(x_42);
x_44 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_1);
lean_ctor_set(x_44, 2, x_2);
lean_ctor_set(x_44, 3, x_3);
return x_44;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceL_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_balanceL_x27___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceR_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_49; 
x_49 = lean_unsigned_to_nat(0u);
x_4 = x_49;
goto block_48;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_4 = x_50;
goto block_48;
}
block_48:
{
lean_object* x_5; 
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_46; 
x_46 = lean_unsigned_to_nat(0u);
x_5 = x_46;
goto block_45;
}
else
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_3, 0);
lean_inc(x_47);
x_5 = x_47;
goto block_45;
}
block_45:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_nat_add(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_le(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(3u);
x_10 = lean_nat_mul(x_9, x_4);
lean_dec(x_4);
x_11 = lean_nat_dec_lt(x_10, x_5);
lean_dec(x_5);
lean_dec(x_10);
if (x_11 == 0)
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_12, 2, x_2);
lean_ctor_set(x_12, 3, x_3);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_add(x_14, x_13);
lean_dec(x_13);
x_16 = lean_nat_add(x_15, x_7);
lean_dec(x_15);
x_17 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
lean_ctor_set(x_17, 2, x_2);
lean_ctor_set(x_17, 3, x_3);
return x_17;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_add(x_18, x_19);
lean_dec(x_18);
x_21 = lean_nat_add(x_20, x_7);
lean_dec(x_20);
x_22 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_1);
lean_ctor_set(x_22, 2, x_2);
lean_ctor_set(x_22, 3, x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
x_25 = lean_nat_add(x_23, x_24);
lean_dec(x_24);
lean_dec(x_23);
x_26 = lean_nat_add(x_25, x_7);
lean_dec(x_25);
x_27 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_1);
lean_ctor_set(x_27, 2, x_2);
lean_ctor_set(x_27, 3, x_3);
return x_27;
}
}
}
else
{
lean_object* x_28; 
x_28 = l_Ordnode_rotateL___rarg(x_1, x_2, x_3);
return x_28;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_1);
lean_ctor_set(x_29, 2, x_2);
lean_ctor_set(x_29, 3, x_3);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_3, 0);
lean_inc(x_30);
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_add(x_31, x_30);
lean_dec(x_30);
x_33 = lean_nat_add(x_32, x_7);
lean_dec(x_32);
x_34 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_1);
lean_ctor_set(x_34, 2, x_2);
lean_ctor_set(x_34, 3, x_3);
return x_34;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_nat_add(x_35, x_36);
lean_dec(x_35);
x_38 = lean_nat_add(x_37, x_7);
lean_dec(x_37);
x_39 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_1);
lean_ctor_set(x_39, 2, x_2);
lean_ctor_set(x_39, 3, x_3);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
x_42 = lean_nat_add(x_40, x_41);
lean_dec(x_41);
lean_dec(x_40);
x_43 = lean_nat_add(x_42, x_7);
lean_dec(x_42);
x_44 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_1);
lean_ctor_set(x_44, 2, x_2);
lean_ctor_set(x_44, 3, x_3);
return x_44;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceR_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_balanceR_x27___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_balance_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_52; 
x_52 = lean_unsigned_to_nat(0u);
x_4 = x_52;
goto block_51;
}
else
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
x_4 = x_53;
goto block_51;
}
block_51:
{
lean_object* x_5; 
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_49; 
x_49 = lean_unsigned_to_nat(0u);
x_5 = x_49;
goto block_48;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_3, 0);
lean_inc(x_50);
x_5 = x_50;
goto block_48;
}
block_48:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_nat_add(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_le(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(3u);
x_10 = lean_nat_mul(x_9, x_4);
x_11 = lean_nat_dec_lt(x_10, x_5);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_nat_mul(x_9, x_5);
lean_dec(x_5);
x_13 = lean_nat_dec_lt(x_12, x_4);
lean_dec(x_4);
lean_dec(x_12);
if (x_13 == 0)
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_1);
lean_ctor_set(x_14, 2, x_2);
lean_ctor_set(x_14, 3, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_add(x_16, x_15);
lean_dec(x_15);
x_18 = lean_nat_add(x_17, x_7);
lean_dec(x_17);
x_19 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_1);
lean_ctor_set(x_19, 2, x_2);
lean_ctor_set(x_19, 3, x_3);
return x_19;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_add(x_20, x_21);
lean_dec(x_20);
x_23 = lean_nat_add(x_22, x_7);
lean_dec(x_22);
x_24 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_1);
lean_ctor_set(x_24, 2, x_2);
lean_ctor_set(x_24, 3, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 0);
lean_inc(x_26);
x_27 = lean_nat_add(x_25, x_26);
lean_dec(x_26);
lean_dec(x_25);
x_28 = lean_nat_add(x_27, x_7);
lean_dec(x_27);
x_29 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_1);
lean_ctor_set(x_29, 2, x_2);
lean_ctor_set(x_29, 3, x_3);
return x_29;
}
}
}
else
{
lean_object* x_30; 
x_30 = l_Ordnode_rotateR___rarg(x_1, x_2, x_3);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_5);
lean_dec(x_4);
x_31 = l_Ordnode_rotateL___rarg(x_1, x_2, x_3);
return x_31;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_32, 0, x_7);
lean_ctor_set(x_32, 1, x_1);
lean_ctor_set(x_32, 2, x_2);
lean_ctor_set(x_32, 3, x_3);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_3, 0);
lean_inc(x_33);
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_nat_add(x_34, x_33);
lean_dec(x_33);
x_36 = lean_nat_add(x_35, x_7);
lean_dec(x_35);
x_37 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_1);
lean_ctor_set(x_37, 2, x_2);
lean_ctor_set(x_37, 3, x_3);
return x_37;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_nat_add(x_38, x_39);
lean_dec(x_38);
x_41 = lean_nat_add(x_40, x_7);
lean_dec(x_40);
x_42 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_1);
lean_ctor_set(x_42, 2, x_2);
lean_ctor_set(x_42, 3, x_3);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_3, 0);
lean_inc(x_44);
x_45 = lean_nat_add(x_43, x_44);
lean_dec(x_44);
lean_dec(x_43);
x_46 = lean_nat_add(x_45, x_7);
lean_dec(x_45);
x_47 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_1);
lean_ctor_set(x_47, 2, x_2);
lean_ctor_set(x_47, 3, x_3);
return x_47;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_balance_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_balance_x27___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_node4L_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_apply_4(x_7, x_1, x_2, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 3);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_apply_8(x_6, x_1, x_2, x_9, x_10, x_11, x_12, x_4, x_5);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_node4L_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_node4L_match__1_splitter___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateL_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 3);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_apply_6(x_4, x_1, x_2, x_7, x_8, x_9, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateL_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateL_match__1_splitter___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateR_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_6(x_4, x_7, x_8, x_9, x_10, x_2, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateR_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_rotateR_match__1_splitter___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_foldr_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_5(x_4, x_6, x_7, x_8, x_9, x_2);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_foldr_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_foldr_match__1_splitter___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_3(x_3, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_5, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_5, 3);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_apply_7(x_4, x_10, x_13, x_14, x_15, x_16, x_11, x_12);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMin_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_3(x_3, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_5, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_5, 3);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_apply_7(x_4, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_eraseMax_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMin_x27_match__2_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
x_6 = lean_apply_2(x_4, x_2, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_6(x_5, x_7, x_8, x_9, x_10, x_2, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMin_x27_match__2_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMin_x27_match__2_splitter___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMin_x27_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_5(x_4, x_6, x_7, x_8, x_9, x_2);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMin_x27_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMin_x27_match__1_splitter___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMax_x27_match__2_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
x_6 = lean_apply_2(x_4, x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 3);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_apply_6(x_5, x_1, x_2, x_7, x_8, x_9, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMax_x27_match__2_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_splitMax_x27_match__2_splitter___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMax_x27_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_5(x_4, x_1, x_6, x_7, x_8, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMax_x27_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_findMax_x27_match__1_splitter___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_adjustWith_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_Bounded_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_6);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
x_7 = lean_apply_3(x_5, x_2, x_3, lean_box(0));
return x_7;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_apply_3(x_5, x_2, x_3, lean_box(0));
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_apply_2(x_4, x_9, x_10);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
lean_dec(x_4);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_apply_6(x_6, x_12, x_13, x_14, x_15, x_2, x_3);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_Bounded_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_Bounded_match__1_splitter___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_inc(x_2);
return x_2;
}
case 1:
{
lean_inc(x_3);
return x_3;
}
default: 
{
lean_inc(x_4);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Mathlib_Data_Ordmap_Ordset_0__Ordnode_mem_match__1_splitter___rarg(x_5, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordset_nil(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_nil___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_nil(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_size___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Ordset_size(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordset_size___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_size___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ordset_size___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_size___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_size(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_singleton___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
lean_ctor_set(x_4, 3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordset_singleton(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordset_singleton___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_singleton___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_singleton(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_instEmptyCollection(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_instEmptyCollection___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_instEmptyCollection(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Ordset_instSingleton___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordset_singleton___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordset_instSingleton(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_instSingleton___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_instSingleton___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_instSingleton(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Ordset_Empty_instDecidablePred___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Ordset_Empty_instDecidablePred(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordset_Empty_instDecidablePred___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_Empty_instDecidablePred___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Ordset_Empty_instDecidablePred___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_Empty_instDecidablePred___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordset_Empty_instDecidablePred(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordset_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = l_Ordnode_insert___rarg(x_6, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ordset_insert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordset_insert___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_insert___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordset_insert___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordset_instInsert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ordset_insert___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordset_instInsert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordset_instInsert___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_insert_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = l_Ordnode_insert_x27___rarg(x_6, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ordset_insert_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordset_insert_x27___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_insert_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordset_insert_x27___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Ordset_mem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Ordnode_mem___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordset_mem(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordset_mem___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_mem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Ordset_mem___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordset_find___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Ordnode_find___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordset_find(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordset_find___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_find___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordset_find___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordset_instMembership(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordset_instMembership___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordset_instMembership(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Ordset_mem_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Ordset_mem___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordset_mem_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordset_mem_decidable___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_mem_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Ordset_mem_decidable___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordset_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Ordnode_erase___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordset_erase(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordset_erase___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordset_erase___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordset_erase___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordset_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_map___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordset_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Ordset_map___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordset_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordset_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Dist(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Ordmap_Ordnode(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Abel(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Ordmap_Ordset(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Dist(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Ordmap_Ordnode(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Abel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Ordnode_Balanced_dec___rarg___closed__1 = _init_l_Ordnode_Balanced_dec___rarg___closed__1();
l_Ordset_instSingleton___closed__1 = _init_l_Ordset_instSingleton___closed__1();
lean_mark_persistent(l_Ordset_instSingleton___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
