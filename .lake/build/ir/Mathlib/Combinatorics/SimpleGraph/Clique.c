// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Clique
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Path Mathlib.Combinatorics.SimpleGraph.Operations Mathlib.Data.Finset.Pairwise Mathlib.Data.Fintype.Pigeonhole Mathlib.Data.Fintype.Powerset Mathlib.Data.Nat.Lattice
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
LEAN_EXPORT lean_object* l_SimpleGraph_cliqueFinset___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_powerset___rarg(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_SimpleGraph_cliqueFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_indepSetFinset___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj(lean_object*, lean_object*);
uint8_t l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_indepSetFinset(lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cliqueFinset(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_indepSetFinset___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(x_1, lean_box(0), x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_instDecidableIsCliqueToSetOfDecidableEqOfDecidableRelAdj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
x_5 = l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(x_1, lean_box(0), x_2, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_4, x_7);
lean_dec(x_4);
x_9 = lean_nat_dec_eq(x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = l_List_reverse___rarg(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg(x_2, x_3, x_4, x_9);
if (x_11 == 0)
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
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_2);
x_16 = l_SimpleGraph_instDecidableIsNCliqueOfDecidableEqOfDecidableRelAdj___rarg(x_2, x_3, x_4, x_14);
if (x_16 == 0)
{
lean_dec(x_14);
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_6);
x_5 = x_15;
x_6 = x_18;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cliqueFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Finset_powerset___rarg(x_2);
x_7 = l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg(x_1, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cliqueFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_cliqueFinset___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_filterTR_loop___at_SimpleGraph_cliqueFinset___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_SimpleGraph_cliqueFinset___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_filter___at_SimpleGraph_cliqueFinset___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cliqueFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_cliqueFinset___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_instDecidableNot___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_instDecidablePairwiseToSetOfDecidableEqOfDecidableRel___rarg(x_1, lean_box(0), x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
x_5 = l_SimpleGraph_instDecidableIsIndepSetToSetOfDecidableEqOfDecidableRelAdj___rarg(x_1, x_2, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_4, x_7);
lean_dec(x_4);
x_9 = lean_nat_dec_eq(x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = l_List_reverse___rarg(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg(x_2, x_3, x_4, x_9);
if (x_11 == 0)
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
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_2);
x_16 = l_SimpleGraph_instDecidableIsNIndepSetOfDecidableEqOfDecidableRelAdj___rarg(x_2, x_3, x_4, x_14);
if (x_16 == 0)
{
lean_dec(x_14);
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_6);
x_5 = x_15;
x_6 = x_18;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_indepSetFinset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Finset_powerset___rarg(x_2);
x_7 = l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg(x_1, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_indepSetFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_indepSetFinset___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_filterTR_loop___at_SimpleGraph_indepSetFinset___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_filter___at_SimpleGraph_indepSetFinset___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Finset_filter___at_SimpleGraph_indepSetFinset___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_indepSetFinset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_SimpleGraph_indepSetFinset___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Path(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Pairwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Pigeonhole(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Powerset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Clique(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Pairwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pigeonhole(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Powerset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
