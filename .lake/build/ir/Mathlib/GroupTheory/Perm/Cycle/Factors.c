// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Cycle.Factors
// Imports: Init Mathlib.Data.List.Iterate Mathlib.GroupTheory.Perm.Cycle.Basic Mathlib.GroupTheory.NoncommPiCoprod Mathlib.Tactic.Group
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
LEAN_EXPORT lean_object* l_List_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_sumCompl___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycle(lean_object*);
lean_object* l_instBEqOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactorsAux_go___spec__1(lean_object*);
uint8_t l_Fintype_decidableEqEquivFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_Perm_subtypePerm___rarg(lean_object*, lean_object*);
lean_object* l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsFinset(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_cycleFactors___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_truncCycleFactors(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactors___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_truncCycleFactors___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5(lean_object*);
LEAN_EXPORT uint8_t l_Equiv_Perm_instDecidableRelSameCycle___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go(lean_object*);
lean_object* l_Equiv_sumCompl___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactors(lean_object*);
LEAN_EXPORT lean_object* l_List_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__2;
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactorsAux_go___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_cycleFactors___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__3(lean_object*);
uint8_t l_List_elem___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycle___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_Perm_ofSubtype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4(lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactors___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_cycleFactors___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7(lean_object*);
static lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_iterateTR_loop___at_Equiv_Perm_instDecidableRelSameCycle___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__4(lean_object*);
static lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_foldrTR___at_Equiv_Perm_cycleFactorsFinset___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsFinset___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_equivCongr___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_iterateTR_loop___at_Equiv_Perm_instDecidableRelSameCycle___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactors___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Equiv_Perm_cycleFactorsFinset___spec__6(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_cycleFactors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_sumCongr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = l_Equiv_Perm_subtypePerm___rarg(x_1, lean_box(0));
x_6 = l_Equiv_Perm_ofSubtype___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleOf___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_iterateTR_loop___at_Equiv_Perm_instDecidableRelSameCycle___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_inc(x_2);
x_10 = lean_apply_1(x_9, x_2);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_4);
x_2 = x_10;
x_3 = x_8;
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_List_reverse___rarg(x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_List_iterateTR_loop___at_Equiv_Perm_instDecidableRelSameCycle___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_iterateTR_loop___at_Equiv_Perm_instDecidableRelSameCycle___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Equiv_Perm_instDecidableRelSameCycle___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_2, x_7);
x_9 = lean_box(0);
x_10 = l_List_iterateTR_loop___at_Equiv_Perm_instDecidableRelSameCycle___spec__1___rarg(x_3, x_4, x_8, x_9);
x_11 = l_List_elem___rarg(x_6, x_5, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycle(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_instDecidableRelSameCycle___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_instDecidableRelSameCycle___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Equiv_Perm_instDecidableRelSameCycle___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__1;
x_2 = lean_alloc_closure((void*)(l_Equiv_sumCompl___elambda__2___rarg), 3, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_closure((void*)(l_Equiv_Perm_instDecidableRelSameCycle___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_5);
x_7 = lean_alloc_closure((void*)(l_Equiv_sumCompl___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
x_9 = l_Equiv_sumCongr___rarg(x_6, x_7);
lean_inc(x_8);
x_10 = l_Equiv_equivCongr___elambda__2___rarg(x_8, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4___rarg___boxed), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
x_8 = l_Equiv_equivCongr___elambda__2___rarg(x_7, x_7, x_6);
x_9 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1;
x_10 = l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1;
x_8 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactorsAux_go___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_6 = l_Equiv_Perm_subtypePerm___rarg(x_4, lean_box(0));
x_7 = l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactorsAux_go___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactorsAux_go___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_inc(x_10);
x_13 = lean_apply_1(x_12, x_10);
lean_inc(x_1);
lean_inc(x_10);
x_14 = lean_apply_2(x_1, x_13, x_10);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc_n(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactorsAux_go___spec__1___rarg(x_1, x_2, x_3, x_3, x_10);
lean_inc(x_16);
x_17 = l_Equiv_symm___rarg(x_16);
x_18 = l_Equiv_trans___rarg(x_5, x_17);
x_19 = l_Equiv_Perm_cycleFactorsAux_go___rarg(x_1, x_2, x_3, x_11, x_18, lean_box(0), lean_box(0));
lean_ctor_set(x_4, 1, x_19);
lean_ctor_set(x_4, 0, x_16);
return x_4;
}
else
{
lean_free_object(x_4);
lean_dec(x_10);
x_4 = x_11;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
x_23 = lean_ctor_get(x_5, 0);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_apply_1(x_23, x_21);
lean_inc(x_1);
lean_inc(x_21);
x_25 = lean_apply_2(x_1, x_24, x_21);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_inc_n(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactorsAux_go___spec__1___rarg(x_1, x_2, x_3, x_3, x_21);
lean_inc(x_27);
x_28 = l_Equiv_symm___rarg(x_27);
x_29 = l_Equiv_trans___rarg(x_5, x_28);
x_30 = l_Equiv_Perm_cycleFactorsAux_go___rarg(x_1, x_2, x_3, x_22, x_29, lean_box(0), lean_box(0));
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_27);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
else
{
lean_dec(x_21);
x_4 = x_22;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleFactorsAux_go___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactorsAux_go___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactorsAux_go___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Equiv_Perm_cycleFactorsAux_go___rarg(x_1, x_2, x_4, x_3, x_4, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleFactorsAux___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_cycleFactors___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_cycleFactors___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sort___at_Equiv_Perm_cycleFactors___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_cycleFactors___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_sort___at_Equiv_Perm_cycleFactors___spec__2___rarg(x_1, lean_box(0), lean_box(0), lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_cycleFactors___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sort___at_Equiv_Perm_cycleFactors___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_closure((void*)(l_Equiv_Perm_instDecidableRelSameCycle___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_5);
x_7 = lean_alloc_closure((void*)(l_Equiv_sumCompl___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8___rarg(x_1, x_2, x_3, x_4, x_5);
x_9 = l_Equiv_sumCongr___rarg(x_6, x_7);
lean_inc(x_8);
x_10 = l_Equiv_equivCongr___elambda__2___rarg(x_8, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
x_8 = l_Equiv_equivCongr___elambda__2___rarg(x_7, x_7, x_6);
x_9 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1;
x_10 = l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1;
x_8 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactors___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_6 = l_Equiv_Perm_subtypePerm___rarg(x_4, lean_box(0));
x_7 = l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactors___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactors___spec__4___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_2);
x_12 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_12, 0, x_2);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_inc(x_10);
x_14 = lean_apply_1(x_13, x_10);
lean_inc(x_10);
lean_inc(x_2);
x_15 = l_instDecidableEq__mathlib___rarg(x_2, x_14, x_10);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_17 = l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactors___spec__4___rarg(x_1, x_3, x_12, x_3, x_10);
lean_inc(x_17);
x_18 = l_Equiv_symm___rarg(x_17);
x_19 = l_Equiv_trans___rarg(x_5, x_18);
x_20 = l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3___rarg(x_1, x_2, x_3, x_11, x_19, lean_box(0), lean_box(0));
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_17);
return x_4;
}
else
{
lean_dec(x_12);
lean_free_object(x_4);
lean_dec(x_10);
x_4 = x_11;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_4);
lean_inc(x_2);
x_24 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_24, 0, x_2);
x_25 = lean_ctor_get(x_5, 0);
lean_inc(x_25);
lean_inc(x_22);
x_26 = lean_apply_1(x_25, x_22);
lean_inc(x_22);
lean_inc(x_2);
x_27 = l_instDecidableEq__mathlib___rarg(x_2, x_26, x_22);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_29 = l_Equiv_Perm_cycleOf___at_Equiv_Perm_cycleFactors___spec__4___rarg(x_1, x_3, x_24, x_3, x_22);
lean_inc(x_29);
x_30 = l_Equiv_symm___rarg(x_29);
x_31 = l_Equiv_trans___rarg(x_5, x_30);
x_32 = l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3___rarg(x_1, x_2, x_3, x_23, x_31, lean_box(0), lean_box(0));
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
else
{
lean_dec(x_24);
lean_dec(x_22);
x_4 = x_23;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactors___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
lean_inc(x_2);
x_4 = l_Multiset_sort___at_Equiv_Perm_cycleFactors___spec__2___rarg(x_2, lean_box(0), lean_box(0), lean_box(0), x_1);
lean_inc(x_3);
x_5 = l_Equiv_Perm_cycleFactorsAux_go___at_Equiv_Perm_cycleFactors___spec__3___rarg(x_1, x_2, x_3, x_4, x_3, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactors(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleFactors___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_sumCompl___at_Equiv_Perm_cycleFactors___spec__8___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_Perm_subtypeCongr___at_Equiv_Perm_cycleFactors___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactors___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Equiv_Perm_ofSubtype___at_Equiv_Perm_cycleFactors___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_truncCycleFactors___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = l_Equiv_Perm_cycleFactorsAux_go___rarg(x_1, x_2, x_3, x_2, x_3, lean_box(0), lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_truncCycleFactors(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_truncCycleFactors___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = l_Fintype_decidableEqEquivFintype___rarg(x_1, x_2, x_3, x_4);
x_6 = l_instDecidableNot___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Equiv_Perm_cycleFactorsFinset___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_mk(x_4);
x_6 = lean_array_get_size(x_5);
x_7 = lean_nat_dec_le(x_6, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_11 = 0;
x_12 = l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg(x_1, x_2, x_5, x_10, x_11, x_3);
lean_dec(x_5);
return x_12;
}
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_6);
if (x_14 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 0;
x_17 = l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8___rarg(x_1, x_2, x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Equiv_Perm_cycleFactorsFinset___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_Equiv_Perm_cycleFactorsFinset___spec__6___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_foldrTR___at_Equiv_Perm_cycleFactorsFinset___spec__6___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__4___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_dedup___at_Equiv_Perm_cycleFactorsFinset___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_toFinset___at_Equiv_Perm_cycleFactorsFinset___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
lean_inc_n(x_2, 2);
lean_inc(x_1);
x_4 = l_Equiv_Perm_cycleFactorsAux_go___rarg(x_1, x_2, x_3, x_2, x_3, lean_box(0), lean_box(0));
x_5 = l_List_pwFilter___at_Equiv_Perm_cycleFactorsFinset___spec__5___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_cycleFactorsFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_cycleFactorsFinset___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__7___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_Equiv_Perm_cycleFactorsFinset___spec__8___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Iterate(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Cycle_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_NoncommPiCoprod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Group(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Cycle_Factors(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Iterate(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Cycle_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_NoncommPiCoprod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Group(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__1 = _init_l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__1();
lean_mark_persistent(l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__1);
l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__2 = _init_l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__2();
lean_mark_persistent(l_Equiv_sumCompl___at_Equiv_Perm_cycleFactorsAux_go___spec__5___rarg___closed__2);
l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1 = _init_l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1();
lean_mark_persistent(l_Equiv_Perm_extendDomain___at_Equiv_Perm_cycleFactorsAux_go___spec__3___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
