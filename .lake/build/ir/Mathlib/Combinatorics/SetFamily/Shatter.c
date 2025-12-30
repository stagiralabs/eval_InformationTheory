// Lean compiler output
// Module: Mathlib.Combinatorics.SetFamily.Shatter
// Imports: Init Mathlib.Combinatorics.SetFamily.Compression.Down Mathlib.Data.Fintype.Powerset Mathlib.Order.Interval.Finset.Nat Mathlib.Algebra.BigOperators.Group.Finset.Basic
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Multiset_bind___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_shatterer___spec__10___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_powerset___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_shatterer___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Finset_shatterer___spec__6(lean_object*);
LEAN_EXPORT uint8_t l_Finset_instDecidablePredShatters___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_shatterer___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_vcDim___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Finset_shatterer___spec__2___rarg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Finset_shatterer___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_shatterer___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Finset_shatterer___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Finset_vcDim___rarg___closed__1;
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Finset_shatterer___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_shatterer___spec__11(lean_object*);
uint8_t l_List_isPerm___at_List_decidablePerm___spec__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Finset_shatterer___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Finset_shatterer___spec__5(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_shatterer(lean_object*);
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_shatterer___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_card___rarg___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_shatterer___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1___rarg(lean_object*, lean_object*);
uint8_t l_Finset_decidableForallOfDecidableSubsets___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
static lean_object* l_Finset_shatterer___rarg___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Finset_instDecidablePredShatters___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT uint8_t l_Finset_instDecidablePredShatters___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Finset_shatterer___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Finset_shatterer___spec__2(lean_object*);
lean_object* l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_shatterer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_shatterer___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Finset_vcDim(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Finset_sup___at_Finset_vcDim___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_dedup___at_Finset_shatterer___spec__4(lean_object*);
LEAN_EXPORT uint8_t l_Finset_instDecidablePredShatters___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_5 = l_Multiset_filter___at_Multiset_ndinter___spec__1___rarg(x_1, x_4, x_2);
x_6 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Finset_instDecidablePredShatters___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_alloc_closure((void*)(l_Finset_instDecidablePredShatters___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_4);
x_7 = l_Finset_decidableExistsAndFinset___rarg(x_3, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Finset_instDecidablePredShatters___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finset_instDecidablePredShatters___rarg___lambda__2___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
lean_closure_set(x_4, 2, x_2);
x_5 = l_Finset_decidableForallOfDecidableSubsets___rarg(x_3, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instDecidablePredShatters___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Finset_instDecidablePredShatters___rarg___lambda__1(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Finset_instDecidablePredShatters___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_instDecidablePredShatters___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Finset_instDecidablePredShatters___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; 
x_4 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_2, x_3);
x_5 = l_instDecidableNot___rarg(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___lambda__1___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___lambda__1___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Finset_shatterer___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_11 = l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg(x_1, x_4, x_9, x_10, x_2);
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
x_16 = l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Finset_shatterer___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_Finset_shatterer___spec__6___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Finset_shatterer___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_Finset_shatterer___spec__6___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Finset_shatterer___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_Finset_shatterer___spec__5___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Finset_shatterer___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_Finset_shatterer___spec__5___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Finset_shatterer___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_Finset_shatterer___spec__4___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Finset_shatterer___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_Finset_shatterer___spec__5___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Finset_shatterer___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_dedup___at_Finset_shatterer___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Finset_shatterer___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_Finset_shatterer___spec__5___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Finset_shatterer___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_toFinset___at_Finset_shatterer___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_shatterer___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_bind___rarg(x_2, x_3);
x_5 = l_List_pwFilter___at_Finset_shatterer___spec__5___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_biUnion___at_Finset_shatterer___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_biUnion___at_Finset_shatterer___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_shatterer___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Finset_instDecidablePredShatters___rarg(x_1, x_2, x_7);
if (x_9 == 0)
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
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Finset_instDecidablePredShatters___rarg(x_1, x_2, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finset_shatterer___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finset_shatterer___spec__11___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_shatterer___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterTR_loop___at_Finset_shatterer___spec__11___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finset_shatterer___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finset_shatterer___spec__10___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_shatterer___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_filter___at_Finset_shatterer___spec__10___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finset_shatterer___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finset_shatterer___spec__9___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_shatterer___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_powerset___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_shatterer___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Finset_shatterer___rarg___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_Finset_biUnion___at_Finset_shatterer___spec__1___rarg(x_1, x_2, x_3);
x_5 = l_Multiset_filter___at_Finset_shatterer___spec__10___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_shatterer(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_shatterer___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__7___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Finset_shatterer___spec__8___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_le(x_1, x_2);
if (x_3 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
static lean_object* _init_l_Finset_sup___at_Finset_vcDim___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_vcDim___spec__1___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Finset_sup___at_Finset_vcDim___spec__1___rarg___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Finset_fold___rarg(x_3, lean_box(0), lean_box(0), x_4, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_vcDim___spec__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Finset_vcDim___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_card___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_vcDim___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Finset_shatterer___rarg(x_1, x_2);
x_4 = lean_alloc_closure((void*)(l_Finset_sup___at_Finset_vcDim___spec__1___rarg___lambda__1___boxed), 2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Finset_vcDim___rarg___closed__1;
x_7 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_5, x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finset_vcDim(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_vcDim___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Finset_vcDim___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_sup___at_Finset_vcDim___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SetFamily_Compression_Down(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SetFamily_Shatter(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SetFamily_Compression_Down(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_shatterer___rarg___closed__1 = _init_l_Finset_shatterer___rarg___closed__1();
lean_mark_persistent(l_Finset_shatterer___rarg___closed__1);
l_Finset_sup___at_Finset_vcDim___spec__1___rarg___closed__1 = _init_l_Finset_sup___at_Finset_vcDim___spec__1___rarg___closed__1();
lean_mark_persistent(l_Finset_sup___at_Finset_vcDim___spec__1___rarg___closed__1);
l_Finset_vcDim___rarg___closed__1 = _init_l_Finset_vcDim___rarg___closed__1();
lean_mark_persistent(l_Finset_vcDim___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
