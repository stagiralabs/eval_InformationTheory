// Lean compiler output
// Module: Mathlib.LinearAlgebra.AffineSpace.Independent
// Imports: Init Mathlib.Data.Finset.Sort Mathlib.Data.Fin.VecNotation Mathlib.Data.Sign Mathlib.LinearAlgebra.AffineSpace.Combination Mathlib.LinearAlgebra.AffineSpace.AffineEquiv Mathlib.LinearAlgebra.Basis.VectorSpace
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
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Finset_orderEmbOfFin___at_Affine_Simplex_face___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Affine_Simplex_face___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_instInhabitedOfNatNat___rarg(lean_object*);
static lean_object* l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___closed__1;
static lean_object* l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__1;
lean_object* l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableLe__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_instInhabitedOfNatNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_face___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___closed__1;
LEAN_EXPORT lean_object* l_Finset_sort___at_Affine_Simplex_face___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sort___at_Affine_Simplex_face___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_Affine_Simplex_face___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_orderEmbOfFin___at_Affine_Simplex_face___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_instInhabitedOfNatNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_Nodup_getEquiv___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_face___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_face(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_instLinearOrder(lean_object*);
lean_object* l_List_Nodup_getEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_face___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_face___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Affine_Simplex_face___spec__4___boxed(lean_object*, lean_object*);
static lean_object* l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__2;
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_cast___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_face___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_Affine_Simplex_face___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6(lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_face___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Affine_Simplex_face___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_trans___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___elambda__1___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Affine_Simplex_mkOfPoint___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Affine_Simplex_mkOfPoint___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Affine_Simplex_mkOfPoint___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Affine_Simplex_mkOfPoint___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_mkOfPoint___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Affine_Simplex_mkOfPoint(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_instInhabitedOfNatNat___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Affine_Simplex_mkOfPoint___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_instInhabitedOfNatNat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Affine_Simplex_instInhabitedOfNatNat___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_instInhabitedOfNatNat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Affine_Simplex_instInhabitedOfNatNat(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_face___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_face___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Affine_Simplex_face___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Affine_Simplex_face___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_instDecidableLe__mathlib___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Affine_Simplex_face___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_sort___at_Affine_Simplex_face___spec__4___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Affine_Simplex_face___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Multiset_sort___at_Affine_Simplex_face___spec__4___rarg(x_3, lean_box(0), lean_box(0), lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_instDecidableEq__mathlib___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_Affine_Simplex_face___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6___rarg(x_3, x_4, lean_box(0));
return x_6;
}
}
static lean_object* _init_l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___closed__1;
return x_5;
}
}
static lean_object* _init_l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fin_cast___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_1, x_5);
x_7 = l_Fin_instLinearOrder(x_6);
lean_dec(x_6);
lean_inc(x_7);
x_8 = l_Multiset_sort___at_Affine_Simplex_face___spec__4___rarg(x_7, lean_box(0), lean_box(0), lean_box(0), x_2);
x_9 = l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6___rarg(x_7, x_8, lean_box(0));
x_10 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_11 = l_Equiv_trans___rarg(x_9, x_10);
x_12 = l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__2;
x_13 = l_Equiv_trans___rarg(x_12, x_11);
return x_13;
}
}
static lean_object* _init_l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_orderEmbOfFin___at_Affine_Simplex_face___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2(x_1, x_2, x_3, lean_box(0));
x_6 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
x_8 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_face___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_4, x_6);
x_8 = l_Finset_orderEmbOfFin___at_Affine_Simplex_face___spec__1(x_1, x_3, x_7, lean_box(0));
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Affine_Simplex_face___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_face(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Affine_Simplex_face___rarg___boxed), 5, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_face___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Affine_Simplex_face___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Affine_Simplex_face___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_sort___at_Affine_Simplex_face___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Affine_Simplex_face___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Finset_sort___at_Affine_Simplex_face___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Nodup_getEquiv___at_Affine_Simplex_face___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Sorted_getIso___at_Affine_Simplex_face___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_Sorted_getIso___at_Affine_Simplex_face___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_orderEmbOfFin___at_Affine_Simplex_face___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finset_orderEmbOfFin___at_Affine_Simplex_face___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_face___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Affine_Simplex_face___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_face___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Affine_Simplex_face(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Affine_Simplex_reindex___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Affine_Simplex_reindex___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Affine_Simplex_reindex___rarg___boxed), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Affine_Simplex_reindex___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Affine_Simplex_reindex___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Affine_Simplex_reindex___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Affine_Simplex_reindex(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sort(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_VecNotation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sign(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_Combination(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_AffineEquiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_Independent(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_VecNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sign(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_AffineSpace_Combination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_AffineSpace_AffineEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___closed__1 = _init_l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___closed__1();
lean_mark_persistent(l_OrderIso_setCongr___at_Affine_Simplex_face___spec__7___closed__1);
l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__1 = _init_l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__1();
lean_mark_persistent(l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__1);
l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__2 = _init_l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__2();
lean_mark_persistent(l_Finset_orderIsoOfFin___at_Affine_Simplex_face___spec__2___closed__2);
l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___closed__1 = _init_l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___closed__1();
lean_mark_persistent(l_OrderEmbedding_subtype___at_Affine_Simplex_face___spec__8___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
