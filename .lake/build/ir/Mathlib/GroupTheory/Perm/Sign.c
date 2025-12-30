// Lean compiler output
// Module: Mathlib.GroupTheory.Perm.Sign
// Imports: Init Mathlib.Algebra.Group.Conj Mathlib.Algebra.Group.Subgroup.Lattice Mathlib.Algebra.Group.Submonoid.BigOperators Mathlib.Data.Finset.Fin Mathlib.Data.Finset.Sort Mathlib.Data.Fintype.Perm Mathlib.Data.Fintype.Prod Mathlib.Data.Fintype.Sum Mathlib.Data.Int.Order.Units Mathlib.GroupTheory.Perm.Support Mathlib.Logic.Equiv.Fin Mathlib.Tactic.NormNum.Ineq Mathlib.Data.Finset.Sigma
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
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_ofSign___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux2(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_ofSign___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSign___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__3;
LEAN_EXPORT lean_object* l_Finset_prod___at_Equiv_Perm_signAux___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_swapFactors___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_signAux___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_swapFactors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_signAux___lambda__1___closed__3;
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactorsAux(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_signBijAux___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_modSwap(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_swapFactors___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sign(lean_object*);
lean_object* l_Equiv_instFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux(lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactorsAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_finPairsLT___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_modSwap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_Perm_Sign_0__Equiv_Perm_signAux2_match__1_splitter(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
static lean_object* l_Equiv_Perm_finPairsLT___closed__2;
lean_object* l_Equiv_swap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Finset_attachFin___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3(lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_signBijAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_truncSwapFactors(lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Equiv_Perm_signAux___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_ofSign___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Equiv_Perm_signAux___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Units_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux3(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactors(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_finPairsLT___lambda__1(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
static lean_object* l_Equiv_Perm_signAux___lambda__1___closed__2;
static lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__2;
LEAN_EXPORT lean_object* l_Equiv_Perm_signBijAux(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_Perm_Sign_0__Equiv_Perm_signAux2_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_swapFactors___spec__2(lean_object*);
lean_object* l_Multiset_sigma___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_sign___rarg(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_finPairsLT(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSign(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactors___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg___closed__1;
static lean_object* l_Equiv_Perm_finPairsLT___closed__1;
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
static lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1;
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_truncSwapFactors___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_ofSign___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_Perm_modSwap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_modSwap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_Perm_modSwap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactorsAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_inc(x_7);
x_10 = lean_apply_1(x_9, x_7);
lean_inc(x_1);
lean_inc(x_10);
lean_inc(x_7);
x_11 = lean_apply_2(x_1, x_7, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_13 = l_Equiv_swap___rarg(x_1, x_7, x_10);
lean_inc(x_13);
x_14 = l_Equiv_trans___rarg(x_3, x_13);
x_15 = l_Equiv_Perm_swapFactorsAux___rarg(x_1, x_8, x_14, lean_box(0));
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
else
{
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_7);
x_2 = x_8;
x_4 = lean_box(0);
goto _start;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_2);
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_inc(x_17);
x_20 = lean_apply_1(x_19, x_17);
lean_inc(x_1);
lean_inc(x_20);
lean_inc(x_17);
x_21 = lean_apply_2(x_1, x_17, x_20);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_inc(x_1);
x_23 = l_Equiv_swap___rarg(x_1, x_17, x_20);
lean_inc(x_23);
x_24 = l_Equiv_trans___rarg(x_3, x_23);
x_25 = l_Equiv_Perm_swapFactorsAux___rarg(x_1, x_18, x_24, lean_box(0));
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
else
{
lean_dec(x_20);
lean_dec(x_17);
x_2 = x_18;
x_4 = lean_box(0);
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactorsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_swapFactorsAux___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_swapFactors___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Equiv_Perm_swapFactors___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_sort___at_Equiv_Perm_swapFactors___spec__2___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_swapFactors___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_sort___at_Equiv_Perm_swapFactors___spec__2___rarg(x_1, lean_box(0), lean_box(0), lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Equiv_Perm_swapFactors___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sort___at_Equiv_Perm_swapFactors___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactors___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Multiset_sort___at_Equiv_Perm_swapFactors___spec__2___rarg(x_3, lean_box(0), lean_box(0), lean_box(0), x_2);
x_6 = l_Equiv_Perm_swapFactorsAux___rarg(x_1, x_5, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_swapFactors(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_swapFactors___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_truncSwapFactors___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_Perm_swapFactorsAux___rarg(x_1, x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_truncSwapFactors(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_truncSwapFactors___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Equiv_Perm_finPairsLT___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_attachFin___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_finPairsLT___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_List_range(x_1);
x_3 = l_Equiv_Perm_finPairsLT___lambda__1___closed__1;
x_4 = l_Multiset_pmap___rarg(x_3, x_2, lean_box(0));
return x_4;
}
}
static lean_object* _init_l_Equiv_Perm_finPairsLT___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Equiv_Perm_finPairsLT___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_Perm_finPairsLT___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_finPairsLT(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Equiv_Perm_finPairsLT___closed__1;
x_3 = l_List_ofFn___rarg(x_1, x_2);
x_4 = l_Equiv_Perm_finPairsLT___closed__2;
x_5 = l_Multiset_sigma___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_int_mul(x_3, x_4);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_int_mul(x_6, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
static lean_object* _init_l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__3;
x_3 = l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__2;
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Equiv_Perm_signAux___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Multiset_prod___at_Equiv_Perm_signAux___spec__2(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Equiv_Perm_signAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_prod___at_Equiv_Perm_signAux___spec__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Equiv_Perm_signAux___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Equiv_Perm_signAux___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Equiv_Perm_signAux___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_Perm_signAux___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_nat_dec_le(x_5, x_7);
lean_dec(x_7);
lean_dec(x_5);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Equiv_Perm_signAux___lambda__1___closed__1;
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_Equiv_Perm_signAux___lambda__1___closed__3;
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_Perm_finPairsLT(x_1);
x_4 = lean_alloc_closure((void*)(l_Equiv_Perm_signAux___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Finset_prod___at_Equiv_Perm_signAux___spec__1___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Equiv_Perm_signAux___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_prod___at_Equiv_Perm_signAux___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signBijAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_nat_dec_lt(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signBijAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_signBijAux___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signBijAux___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_Perm_signBijAux(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = l_Equiv_Perm_signAux___lambda__1___closed__1;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_inc(x_6);
x_9 = lean_apply_1(x_8, x_6);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_6);
x_10 = lean_apply_2(x_1, x_6, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_1);
x_12 = l_Equiv_swap___rarg(x_1, x_6, x_9);
x_13 = l_Equiv_trans___rarg(x_3, x_12);
x_14 = l_Equiv_Perm_signAux2___rarg(x_1, x_7, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_int_neg(x_15);
lean_dec(x_15);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_int_neg(x_17);
lean_dec(x_17);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 1, x_18);
lean_ctor_set(x_2, 0, x_16);
return x_2;
}
else
{
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_22 = lean_ctor_get(x_3, 0);
lean_inc(x_22);
lean_inc(x_20);
x_23 = lean_apply_1(x_22, x_20);
lean_inc(x_1);
lean_inc(x_23);
lean_inc(x_20);
x_24 = lean_apply_2(x_1, x_20, x_23);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_inc(x_1);
x_26 = l_Equiv_swap___rarg(x_1, x_20, x_23);
x_27 = l_Equiv_trans___rarg(x_3, x_26);
x_28 = l_Equiv_Perm_signAux2___rarg(x_1, x_21, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_int_neg(x_29);
lean_dec(x_29);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_int_neg(x_31);
lean_dec(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
else
{
lean_dec(x_23);
lean_dec(x_20);
x_2 = x_21;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_signAux2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_Perm_Sign_0__Equiv_Perm_signAux2_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_Perm_Sign_0__Equiv_Perm_signAux2_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_Perm_Sign_0__Equiv_Perm_signAux2_match__1_splitter___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Equiv_Perm_signAux2___rarg(x_1, x_4, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_signAux3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_signAux3___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sign___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_Perm_signAux2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_sign(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_sign___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidHom_mk_x27___at_Equiv_Perm_sign___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instDecidableEq___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_List_reverse___rarg(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Equiv_Perm_sign___rarg(x_1, x_2);
lean_inc(x_8);
x_11 = lean_apply_1(x_10, x_8);
x_12 = l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg___closed__1;
lean_inc(x_3);
x_13 = l_Units_instDecidableEq___rarg(x_12, x_11, x_3);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
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
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Equiv_Perm_sign___rarg(x_1, x_2);
lean_inc(x_17);
x_20 = lean_apply_1(x_19, x_17);
x_21 = l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg___closed__1;
lean_inc(x_3);
x_22 = l_Units_instDecidableEq___rarg(x_21, x_20, x_3);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_dec(x_17);
x_4 = x_18;
goto _start;
}
else
{
lean_object* x_25; 
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_17);
lean_ctor_set(x_25, 1, x_5);
x_4 = x_18;
x_5 = x_25;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_ofSign___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Equiv_Perm_ofSign___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_Equiv_Perm_ofSign___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_ofSign___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_filter___at_Equiv_Perm_ofSign___spec__2___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Equiv_Perm_ofSign___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_Equiv_Perm_ofSign___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSign___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc_n(x_2, 2);
lean_inc_n(x_1, 2);
x_4 = l_Equiv_instFintype___rarg(x_1, x_1, x_2, x_2);
x_5 = l_Multiset_filter___at_Equiv_Perm_ofSign___spec__2___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_Perm_ofSign(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_Perm_ofSign___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Conj(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Subgroup_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sort(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Perm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Order_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum_Ineq(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sigma(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Perm_Sign(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Conj(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Subgroup_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Perm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Order_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum_Ineq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equiv_Perm_finPairsLT___lambda__1___closed__1 = _init_l_Equiv_Perm_finPairsLT___lambda__1___closed__1();
lean_mark_persistent(l_Equiv_Perm_finPairsLT___lambda__1___closed__1);
l_Equiv_Perm_finPairsLT___closed__1 = _init_l_Equiv_Perm_finPairsLT___closed__1();
lean_mark_persistent(l_Equiv_Perm_finPairsLT___closed__1);
l_Equiv_Perm_finPairsLT___closed__2 = _init_l_Equiv_Perm_finPairsLT___closed__2();
lean_mark_persistent(l_Equiv_Perm_finPairsLT___closed__2);
l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1 = _init_l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1();
lean_mark_persistent(l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__1);
l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__2 = _init_l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__2();
lean_mark_persistent(l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__2);
l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__3 = _init_l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__3();
lean_mark_persistent(l_Multiset_prod___at_Equiv_Perm_signAux___spec__2___closed__3);
l_Equiv_Perm_signAux___lambda__1___closed__1 = _init_l_Equiv_Perm_signAux___lambda__1___closed__1();
lean_mark_persistent(l_Equiv_Perm_signAux___lambda__1___closed__1);
l_Equiv_Perm_signAux___lambda__1___closed__2 = _init_l_Equiv_Perm_signAux___lambda__1___closed__2();
lean_mark_persistent(l_Equiv_Perm_signAux___lambda__1___closed__2);
l_Equiv_Perm_signAux___lambda__1___closed__3 = _init_l_Equiv_Perm_signAux___lambda__1___closed__3();
lean_mark_persistent(l_Equiv_Perm_signAux___lambda__1___closed__3);
l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg___closed__1 = _init_l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg___closed__1();
lean_mark_persistent(l_List_filterTR_loop___at_Equiv_Perm_ofSign___spec__3___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
