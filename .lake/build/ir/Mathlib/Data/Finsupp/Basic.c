// Lean compiler output
// Module: Mathlib.Data.Finsupp.Basic
// Imports: Init Mathlib.Algebra.BigOperators.Finsupp Mathlib.Algebra.BigOperators.Group.Finset.Preimage Mathlib.Algebra.Module.Defs Mathlib.Data.Rat.BigOperators
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
LEAN_EXPORT lean_object* l_Finsupp_graph___rarg(lean_object*);
lean_object* l_Multiset_disjSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_graph___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfRight(lean_object*, lean_object*);
lean_object* l_Multiset_filter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_domCongr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_piecewise___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_extendDomain___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_piecewise(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sumElim___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sumElim___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_filterAddHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_extendDomain___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain(lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_filterAddHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_filter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_graph___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_piecewise___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finsupp_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_extendDomain___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Sum_elim___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Finsupp_piecewise___rarg___closed__1;
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_graph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfRight___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_filter___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_piecewise___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sumElim___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_piecewise___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sumElim(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sumElim___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_extendDomain(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_filter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_piecewise___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_domCongr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_filter___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_sumElim___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_filter___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finsupp_graph___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_2);
x_4 = lean_apply_1(x_3, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_graph___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Finsupp_graph___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Multiset_map___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_graph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_graph___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_graph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_graph(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Equiv_symm___elambda__2___rarg(x_1, x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finsupp_equivMapDomain___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_Multiset_map___rarg(x_4, x_5);
x_7 = lean_alloc_closure((void*)(l_Finsupp_equivMapDomain___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_equivMapDomain___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_equivMapDomain___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivMapDomain___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_equivMapDomain___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_equivMapDomain___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_equivCongrLeft___elambda__1___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_equivMapDomain___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_equivCongrLeft___elambda__2___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Finsupp_equivCongrLeft___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_Equiv_symm___rarg(x_2);
x_5 = lean_alloc_closure((void*)(l_Finsupp_equivCongrLeft___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_equivCongrLeft___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_equivCongrLeft___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_equivCongrLeft___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_equivCongrLeft___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_filter___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_5);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_apply_1(x_8, x_5);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Finsupp_filter___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_filter___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_filter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_3);
x_6 = l_Multiset_filter___rarg(x_3, x_5);
x_7 = lean_alloc_closure((void*)(l_Finsupp_filter___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finsupp_filter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_filter___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_filter___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finsupp_filter___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_filterAddHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_Finsupp_filter___rarg), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_filterAddHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_filterAddHom___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sumElim___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sum_elim___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sumElim___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_sumElim___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sumElim___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sumElim___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_Multiset_disjSum___rarg(x_4, x_5);
x_7 = lean_alloc_closure((void*)(l_Finsupp_sumElim___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_2);
x_8 = lean_alloc_closure((void*)(l_Finsupp_sumElim___rarg___lambda__1), 2, 1);
lean_closure_set(x_8, 0, x_3);
x_9 = lean_alloc_closure((void*)(l_Finsupp_sumElim___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sumElim(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_sumElim___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_sumElim___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finsupp_sumElim___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfRight___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_instInhabited___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_uniqueOfRight___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfLeft___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_instInhabited___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_uniqueOfLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_uniqueOfLeft___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_piecewise___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_apply_1(x_7, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_1(x_9, x_4);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Finsupp_piecewise___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Finsupp_piecewise___elambda__1___rarg), 4, 0);
return x_5;
}
}
static lean_object* _init_l_Finsupp_piecewise___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finsupp_piecewise___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Finsupp_piecewise___rarg___closed__1;
x_8 = l_Multiset_map___rarg(x_7, x_6);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = l_Multiset_map___rarg(x_7, x_9);
x_11 = l_List_appendTR___rarg(x_8, x_10);
x_12 = lean_alloc_closure((void*)(l_Finsupp_piecewise___elambda__1___rarg), 4, 3);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_4);
lean_closure_set(x_12, 2, x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Finsupp_piecewise(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_piecewise___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_piecewise___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Finsupp_piecewise___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finsupp_piecewise___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finsupp_piecewise___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finsupp_extendDomain___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finsupp_extendDomain___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_box(0);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Finsupp_extendDomain___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Finsupp_piecewise___rarg(x_1, lean_box(0), x_3, x_4, x_8);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Finsupp_extendDomain(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finsupp_extendDomain___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_extendDomain___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finsupp_extendDomain___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finsupp_domCongr___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Finsupp_equivMapDomain___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Equiv_symm___rarg(x_2);
x_6 = lean_alloc_closure((void*)(l_Finsupp_equivMapDomain___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Finsupp_domCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finsupp_domCongr___rarg), 2, 0);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Preimage(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_BigOperators(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finsupp_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Preimage(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finsupp_piecewise___rarg___closed__1 = _init_l_Finsupp_piecewise___rarg___closed__1();
lean_mark_persistent(l_Finsupp_piecewise___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
