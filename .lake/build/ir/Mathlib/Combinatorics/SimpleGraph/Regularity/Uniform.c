// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Regularity.Uniform
// Imports: Init Mathlib.Algebra.BigOperators.Ring.Finset Mathlib.Combinatorics.SimpleGraph.Density Mathlib.Data.Nat.Cast.Order.Field Mathlib.Order.Partition.Equipartition Mathlib.SetTheory.Cardinal.Basic
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
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_sparsePairs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__5(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_sparsePairs___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__4(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__2(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_nonUniforms___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableForallOfDecidableSubsets_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_nonUniforms___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel(lean_object*, lean_object*);
uint8_t l_List_isPerm___at_List_decidablePerm___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Multiset_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_nonUniforms___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_sparsePairs___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_SimpleGraph_IsUniform_instDecidableRel___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_IsUniform_instDecidableRel___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_nonUniforms(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Finset_decidableExistsAndFinset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rel_edgeDensity___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_sparsePairs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Finpartition_sparsePairs___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_nonUniforms___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_SimpleGraph_IsUniform_instDecidableRel___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_SimpleGraph_IsUniform_instDecidableRel___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = l_AddGroupWithOne_toAddGroup___rarg(x_6);
lean_dec(x_6);
x_8 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_2);
x_10 = lean_apply_1(x_9, x_2);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_2(x_11, x_2, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_abs___at_SimpleGraph_IsUniform_instDecidableRel___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_abs___at_SimpleGraph_IsUniform_instDecidableRel___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = l_AddGroupWithOne_toAddGroup___rarg(x_1);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_2, 5);
lean_inc(x_13);
lean_inc(x_3);
x_14 = l_Rel_edgeDensity___rarg(x_3, x_4, x_5);
lean_inc(x_13);
x_15 = lean_apply_1(x_13, x_14);
x_16 = l_Rel_edgeDensity___rarg(x_3, x_6, x_7);
x_17 = lean_apply_1(x_13, x_16);
x_18 = lean_apply_2(x_12, x_15, x_17);
x_19 = l_abs___at_SimpleGraph_IsUniform_instDecidableRel___spec__1___rarg(x_2, x_18);
x_20 = l_instDecidableLt__mathlib___rarg(x_8, x_19, x_9);
return x_20;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_List_lengthTRAux___rarg(x_1, x_13);
lean_inc(x_2);
x_15 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
x_16 = lean_apply_2(x_3, x_15, x_4);
x_17 = l_List_lengthTRAux___rarg(x_5, x_13);
x_18 = lean_apply_1(x_2, x_17);
lean_inc(x_6);
x_19 = l_instDecidableLe__mathlib___rarg(x_6, x_16, x_18);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
x_21 = lean_alloc_closure((void*)(l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__1___boxed), 10, 9);
lean_closure_set(x_21, 0, x_7);
lean_closure_set(x_21, 1, x_8);
lean_closure_set(x_21, 2, x_9);
lean_closure_set(x_21, 3, x_10);
lean_closure_set(x_21, 4, x_5);
lean_closure_set(x_21, 5, x_11);
lean_closure_set(x_21, 6, x_1);
lean_closure_set(x_21, 7, x_6);
lean_closure_set(x_21, 8, x_4);
x_22 = l_forall__prop__decidable___rarg(x_20, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_LinearOrderedRing_toLinearOrder___rarg(x_8);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_11);
x_12 = l_CommRing_toNonUnitalCommRing___rarg(x_11);
x_13 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Ring_toAddGroupWithOne___rarg(x_11);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_List_lengthTRAux___rarg(x_2, x_18);
lean_inc(x_17);
x_20 = lean_apply_1(x_17, x_19);
lean_inc(x_14);
lean_inc(x_3);
x_21 = lean_apply_2(x_14, x_20, x_3);
x_22 = l_List_lengthTRAux___rarg(x_4, x_18);
lean_inc(x_17);
x_23 = lean_apply_1(x_17, x_22);
lean_inc(x_9);
x_24 = l_instDecidableLe__mathlib___rarg(x_9, x_21, x_23);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
x_26 = lean_alloc_closure((void*)(l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__2), 12, 11);
lean_closure_set(x_26, 0, x_5);
lean_closure_set(x_26, 1, x_17);
lean_closure_set(x_26, 2, x_14);
lean_closure_set(x_26, 3, x_3);
lean_closure_set(x_26, 4, x_7);
lean_closure_set(x_26, 5, x_9);
lean_closure_set(x_26, 6, x_15);
lean_closure_set(x_26, 7, x_1);
lean_closure_set(x_26, 8, x_6);
lean_closure_set(x_26, 9, x_4);
lean_closure_set(x_26, 10, x_2);
x_27 = l_forall__prop__decidable___rarg(x_25, x_26);
return x_27;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__3), 7, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, x_4);
lean_closure_set(x_7, 5, x_5);
x_8 = l_Finset_decidableForallOfDecidableSubsets_x27___rarg(x_4, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_IsUniform_instDecidableRel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__4___boxed), 6, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, x_3);
x_8 = l_Finset_decidableForallOfDecidableSubsets_x27___rarg(x_5, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_IsUniform_instDecidableRel___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_SimpleGraph_IsUniform_instDecidableRel___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_IsUniform_instDecidableRel___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_SimpleGraph_IsUniform_instDecidableRel___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_8, x_9);
x_11 = l_instDecidableNot___rarg(x_10);
if (x_11 == 0)
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_1);
x_18 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_16, x_17);
x_19 = l_instDecidableNot___rarg(x_18);
if (x_19 == 0)
{
lean_dec(x_14);
x_2 = x_15;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_3);
x_2 = x_15;
x_3 = x_21;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__4___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__4___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finpartition_sparsePairs___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Finpartition_sparsePairs___spec__3___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finpartition_sparsePairs___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_sparsePairs___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = l_Multiset_product___rarg(x_2, x_2);
x_4 = l_Multiset_filter___at_Finpartition_sparsePairs___spec__3___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_sparsePairs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_offDiag___at_Finpartition_sparsePairs___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = l_List_reverse___rarg(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = l_LinearOrderedRing_toLinearOrder___rarg(x_11);
x_13 = lean_ctor_get(x_1, 5);
lean_inc(x_13);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_3);
x_16 = l_Rel_edgeDensity___rarg(x_3, x_14, x_15);
x_17 = lean_apply_1(x_13, x_16);
lean_inc(x_4);
x_18 = l_instDecidableLt__mathlib___rarg(x_12, x_17, x_4);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_free_object(x_5);
lean_dec(x_9);
x_5 = x_10;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_6);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_5);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
x_25 = l_LinearOrderedRing_toLinearOrder___rarg(x_24);
x_26 = lean_ctor_get(x_1, 5);
lean_inc(x_26);
x_27 = lean_ctor_get(x_22, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_inc(x_3);
x_29 = l_Rel_edgeDensity___rarg(x_3, x_27, x_28);
x_30 = lean_apply_1(x_26, x_29);
lean_inc(x_4);
x_31 = l_instDecidableLt__mathlib___rarg(x_25, x_30, x_4);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_dec(x_22);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_34; 
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_6);
x_5 = x_23;
x_6 = x_34;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_filter___at_Finpartition_sparsePairs___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finpartition_sparsePairs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Finset_offDiag___at_Finpartition_sparsePairs___spec__1___rarg(x_2, x_4);
x_9 = l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg(x_1, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finpartition_sparsePairs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finpartition_sparsePairs___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_filterTR_loop___at_Finpartition_sparsePairs___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_Finpartition_sparsePairs___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_sparsePairs___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_filter___at_Finpartition_sparsePairs___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finpartition_sparsePairs___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finpartition_sparsePairs___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_8, x_9);
x_11 = l_instDecidableNot___rarg(x_10);
if (x_11 == 0)
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_1);
x_18 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_16, x_17);
x_19 = l_instDecidableNot___rarg(x_18);
if (x_19 == 0)
{
lean_dec(x_14);
x_2 = x_15;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_3);
x_2 = x_15;
x_3 = x_21;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__4___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__4___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finpartition_nonUniforms___spec__3___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Finpartition_nonUniforms___spec__3___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Finpartition_nonUniforms___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_nonUniforms___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = l_Multiset_product___rarg(x_2, x_2);
x_4 = l_Multiset_filter___at_Finpartition_nonUniforms___spec__3___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_offDiag___at_Finpartition_nonUniforms___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_offDiag___at_Finpartition_nonUniforms___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = l_List_reverse___rarg(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_13 = l_SimpleGraph_IsUniform_instDecidableRel___rarg(x_1, x_2, x_3, x_4, x_11, x_12);
x_14 = l_instDecidableNot___rarg(x_13);
if (x_14 == 0)
{
lean_free_object(x_5);
lean_dec(x_9);
x_5 = x_10;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_6);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_5);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_21 = l_SimpleGraph_IsUniform_instDecidableRel___rarg(x_1, x_2, x_3, x_4, x_19, x_20);
x_22 = l_instDecidableNot___rarg(x_21);
if (x_22 == 0)
{
lean_dec(x_17);
x_5 = x_18;
goto _start;
}
else
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_6);
x_5 = x_18;
x_6 = x_24;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_filter___at_Finpartition_nonUniforms___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finpartition_nonUniforms___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Finset_offDiag___at_Finpartition_nonUniforms___spec__1___rarg(x_2, x_4);
x_9 = l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg(x_1, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finpartition_nonUniforms(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finpartition_nonUniforms___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_filterTR_loop___at_Finpartition_nonUniforms___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_Finpartition_nonUniforms___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Finpartition_nonUniforms___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_filter___at_Finpartition_nonUniforms___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finpartition_nonUniforms___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finpartition_nonUniforms___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_box(0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_SimpleGraph_regularityReduced(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
lean_inc(x_3);
lean_inc(x_1);
x_11 = l_Multiset_decidableMem___rarg(x_1, x_2, x_3);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = 0;
x_13 = lean_box(x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_inc(x_10);
lean_inc(x_1);
x_14 = l_Multiset_decidableMem___rarg(x_1, x_4, x_10);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_15 = 0;
x_16 = lean_box(x_15);
return x_16;
}
else
{
uint8_t x_17; uint8_t x_18; 
lean_inc(x_10);
lean_inc(x_3);
x_17 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_3, x_10);
x_18 = l_instDecidableNot___rarg(x_17);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_19 = 0;
x_20 = lean_box(x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_inc(x_10);
lean_inc(x_3);
lean_inc(x_7);
lean_inc(x_5);
x_21 = l_SimpleGraph_IsUniform_instDecidableRel___rarg(x_5, x_6, x_7, x_8, x_3, x_10);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_22 = 0;
x_23 = lean_box(x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_5, 0);
lean_inc(x_24);
x_25 = l_LinearOrderedRing_toLinearOrder___rarg(x_24);
x_26 = lean_ctor_get(x_5, 5);
lean_inc(x_26);
lean_dec(x_5);
x_27 = l_Rel_edgeDensity___rarg(x_7, x_3, x_10);
x_28 = lean_apply_1(x_26, x_27);
x_29 = l_instDecidableLe__mathlib___rarg(x_25, x_9, x_28);
return x_29;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_alloc_closure((void*)(l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__1___boxed), 10, 9);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_10);
lean_closure_set(x_11, 3, x_3);
lean_closure_set(x_11, 4, x_4);
lean_closure_set(x_11, 5, x_5);
lean_closure_set(x_11, 6, x_6);
lean_closure_set(x_11, 7, x_7);
lean_closure_set(x_11, 8, x_8);
x_12 = l_Finset_decidableExistsAndFinset___rarg(x_9, lean_box(0), x_11);
return x_12;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_6);
lean_inc(x_10);
lean_inc(x_9);
x_11 = lean_apply_2(x_6, x_9, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
lean_inc(x_4);
x_14 = lean_alloc_closure((void*)(l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__2___boxed), 10, 9);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_9);
lean_closure_set(x_14, 2, x_10);
lean_closure_set(x_14, 3, x_1);
lean_closure_set(x_14, 4, x_5);
lean_closure_set(x_14, 5, x_6);
lean_closure_set(x_14, 6, x_7);
lean_closure_set(x_14, 7, x_8);
lean_closure_set(x_14, 8, x_4);
x_15 = l_Finset_decidableExistsAndFinset___rarg(x_4, lean_box(0), x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_box(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = l_SimpleGraph_regularityReduced_instDecidableRel__adj___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
x_12 = lean_box(x_11);
return x_12;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Density(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Order_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Partition_Equipartition(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Cardinal_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Regularity_Uniform(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Density(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Order_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Partition_Equipartition(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Cardinal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
