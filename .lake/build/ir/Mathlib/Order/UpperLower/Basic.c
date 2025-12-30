// Lean compiler output
// Module: Mathlib.Order.UpperLower.Basic
// Imports: Init Mathlib.Data.SetLike.Basic Mathlib.Data.Set.Lattice Mathlib.Order.Interval.Set.OrdConnected Mathlib.Order.Interval.Set.OrderIso
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
LEAN_EXPORT lean_object* l_LowerSet_prod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_sdiff___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instTop(lean_object*);
LEAN_EXPORT lean_object* l_upperSetIsoLowerSet___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instMin(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instInhabited___rarg(lean_object*);
static lean_object* l_UpperSet_completeLattice___rarg___closed__1;
LEAN_EXPORT lean_object* l_LowerSet_sdiff(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_Iio(lean_object*);
lean_object* l_CompleteAtomicBooleanAlgebra_toCompletelyDistribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instInfSet(lean_object*);
LEAN_EXPORT lean_object* l_lowerClosure___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompletelyDistribLattice_MinimalAxioms_of___at_LowerSet_completelyDistribLattice___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_completeLattice(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_map___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instSProd___rarg(lean_object*, lean_object*);
static lean_object* l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__2;
LEAN_EXPORT lean_object* l_giLowerClosureCoe(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_Iic___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_upperSetIsoLowerSet(lean_object*);
LEAN_EXPORT lean_object* l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instSupSet___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instBot(lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredMemLowerClosure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_upperClosure(lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_completeLattice___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice(lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_Ioi(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_sdiff___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instSupSet___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_completeLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_Ici(lean_object*);
static lean_object* l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__3;
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_Ioi___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_erase(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_map___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSupSet___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_map___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instInfSet___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredMemLowerClosure___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_prod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_sdiff___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instMax___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instMin___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_UpperSet_prod___closed__1;
LEAN_EXPORT lean_object* l_LowerSet_instTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instMin___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instMax(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_Iio___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSupSet(lean_object*);
LEAN_EXPORT lean_object* l_upperClosure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_compl___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instBot(lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instMin(lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredMemLowerClosure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instInfSet(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSupSet___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instSupSet(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_erase___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_map___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_erase(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_Ici___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_map___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_Iic___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_erase___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_completeLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instInfSet___rarg(lean_object*, lean_object*);
static lean_object* l_LowerSet_prod___closed__1;
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__1;
LEAN_EXPORT lean_object* l_UpperSet_completeLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_compl___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instMax___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_upperClosure___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_erase___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_completeLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_erase___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instInfSet___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_compl(lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_compl(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_Ioi___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredMemUpperClosure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_sdiff(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instTop(lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_completeLattice(lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredMemUpperClosure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_Ici___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidablePredMemUpperClosure___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instMin___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_compl___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instMax(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instSetLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_map___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_Iio___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_sdiff___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instMax___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_OrderDual_instCompletelyDistribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instInfSet___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___rarg(lean_object*);
LEAN_EXPORT lean_object* l_lowerClosure(lean_object*);
LEAN_EXPORT lean_object* l_lowerClosure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_completeLattice___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instMax___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instSProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instBot___rarg___boxed(lean_object*);
lean_object* l_Set_instCompleteAtomicBooleanAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_compl___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSProd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_Iic(lean_object*);
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_instSetLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instSetLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instSetLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_instSetLike(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instMax___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instMax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_instMax___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instMax___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_UpperSet_instMax___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_instMin___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_UpperSet_instMin___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_instTop___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_UpperSet_instTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_instBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_UpperSet_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instSupSet___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instSupSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_instSupSet___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instSupSet___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_instSupSet___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instInfSet___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instInfSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_instInfSet___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instInfSet___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_instInfSet___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completeLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
static lean_object* _init_l_UpperSet_completeLattice___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completeLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_UpperSet_instSupSet___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_UpperSet_instInfSet___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_UpperSet_completeLattice___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_UpperSet_completeLattice___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completeLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_completeLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completeLattice___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_UpperSet_completeLattice___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Set_instCompleteAtomicBooleanAlgebra(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__1;
x_2 = l_CompleteAtomicBooleanAlgebra_toCompletelyDistribLattice___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__2;
x_2 = l_OrderDual_instCompletelyDistribLattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__3;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_UpperSet_instSupSet___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_UpperSet_instInfSet___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_UpperSet_completeLattice___rarg___closed__1;
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_UpperSet_completeLattice___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
lean_inc(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_8);
x_10 = lean_alloc_closure((void*)(l_UpperSet_completelyDistribLattice___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_10);
lean_inc(x_5);
x_11 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_5);
lean_ctor_set(x_11, 4, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_completelyDistribLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_completelyDistribLattice___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_completelyDistribLattice___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_UpperSet_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instMax___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instMax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_instMax___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instMax___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LowerSet_instMax___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instMin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_instMin___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instMin___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LowerSet_instMin___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_instTop___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LowerSet_instTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_instBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LowerSet_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instSupSet___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instSupSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_instSupSet___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instSupSet___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_instSupSet___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instInfSet___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instInfSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_instInfSet___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instInfSet___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_instInfSet___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completeLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completeLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_LowerSet_instSupSet___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_LowerSet_instInfSet___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_UpperSet_completeLattice___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_LowerSet_completeLattice___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completeLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_completeLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completeLattice___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LowerSet_completeLattice___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CompletelyDistribLattice_MinimalAxioms_of___at_LowerSet_completelyDistribLattice___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__2;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_LowerSet_instSupSet___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_LowerSet_instInfSet___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_UpperSet_completeLattice___rarg___closed__1;
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_LowerSet_completeLattice___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
lean_inc(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_8);
x_10 = lean_alloc_closure((void*)(l_LowerSet_completelyDistribLattice___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_10);
lean_inc(x_5);
x_11 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_5);
lean_ctor_set(x_11, 4, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_completelyDistribLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_completelyDistribLattice___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_completelyDistribLattice___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LowerSet_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_compl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_compl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_compl___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_compl___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_compl___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_compl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_compl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_compl___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_compl___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_compl___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_upperSetIsoLowerSet___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_UpperSet_compl___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_LowerSet_compl___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_upperSetIsoLowerSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_upperSetIsoLowerSet___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_map___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_UpperSet_map___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_UpperSet_map___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_UpperSet_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_UpperSet_map___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_map___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_map___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_UpperSet_map___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_map___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_LowerSet_map___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_LowerSet_map___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LowerSet_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LowerSet_map___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_map___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_map___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_map___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LowerSet_map___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_Ici___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_Ici(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_Ici___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_Ici___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_Ici___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_Ioi___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_Ioi(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_Ioi___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_Ioi___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_Ioi___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_Iic___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_Iic(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_Iic___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_Iic___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_Iic___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_Iio___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_Iio(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_Iio___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_Iio___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_Iio___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_upperClosure___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_upperClosure(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_upperClosure___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_upperClosure___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_upperClosure___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_lowerClosure___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_lowerClosure(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_lowerClosure___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_lowerClosure___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_lowerClosure___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredMemUpperClosure___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredMemUpperClosure(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instDecidablePredMemUpperClosure___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredMemUpperClosure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidablePredMemUpperClosure(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredMemLowerClosure___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredMemLowerClosure(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instDecidablePredMemLowerClosure___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidablePredMemLowerClosure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instDecidablePredMemLowerClosure(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_giUpperClosureCoe___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, lean_box(0));
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_giUpperClosureCoe___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_giUpperClosureCoe___elambda__1___rarg___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_giUpperClosureCoe___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_giUpperClosureCoe___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_giUpperClosureCoe___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giUpperClosureCoe___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_giUpperClosureCoe___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_giLowerClosureCoe___elambda__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_lowerClosure___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_giLowerClosureCoe___elambda__2___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_giLowerClosureCoe___elambda__1___rarg___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_giLowerClosureCoe___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_giLowerClosureCoe___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_giLowerClosureCoe___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_giLowerClosureCoe___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_giLowerClosureCoe___elambda__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_sdiff___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_sdiff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_sdiff___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_sdiff___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LowerSet_sdiff___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_erase(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_erase___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_erase___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LowerSet_erase___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_sdiff___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_sdiff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_sdiff___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_sdiff___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_UpperSet_sdiff___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_erase(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_erase___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_erase___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_UpperSet_erase___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_UpperSet_prod___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_UpperSet_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_UpperSet_prod___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_UpperSet_prod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_UpperSet_prod(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instSProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_UpperSet_prod___boxed), 6, 4);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, x_1);
lean_closure_set(x_3, 3, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_instSProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_UpperSet_instSProd___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_LowerSet_prod___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_LowerSet_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LowerSet_prod___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_LowerSet_prod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LowerSet_prod(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instSProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LowerSet_prod___boxed), 6, 4);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, x_1);
lean_closure_set(x_3, 3, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_instSProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LowerSet_instSProd___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_SetLike_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_OrdConnected(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_OrderIso(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_UpperLower_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_SetLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_OrdConnected(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_OrderIso(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_UpperSet_completeLattice___rarg___closed__1 = _init_l_UpperSet_completeLattice___rarg___closed__1();
lean_mark_persistent(l_UpperSet_completeLattice___rarg___closed__1);
l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__1 = _init_l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__1();
lean_mark_persistent(l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__1);
l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__2 = _init_l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__2();
lean_mark_persistent(l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__2);
l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__3 = _init_l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__3();
lean_mark_persistent(l_CompletelyDistribLattice_MinimalAxioms_of___at_UpperSet_completelyDistribLattice___spec__1___closed__3);
l_UpperSet_prod___closed__1 = _init_l_UpperSet_prod___closed__1();
lean_mark_persistent(l_UpperSet_prod___closed__1);
l_LowerSet_prod___closed__1 = _init_l_LowerSet_prod___closed__1();
lean_mark_persistent(l_LowerSet_prod___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
