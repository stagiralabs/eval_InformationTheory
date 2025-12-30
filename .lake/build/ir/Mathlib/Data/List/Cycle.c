// Lean compiler output
// Module: Mathlib.Data.List.Cycle
// Imports: Init Mathlib.Data.Fintype.List Mathlib.Data.Fintype.OfMap
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
LEAN_EXPORT lean_object* l_List_nextOr(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_length___rarg___boxed(lean_object*);
static lean_object* l_Cycle_instRepr___rarg___closed__1;
LEAN_EXPORT lean_object* l_Cycle_toMultiset___rarg(lean_object*);
static lean_object* l_Cycle_instRepr___rarg___closed__3;
LEAN_EXPORT lean_object* l_Cycle_instDecidableMemOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_toMultiset(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle(lean_object*);
static lean_object* l_Cycle_instCoeList___closed__1;
LEAN_EXPORT lean_object* l_List_prev___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_List_next___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Cycle_fintypeNodupCycle___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_ofList___rarg___boxed(lean_object*);
uint8_t l_List_nodupDecidable___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_next___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__2;
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle___rarg(lean_object*, lean_object*);
lean_object* l_List_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nextOr___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Cycle_fintypeNodupCycle___spec__3___rarg(lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_x27___at_Cycle_instDecidableMemOfDecidableEq___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableNontrivial___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_lists___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_nextOr_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_prev(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Cycle_fintypeNodupCycle___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_ofSurjective___at_Cycle_fintypeNodupCycle___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instRepr___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Cycle_toFinset(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_decidableNontrivialCoe(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nextOr___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_ofList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_decidableNontrivialCoe___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082_x27___at_Cycle_instDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_x27___at_Cycle_instDecidableMemOfDecidableEq___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_prev___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_length(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Cycle_fintypeNodupCycle___spec__7___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupNontrivialCycle___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableNontrivial(lean_object*);
static lean_object* l_Cycle_instRepr___rarg___closed__4;
LEAN_EXPORT lean_object* l_Fintype_ofSurjective___at_Cycle_fintypeNodupCycle___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_prev_match__1_splitter(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__1;
static lean_object* l_Cycle_instRepr___rarg___closed__2;
uint8_t l_List_elem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Cycle_decidableNontrivialCoe___rarg(lean_object*, lean_object*);
lean_object* l_List_cyclicPermutations___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_prev(lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
static lean_object* l_Cycle_instRepr___rarg___closed__6;
LEAN_EXPORT lean_object* l_Cycle_instMembership(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_next(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle___rarg___lambda__1___boxed(lean_object*);
uint8_t l_List_isRotatedDecidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Cycle_instDecidableNontrivial___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableMemOfDecidableEq(lean_object*);
LEAN_EXPORT uint8_t l_Cycle_instDecidableNodup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Cycle_fintypeNodupNontrivialCycle___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_lists(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_toMultiset___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082_x27___at_Cycle_instDecidableEq___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableNodup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instRepr(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Cycle_fintypeNodupCycle___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_next(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Cycle_fintypeNodupCycle___spec__5___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_nextOr_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cycle_instRepr___rarg___closed__5;
lean_object* l_repr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_reverse(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Cycle_fintypeNodupNontrivialCycle___spec__3(lean_object*);
lean_object* l_Std_Format_joinSep___at_Prod_repr___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instCoeList(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Cycle_fintypeNodupCycle___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instRepr___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Cycle_fintypeNodupCycle___spec__3(lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_map___rarg(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
static lean_object* l_Cycle_fintypeNodupCycle___rarg___closed__1;
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_toFinset___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableNodup(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instDecidableMemOfDecidableEq___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_prev_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_length___rarg(lean_object*);
lean_object* l_fintypeNodupList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupNontrivialCycle(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT uint8_t l_Cycle_instDecidableMemOfDecidableEq___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_map(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Cycle_fintypeNodupCycle___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Finset_image___at_Cycle_fintypeNodupCycle___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cycle_nil(lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_nextOr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_3);
lean_dec(x_1);
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_1);
lean_inc(x_3);
x_10 = lean_apply_2(x_1, x_3, x_6);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_5);
lean_inc(x_1);
lean_inc(x_3);
x_15 = lean_apply_2(x_1, x_3, x_6);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_14);
x_2 = x_17;
goto _start;
}
else
{
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_nextOr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_nextOr___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_nextOr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_nextOr___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_nextOr_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; 
lean_dec(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_4, x_2, x_3);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_3(x_5, x_9, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_apply_5(x_6, x_11, x_12, x_13, x_2, x_3);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_nextOr_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Cycle_0__List_nextOr_match__1_splitter___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_next___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_get___rarg(x_2, x_5);
x_7 = l_List_nextOr___rarg(x_1, x_2, x_3, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_next(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_next___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_prev___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_3);
x_11 = lean_apply_2(x_1, x_3, x_7);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_3);
x_13 = lean_apply_2(x_1, x_3, x_9);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_7);
x_2 = x_5;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
else
{
lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_16 = l_List_getLast___rarg(x_5, lean_box(0));
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_5);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_3);
x_19 = lean_apply_2(x_1, x_3, x_7);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
lean_inc(x_1);
lean_inc(x_17);
lean_inc(x_3);
x_21 = lean_apply_2(x_1, x_3, x_17);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_7);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_18);
x_2 = x_23;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_17);
lean_ctor_set(x_25, 1, x_18);
x_26 = l_List_getLast___rarg(x_25, lean_box(0));
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_prev(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_prev___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_prev_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; 
lean_dec(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_4, x_2, lean_box(0));
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_3(x_5, x_9, x_2, lean_box(0));
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_apply_5(x_6, x_11, x_12, x_13, x_2, lean_box(0));
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Cycle_0__List_prev_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Cycle_0__List_prev_match__1_splitter___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cycle_ofList___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cycle_ofList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_ofList___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_ofList___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Cycle_ofList___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Cycle_instCoeList___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Cycle_ofList___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cycle_instCoeList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Cycle_instCoeList___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_nil(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instEmptyCollection(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instMembership(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082_x27___at_Cycle_instDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082_x27___at_Cycle_instDecidableEq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Quotient_recOnSubsingleton_u2082_x27___at_Cycle_instDecidableEq___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_isRotatedDecidable___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_instDecidableEq___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_x27___at_Cycle_instDecidableMemOfDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_x27___at_Cycle_instDecidableMemOfDecidableEq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Quotient_recOnSubsingleton_x27___at_Cycle_instDecidableMemOfDecidableEq___spec__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Cycle_instDecidableMemOfDecidableEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_elem___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableMemOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Cycle_instDecidableMemOfDecidableEq___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableMemOfDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_instDecidableMemOfDecidableEq___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableMemOfDecidableEq___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Cycle_instDecidableMemOfDecidableEq___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cycle_reverse___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_reverse___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_reverse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_reverse___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_length___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_lengthTRAux___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cycle_length(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_length___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_length___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Cycle_length___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_toMultiset___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cycle_toMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_toMultiset___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_toMultiset___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Cycle_toMultiset___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_mapTR___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cycle_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Cycle_map___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cycle_lists___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_cyclicPermutations___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_lists(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_lists___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Cycle_decidableNontrivialCoe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
lean_dec(x_1);
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_1);
lean_inc(x_6);
x_10 = lean_apply_2(x_1, x_6, x_8);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_free_object(x_4);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_12 = 1;
return x_12;
}
else
{
lean_ctor_set(x_4, 0, x_6);
x_2 = x_4;
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_6);
x_16 = lean_apply_2(x_1, x_6, x_14);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_1);
x_18 = 1;
return x_18;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_6);
lean_ctor_set(x_19, 1, x_15);
x_2 = x_19;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Cycle_decidableNontrivialCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_decidableNontrivialCoe___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_decidableNontrivialCoe___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Cycle_decidableNontrivialCoe___rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Cycle_instDecidableNontrivial___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Cycle_decidableNontrivialCoe___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableNontrivial(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_instDecidableNontrivial___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableNontrivial___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Cycle_instDecidableNontrivial___rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Cycle_instDecidableNodup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_List_nodupDecidable___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableNodup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_instDecidableNodup___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instDecidableNodup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Cycle_instDecidableNodup___rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_4 = l_Cycle_instDecidableEq___rarg(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_instDecidableNot___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
lean_inc(x_5);
x_11 = l_List_decidableBAll___rarg(x_10, x_5);
if (x_11 == 0)
{
lean_dec(x_9);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_5);
x_3 = x_8;
x_5 = x_13;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
lean_inc(x_5);
x_11 = l_List_decidableBAll___rarg(x_10, x_5);
if (x_11 == 0)
{
lean_dec(x_9);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_5);
x_3 = x_8;
x_5 = x_13;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Cycle_fintypeNodupCycle___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_mk(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_le(x_5, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_10 = 0;
x_11 = l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg(x_1, x_4, x_9, x_10, x_2);
lean_dec(x_4);
return x_11;
}
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_5);
if (x_13 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Cycle_fintypeNodupCycle___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_Cycle_fintypeNodupCycle___spec__7___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_Cycle_fintypeNodupCycle___spec__7___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Cycle_fintypeNodupCycle___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Cycle_fintypeNodupCycle___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_Cycle_fintypeNodupCycle___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Cycle_fintypeNodupCycle___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Cycle_fintypeNodupCycle___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_dedup___at_Cycle_fintypeNodupCycle___spec__4___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Cycle_fintypeNodupCycle___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Cycle_fintypeNodupCycle___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_toFinset___at_Cycle_fintypeNodupCycle___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Cycle_fintypeNodupCycle___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_Cycle_fintypeNodupCycle___spec__6___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_image___at_Cycle_fintypeNodupCycle___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_image___at_Cycle_fintypeNodupCycle___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofSurjective___at_Cycle_fintypeNodupCycle___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_fintypeNodupList___rarg(x_2);
x_6 = l_Finset_image___at_Cycle_fintypeNodupCycle___spec__2___rarg(x_1, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Fintype_ofSurjective___at_Cycle_fintypeNodupCycle___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_ofSurjective___at_Cycle_fintypeNodupCycle___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Cycle_fintypeNodupCycle___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Cycle_fintypeNodupCycle___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Cycle_fintypeNodupCycle___rarg___closed__1;
x_4 = l_Fintype_ofSurjective___at_Cycle_fintypeNodupCycle___spec__1___rarg(x_1, x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_fintypeNodupCycle___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__8___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Cycle_fintypeNodupCycle___spec__9___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupCycle___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Cycle_fintypeNodupCycle___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Cycle_fintypeNodupNontrivialCycle___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_inc(x_1);
x_8 = l_Cycle_decidableNontrivialCoe___rarg(x_1, x_6);
if (x_8 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_11);
lean_inc(x_1);
x_13 = l_Cycle_decidableNontrivialCoe___rarg(x_1, x_11);
if (x_13 == 0)
{
lean_dec(x_11);
x_2 = x_12;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_3);
x_2 = x_12;
x_3 = x_15;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Cycle_fintypeNodupNontrivialCycle___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Cycle_fintypeNodupNontrivialCycle___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Cycle_fintypeNodupNontrivialCycle___spec__3___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupNontrivialCycle___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Cycle_fintypeNodupCycle___rarg___closed__1;
lean_inc(x_1);
x_4 = l_Fintype_ofSurjective___at_Cycle_fintypeNodupCycle___spec__1___rarg(x_1, x_2, x_3, lean_box(0));
x_5 = l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__1;
x_6 = l_Multiset_map___rarg(x_5, x_4);
x_7 = l_Multiset_filter___at_Cycle_fintypeNodupNontrivialCycle___spec__2___rarg(x_1, x_6);
x_8 = l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__2;
x_9 = l_Multiset_pmap___rarg(x_8, x_7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_Cycle_fintypeNodupNontrivialCycle(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_fintypeNodupNontrivialCycle___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_toFinset___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cycle_toFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_toFinset___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_next___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_next___rarg(x_1, x_2, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Cycle_next(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_next___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_prev___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_prev___rarg(x_1, x_2, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Cycle_prev(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_prev___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_Cycle_instRepr___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("c[", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cycle_instRepr___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cycle_instRepr___rarg___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Cycle_instRepr___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cycle_instRepr___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cycle_instRepr___rarg___closed__3;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Cycle_instRepr___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Cycle_instRepr___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cycle_instRepr___rarg___closed__5;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instRepr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_4 = lean_box(0);
x_5 = lean_alloc_closure((void*)(l_repr___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_List_mapTR___rarg(x_5, x_2);
x_7 = l_List_cyclicPermutations___rarg(x_6);
x_8 = l_List_head_x21___rarg(x_4, x_7);
lean_dec(x_7);
x_9 = l_Cycle_instRepr___rarg___closed__4;
x_10 = l_Std_Format_joinSep___at_Prod_repr___spec__1(x_8, x_9);
x_11 = l_Cycle_instRepr___rarg___closed__2;
x_12 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Cycle_instRepr___rarg___closed__6;
x_14 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Cycle_instRepr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cycle_instRepr___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cycle_instRepr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Cycle_instRepr___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_List(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_OfMap(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Cycle(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_List(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_OfMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Cycle_instCoeList___closed__1 = _init_l_Cycle_instCoeList___closed__1();
lean_mark_persistent(l_Cycle_instCoeList___closed__1);
l_Cycle_fintypeNodupCycle___rarg___closed__1 = _init_l_Cycle_fintypeNodupCycle___rarg___closed__1();
lean_mark_persistent(l_Cycle_fintypeNodupCycle___rarg___closed__1);
l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__1 = _init_l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__1();
lean_mark_persistent(l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__1);
l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__2 = _init_l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__2();
lean_mark_persistent(l_Cycle_fintypeNodupNontrivialCycle___rarg___closed__2);
l_Cycle_instRepr___rarg___closed__1 = _init_l_Cycle_instRepr___rarg___closed__1();
lean_mark_persistent(l_Cycle_instRepr___rarg___closed__1);
l_Cycle_instRepr___rarg___closed__2 = _init_l_Cycle_instRepr___rarg___closed__2();
lean_mark_persistent(l_Cycle_instRepr___rarg___closed__2);
l_Cycle_instRepr___rarg___closed__3 = _init_l_Cycle_instRepr___rarg___closed__3();
lean_mark_persistent(l_Cycle_instRepr___rarg___closed__3);
l_Cycle_instRepr___rarg___closed__4 = _init_l_Cycle_instRepr___rarg___closed__4();
lean_mark_persistent(l_Cycle_instRepr___rarg___closed__4);
l_Cycle_instRepr___rarg___closed__5 = _init_l_Cycle_instRepr___rarg___closed__5();
lean_mark_persistent(l_Cycle_instRepr___rarg___closed__5);
l_Cycle_instRepr___rarg___closed__6 = _init_l_Cycle_instRepr___rarg___closed__6();
lean_mark_persistent(l_Cycle_instRepr___rarg___closed__6);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
